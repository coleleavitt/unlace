unsigned __int64 __fastcall sub_1C37020(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-50h]
  _QWORD v12[8]; // [rsp+10h] [rbp-40h] BYREF

  if ( !*a2 )
    return 0;
  v4 = sub_BFB9F0(*a2);
  if ( (*(_WORD *)v4 & 0x1FF) != 0x47 )
    return 0;
  if ( *(char *)(v4 + 2) < 0 )
    return 0;
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 40 > 6 || sub_B73640(v5) && (*(_DWORD *)sub_B73640(v5) & 0x40000) != 0 )
    return 0;
  v7 = sub_1C36DD0(a1, v5);
  if ( v7 )
  {
    v8 = *a2;
    if ( ((*(_BYTE *)(*a2 + 1) >> 1) & 3) != 2 && (a3 == 2 || a3 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) != 0) )
    {
      v11 = *a2;
      v12[0] = *(_QWORD *)(v5 + 48);
      v9 = sub_C1BEF0((__int64)v12, v5, v6, v8);
      *a2 = sub_C0A3E0(*(_QWORD **)(a1 + 248), v9, 5, v11, 0, 2, 0);
    }
  }
  return v7;
}
