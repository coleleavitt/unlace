void __fastcall __noreturn sub_66D0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdi
  char v21; // [rsp+0h] [rbp-8h]

  v10 = qword_1C308;
  sub_6320(qword_1C308);
  v17 = *(_DWORD *)(v10 + 5728);
  *(_QWORD *)(v10 + 5720) = 0;
  if ( v17 )
  {
    v18 = v17 - 1;
    *(_DWORD *)(v10 + 5728) = v18;
    if ( !v18 )
    {
      v19 = *(unsigned int *)(v10 + 5712);
      if ( (_DWORD)v19 == -1 )
      {
        sub_11F20(*(_QWORD *)v10);
      }
      else
      {
        sub_10C40(v19);
        v20 = *(_QWORD *)v10;
        *(_DWORD *)(v10 + 5712) = -1;
        sub_11F20(v20);
      }
    }
  }
  sub_61E0((int)"registry", a10, v11, v12, v13, v14, a1, a2, a3, a4, v15, v16, a7, a8, v21);
}

