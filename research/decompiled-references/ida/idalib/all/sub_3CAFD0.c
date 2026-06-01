__int64 __fastcall sub_3CAFD0(__int64 *a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  char v8; // dl
  char v10; // r8
  __int64 *v11; // r15
  __int64 v12; // r9
  char v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int default_reftype; // edx
  unsigned __int64 v18; // rsi
  int v19; // eax
  char v20; // [rsp+8h] [rbp-70h]
  unsigned __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+10h] [rbp-68h]
  __int64 v23; // [rsp+10h] [rbp-68h]
  unsigned __int64 v24; // [rsp+18h] [rbp-60h]
  unsigned __int64 v25; // [rsp+28h] [rbp-50h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v7 = sub_505D70(a1 + 203, a2);
  if ( !v7 )
    return v27 - __readfsqword(0x28u);
  v8 = *(_BYTE *)(v7 + 43);
  if ( v8 == 1 )
  {
    if ( a3 != 4 )
      return v27 - __readfsqword(0x28u);
  }
  else if ( v8 != 2 || a3 != 8 )
  {
    return v27 - __readfsqword(0x28u);
  }
  v10 = is_spec_segm(*(unsigned __int8 *)(v7 + 184));
  if ( !v10 )
  {
    v24 = (unsigned __int64)a2 + a4;
    if ( a2 < (__int64 *)((char *)a2 + a4) )
    {
      v11 = a2;
      v12 = 0;
      while ( 1 )
      {
        v22 = v12;
        v20 = v10;
        v13 = sub_3C9E40(a1, (__int64 *)&v25, v11, a3);
        if ( !v13 )
          return v27 - __readfsqword(0x28u);
        if ( v25 )
          break;
        v10 = v20;
        v12 = v22 + 1;
        if ( v22 == 64 )
        {
          if ( a1[97] )
            return v27 - __readfsqword(0x28u);
LABEL_24:
          v12 = 0;
        }
        v11 = (__int64 *)((char *)v11 + a3);
        if ( (unsigned __int64)v11 >= v24 )
        {
          if ( !v10 )
            return v27 - __readfsqword(0x28u);
          default_reftype = (unsigned __int8)get_default_reftype(a2);
          return op_offset((int)a2, 0, default_reftype, -1, 0, 0);
        }
      }
      if ( v25 <= 0x20 )
        return v27 - __readfsqword(0x28u);
      v21 = v25;
      v14 = v25;
      if ( !(unsigned __int8)sub_3FD360(a1, v25) )
      {
        v14 = v21;
        if ( !rangeset_t_find_range(a1 + 130, v21) )
          return v27 - __readfsqword(0x28u);
      }
      v15 = sub_3BE900(a1, v14, 4);
      v16 = v15 & 0x600;
      if ( v16 == 512 )
      {
        if ( a3 != a4 )
          return v27 - __readfsqword(0x28u);
        if ( (v14 & (v14 - 1)) == 0 )
          return v27 - __readfsqword(0x28u);
        v18 = sub_3C2650(a1, v14);
        if ( !v18 )
          return v27 - __readfsqword(0x28u);
        v19 = sub_3BE900(a1, v18, 4);
        if ( (v19 & 0x600) != 0x400 || (v19 & 0xF0000000) != 0x50000000 )
          return v27 - __readfsqword(0x28u);
      }
      else if ( v16 == 1536 && a2 == v11 && (v15 & 0x10000) != 0 )
      {
        return v27 - __readfsqword(0x28u);
      }
      if ( (sub_3BE900(a1, (unsigned __int64)v11, 4) & 0x600) == 0x200 )
        v23 = sub_3C2650(a1, (unsigned __int64)v11);
      else
        v23 = (__int64)v11;
      v26 = 0;
      if ( (get_aflags(v23) & 0x800) != 0 )
      {
        if ( (unsigned __int8)sub_694940(a1, &v26, v23) )
        {
          sub_3CACD0(&v26, (__int64)v11 - v23);
          if ( a3 == get_tinfo_size(0, v26, 0)
            && (unsigned __int8)((get_tinfo_property(v26, 2) & 0xF) - 10) > 1u
            && (get_tinfo_property(v26, 2) & 0xF) != 0xC )
          {
            clear_tinfo_t(&v26);
            return v27 - __readfsqword(0x28u);
          }
        }
      }
      clear_tinfo_t(&v26);
      v10 = v13;
      goto LABEL_24;
    }
  }
  return v27 - __readfsqword(0x28u);
}
