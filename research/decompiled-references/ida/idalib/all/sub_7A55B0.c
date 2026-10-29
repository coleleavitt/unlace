unsigned __int64 __fastcall sub_7A55B0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 result; // rax
  int v8; // r13d
  char v9; // r12
  __int64 v10; // rdx
  char v11; // cl
  unsigned __int64 v12; // rdx

  v2 = *(_DWORD *)(a1 + 352) + 1;
  *(_DWORD *)(a1 + 352) = v2;
  if ( v2 > 1023 )
    __longjmp_chk(a1 + 360, 54);
  sub_7A6360(a1, a2, 1);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) != 41 )
    sub_7A00E0(a1);
  result = sub_7A5550(a1, a2, v3, v4, v5, v6);
  if ( *(_BYTE *)(a1 + 568) )
  {
    *(_BYTE *)(a1 + 568) = 0;
    v8 = *(_DWORD *)(a1 + 576);
    v9 = *(_BYTE *)(a1 + 572);
    sub_7A5860(a1, a2, 0);
    v10 = *(_QWORD *)(a2 + 8);
    *(_BYTE *)a2 = v9;
    v11 = 8 * (8 - v8);
    result = 0xFFFFFFFFFFFFFFFFLL >> v11;
    v12 = (0xFFFFFFFFFFFFFFFFLL >> v11) & v10;
    *(_QWORD *)(a2 + 8) = v12;
    if ( !v9 && ((0x8000000000000000LL >> v11) & v12) != 0 )
    {
      result = v12 | (0x8000000000000000LL >> v11) | ~result;
      *(_QWORD *)(a2 + 8) = result;
    }
    *(_BYTE *)(a1 + 572) = v9;
    *(_DWORD *)(a1 + 576) = v8;
  }
  --*(_DWORD *)(a1 + 352);
  return result;
}
