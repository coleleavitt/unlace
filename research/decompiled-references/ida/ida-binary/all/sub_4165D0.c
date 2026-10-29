__int64 __fastcall sub_4165D0(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, char a5)
{
  __int64 v7; // rax
  const char *v9; // r9
  const char *v10; // rcx
  const char *v11; // rdx
  __int64 v12; // rbx
  const void *v14; // rsi
  const char *v15; // rsi
  const char *v16; // rsi
  const char *v17; // [rsp-8h] [rbp-78h]
  __int64 v18; // [rsp+0h] [rbp-70h]
  __int64 vault_filesys; // [rsp+10h] [rbp-60h]
  char *v21; // [rsp+20h] [rbp-50h] BYREF
  __int128 v22; // [rsp+28h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-38h]

  v7 = *a2;
  v23 = __readfsqword(0x28u);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v7 + 40))(a2, a1) )
  {
    v15 = &s1;
    if ( *(_QWORD *)(a1 + 8) )
      v15 = *(const char **)a1;
    sub_16B930((__int64)"Error during reset of vault connection parameters: %s", v15);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD *))(*a2 + 24))(a2, a1, a3) )
  {
    v16 = &s1;
    if ( *(_QWORD *)(a1 + 8) )
      v16 = *(const char **)a1;
    sub_16B930((__int64)"Couldn't parse server connection string: %s", v16);
  }
  v21 = nullptr;
  v22 = 0;
  vault_filesys = get_vault_filesys(&v21, sub_414430, 16);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, (const char *)sub_414430);
  }
  v21 = nullptr;
  v22 = 0;
  if ( a3[9] > 1u )
  {
    v18 = a3[9];
    v14 = (const void *)a3[8];
    v21 = (char *)qvector_reserve(&v21, 0, v18, 1);
    *(_QWORD *)&v22 = v18;
    memmove(v21, v14, v18 - 1);
    v21[v18 - 1] = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, char **, _QWORD))(*a3 + 32LL))(a3, &v21, 0);
  }
  if ( a5 )
    sub_1C76F0((int)"HIDECANCEL\nNODELAY\nConnecting to HexVault...");
  v9 = &s1;
  if ( !*(_QWORD *)(a4 + 8) )
  {
    v10 = &s1;
    if ( !(_QWORD)v22 )
      goto LABEL_11;
    goto LABEL_18;
  }
  v9 = *(const char **)a4;
  v10 = &s1;
  if ( (_QWORD)v22 )
LABEL_18:
    v10 = v21;
LABEL_11:
  v11 = &s1;
  if ( a3[6] )
    v11 = (const char *)a3[5];
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, const char *, const char *, __int64, const char *, _QWORD))(*a2 + 48))(
          a2,
          a1,
          v11,
          v10,
          vault_filesys,
          v9,
          0);
  if ( a5 )
    sub_1C78D0();
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, v17);
  }
  return v12;
}
