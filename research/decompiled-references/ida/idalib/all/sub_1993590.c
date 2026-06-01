__int64 __fastcall sub_1993590(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v8; // rbx
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
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = a3;
  v8 = a4 + 24;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v12 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(v6 + 40),
          (__m128i *)(v9 * ((v8 - (unsigned __int64)(v8 != 0)) / v9 + (v8 != 0))),
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
        v26 = sub_1914520(*a1, v16 & 0xFFFFFFFFFFFFFFFELL, v17, v18, v19, v20, a5, a6);
        if ( v26 == 1 )
          goto LABEL_12;
        v21 = v26 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v21 = 0;
      }
      if ( v15 == *(_QWORD *)(v6 + 40) && *(_QWORD *)(v6 + 32) == v21 )
      {
        v24 = v6 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_10:
        if ( *(_BYTE *)(*(_QWORD *)v24 + 16LL) == 18 )
        {
          sub_1EA6140(a2, v6, 24, 8);
          *(_QWORD *)(v25 + 8) = *(_QWORD *)(a4 + 8);
          *(_QWORD *)v25 = *(_QWORD *)a4;
          *(_DWORD *)(v25 + 16) = *(_DWORD *)(a4 + 16);
        }
        goto LABEL_13;
      }
      v22 = *(unsigned int *)(v6 + 48);
      v23 = *a1;
      v27[0] = v15;
      v6 = sub_1E654F0(v23, v27, v21, v22);
      v24 = v6 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_10;
    }
LABEL_12:
    v6 = 0;
LABEL_13:
    sub_190D5E0(v14, a5);
    return v6;
  }
  return 0;
}
