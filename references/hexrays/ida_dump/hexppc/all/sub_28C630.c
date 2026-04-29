__int64 __fastcall sub_28C630(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // r12
  int tinfo_size; // eax
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // r13
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 21 )
    return 0;
  v5 = sub_251230(v3, v10, 0);
  if ( !v5 )
    return 0;
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
  switch ( tinfo_size )
  {
    case 2:
      v7 = 0xFFFF;
      break;
    case 4:
      v7 = 0xFFFFFFFFLL;
      break;
    case 1:
      v7 = 255;
      break;
    default:
      return 0;
  }
  if ( (v7 & v10[0]) != v7 )
    return 0;
  v8 = *(__int64 **)(a2 + 24);
  v9 = v8[4];
  if ( v9 == v5 )
    v9 = v8[3];
  if ( v9 )
  {
    sub_2519B0(v9);
    clear_tinfo_t(v9 + 48);
    j__qfree(v9);
    v8 = *(__int64 **)(a2 + 24);
  }
  sub_251BD0(v8, v5);
  if ( a2 )
    sub_240540(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( (unsigned __int8)sub_27FE80(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}
