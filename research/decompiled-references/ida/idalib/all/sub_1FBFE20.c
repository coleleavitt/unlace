void __fastcall sub_1FBFE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  sub_1FBFD10((__int64 *)a1, a2, a3, a4, a5, a6);
  if ( ((*(_BYTE *)(a2 + 64) | (unsigned __int8)(*(__int64 *)(a2 + 64) >> 1)) & 1) != 0 )
    sub_1FB9BF0(a1, (__int64 *)a2);
  *(_DWORD *)(a1 + 224) = 111;
}
