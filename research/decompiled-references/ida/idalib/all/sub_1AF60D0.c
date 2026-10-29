__int64 __fastcall sub_1AF60D0(_QWORD *a1, __int64 a2, __int64 a3, const void *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __int16 v15; // dx
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rax
  __int16 v22; // dx
  __int64 v23; // rcx
  __int64 v24; // rax
  signed __int64 v25; // rbp
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // rbp
  __int16 v31; // ax
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 result; // rax
  __int64 i; // r14
  __int64 v36; // r12
  __int64 v37; // r15
  __int16 v38; // ax
  __int64 v40; // [rsp+18h] [rbp-40h]
  __int64 v41; // [rsp+18h] [rbp-40h]
  __int64 v42; // [rsp+18h] [rbp-40h]
  __int64 v43; // [rsp+18h] [rbp-40h]

  if ( (*(_WORD *)a3 & 0x1FF) == 0xFC )
  {
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 )
      sub_183F100(a6, v9);
    v11 = *(_QWORD *)(a3 + 16);
    v12 = *(_QWORD *)(v11 + 8);
    v13 = *(_QWORD *)(v11 + 16);
    v14 = sub_EEE9A0(24, a1, 8u);
    v15 = *(_WORD *)v14 & 0xFE00;
    LOBYTE(v15) = -11;
    v16 = unk_2CD7484 == 0;
    *(_WORD *)v14 = v15;
    if ( !v16 )
    {
      v41 = v14;
      sub_EE9B50(245);
      v14 = v41;
    }
    *(_QWORD *)(v14 + 8) = v12;
    *(_QWORD *)(v14 + 16) = v13;
    v17 = *(unsigned int *)(a6 + 8);
    if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
    {
      v42 = v14;
      sub_2237220(a6, a6 + 16, v17 + 1, 8);
      v17 = *(unsigned int *)(a6 + 8);
      v14 = v42;
    }
    *(_QWORD *)(*(_QWORD *)a6 + 8 * v17) = v14;
    v18 = *(_QWORD *)(a3 + 32);
    ++*(_DWORD *)(a6 + 8);
    v19 = *(_QWORD *)(v18 + 8);
    v20 = *(_QWORD *)(v18 + 16);
    v21 = sub_EEE9A0(24, a1, 8u);
    v22 = *(_WORD *)v21 & 0xFE00;
    LOBYTE(v22) = -11;
    v16 = unk_2CD7484 == 0;
    *(_WORD *)v21 = v22;
    if ( !v16 )
    {
      v40 = v21;
      sub_EE9B50(245);
      v21 = v40;
    }
    *(_QWORD *)(v21 + 8) = v19;
    *(_QWORD *)(v21 + 16) = v20;
    v23 = *(unsigned int *)(a6 + 8);
    if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
    {
      v43 = v21;
      sub_2237220(a6, a6 + 16, v23 + 1, 8);
      v23 = *(unsigned int *)(a6 + 8);
      v21 = v43;
    }
    *(_QWORD *)(*(_QWORD *)a6 + 8 * v23) = v21;
    v24 = (unsigned int)(*(_DWORD *)(a6 + 8) + 1);
    *(_DWORD *)(a6 + 8) = v24;
  }
  else
  {
    v24 = *(unsigned int *)(a6 + 8);
  }
  v25 = 8 * a5;
  v26 = v24 + (v25 >> 3);
  if ( v26 > *(unsigned int *)(a6 + 12) )
  {
    sub_2237220(a6, a6 + 16, v26, 8);
    v24 = *(unsigned int *)(a6 + 8);
  }
  if ( v25 )
  {
    memcpy((void *)(*(_QWORD *)a6 + 8 * v24), a4, v25);
    LODWORD(v24) = *(_DWORD *)(a6 + 8);
  }
  *(_DWORD *)(a6 + 8) = (v25 >> 3) + v24;
  v27 = *(_QWORD *)(a2 + 536);
  if ( v27 )
  {
    v28 = *(_QWORD *)(v27 + 8);
    v29 = *(_QWORD *)(v27 + 16);
    v30 = sub_EEE9A0(24, a1, 8u);
    v31 = *(_WORD *)v30 & 0xFE00;
    LOBYTE(v31) = -11;
    *(_WORD *)v30 = v31;
    if ( unk_2CD7484 )
      sub_EE9B50(245);
    *(_QWORD *)(v30 + 8) = v28;
    *(_QWORD *)(v30 + 16) = v29;
    v32 = *(unsigned int *)(a6 + 8);
    if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
    {
      sub_2237220(a6, a6 + 16, v32 + 1, 8);
      v32 = *(unsigned int *)(a6 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a6 + 8 * v32) = v30;
    ++*(_DWORD *)(a6 + 8);
  }
  v33 = *(_QWORD *)(a2 + 152);
  result = *(unsigned int *)(a2 + 160);
  for ( i = v33 + 8 * result; i != v33; ++*(_DWORD *)(a6 + 8) )
  {
    while ( 1 )
    {
      v36 = *(_QWORD *)(*(_QWORD *)v33 + 16LL);
      result = *(_BYTE *)(v36 + 28) & 0x7F;
      if ( (_BYTE)result == 44 )
        break;
      v33 += 8;
      if ( i == v33 )
        return result;
    }
    v37 = sub_EEE9A0(24, a1, 8u);
    v38 = *(_WORD *)v37 & 0xFE00;
    LOBYTE(v38) = -11;
    *(_WORD *)v37 = v38;
    if ( unk_2CD7484 )
      sub_EE9B50(245);
    *(_QWORD *)(v37 + 8) = v36;
    *(_QWORD *)(v37 + 16) = 0;
    result = *(unsigned int *)(a6 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
    {
      sub_2237220(a6, a6 + 16, result + 1, 8);
      result = *(unsigned int *)(a6 + 8);
    }
    v33 += 8;
    *(_QWORD *)(*(_QWORD *)a6 + 8 * result) = v37;
  }
  return result;
}
