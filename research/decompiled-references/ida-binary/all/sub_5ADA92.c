__int64 __fastcall sub_5ADA92(_BYTE *a1)
{
  _BYTE *v1; // rax
  __int64 i; // [rsp+10h] [rbp-8h]

  for ( i = 0; ; ++i )
  {
    v1 = a1++;
    if ( !*v1 )
      break;
  }
  return i;
}
