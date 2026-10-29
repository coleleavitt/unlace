__int64 __fastcall sub_3C86C0(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = sub_3C8680(a1, a2, a3);
  if ( v3 )
    return *(_QWORD *)(v3 + 24);
  if ( (int)v4 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( (int)v4 < *(_DWORD *)(v6 + 64) )
    {
      if ( (unsigned int)v4 >= *(_DWORD *)(v6 + 64) )
        sub_3C5320(a1);
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8 * v4);
      if ( v7 )
        return *(_QWORD *)(v7 + 32);
    }
  }
  return *(_QWORD *)(a1 + 8);
}
