__int64 __fastcall sub_3D9EF0(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1 - 36864;
  result = 0;
  if ( v2 <= 0xFFFFF )
  {
    if ( a2 )
      *a2 = (v2 >> 12) % 0xFF;
    return 1;
  }
  return result;
}
