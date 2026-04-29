unsigned __int64 __fastcall sub_198E0(__int64 a1)
{
  unsigned __int64 (*v1)(); // rdx
  unsigned __int64 result; // rax

  sub_D6A0((__int64 *)(a1 + 32));
  v1 = sub_FAA0;
  if ( *(_BYTE *)(a1 + 152) )
    v1 = sub_F9D0;
  result = v1();
  *(_BYTE *)(a1 + 152) = 1;
  return result;
}
