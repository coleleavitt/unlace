__int64 __fastcall sub_204B0(__int64 a1)
{
  __int16 v1; // ax
  int v3; // eax
  _WORD *v4; // rdx

  if ( !*(_DWORD *)(a1 + 16) )
    return 0;
  v1 = **(_WORD **)(a1 + 8);
  switch ( v1 )
  {
    case 'T':
      return sub_1FF50(a1);
    case '[':
      v3 = *(_DWORD *)(a1 + 16);
      if ( v3 )
      {
        v4 = *(_WORD **)(a1 + 8);
        if ( *v4 == 91 && (*(_DWORD *)(a1 + 16) = v3 - 1, *(_QWORD *)(a1 + 8) = v4 + 1, (unsigned __int8)sub_20500()) )
          return sub_1F8E0(a1, (__int64)"[]", 2);
        else
          return 0;
      }
      else
      {
        return 0;
      }
    case 'L':
      return sub_202E0(a1, 3);
    default:
      return 0;
  }
}
