__int64 __fastcall sub_28D9C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v5; // r14
  __int64 v6; // r13

  v2 = a2[3];
  if ( *(_DWORD *)(v2 + 8) != 49 )
    return 0;
  v5 = *(_QWORD *)(v2 + 24);
  v3 = sub_29D040(v5 + 48);
  if ( !(_BYTE)v3 )
    return 0;
  *(_QWORD *)(a2[3] + 24) = 0;
  v6 = a2[3];
  if ( v6 )
  {
    sub_2559F0(a2[3]);
    clear_tinfo_t(v6 + 48);
    j__qfree(v6);
  }
  sub_255C10(a2, v5);
  sub_244580((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( !(unsigned __int8)sub_283EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    return v3;
  *(_DWORD *)(a1 + 8) |= 8u;
  return v3;
}
