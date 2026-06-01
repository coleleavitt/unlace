void __fastcall sub_1422580(__int64 a1, int *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  _BYTE v7[104]; // [rsp+0h] [rbp-68h] BYREF

  ++*(_DWORD *)(a1 + 2320);
  sub_1421C50(a1, (__int64)"endif", 0);
  v2 = *(_QWORD *)(a1 + 1120);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 )
  {
    v4 = *(unsigned int *)(*(_QWORD *)(v2 + 64) + 8LL * v3 - 8);
    *(_DWORD *)(v2 + 72) = v3 - 1;
    v5 = *(_QWORD *)(a1 + 1120);
    if ( !*(_DWORD *)(v5 + 72) )
    {
      if ( *(_QWORD *)(v5 + 40) )
      {
        *(_WORD *)(v5 + 32) = 0;
      }
      else
      {
        *(_WORD *)(v5 + 32) = 1;
        *(_OWORD *)(v5 + 40) = 0;
      }
    }
    v6 = *(_QWORD *)(a1 + 1192);
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 376LL))(v6, (unsigned int)*a2, v4);
  }
  else
  {
    sub_FC70B0((__int64)v7, *(_QWORD *)(a1 + 48), *a2, 1116);
    sub_AEA040((__int64)v7);
  }
}
