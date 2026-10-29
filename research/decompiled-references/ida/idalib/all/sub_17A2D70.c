__int64 __fastcall sub_17A2D70(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  char v3; // dl
  __int64 result; // rax
  char v5; // dl
  __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  v6 = a2;
  v2 = sub_F22BD0(&v6, 0);
  if ( !v2 )
    return 6;
  v3 = *(_BYTE *)(v2 + 28);
  result = 0;
  v5 = v3 & 0x7F;
  if ( v5 != 72 )
  {
    result = 1;
    if ( v5 != 71 )
    {
      switch ( v5 )
      {
        case 'E':
          return 2;
        case 'F':
          return 3;
        case 'D':
          return 4;
        default:
          return (unsigned int)(v5 != 73) + 5;
      }
    }
  }
  return result;
}
