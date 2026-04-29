__int64 __fastcall sub_7AA70(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi

  if ( *a2 >= a2[1] )
    sub_76190(a1);
  v5 = unpack_dd(a2);
  v6 = 0;
  if ( *(_DWORD *)(a3 + 64) > v5 )
  {
    v7 = 0;
    if ( v5 > 0 )
      v7 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * (unsigned int)v5);
    *(_QWORD *)a1 = v7;
    *(_DWORD *)(a1 + 8) = sub_789A0(a2);
    *(_QWORD *)(a1 + 32) = sub_78CA0((__int64)a2, 1u);
    *(_DWORD *)(a1 + 40) = sub_789A0(a2) - 1;
    *(_QWORD *)(a1 + 56) = sub_78CA0((__int64)a2, 1u);
    *(_DWORD *)(a1 + 64) = sub_789A0(a2) - 1;
    *(_QWORD *)(a1 + 72) = sub_78CA0((__int64)a2, 1u);
    *(_QWORD *)(a1 + 80) = sub_78CA0((__int64)a2, 1u);
    v8 = sub_78CA0((__int64)a2, 1u);
    v9 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = v8;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      qfree(v9);
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 112) = 0;
    }
    *(_QWORD *)(a1 + 120) = 0;
    return 1;
  }
  return v6;
}
