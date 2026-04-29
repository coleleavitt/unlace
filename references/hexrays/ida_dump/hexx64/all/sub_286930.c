__int64 __fastcall sub_286930(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbp

  *(_DWORD *)(a1 + 8) = 73;
  v2 = j__qalloc_or_throw(80);
  *(_QWORD *)v2 = -1;
  *(_QWORD *)(v2 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 64) = 0;
  *(_QWORD *)(a1 + 24) = v2;
  sub_255850((__int64 *)v2, a2);
  v3 = sub_2418B0(*(_QWORD *)(a1 + 24));
  if ( v3 != -1 )
    *(_QWORD *)a1 = v3;
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v4 + 64) = sub_241330();
  return *(_QWORD *)(a1 + 24);
}
