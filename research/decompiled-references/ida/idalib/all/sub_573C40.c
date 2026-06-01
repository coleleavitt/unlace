__int64 __fastcall sub_573C40(__int64 *a1, __int64 a2, void *a3)
{
  __int64 v5; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r12
  int v11; // r12d
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rdi
  __int64 item_end; // rax
  __int64 v15; // [rsp+0h] [rbp-78h]
  unsigned __int64 v16; // [rsp+8h] [rbp-70h]
  int v17[4]; // [rsp+10h] [rbp-68h] BYREF
  int v18[2]; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( (get_aflags(a3) & 0x10000000) != 0 )
  {
    if ( (unsigned int)sub_3A1820((__int64)a1) )
    {
      *(_QWORD *)(a2 + 16) = a3;
      *(_DWORD *)(a2 + 24) = 0;
LABEL_4:
      LODWORD(v5) = 0;
      return (unsigned int)v5;
    }
    clr_abits(a3, 0x10000000);
  }
  v7 = sub_3BE900(a1, (unsigned __int64)a3, 4);
  if ( *(void **)(a2 + 16) == a3 && (~BYTE1(v7) & 6) == 0 )
  {
    item_end = get_item_end(a3, a3, v8, v9);
    v5 = *(unsigned __int16 *)(a2 + 26);
    if ( v5 == item_end - (_QWORD)a3 )
      return (unsigned int)v5;
  }
  if ( !(unsigned __int8)sub_3C0260(a1, (unsigned __int64)a3)
    || (v15 = (__int64)(a1 + 203), !sub_505D70((__int64)(a1 + 203), (unsigned __int64)a3)) )
  {
LABEL_30:
    LODWORD(v5) = -9;
    return (unsigned int)v5;
  }
  do
  {
    LODWORD(v5) = sub_573440(a1, a2, (char *)a3, 3);
    v11 = sub_3BE900(a1, (unsigned __int64)a3, 4);
    if ( !(_DWORD)v5 )
      goto LABEL_33;
    v12 = sub_505D70(v15, (unsigned __int64)a3);
    if ( !v12 )
      goto LABEL_30;
    if ( v12[1] < (unsigned __int64)a3 + (int)v5 )
    {
      if ( (*(_BYTE *)(a1[2] + 8) & 0x20) == 0 )
        goto LABEL_30;
      v16 = (unsigned __int64)a3 + (int)v5;
      v13 = sub_505D70(v15, v16);
      if ( !v13 || v16 - get_segm_base(v13) > 0xF || !(unsigned __int8)sub_687700((int)a1) )
        goto LABEL_30;
    }
    if ( (~v11 & 0x600) == 0 )
      return (unsigned int)v5;
    if ( (!(unsigned __int8)sub_631AD0(*a1, 9) || !(unsigned __int8)is_spec_ea(a3))
      && (unsigned int)sub_3A1820((__int64)a1) == 25
      && (sub_41D3C0((__int64)a1, (unsigned __int64)a3, v5) || sub_3792E0(0x20u, a2, 0) < 0) )
    {
      *(_QWORD *)(a2 + 16) = -1;
      goto LABEL_4;
    }
    v10 = sub_3D68E0((int)a1, v15, v16, 0, 0, 0, 0, v19);
    if ( *(_QWORD *)v18 )
      (*(void (__fastcall **)(int *, int *, __int64))v18)(v17, v17, 3);
    if ( !v10 )
    {
LABEL_33:
      LODWORD(v5) = -7;
      return (unsigned int)v5;
    }
    sub_3A61A0(a1, (unsigned __int64)a3, (unsigned __int64)a3 + 1, 0x28u);
  }
  while ( *(void **)(a2 + 16) != a3 );
  return sub_573AA0(a1, a2);
}
