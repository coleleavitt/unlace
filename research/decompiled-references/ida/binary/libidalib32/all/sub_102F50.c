__int64 __fastcall sub_102F50(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // rdx
  void (*v5)(void); // rax
  __int64 v6; // r12
  __int64 v8; // rbx

  v4 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 40) + 120LL))(*(_QWORD *)(a2 + 40));
  v5 = *(void (**)(void))(**(_QWORD **)(a2 + 40) + 128LL);
  if ( *v4 == 104 )
  {
    v5();
    v8 = idaplace_t__clone();
    if ( *(_QWORD *)(a1 + 40) )
      qfree();
    *(_QWORD *)(a1 + 40) = v8;
  }
  else
  {
    v5();
    if ( sub_102F10(a3) )
      hexplace_t__adjust();
    v6 = hexplace_t__clone();
    if ( *(_QWORD *)(a1 + 40) )
      qfree();
    *(_QWORD *)(a1 + 40) = v6;
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 40) + 8LL) == -1 )
      *(_WORD *)(a1 + 30) = *(_WORD *)(a2 + 30);
  }
  return 1;
}

