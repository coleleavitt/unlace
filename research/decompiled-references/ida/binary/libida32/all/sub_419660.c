__int64 __fastcall sub_419660(__int64 a1, int a2, const char *a3, char a4, int a5, int a6)
{
  unsigned int v6; // eax
  __int64 v7; // r13
  int v8; // r12d
  unsigned int v11; // edx
  int v12; // edi
  char v14; // [rsp+0h] [rbp-28h]

  v6 = a2;
  v7 = a1 + 16;
  v8 = a2;
  if ( a4 )
    v6 = sub_3B9110(*(_QWORD **)a1, a2);
  v11 = *(_DWORD *)(a1 + 8);
  v12 = a1 + 16;
  if ( v6 >= v11 && v6 < *(_DWORD *)(a1 + 12) )
  {
    *(_BYTE *)(a1 + 16) = 43;
    v12 = a1 + 17;
    v8 = a2 - v11;
  }
  if ( !a3 )
    a3 = "%a";
  qsnprintf(v12, 63, (int)a3, v8, a5, a6, v14);
  return v7;
}

