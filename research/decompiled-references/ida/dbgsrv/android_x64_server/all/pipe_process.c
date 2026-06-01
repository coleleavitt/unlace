/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pipe_process
// Address: 0x00000000000CD270

//----- (00000000000CD270) ----------------------------------------------------
__int64 __fastcall pipe_process(int *a1, int *a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  int v7; // r15d
  bool v8; // zf
  __int32 v9; // eax
  __int32 v10; // eax
  __int64 v11; // r13
  const char *v12; // rcx
  __int64 v14; // [rsp+8h] [rbp-60h]
  __m128i pipedes; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 v17; // [rsp+30h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v6 = -1;
  v7 = -1;
  if ( a2 )
  {
    if ( pipe(pipedes.m128i_i32) )
    {
      v8 = *(_DWORD *)__errno(&pipedes) == 0;
      v7 = -1;
      v9 = -1;
      if ( !v8 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3181);
        goto LABEL_30;
      }
    }
    else
    {
      v7 = pipedes.m128i_i32[0];
      v9 = pipedes.m128i_i32[1];
    }
    *a2 = v9;
  }
  if ( a1 )
  {
    if ( pipe(pipedes.m128i_i32) )
    {
      v8 = *(_DWORD *)__errno(&pipedes) == 0;
      v10 = -1;
      v6 = -1;
      if ( !v8 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3182);
LABEL_30:
        BUG();
      }
    }
    else
    {
      v10 = pipedes.m128i_i32[0];
      v6 = pipedes.m128i_i32[1];
    }
    *a1 = v10;
  }
  v14 = a4;
  *(_QWORD *)(a3 + 32) = v7;
  *(_QWORD *)(a3 + 40) = v6;
  pipedes = 0;
  v16 = 0;
  v11 = launch_process(a3, &pipedes);
  if ( v7 != -1 )
    close(v7);
  if ( v6 != -1 )
    close(v6);
  if ( !v11 )
  {
    if ( pipedes.m128i_i64[1] )
      v12 = (const char *)pipedes.m128i_i64[0];
    else
      v12 = s1;
    sub_3BBA0(v14, "%s: %s", *(const char **)(a3 + 16), v12);
    if ( a1 )
      close(*a1);
    if ( a2 )
      close(*a2);
  }
  if ( pipedes.m128i_i64[0] )
  {
    pipedes.m128i_i64[1] = 0;
    qfree((void *)pipedes.m128i_i64[0]);
    pipedes.m128i_i64[0] = 0;
    v16 = 0;
  }
  return v11;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
