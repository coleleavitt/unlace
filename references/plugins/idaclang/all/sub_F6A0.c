__int64 __fastcall sub_F6A0(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbp
  const char *v17; // rcx
  const char *v18; // rdi
  unsigned __int64 v19; // rbp
  const char *v20; // rcx
  const char *v22; // [rsp+10h] [rbp-58h] BYREF
  __int64 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !a2[3] )
    return 1;
  if ( !(unsigned __int8)get_tinfo_details(*a1, 13) )
  {
    sub_67C0(a4, (__int64)"failed to calculate udt layout");
    return 0;
  }
  v6 = a2[1];
  v7 = a3[1];
  if ( v7 != v6 )
  {
    sub_67C0(a4, (__int64)"expected %d fields, got %d", v6, v7);
    return 0;
  }
  if ( !get_tinfo_size(0, *a1, 0) && a2[3] == 1 )
    return 1;
  v8 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = 144 * v8 + *a2;
      v10 = (_QWORD *)(*a3 + 144 * v8);
      v11 = (__int64)v10;
      if ( *v10 != *(_QWORD *)v9 )
      {
        v16 = *v10 >> 3;
        sub_F470((__int64)&v22, *a3 + 144 * v8);
        v17 = s1;
        if ( v23 )
          v17 = v22;
        sub_67C0(a4, (__int64)"expected offset 0x%X for %s, got 0x%X", *(_QWORD *)v9 >> 3, v17, v16);
        v18 = v22;
        if ( v22 )
          goto LABEL_25;
        return 0;
      }
      if ( (get_tinfo_property(*(_QWORD *)(v9 + 64), 2) & 0xF) != 0xE )
      {
        v12 = *(_QWORD *)(v9 + 8);
        v13 = *(_QWORD *)(v11 + 8);
        if ( ((*(_BYTE *)(v9 + 132) & 0x20) == 0 || v12 != 8 || v13) && v12 != v13 )
          break;
      }
      if ( ++v8 == v6 )
        goto LABEL_20;
    }
    v19 = v13 >> 3;
    sub_F470((__int64)&v22, v11);
    v20 = s1;
    if ( v23 )
      v20 = v22;
    sub_67C0(a4, (__int64)"expected size 0x%X for %s, got 0x%X", *(_QWORD *)(v9 + 8) >> 3, v20, v19);
    v18 = v22;
    if ( v22 )
    {
LABEL_25:
      v23 = 0;
      qfree(v18);
      return 0;
    }
    return 0;
  }
LABEL_20:
  v14 = a3[3];
  v15 = a2[3];
  if ( v14 == v15 )
    return 1;
  sub_67C0(a4, (__int64)"expected total size 0x%X, got 0x%X", v15, v14);
  return 0;
}
