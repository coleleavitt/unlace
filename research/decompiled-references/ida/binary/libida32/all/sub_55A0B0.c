__int64 __fastcall sub_55A0B0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r13d
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r12
  int v11; // r12d
  unsigned int *v12; // rax
  unsigned int *v13; // rdi
  int item_end; // eax
  __int64 v15; // [rsp+0h] [rbp-78h]
  int v16; // [rsp+8h] [rbp-70h]
  int v17[4]; // [rsp+10h] [rbp-68h] BYREF
  int v18[2]; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( (get_aflags(a3) & 0x10000000) != 0 )
  {
    if ( (unsigned int)sub_39CC50((__int64)a1) )
    {
      *(_DWORD *)(a2 + 8) = a3;
      *(_DWORD *)(a2 + 12) = 0;
      return 0;
    }
    clr_abits(a3, 0x10000000);
  }
  v7 = sub_3B9AA0((__int64)a1, a3, 4);
  if ( *(_DWORD *)(a2 + 8) == a3 && (~BYTE1(v7) & 6) == 0 )
  {
    item_end = get_item_end(a3, a3, v8, v9);
    v5 = *(unsigned __int16 *)(a2 + 14);
    if ( v5 == item_end - a3 )
      return v5;
  }
  if ( !(unsigned __int8)sub_3BB2F0((__int64)a1, a3) )
    return (unsigned int)-9;
  v15 = (__int64)(a1 + 194);
  if ( !sub_4EE820((__int64)(a1 + 194), a3) )
    return (unsigned int)-9;
  do
  {
    v5 = sub_559920(a1, a2, a3, 3);
    v11 = sub_3B9AA0((__int64)a1, a3, 4);
    if ( !v5 )
      return (unsigned int)-7;
    v12 = sub_4EE820(v15, a3);
    if ( !v12 )
      return (unsigned int)-9;
    if ( v12[1] < v5 + a3 )
    {
      if ( (*(_BYTE *)(a1[2] + 8LL) & 0x20) == 0 )
        return (unsigned int)-9;
      v13 = sub_4EE820(v15, v5 + a3);
      if ( !v13 || v5 + a3 - (unsigned int)get_segm_base(v13) > 0xF || !(unsigned __int8)sub_668550((int)a1) )
        return (unsigned int)-9;
    }
    if ( (~v11 & 0x600) == 0 )
      return v5;
    if ( (!(unsigned __int8)sub_614FB0(*a1, 9) || !(unsigned __int8)is_spec_ea(a3))
      && (unsigned int)sub_39CC50((__int64)a1) == 25
      && (sub_409FA0((__int64)a1, a3, v5) || sub_375980(0x20u, a2, 0) < 0) )
    {
      *(_DWORD *)(a2 + 8) = -1;
      return 0;
    }
    v10 = sub_3D0CF0((int)a1, v15, v16, 0, 0, 0, 0, v19);
    if ( *(_QWORD *)v18 )
      (*(void (__fastcall **)(int *, int *, __int64))v18)(v17, v17, 3);
    if ( !v10 )
      return (unsigned int)-7;
    sub_3A1A90(a1, a3, a3 + 1, 0x28u);
  }
  while ( *(_DWORD *)(a2 + 8) != a3 );
  return sub_559F10(a1, a2);
}

