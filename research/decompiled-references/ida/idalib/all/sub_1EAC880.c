__int64 __fastcall sub_1EAC880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, _DWORD *a6)
{
  void *v9[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF

  sub_1EAC540((__m128i **)v9, a5, a6);
  sub_1EAB120(a1, a2 + 13296, v9[0], (size_t)v9[1], a3, a4);
  if ( v9[0] != &v10 )
    operator delete(v9[0]);
  return a1;
}
