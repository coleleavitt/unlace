__int64 __fastcall sub_3BF1D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  struct _Unwind_Exception *v4; // [rsp+0h] [rbp-10h]

  if ( *(_DWORD *)(a2 + 80) != 1 )
    return 0;
  if ( *(int *)(*(_QWORD *)(a2 + 88) + 8LL) > 69 )
    return 0;
  v3 = sub_2524E0();
  if ( *(_DWORD *)(v3 + 8) != 64 )
    return 0;
  v4 = *(struct _Unwind_Exception **)(v3 + 24);
  if ( !sub_3A8D50(0, v4, 1) )
    return 0;
  sub_3BF000(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), v4);
  return 1;
}
