__int64 __fastcall sub_9ED80(
        char *a1,
        unsigned __int8 a2,
        int a3,
        char *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rbx
  double v14; // xmm4_8
  double v15; // xmm5_8
  unsigned int v16; // ebp
  int v17; // eax
  int v18; // eax
  int v20; // edi
  pthread_mutex_t *v21; // rdi
  _QWORD v22[7]; // [rsp+0h] [rbp-38h] BYREF

  v22[3] = __readfsqword(0x28u);
  v22[0] = 0;
  sub_9EBF0((__int64)v22, a1, a4, a2, a5, a6, a7, a8, a9, a10, a11, a12);
  v13 = v22[0];
  v16 = sub_9DFA0((__int64)v22, a3, a5, a6, a7, a8, v14, v15, a11, a12);
  sub_9BE30(v13);
  v17 = *(_DWORD *)(v13 + 5728);
  *(_QWORD *)(v13 + 5720) = 0;
  if ( v17 )
  {
    v18 = v17 - 1;
    *(_DWORD *)(v13 + 5728) = v18;
    if ( !v18 )
    {
      v20 = *(_DWORD *)(v13 + 5712);
      if ( v20 == -1 )
      {
        sub_98450(*(pthread_mutex_t **)v13);
      }
      else
      {
        sub_952F0(v20);
        v21 = *(pthread_mutex_t **)v13;
        *(_DWORD *)(v13 + 5712) = -1;
        sub_98450(v21);
      }
    }
  }
  return v16;
}

