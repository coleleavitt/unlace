unsigned __int64 __fastcall sub_C570(
        char *a1,
        char *a2,
        char *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rbx
  unsigned int v13; // eax
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // eax
  int v17; // eax
  __int64 v19; // rdi
  __int64 v20; // rdi
  int v21[2]; // [rsp+0h] [rbp-38h] BYREF
  int v22[2]; // [rsp+18h] [rbp-20h]

  *(_QWORD *)v22 = __readfsqword(0x28u);
  *(_QWORD *)v21 = 0;
  sub_A1A0((__int64)v21, a1, a2, 1, a4, a5, a6, a7, a8, a9, a10, a11);
  v12 = *(_QWORD *)v21;
  if ( a3 )
  {
    v13 = strlen(a3);
    sub_9170(v12, 1, a3, v13, a4, a5, a6, a7, v14, v15, a10, a11);
  }
  sub_6320(v12);
  v16 = *(_DWORD *)(v12 + 5728);
  *(_QWORD *)(v12 + 5720) = 0;
  if ( v16 )
  {
    v17 = v16 - 1;
    *(_DWORD *)(v12 + 5728) = v17;
    if ( !v17 )
    {
      v19 = *(unsigned int *)(v12 + 5712);
      if ( (_DWORD)v19 == -1 )
      {
        sub_11F20(*(_QWORD *)v12);
      }
      else
      {
        sub_10C40(v19);
        v20 = *(_QWORD *)v12;
        *(_DWORD *)(v12 + 5712) = -1;
        sub_11F20(v20);
      }
    }
  }
  return *(_QWORD *)v22 - __readfsqword(0x28u);
}

