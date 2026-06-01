__int64 __fastcall sub_BD60(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *v5; // r8
  unsigned __int16 v6; // di
  char v7; // al
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // r9d

  v1 = *(_DWORD *)(a1 + 96);
  if ( !v1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 88);
  v4 = (unsigned int)(v1 - 1);
  v5 = *(__int64 **)(v3 + 8 * v4);
  v6 = *((_WORD *)v5 + 8);
  if ( v6 == 221 )
  {
    *(_DWORD *)(a1 + 96) = v4;
    if ( v5 )
    {
      v7 = *((_BYTE *)v5 + 18);
      if ( v7 != 3 )
      {
        if ( v7 != 5 || *((_DWORD *)v5 + 2) != 1 )
          return 0;
        v5 = (__int64 *)*v5;
      }
      if ( (unsigned __int8)sub_BC80(*(_WORD *)(*v5 + 16)) )
        return v9;
      return 0;
    }
    if ( v1 == 1 )
      return 0;
    v6 = *(_WORD *)(*(_QWORD *)(v3 + 8LL * (unsigned int)(v1 - 2)) + 16LL);
  }
  if ( !(unsigned __int8)sub_BC80(v6) )
    return 0;
  *(_DWORD *)(a1 + 96) = v11;
  return v10;
}

