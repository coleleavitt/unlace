bool __fastcall sub_20A0100(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // r9
  _BYTE *v6; // rcx
  bool result; // al
  unsigned __int8 v8; // dl
  _BYTE *v9; // rdx
  unsigned __int8 v10; // dl
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx

  v2 = *(_BYTE *)(a1 - 16);
  if ( (v2 & 2) != 0 )
  {
    v3 = 0;
    v4 = *(_QWORD **)(a1 - 32);
    if ( *(_DWORD *)(a1 - 24) > 9u )
      v3 = v4[9];
  }
  else
  {
    if ( ((*(_WORD *)(a1 - 16) >> 6) & 0xFu) <= 9 )
      v3 = 0;
    else
      v3 = *(_QWORD *)(a1 - 8LL * ((v2 >> 2) & 0xF) - 16 + 72);
    v4 = (_QWORD *)(a1 - 8LL * ((v2 >> 2) & 0xF) - 16);
  }
  v5 = v4[3];
  v6 = (_BYTE *)v4[1];
  result = v5 == 0 || v6 == nullptr || (*(_DWORD *)(a1 + 36) & 8) != 0;
  if ( result )
    return 0;
  if ( *v6 == 14 )
  {
    v8 = *(v6 - 16);
    v9 = (v8 & 2) != 0 ? *((_BYTE **)v6 - 4) : &v6[-8 * ((v8 >> 2) & 0xF) - 16];
    if ( *((_QWORD *)v9 + 9) && (*(_BYTE *)(a2 + 36) & 8) == 0 )
    {
      v10 = *(_BYTE *)(a2 - 16);
      if ( (v10 & 2) != 0 )
      {
        v11 = *(_QWORD **)(a2 - 32);
        if ( v6 != (_BYTE *)v11[1] )
          return result;
        result = v5 == v11[3] && v11[3] != 0;
        if ( !result )
          return result;
        v12 = *(_DWORD *)(a2 - 24);
      }
      else
      {
        v11 = (_QWORD *)(a2 - 8LL * ((v10 >> 2) & 0xF) - 16);
        if ( v6 != (_BYTE *)v11[1] )
          return result;
        result = v11[3] == v5 && v11[3] != 0;
        if ( !result )
          return result;
        v12 = (*(_WORD *)(a2 - 16) >> 6) & 0xF;
      }
      v13 = 0;
      if ( v12 > 9 )
        v13 = v11[9];
      return v3 == v13;
    }
  }
  return result;
}
