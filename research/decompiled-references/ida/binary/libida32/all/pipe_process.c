__int64 __fastcall pipe_process(int *a1, int *a2, __m128i *a3, char **a4)
{
  __m128i v7; // xmm0
  __int64 v8; // r13
  int v9; // edi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  int fd[2]; // [rsp+18h] [rbp-40h] BYREF
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  *(_QWORD *)fd = -1;
  *(_QWORD *)v14 = -1;
  if ( a2 )
  {
    if ( (unsigned int)qpipe_create(fd) )
    {
      if ( !under_debugger )
        interr(3181);
LABEL_23:
      BUG();
    }
    *a2 = fd[1];
  }
  if ( !a1 )
    goto LABEL_7;
  if ( (unsigned int)qpipe_create(v14) )
  {
    if ( !under_debugger )
      interr(3182);
    goto LABEL_23;
  }
  *a1 = v14[0];
LABEL_7:
  ptr = nullptr;
  v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(fd[0]), _mm_cvtsi32_si128(v14[1]));
  a3[2] = _mm_unpacklo_epi32(v7, _mm_cmpgt_epi32((__m128i)0LL, v7));
  v12 = 0;
  v8 = launch_process(a3, &ptr);
  if ( fd[0] == -1 )
  {
    v9 = v14[1];
    if ( v14[1] == -1 )
      goto LABEL_9;
LABEL_14:
    qpipe_close(v9);
    if ( v8 )
      goto LABEL_10;
    goto LABEL_15;
  }
  qpipe_close(fd[0]);
  v9 = v14[1];
  if ( v14[1] != -1 )
    goto LABEL_14;
LABEL_9:
  if ( v8 )
    goto LABEL_10;
LABEL_15:
  sub_3573A0(a4);
  if ( a1 )
    qpipe_close(*a1);
  if ( a2 )
    qpipe_close(*a2);
LABEL_10:
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return v8;
}

