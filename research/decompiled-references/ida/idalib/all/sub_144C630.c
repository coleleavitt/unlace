_BYTE *__fastcall sub_144C630(_QWORD *a1, const char *a2)
{
  size_t v2; // rdx
  _BYTE *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v2 = 0;
  if ( a2 )
    v2 = strlen(a2);
  v3 = (_BYTE *)sub_6F3470((__int64)(a1 + 69), a2, v2);
  v8 = sub_141F490(a1, 0, v4, v5, v6, v7);
  *(_BYTE *)(v8 + 36) |= 0x10u;
  v12 = sub_141F5F0(a1, v8, *(_DWORD *)v8, v9, v10, v11);
  sub_144BC70((__int64)a1, v3, v12, v13, v14, v15);
  return v3;
}
