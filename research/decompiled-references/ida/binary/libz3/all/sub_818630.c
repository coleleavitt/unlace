__int64 __fastcall sub_818630(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rbp
  __int64 i; // rax
  void (__fastcall *v5)(__int64, __int64); // r14
  __int64 v6; // rdx
  __int64 v7; // rax

  v2 = 0;
  v3 = sub_186B270(0x218u);
  sub_818270(v3, a2, *(_DWORD *)(a1 + 12));
  for ( i = *(_QWORD *)(a1 + 88); i; i = *(_QWORD *)(a1 + 88) )
  {
    if ( v2 >= *(_DWORD *)(i - 4) )
      break;
    v5 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 528LL);
    v6 = v2++;
    v7 = sub_7CC270(*(_QWORD *)(a1 + 80), a2, *(unsigned int ***)(i + 8 * v6));
    v5(v3, v7);
  }
  return v3;
}

