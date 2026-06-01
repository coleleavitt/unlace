__int64 __fastcall sub_3C5CB0(__int64 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rax
  char v8; // dl
  char v10; // r8
  unsigned int v11; // r15d
  __int64 v12; // r9
  char v13; // r14
  unsigned int v14; // esi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int v17; // esi
  int v18; // eax
  char v19; // [rsp+8h] [rbp-70h]
  unsigned int v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+10h] [rbp-68h]
  unsigned int v22; // [rsp+10h] [rbp-68h]
  unsigned int v23; // [rsp+2Ch] [rbp-4Ch] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v5 = a2;
  v25 = __readfsqword(0x28u);
  v7 = sub_4EE820(a1 + 194, a2);
  if ( !v7 )
    return v25 - __readfsqword(0x28u);
  v8 = *(_BYTE *)(v7 + 23);
  if ( v8 == 1 )
  {
    if ( a3 != 4 )
      return v25 - __readfsqword(0x28u);
  }
  else if ( v8 != 2 || a3 != 8 )
  {
    return v25 - __readfsqword(0x28u);
  }
  v10 = is_spec_segm(*(unsigned __int8 *)(v7 + 96));
  if ( !v10 && (unsigned int)a2 < (int)a2 + a4 )
  {
    v11 = a2;
    v12 = 0;
    while ( 1 )
    {
      v21 = v12;
      v19 = v10;
      v13 = sub_3C4B80(a1, &v23, v11, a3);
      if ( !v13 )
        return v25 - __readfsqword(0x28u);
      if ( v23 )
        break;
      v10 = v19;
      v12 = v21 + 1;
      if ( v21 == 64 )
      {
        if ( a1[96] )
          return v25 - __readfsqword(0x28u);
LABEL_24:
        v12 = 0;
      }
      v11 += a3;
      if ( v11 >= v5 + a4 )
      {
        if ( !v10 )
          return v25 - __readfsqword(0x28u);
        get_default_reftype(v5);
        return op_offset(v5, 0);
      }
    }
    if ( v23 <= 0x20 )
      return v25 - __readfsqword(0x28u);
    v20 = v23;
    v14 = v23;
    if ( !(unsigned __int8)sub_3EA400(a1, v23) )
    {
      v14 = v20;
      if ( !rangeset_t_find_range(a1 + 129, v20) )
        return v25 - __readfsqword(0x28u);
    }
    v15 = sub_3B9AA0((__int64)a1, v14, 4);
    v16 = v15 & 0x600;
    if ( v16 == 512 )
    {
      if ( a3 != a4 )
        return v25 - __readfsqword(0x28u);
      if ( (v14 & (v14 - 1)) == 0 )
        return v25 - __readfsqword(0x28u);
      v17 = sub_3BD5D0((__int64)a1, v14);
      if ( !v17 )
        return v25 - __readfsqword(0x28u);
      v18 = sub_3B9AA0((__int64)a1, v17, 4);
      if ( (v18 & 0x600) != 0x400 || (v18 & 0xF0000000) != 0x50000000 )
        return v25 - __readfsqword(0x28u);
    }
    else if ( v16 == 1536 && v5 == v11 && (v15 & 0x10000) != 0 )
    {
      return v25 - __readfsqword(0x28u);
    }
    if ( (sub_3B9AA0((__int64)a1, v11, 4) & 0x600) == 0x200 )
      v22 = sub_3BD5D0((__int64)a1, v11);
    else
      v22 = v11;
    v24 = 0;
    if ( (get_aflags(v22) & 0x800) != 0 )
    {
      if ( (unsigned __int8)sub_674C60(a1, &v24, v22) )
      {
        sub_3C59D0(&v24, v11 - v22);
        if ( a3 == get_tinfo_size(0, v24, 0)
          && (unsigned __int8)((get_tinfo_property(v24, 2) & 0xF) - 10) > 1u
          && (get_tinfo_property(v24, 2) & 0xF) != 0xC )
        {
          clear_tinfo_t(&v24);
          return v25 - __readfsqword(0x28u);
        }
      }
    }
    clear_tinfo_t(&v24);
    v10 = v13;
    goto LABEL_24;
  }
  return v25 - __readfsqword(0x28u);
}

