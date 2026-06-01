__int64 __fastcall sub_42D900(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ecx

  v3 = *a1;
  v4 = 0;
  if ( *a1 >= *a2 && v3 < a2[1] )
  {
    v4 = 1;
    *a1 = v3 + a3;
  }
  return v4;
}
