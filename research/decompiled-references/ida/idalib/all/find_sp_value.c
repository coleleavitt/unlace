__int64 __fastcall find_sp_value(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r14
  __int64 (*v6)(); // rax
  Elf64_Sym *v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  unsigned __int64 v13; // rsi
  void *v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // [rsp+8h] [rbp-48h]
  void *ptr; // [rsp+10h] [rbp-40h] BYREF
  __int128 v21; // [rsp+18h] [rbp-38h]
  char v22; // [rsp+28h] [rbp-28h]
  unsigned __int64 v23; // [rsp+38h] [rbp-18h]

  v23 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(qword_2CCB598 + 320);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD **)(qword_2CCB598 + 320);
  if ( a3 == -1 )
  {
    v6 = *(__int64 (**)())(*(_QWORD *)v3 + 48LL);
    if ( v6 == sub_4F3CB0 )
      return 0;
    a3 = ((__int64 (__fastcall *)(_QWORD *))v6)(v5);
    if ( a3 == -1 )
      return 0;
  }
  v8 = &stru_10000;
  v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v5[1] + 32LL) + 24LL) - 1);
  if ( (unsigned int)v9 <= 7 )
  {
    LODWORD(v8) = dword_23AE1C0[v9];
    if ( (_DWORD)v8 != (_DWORD)&stru_10000 )
    {
      LODWORD(v8) = a3 | (unsigned int)v8;
      if ( a3 >= (unsigned int)&stru_10000 )
        v8 = &stru_10000;
    }
  }
  v22 = 0;
  v10 = -1;
  v21 = 0;
  v11 = v5[1];
  ptr = nullptr;
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(*v5 + 16LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 16LL) & a2;
  if ( v12 != sub_4F3C60 )
  {
    v19 = (int)v8;
    v17 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, _QWORD, __int64))v12)(v5, v13, 0, -1);
    LODWORD(v8) = v19;
    v13 = v17;
    v10 = v18;
  }
  reg_finder_find((__int64)v5, (__int64)&ptr, v13, v10, (unsigned __int32)v8, -1, 0);
  v14 = ptr;
  if ( (unsigned __int8)(v22 - 12) > 1u )
  {
LABEL_18:
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      qfree(ptr);
    }
    return 0;
  }
  v15 = *(_QWORD *)ptr;
  if ( (_QWORD)v21 != 1 )
  {
    v16 = (char *)ptr + 24;
    if ( 24LL * (_QWORD)v21 != 24 )
    {
      while ( v15 == *v16 )
      {
        v16 += 3;
        if ( v16 == (_QWORD *)((char *)ptr + 24 * (_QWORD)v21) )
          goto LABEL_20;
      }
      goto LABEL_18;
    }
  }
LABEL_20:
  *a1 = v15;
  if ( v14 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v14);
  }
  return 1;
}
