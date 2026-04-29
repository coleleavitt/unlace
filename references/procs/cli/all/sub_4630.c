__int64 __fastcall sub_4630(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int8 v7; // cl
  __int64 result; // rax
  __int64 v11; // r12
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned int v17; // r12d
  int dword; // eax
  __int64 v19; // r14
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rsi
  int v23; // ecx
  __int16 v24; // ax
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rsi
  int v31; // ecx

  v7 = a3[1];
  result = (unsigned __int8)(v7 - 5);
  switch ( v7 )
  {
    case 5u:
      if ( a5 )
      {
        set_immd(*(_QWORD *)(a2 + 16));
        result = op_adds_xrefs(a4, *a3);
        if ( (_BYTE)result )
          return insn_add_off_drefs(a2, a3, 1, 0);
      }
      else
      {
        if ( under_debugger )
          BUG();
        interr(10101);
        return sub_48C0();
      }
      return result;
    case 7u:
      v11 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
      v12 = has_insn_feature(*(unsigned __int16 *)(a2 + 24), 2);
      v14 = 19;
      if ( v12 )
      {
        if ( !(unsigned __int8)func_does_return(v11, 2, v13, 19) )
          *(_BYTE *)(a1 + 10397) = 0;
        v14 = 17;
      }
      v15 = (unsigned int)(char)a3[2];
      v16 = v11;
      return insn_add_cref(a2, v16, v15, v14);
    case 8u:
      return result;
    case 9u:
      v17 = 0;
      if ( !*((_QWORD *)a3 + 1) )
        return result;
      break;
    case 0xAu:
      result = sub_5900(a1, *((unsigned int *)a3 + 2));
      v16 = result;
      if ( result == -1 )
        return result;
      v24 = *(_WORD *)(a2 + 24);
      v25 = (char)a3[2];
      if ( (v24 & 0xFFFD) == 0x30 || v24 == 176 )
      {
        v14 = 17;
      }
      else
      {
        v14 = 19;
        if ( v24 != 101 )
        {
          v26 = 1;
          if ( (unsigned __int16)(v24 - 164) > 1u )
            v26 = (unsigned int)a5 + 2;
          return insn_add_dref(a2, v16, v25, v26);
        }
      }
      v15 = v25;
      return insn_add_cref(a2, v16, v15, v14);
    default:
      v27 = *(_QWORD *)(a1 + 16);
      v28 = v7;
      v29 = *(unsigned __int16 *)(a2 + 24);
      v30 = 0;
      v31 = *(_DWORD *)(v27 + 104);
      if ( v29 >= v31 && v29 < *(_DWORD *)(v27 + 108) )
        v30 = *(_QWORD *)(*(_QWORD *)(v27 + 112) + 16LL * (v29 - v31));
      return sub_4550((__int64)"%a: %s,%d: bad optype %d", *(_QWORD *)(a2 + 16), v30, *a3, v28);
  }
  while ( 1 )
  {
    v19 = *((_QWORD *)a3 + 2) + (int)(4 * v17);
    if ( !(unsigned __int8)is_loaded(v19) )
      break;
    ++v17;
    dword = get_dword(v19);
    insn_add_cref(
      a2,
      dword + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26) + 16LL * *(_QWORD *)a2,
      (unsigned int)(char)a3[2],
      19);
    result = (int)v17;
    if ( (unsigned __int64)(int)v17 >= *((_QWORD *)a3 + 1) )
      return result;
  }
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(unsigned __int16 *)(a2 + 24);
  v22 = 0;
  v23 = *(_DWORD *)(v20 + 104);
  if ( v21 >= v23 && v21 < *(_DWORD *)(v20 + 108) )
    v22 = *(_QWORD *)(*(_QWORD *)(v20 + 112) + 16LL * (v21 - v23));
  return sub_4550((__int64)"%a: %s,%d: bad switch case %d", *(_QWORD *)(a2 + 16), v22, *a3, v17);
}
