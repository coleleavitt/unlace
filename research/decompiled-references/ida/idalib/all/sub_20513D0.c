__int64 __fastcall sub_20513D0(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 2200);
  if ( !v2 )
  {
    v2 = sub_20C9AC0(24, unk_2673580);
    v4 = sub_20C31B0(a1);
    sub_20CA190(v2, v4, 9);
    v5 = *(_QWORD *)(v1 + 2200);
    *(_DWORD *)(v2 + 4) &= 0x38000000u;
    *(_QWORD *)(v1 + 2200) = v2;
    if ( v5 )
    {
      sub_20CC0C0(v5);
      sub_20C9BF0(v5);
      return *(_QWORD *)(v1 + 2200);
    }
  }
  return v2;
}
