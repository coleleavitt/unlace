__int64 __fastcall sub_21FAC20(__int64 a1, char a2, int a3)
{
  int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // ebp
  int v7; // edx
  signed int v8; // r13d
  __int64 v9; // r9
  int v10; // r10d
  char v11; // al
  bool v12; // zf
  int v14; // edx
  char v15; // al
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  bool v19; // cc

  v4 = sub_21F9C90((_QWORD *)a1);
  v5 = *(_QWORD *)a1;
  v6 = v4 + 1;
  if ( a3 | (v4 + 1) )
  {
    v7 = *(_DWORD *)(a1 + 16);
    v8 = v6 - *(_DWORD *)(v5 + 8);
    if ( v8 + v7 > *(_DWORD *)v5 )
      return sub_21F9E30(a1, a2);
    if ( v8 + v7 < *(_DWORD *)(v5 + 4) )
      v8 = *(_DWORD *)(v5 + 4) - v7;
    if ( v8 < 0 )
    {
      sub_21F8BF0((_DWORD *)a1, -v8);
      return 0;
    }
    if ( v8 )
    {
      v17 = sub_21F9D00((__int64 *)a1, v8);
      if ( a3 )
      {
        a3 = 1;
        if ( v17 )
        {
          a3 = 3;
          if ( v17 != 2 )
            a3 = v17;
        }
      }
      else
      {
        a3 = v17;
      }
      v5 = *(_QWORD *)a1;
      v18 = v6 - v8;
      v19 = v6 <= v8;
      v6 = 0;
      if ( !v19 )
        v6 = v18;
    }
    if ( *(_DWORD *)(v5 + 16) == 1
      && *(_DWORD *)(v5 + 20) == 1
      && *(_DWORD *)(a1 + 16) == *(_DWORD *)v5
      && sub_21F9650((_QWORD *)a1) )
    {
      return sub_21F9E30(a1, a2);
    }
    if ( a3 )
    {
      if ( !sub_21FA100(a1, a2, a3, 0) )
      {
        v9 = *(_QWORD *)a1;
        v10 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
        goto LABEL_11;
      }
      if ( !v6 )
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
      sub_21F9890((_QWORD *)a1);
      v16 = sub_21F9C90((_QWORD *)a1);
      v9 = *(_QWORD *)a1;
      v6 = v16 + 1;
      v10 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
      if ( v16 == v10 )
      {
        if ( *(_DWORD *)(a1 + 16) != *(_DWORD *)v9 )
        {
          sub_21F9D00((__int64 *)a1, 1u);
          return 16;
        }
        a2 = ((*(_BYTE *)(a1 + 20) & 8) != 0) + 2;
      }
      else if ( *(_DWORD *)(v9 + 16) != 1
             || *(_DWORD *)(v9 + 20) != 1
             || *(_DWORD *)(a1 + 16) != *(_DWORD *)v9
             || !sub_21F9650((_QWORD *)a1) )
      {
LABEL_11:
        if ( v6 == v10 )
          return 16;
        if ( !v6 )
        {
          v11 = *(_BYTE *)(a1 + 20) & 0xF8 | 3;
          v12 = *(_DWORD *)(v9 + 20) == 2;
          *(_BYTE *)(a1 + 20) = v11;
          if ( v12 )
            *(_BYTE *)(a1 + 20) = v11 & 0xF7;
          if ( !*(_BYTE *)(v9 + 24) )
            sub_21FAB90((__int64 *)a1, 0);
        }
        return 24;
      }
      return sub_21F9E30(a1, a2);
    }
    if ( v6 )
      return 0;
  }
  else
  {
    v14 = *(_DWORD *)(v5 + 20);
    if ( *(_DWORD *)(v5 + 16) != 1 || v14 != 1 )
      goto LABEL_20;
    if ( *(_DWORD *)v5 == *(_DWORD *)(a1 + 16) && sub_21F9650((_QWORD *)a1) )
      return sub_21F9E30(a1, a2);
  }
  v14 = *(_DWORD *)(v5 + 20);
LABEL_20:
  v15 = *(_BYTE *)(a1 + 20) & 0xF8 | 3;
  *(_BYTE *)(a1 + 20) = v15;
  if ( v14 == 2 )
    *(_BYTE *)(a1 + 20) = v15 & 0xF7;
  if ( !*(_BYTE *)(v5 + 24) )
    sub_21FAB90((__int64 *)a1, 0);
  return 0;
}
