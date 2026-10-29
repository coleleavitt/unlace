__int64 __fastcall find_reg_value(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdi
  Elf64_Sym *v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  unsigned __int64 v14; // rbx
  char *v15; // rdi
  __int64 v16; // rdx
  char *v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // [rsp-1BCh] [rbp-1C4h]
  char *v22; // [rsp-1B0h] [rbp-1B8h] BYREF
  __int128 v23; // [rsp-1A8h] [rbp-1B0h]
  char v24; // [rsp-198h] [rbp-1A0h]
  __int128 v25; // [rsp-190h] [rbp-198h] BYREF
  __int64 v26; // [rsp-180h] [rbp-188h]
  __int64 v27; // [rsp-178h] [rbp-180h]
  __int64 v28; // [rsp-170h] [rbp-178h]
  __int64 v29; // [rsp-168h] [rbp-170h] BYREF
  _QWORD v30[6]; // [rsp-28h] [rbp-30h] BYREF

  v5 = &v29;
  v30[0] = __readfsqword(0x28u);
  v25 = -1;
  v26 = -1;
  v27 = 0;
  v28 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( v30 != v5 );
  if ( (int)decode_insn(&v25, a2, v30, a4, 0, 0, 0.0) <= 0 )
    return 0;
  v7 = sub_3792E0(0x53u, a1, &v25, a3);
  if ( v7 )
    return v7 == 1;
  v8 = *(_QWORD **)(qword_2CCB598 + 320);
  if ( !v8 )
    return 0xFFFFFFFFLL;
  v9 = &stru_10000;
  v10 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v8[1] + 32LL) + 24LL) - 1);
  if ( (unsigned int)v10 <= 7 )
  {
    LODWORD(v9) = dword_23AE1C0[v10];
    if ( (_DWORD)v9 != (_DWORD)&stru_10000 )
    {
      LODWORD(v9) = a3 | (unsigned int)v9;
      if ( a3 >= (unsigned int)&stru_10000 )
        v9 = &stru_10000;
    }
  }
  v24 = 0;
  v11 = -1;
  v23 = 0;
  v12 = v8[1];
  v22 = nullptr;
  v13 = *(__int64 (__fastcall **)(__int64, __int64))(*v8 + 16LL);
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 16LL) & a2;
  if ( v13 != sub_4F3C60 )
  {
    v21 = (int)v9;
    v19 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, _QWORD, __int64))v13)(v8, v14, 0, -1);
    LODWORD(v9) = v21;
    v14 = v19;
    v11 = v20;
  }
  reg_finder_find((__int64)v8, (__int64)&v22, v14, v11, (unsigned __int32)v9, 0, 0);
  v15 = v22;
  if ( (unsigned __int8)(v24 - 10) > 1u )
  {
LABEL_18:
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
    }
    return 0;
  }
  v16 = *(_QWORD *)v22;
  if ( (_QWORD)v23 != 1 )
  {
    v17 = v22 + 24;
    if ( 24LL * (_QWORD)v23 != 24 )
    {
      while ( *(_QWORD *)v17 == v16 )
      {
        v17 += 24;
        if ( v17 == &v22[24 * (_QWORD)v23] )
          goto LABEL_23;
      }
      goto LABEL_18;
    }
  }
LABEL_23:
  *a1 = v16;
  if ( v15 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v15);
  }
  return 1;
}
