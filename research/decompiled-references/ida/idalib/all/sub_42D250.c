__int64 __fastcall sub_42D250(__int64 a1, __int64 a2, const char *a3, char a4, int a5, int a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  int v8; // r12d
  unsigned __int64 v11; // rdx
  int v12; // edi

  v6 = a2;
  v7 = a1 + 24;
  v8 = a2;
  if ( a4 )
    v6 = sub_3BDE50(*(_QWORD **)a1, a2);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = a1 + 24;
  if ( v6 >= v11 && v6 < *(_QWORD *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 24) = 43;
    v12 = a1 + 25;
    v8 = a2 - v11;
  }
  if ( !a3 )
    a3 = "%a";
  qsnprintf(v12, 63, (_DWORD)a3, v8, a5, a6);
  return v7;
}
