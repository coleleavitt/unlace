__int64 __fastcall sub_8BC8C0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(unsigned __int64 *)((char *)&stru_64010.r_offset + a1);
  do
  {
    while ( !*(_BYTE *)(v1 + 28) )
    {
      v1 = *(_QWORD *)(v1 + 16);
      if ( *(unsigned __int64 *)((char *)&stru_64010.r_offset + a1) == v1 )
        return result;
    }
    result = sub_8BC840(a1, v1);
    v1 = *(_QWORD *)(v1 + 16);
  }
  while ( *(unsigned __int64 *)((char *)&stru_64010.r_offset + a1) != v1 );
  return result;
}
