__int64 __fastcall cryptex_spec_next(__int64 *a1)
{
  __int64 v1; // x20
  char *v3; // x0
  __int64 result; // x0
  char *v5; // x0
  __int64 (*v6)(void); // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  v1 = *a1;
  if ( (unsigned __int64)*a1 > 1 )
    return 0;
  v3 = __specs[v1];
  *a1 = v1 + 1;
  result = (*((__int64 (**)(void))v3 + 16))();
  if ( result )
    return result;
  if ( v1 )
    return 0;
  v5 = __specs[(*a1)++];
  v6 = *((__int64 (**)(void))v5 + 16);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v6();
}
