__int64 __fastcall sub_16A40(__int64 a1, __int64 a2)
{
  __int16 v4; // r12
  _BYTE *v5; // rax
  __int16 v6; // r12
  char *v7; // rax
  __int64 v8; // rsi
  __int16 v9; // r13
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  unsigned int v16; // r13d
  unsigned int dword; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // [rsp+0h] [rbp-498h]
  __int64 v21; // [rsp+8h] [rbp-490h]
  __int128 v22; // [rsp+10h] [rbp-488h] BYREF
  __int64 v23; // [rsp+20h] [rbp-478h]
  __int64 v24; // [rsp+28h] [rbp-470h]
  __int64 v25; // [rsp+30h] [rbp-468h]
  _BYTE v26[6]; // [rsp+38h] [rbp-460h] BYREF
  __int16 v27; // [rsp+3Eh] [rbp-45Ah]
  char v28; // [rsp+61h] [rbp-437h]
  __int16 v29; // [rsp+66h] [rbp-432h]
  __int64 v30; // [rsp+68h] [rbp-430h]
  char v31; // [rsp+80h] [rbp-418h]
  char v32; // [rsp+81h] [rbp-417h]
  _BYTE v33[8]; // [rsp+178h] [rbp-320h] BYREF
  __int128 v34; // [rsp+180h] [rbp-318h] BYREF
  __int64 v35; // [rsp+190h] [rbp-308h]
  __int64 v36; // [rsp+198h] [rbp-300h]
  __int64 v37; // [rsp+1A0h] [rbp-2F8h]
  char v38; // [rsp+1A8h] [rbp-2F0h] BYREF
  char v39; // [rsp+1A9h] [rbp-2EFh]
  __int16 v40; // [rsp+1AEh] [rbp-2EAh]
  char v41; // [rsp+1D1h] [rbp-2C7h]
  __int16 v42; // [rsp+1D6h] [rbp-2C2h]
  unsigned __int64 v43; // [rsp+1D8h] [rbp-2C0h]
  unsigned __int64 v44; // [rsp+1E0h] [rbp-2B8h]
  char v45; // [rsp+1F9h] [rbp-29Fh]
  __int64 v46; // [rsp+200h] [rbp-298h]
  _BYTE v47[8]; // [rsp+2E8h] [rbp-1B0h] BYREF
  _BYTE v48[24]; // [rsp+2F0h] [rbp-1A8h] BYREF
  __int16 v49; // [rsp+308h] [rbp-190h]
  char v50; // [rsp+319h] [rbp-17Fh]
  __int16 v51; // [rsp+31Eh] [rbp-17Ah]
  char v52; // [rsp+341h] [rbp-157h]
  int v53; // [rsp+348h] [rbp-150h]
  unsigned __int64 v54; // [rsp+458h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) != 97 )
    return 0;
  if ( *(_BYTE *)(a2 + 41) != 1 )
    return 0;
  v23 = -1;
  v4 = *(_WORD *)(a2 + 46);
  v24 = 0;
  v5 = v26;
  v25 = 0;
  v22 = -1;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 40;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( v33 != v5 );
  if ( decode_prev_insn(&v22, *(_QWORD *)(a2 + 16), v33, 0.0) == -1 )
    return 0;
  if ( (_WORD)v24 != 6 )
    return 0;
  if ( v26[1] != 1 )
    return 0;
  if ( v4 != v27 )
    return 0;
  if ( v28 != 3 )
    return 0;
  if ( !v31 )
    return 0;
  if ( v32 != 2 )
    return 0;
  v35 = -1;
  v6 = v29;
  v34 = -1;
  v36 = 0;
  v37 = 0;
  v20 = v30;
  v7 = &v38;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 40;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *((_QWORD *)v7 - 2) = 0;
  }
  while ( v47 != v7 );
  v8 = v23;
  if ( decode_prev_insn(&v34, v23, v47, 0.0) == -1 )
    return 0;
  if ( (_WORD)v36 == 93 )
  {
    if ( v39 != 1 || v6 != v40 )
      return 0;
    if ( v41 == 2 )
    {
      v11 = v44;
    }
    else
    {
      if ( v41 != 5 )
        return 0;
      v11 = v43;
    }
  }
  else
  {
    if ( (_WORD)v36 != 118 )
      return 0;
    if ( v39 != 1 )
      return 0;
    if ( v6 != v40 )
      return 0;
    if ( v41 != 1 )
      return 0;
    if ( v6 != v42 )
      return 0;
    if ( v45 != 5 )
      return 0;
    v9 = v46;
    sub_CEC0((__int64)v48);
    v8 = v35;
    if ( decode_prev_insn(v48, v35, v10, 0.0) == -1 || v49 != 94 || v50 != 1 || v6 != v51 || v52 != 5 )
      return 0;
    v11 = v9 & 0xFFF | (unsigned int)(v53 << 12);
  }
  if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) != v11 )
    return 0;
  v14 = getseg(v11);
  if ( !v14 )
    return 0;
  v15 = v11;
  v16 = 0;
  while ( v15 < *(_QWORD *)(v14 + 8) )
  {
    dword = get_dword(v15);
    v12 = dword;
    if ( !dword )
      break;
    v21 = dword;
    v18 = getseg(dword);
    if ( !v18 || *(_BYTE *)(v18 + 184) != 2 || v21 - *(_QWORD *)(a2 + 16) + 0x10000 > (unsigned __int64)"prusr_acc_ctl" )
      break;
    ++v16;
    v15 += 4LL;
    if ( v16 == 256 )
      goto LABEL_39;
  }
  if ( v16 <= 1 )
    return 0;
LABEL_39:
  sub_15E00(a1, v8, v12, v13);
  *(_WORD *)(a1 + 4) = v16;
  v19 = v35;
  *(_QWORD *)(a1 + 8) = v11;
  *(_DWORD *)a1 = 8196;
  *(_QWORD *)(a1 + 32) = v19;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = v20;
  *(_BYTE *)(a1 + 68) = 2;
  *(_QWORD *)(a1 + 24) = -1;
  return 1;
}
