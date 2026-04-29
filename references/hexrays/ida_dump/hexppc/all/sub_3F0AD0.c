unsigned __int64 __fastcall sub_3F0AD0(__int64 a1, int a2, int a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rdi
  int dtype_size; // eax

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 832);
  v6 = 7;
  if ( *(_DWORD *)(v5 + 84) != 8 )
    v6 = 2;
  dtype_size = get_dtype_size(v6);
  sub_1D2710(a1, 4u, dtype_size, v3, 0x3BEA45E214ADDC55LL, a2, 0);
  return sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}
