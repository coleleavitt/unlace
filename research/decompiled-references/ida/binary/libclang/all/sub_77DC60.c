__int64 __fastcall sub_77DC60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int *v14; // rax
  __int64 v15; // rcx
  int v16; // eax

  v4 = *(_QWORD *)(a1 + 16);
  v6 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v4 & 4) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = sub_79C2A0(v6, a2, a3, a4);
  v8 = 0;
  if ( (*(_BYTE *)(v7 + 8) & 0x7F) != 0 )
    return v8;
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 17288LL);
  if ( *(_DWORD *)(v9 + 260) != 14 )
    return v8;
  v11 = *(_DWORD *)(v9 + 264);
  v8 = v11 - 27;
  LOBYTE(v8) = v11 <= 1 || v11 - 27 <= 1;
  if ( !(_BYTE)v8 )
    return v8;
  v12 = *(_QWORD *)(a1 + 40);
  if ( (v12 & 7) == 0 )
  {
    v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13 )
    {
      v14 = *(unsigned int **)(v13 + 16);
      v15 = *v14;
      switch ( v15 )
      {
        case 4LL:
          LOBYTE(v8) = v14[4] == 1852399981;
          return v8;
        case 5LL:
          if ( v14[4] == 1767992695 && *((_BYTE *)v14 + 20) == 110 )
          {
            v16 = 0;
            goto LABEL_15;
          }
LABEL_14:
          v16 = 1;
LABEL_15:
          LOBYTE(v8) = v16 == 0;
          return v8;
        case 7LL:
          if ( v14[4] == 1299081559 && *(unsigned int *)((char *)v14 + 19) == 1852399949 )
            return v8;
          if ( v14[4] == 1298951236 && *(unsigned int *)((char *)v14 + 19) == 1852399949 )
          {
            v16 = 0;
            goto LABEL_15;
          }
          goto LABEL_14;
        case 8LL:
          v8 = 1852397431;
          LOBYTE(v8) = *((_QWORD *)v14 + 2) == 0x6E69614D6E695777LL;
          return v8;
      }
    }
  }
  return 0;
}

