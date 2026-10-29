__int64 __fastcall sub_19936F0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  _DWORD *v22; // rdx
  __int64 v23; // rax

  v6 = a3;
  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v12 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(v6 + 40),
          (__m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v14 = *a1;
    v15 = v12;
    sub_18C79E0(*a1, 4, 4);
    v16 = sub_190CCA0(a1, *(unsigned __int16 **)(v6 + 32), *(double *)a5.m128_u64, a6);
    if ( v16 != 1 )
    {
      if ( v16 )
      {
        v23 = sub_1914520(*a1, v16 & 0xFFFFFFFFFFFFFFFELL, v17, v18, v19, v20, a5, a6);
        if ( v23 == 1 )
          goto LABEL_11;
        v21 = v23 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v21 = 0;
      }
      if ( v15 == *(_QWORD *)(v6 + 40) && *(_QWORD *)(v6 + 32) == v21
        || (v6 = sub_1E716E0(*a1, v15, v21, *(unsigned int *)(v6 + 48)), (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v6, 4, 4);
        *v22 = *a4;
LABEL_12:
        sub_190D5E0(v14, a5);
        return v6;
      }
    }
LABEL_11:
    v6 = 0;
    goto LABEL_12;
  }
  return 0;
}
