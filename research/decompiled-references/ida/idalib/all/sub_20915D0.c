__int64 __fastcall sub_20915D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  _QWORD *v23; // rdx
  __int64 v24; // rdx
  _QWORD *v25; // rax

  v6 = sub_2091400(a1, a2, a3, a4, a5, a6);
  v11 = v6;
  if ( *v6 <= 1u )
    return sub_2057E60(*((_QWORD **)v6 + 1), a2, v7, v8, v9, v10);
  if ( (v6[7] & 0x80u) == 0 )
    goto LABEL_15;
  v13 = sub_20C9AA0(v6);
  v15 = v13 + v14;
  if ( (v11[7] & 0x80u) != 0 )
    v15 -= sub_20C9AA0(v11);
  v16 = v15 >> 4;
  if ( (unsigned int)(v15 >> 4) )
  {
    v17 = 0;
    v18 = 16 * ((unsigned int)(v16 - 1) + 1LL);
    while ( 1 )
    {
      v19 = 0;
      if ( (v11[7] & 0x80u) != 0 )
        v19 = sub_20C9AA0(v11);
      v20 = (unsigned int *)(v17 + v19);
      v21 = *((_DWORD *)v11 + 1) & 0x7FFFFFF;
      if ( *(_DWORD *)(*(_QWORD *)v20 + 8LL) == 5 )
        break;
      v17 += 16;
      if ( v17 == v18 )
        goto LABEL_16;
    }
    v22 = *(_QWORD *)(a1 + 32 * (2LL - (*(_DWORD *)(a1 + 4) & 0x7FFFFFF)));
    v23 = *(_QWORD **)(v22 + 24);
    if ( *(_DWORD *)(v22 + 32) > 0x40u )
      v23 = (_QWORD *)*v23;
    return *(_QWORD *)&v11[32 * (unsigned int)v23 + 32 * (v20[2] - v21)];
  }
  else
  {
LABEL_15:
    v21 = *((_DWORD *)v11 + 1) & 0x7FFFFFF;
LABEL_16:
    v24 = *(_QWORD *)(a1 + 32 * (2LL - (*(_DWORD *)(a1 + 4) & 0x7FFFFFF)));
    v25 = *(_QWORD **)(v24 + 24);
    if ( *(_DWORD *)(v24 + 32) > 0x40u )
      v25 = (_QWORD *)*v25;
    return *(_QWORD *)&v11[32 * ((unsigned int)v25 - v21)];
  }
}
