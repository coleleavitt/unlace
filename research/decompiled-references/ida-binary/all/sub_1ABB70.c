unsigned __int64 __fastcall sub_1ABB70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // rsi
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 idati; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  *(_QWORD *)&v12 = 0;
  v10 = 0;
  WORD4(v12) = 257;
  LODWORD(v12) = *(_DWORD *)a3;
  idati = get_idati(a1);
  create_tinfo(&v10, 61, 189, &idati);
  v5 = *(unsigned int *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(unsigned __int8 *)(a3 + 4);
  idati = 0;
  v12 = 0;
  get_enum_expr(&idati, &v10, v6, v5, v7, 0);
  v8 = &s1;
  if ( (_QWORD)v12 )
    v8 = (const char *)idati;
  tag_remove(a2, v8, 0);
  if ( idati )
  {
    *(_QWORD *)&v12 = 0;
    qfree(idati, v8);
  }
  clear_tinfo_t(&v10);
  return v13 - __readfsqword(0x28u);
}
