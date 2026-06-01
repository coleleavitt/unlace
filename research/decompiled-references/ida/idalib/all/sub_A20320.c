__int64 __fastcall sub_A20320(__int64 a1, unsigned int a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r12
  unsigned int v8; // esi

  sub_A1FEC0(a1, 3u, *(_DWORD *)(a1 + 56));
  sub_A202E0(a1, 1u);
  sub_A202E0(a1, 1u);
  result = sub_A202E0(a1, a2);
  if ( a4 )
  {
    sub_A1FEC0(a1, 3u, *(_DWORD *)(a1 + 56));
    sub_A202E0(a1, 2u);
    result = sub_A202E0(a1, a4);
    if ( (_DWORD)a4 )
    {
      v7 = (__int64)&a3[(unsigned int)(a4 - 1) + 1];
      do
      {
        v8 = *a3++;
        result = sub_A202E0(a1, v8);
      }
      while ( (unsigned __int8 *)v7 != a3 );
    }
  }
  return result;
}
