/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_413008
// Address: 0x0000000000413008

//----- (0000000000413008) ----------------------------------------------------
__int64 __fastcall sub_413008(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, unsigned __int8 a6)
{
  __int64 v8; // x21
  unsigned __int64 *v9; // x22
  int *v10; // x28
  int v11; // w19
  unsigned __int64 v12; // x27
  __int64 v13; // x20
  int v14; // w24
  int v15; // w27
  __int64 v16; // x23
  __int64 v17; // d0
  unsigned __int64 v18; // x0
  __int64 v19; // x1
  unsigned int v20; // w19
  int v22; // [xsp+68h] [xbp-18h]
  unsigned __int64 v24; // [xsp+70h] [xbp-10h] BYREF

  v8 = a3;
  v9 = (unsigned __int64 *)a4;
  v22 = a6;
  if ( *(_BYTE *)(a1 + 792) )
    sub_40A570(a4, a5, (int)"WRITE MEMORY %a %d bytes:\n", a3);
  if ( v22 )
    sub_411A98(a1, 0, 1u);
  if ( a2 == -1 )
    a2 = *(_DWORD *)(a1 + 2044);
  v10 = __errno_location();
  *v10 = 0;
  v11 = a5;
  if ( a5 > 0 )
  {
    while ( 1 )
    {
      v15 = v8 & 7;
      v16 = v8 - (v8 & 7);
      if ( (v8 & 7) != 0 )
        break;
      if ( v11 <= 7 )
        goto LABEL_22;
      v12 = *v9;
      *v10 = 0;
      v24 = v12;
      v13 = 8;
      v14 = 8;
      ptrace(PTRACE_POKETEXT, *(unsigned int *)(a1 + 2044), v16, v12);
      if ( !*v10 )
        goto LABEL_11;
LABEL_17:
      *v10 = 0;
      ptrace(PTRACE_POKEDATA, *(unsigned int *)(a1 + 2044), v16, v12);
      if ( *v10 )
      {
LABEL_18:
        v20 = 0;
        goto LABEL_19;
      }
LABEL_11:
      v11 -= v14;
      v9 = (unsigned __int64 *)((char *)v9 + v13);
      v8 += v13;
      if ( v11 <= 0 )
        goto LABEL_23;
    }
    v14 = 8 - v15;
    if ( 8 - v15 > v11 )
    {
LABEL_22:
      v13 = v11;
      v14 = v11;
      __memcpy_chk(&v24, v9, v11, 8);
    }
    else
    {
      v13 = v14;
      __memcpy_chk(&v24, v9, v14, 8);
    }
    v17 = ptrace(PTRACE_PEEKTEXT, a2, v8 - (v8 & 7), 0);
    if ( *v10 )
      goto LABEL_18;
    v18 = v24;
    *v10 = 0;
    v19 = *(unsigned int *)(a1 + 2044);
    v12 = vbsl_s8(
            (int8x8_t)(0xFFFFFFFFFFFFFFFFLL >> (-8 * (unsigned __int8)v13 + 64) << (8 * (unsigned __int8)v15)),
            (int8x8_t)(v18 << (8 * (unsigned __int8)v15)),
            (int8x8_t)v17).n64_u64[0];
    v24 = v12;
    ptrace(PTRACE_POKETEXT, v19, v8 - (v8 & 7), v12);
    if ( !*v10 )
      goto LABEL_11;
    goto LABEL_17;
  }
LABEL_23:
  v20 = a5;
LABEL_19:
  if ( v22 )
    sub_412410(a1, 0, 1u);
  return v20;
}
// 413008: could not find valid save-restore pair for x23
// 413008: could not find valid save-restore pair for x24
// 413008: could not find valid save-restore pair for x27
// 405E40: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
