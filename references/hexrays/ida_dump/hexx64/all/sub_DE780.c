__int64 __fastcall sub_DE780(__int64 a1)
{
  unsigned int v1; // eax
  char v3; // dl
  int v4; // eax
  __int64 v5; // rdx
  bool v6; // cl
  unsigned int v7; // eax
  char v8; // dl
  unsigned __int64 v9; // rax

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 > 5u )
  {
    if ( v1 != 6 )
      return 1;
  }
  else if ( v1 > 1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      v8 = sub_64880((_QWORD *)(a1 + 160));
      v9 = 0;
      if ( !v8 )
        v9 = (int)(sub_64C00((_QWORD *)(a1 + 160)) + 1);
      if ( v9 >= *(_QWORD *)(a1 + 40) )
        return 1;
    }
  }
  else if ( v1 != 1 )
  {
    return 1;
  }
  v3 = sub_64880((_QWORD *)(a1 + 144));
  v4 = 0;
  if ( !v3 )
    v4 = sub_64C00((_QWORD *)(a1 + 144)) + 1;
  v5 = *(_QWORD *)(a1 + 16);
  if ( (int)v5 <= v4 )
    return 1;
  v6 = 0;
  if ( (v5 & 1) == 0 )
    v6 = v4 + 1 == (_DWORD)v5;
  if ( *(_DWORD *)a1 != 6 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 48LL) & 0x20) != 0 )
      goto LABEL_19;
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 72);
      if ( v7 <= 0x10 )
        v7 = getinf(99);
      if ( v7 != 176 && v7 != 256 && (unsigned __int8)getinf_flag(67, 4) )
      {
LABEL_19:
        *(_BYTE *)(a1 + 205) = 1;
        return 1;
      }
    }
  }
  return 0;
}
