__int64 __fastcall sub_19486B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v16; // r15
  int v17; // ebx
  unsigned __int16 *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-40h]

  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1946010(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0)),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v16 = *a1;
    v17 = v13;
    sub_18C79E0(*a1, 4, 4);
    *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 40) = 1;
    v18 = *(unsigned __int16 **)(a4 + 8);
    if ( !v18 )
      v18 = *(unsigned __int16 **)(a3 + 40);
    v19 = sub_1944E10(a1, v18, a5, a6);
    if ( v19 == 1 )
      goto LABEL_11;
    if ( v19 )
    {
      v26 = sub_1914520(*a1, v19 & 0xFFFFFFFFFFFFFFFELL, v20, v21, v22, v23, a5, a6);
      if ( v26 == 1 )
        goto LABEL_11;
      v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
      v24 = sub_1901270(
              a1,
              v17,
              (*(_WORD *)(a3 + 18) >> 6) & 7,
              0,
              v26 & 0xFFFFFFFFFFFFFFFELL,
              (*(_BYTE *)(a3 + 18) >> 3) & 7,
              *(_QWORD *)a4);
    }
    else
    {
      v27 = 0;
      v24 = sub_1901270(a1, v17, (*(_WORD *)(a3 + 18) >> 6) & 7, 0, 0, (*(_BYTE *)(a3 + 18) >> 3) & 7, *(_QWORD *)a4);
    }
    v14 = v24;
    if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      sub_1EA6140(a2, v24, 16, 8);
      *(_DWORD *)v25 = *(_DWORD *)a4;
      *(_DWORD *)(v25 + 4) = *(_DWORD *)(a4 + 4);
      *(_QWORD *)(v25 + 8) = v27;
LABEL_12:
      sub_190D5E0(v16, a5);
      return v14;
    }
LABEL_11:
    v14 = 0;
    goto LABEL_12;
  }
  return 0;
}
