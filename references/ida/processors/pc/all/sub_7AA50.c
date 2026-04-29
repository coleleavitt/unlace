__int64 __fastcall sub_7AA50(__int64 a1, __int64 a2)
{
  __int64 spd; // r15
  char v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v9; // rdx
  __int16 v10; // ax
  char v11; // cl
  __int128 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // [rsp+8h] [rbp-240h]
  unsigned __int64 v18; // [rsp+10h] [rbp-238h]
  unsigned __int64 *func; // [rsp+18h] [rbp-230h]
  __int64 v20; // [rsp+20h] [rbp-228h]
  char v21; // [rsp+28h] [rbp-220h]
  __int64 v22; // [rsp+28h] [rbp-220h]
  __int64 v23; // [rsp+28h] [rbp-220h]
  unsigned __int64 v24; // [rsp+30h] [rbp-218h]
  __int64 v25; // [rsp+48h] [rbp-200h]
  char v26; // [rsp+61h] [rbp-1E7h]
  __int64 v27[4]; // [rsp+70h] [rbp-1D8h] BYREF
  _QWORD v28[46]; // [rsp+90h] [rbp-1B8h] BYREF
  int v29; // [rsp+200h] [rbp-48h]
  unsigned __int64 v30; // [rsp+208h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 28) & 8) != 0 && ((unsigned int)getinf() == 11 || get_loader_name() == 3 && v29 == 6644344) )
  {
    func = (unsigned __int64 *)get_func();
    v4 = 1;
    if ( func )
      v18 = *(_QWORD *)get_fchunk();
    else
      v18 = *(_QWORD *)getseg();
  }
  else
  {
    v18 = 0;
    v4 = 0;
    func = 0;
  }
  v5 = get_func();
  qmemcpy(v28, (const void *)a2, 0x168u);
  v21 = 0;
  v6 = v5;
  v20 = -1;
  v17 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_6:
      if ( (get_flags_ex() & 0x10000) == 0 || decode_prev_insn() == -1 )
      {
        if ( decode_preceding_insn() == -1 )
          goto LABEL_31;
        if ( v6 )
        {
LABEL_9:
          LODWORD(spd) = (int)get_func_chunknum() >= 0;
          goto LABEL_10;
        }
      }
      else if ( v6 )
      {
        goto LABEL_9;
      }
      LOBYTE(spd) = get_func() == 0;
LABEL_10:
      if ( !(_BYTE)spd
        || (unsigned __int8)xrefblk_t_first_to() && (unsigned __int8)(v26 - 16) <= 1u
        || LOBYTE(v28[4]) == 33 )
      {
        goto LABEL_31;
      }
      if ( LOWORD(v28[3]) <= 0x9Bu )
        break;
      if ( LOWORD(v28[3]) > 0xD8u )
      {
        if ( LOWORD(v28[3]) != 314 && (unsigned __int16)(LOWORD(v28[3]) - 319) > 1u )
          goto LABEL_31;
        goto LABEL_21;
      }
      if ( LOWORD(v28[3]) <= 0xA1u )
        goto LABEL_31;
      v9 = 0x4100C00000001FLL;
      if ( _bittest64(&v9, (unsigned int)LOWORD(v28[3]) - 162) )
        goto LABEL_21;
      if ( LOWORD(v28[3]) != 209 )
      {
LABEL_76:
        if ( (unsigned __int16)(LOWORD(v28[3]) - 168) > 0x1Du )
          goto LABEL_31;
        goto LABEL_21;
      }
LABEL_37:
      if ( BYTE1(v28[5]) == 1 )
      {
        v10 = HIWORD(v28[5]);
LABEL_39:
        if ( v10 == 4 )
          goto LABEL_31;
      }
LABEL_21:
      if ( !v4 )
        goto LABEL_31;
    }
    if ( LOWORD(v28[3]) > 0x55u )
      break;
    if ( LOWORD(v28[3]) <= 0x12u )
    {
      if ( LOWORD(v28[3]) <= 0xFu )
      {
        if ( LOWORD(v28[3]) != 6 )
        {
          if ( (v28[3] & 0xFFFD) != 5 )
            goto LABEL_31;
          goto LABEL_21;
        }
        goto LABEL_37;
      }
      if ( !v4 )
        goto LABEL_31;
      v27[0] = 0;
      if ( !func )
      {
        v23 = sub_73080(a1, (__int64)v28, 0);
        if ( v23 != -1 )
        {
          if ( !(unsigned __int8)sub_79D80((unsigned __int64)a1, (__int64)v28, v23, v27, 0) )
            v27[0] = 0;
          goto LABEL_73;
        }
LABEL_95:
        v14 = v27[0];
        goto LABEL_96;
      }
      if ( (get_aflags() & 2) == 0 )
      {
        v22 = sub_73080(a1, (__int64)v28, 0);
        if ( v22 != -1 )
        {
          *((_QWORD *)&v12 + 1) = func;
          *(_QWORD *)&v12 = a1;
          v24 = *func;
          if ( !(unsigned __int8)sub_79D80(v12, (__int64)v28, v22, v27, 0) )
            v27[0] = 0;
          if ( v24 != -1 )
            func = (unsigned __int64 *)get_func();
LABEL_73:
          if ( (unsigned __int8)is_mapped() && (unsigned __int8)sub_77CF0(a1) )
            goto LABEL_87;
        }
        goto LABEL_95;
      }
      spd = get_spd();
      v14 = spd - get_spd();
LABEL_96:
      if ( v14 >= 0 )
      {
        v15 = v17 + (v14 >> 2);
        if ( (v14 & 3) != 0 )
          v15 = v17;
        v17 = v15;
      }
      v21 = v4;
    }
    else
    {
      v11 = LOBYTE(v28[3]) - 27;
      if ( (unsigned __int16)(LOWORD(v28[3]) - 27) > 0x3Au )
        goto LABEL_31;
      if ( ((1LL << v11) & 0x7BA0278B4000000LL) == 0 )
      {
        if ( ((1LL << v11) & 0x2C18D) == 0 )
          goto LABEL_31;
        goto LABEL_21;
      }
LABEL_24:
      if ( !v4 )
        goto LABEL_31;
      v7 = sub_7F350(a1, v28, &v28[5]);
      if ( (v7 < v18 || *(_QWORD *)(a2 + 16) < v7)
        && (LOWORD(v28[3]) != 86
         || v28[2] - v18 <= 2
         || (unsigned __int8)get_byte() != 0xEB
         || v28[2] + (char)get_byte() != *(_QWORD *)(a2 + 16)) )
      {
        goto LABEL_31;
      }
    }
  }
  switch ( LOWORD(v28[3]) )
  {
    case 0x56:
    case 0x59:
      if ( !v17 )
        goto LABEL_24;
      goto LABEL_31;
    case 0x5C:
      goto LABEL_37;
    case 0x7A:
      if ( BYTE1(v28[5]) != 1 )
        goto LABEL_21;
      v10 = HIWORD(v28[5]);
      if ( HIWORD(v28[5]) )
        goto LABEL_39;
      if ( BYTE5(v28[5]) == 2 && BYTE1(v28[10]) == 5 && v20 == -1 )
      {
        v13 = v28[11] & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v20 = v13;
        if ( func )
        {
          if ( v13 >= *func && v13 < func[1] && get_item_end() == v13 )
            goto LABEL_87;
        }
      }
      goto LABEL_21;
    case 0x7D:
    case 0x7E:
    case 0x7F:
    case 0x80:
    case 0x82:
    case 0x98:
    case 0x99:
    case 0x9A:
    case 0x9B:
      goto LABEL_21;
    case 0x86:
      if ( !v4 || BYTE1(v28[5]) != 1 || HIWORD(v28[5]) != 1 )
        goto LABEL_31;
      ++v17;
      goto LABEL_6;
    case 0x8F:
      if ( v17 )
      {
        --v17;
        goto LABEL_21;
      }
      if ( BYTE1(v28[5]) != 5 )
        goto LABEL_31;
      if ( (get_flags_ex() & 0xF00000) == 0x500000 )
      {
        v20 = -1;
        if ( (unsigned __int8)get_refinfo() && (unsigned __int8)calc_reference_data() )
          v20 = v25;
      }
      else
      {
        getseg();
        v20 = segm_adjust_ea();
      }
      if ( !v21
        || decode_prev_insn() != -1
        && LOBYTE(v28[4]) == 33
        && (LOWORD(v28[3]) == 122 || LOWORD(v28[3]) == 134)
        && sub_75CD0(a1, (__int64)v28) )
      {
LABEL_87:
        v27[0] = v20 - *(_QWORD *)(a2 + 16);
        netnode_supset();
      }
      else
      {
LABEL_31:
        LODWORD(spd) = 0;
      }
      return (unsigned int)spd;
    default:
      goto LABEL_76;
  }
}
