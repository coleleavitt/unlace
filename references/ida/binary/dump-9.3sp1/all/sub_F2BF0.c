__int64 __fastcall sub_F2BF0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax

  sub_64280((__int64 *)(a1 + 240), (__int64 *)(a1 + 96));
  result = sub_316CB0(a1 + 256, a1 + 112);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = i;
        sub_11CDA0(16 * v6 + v3);
        v3 = *(_QWORD *)(a1 + 48);
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    result = qfree(v3);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  *(_DWORD *)(a1 + 280) |= 1u;
  return result;
}
