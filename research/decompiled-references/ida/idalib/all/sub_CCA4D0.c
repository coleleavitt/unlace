__int64 __fastcall sub_CCA4D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // r12d
  bool v13; // zf
  __int64 v14; // rax
  _BOOL8 v15; // rdx
  unsigned __int64 v16; // rsi
  char v18; // al
  __int64 v19; // rax
  int v20; // edx
  int v21; // esi
  unsigned __int64 v22; // r13
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // ebx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v41; // [rsp+10h] [rbp-38h] BYREF
  __int64 v42[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = *(_QWORD *)a2;
  v41 = a1;
  if ( (v6 & 0x4000) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( v7 )
    {
      if ( !(unsigned __int8)sub_CC99A0(a1, v7, a3, a4, a5) )
        return 0;
      v6 = *(_QWORD *)a2;
    }
  }
  if ( (v6 & 0x2000) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 8LL * ((v6 & 0x4000) != 0) + 16);
    if ( v8 )
    {
      if ( !(unsigned __int8)sub_CC6D50(a1, v8, 0) )
        return 0;
      v6 = *(_QWORD *)a2;
    }
  }
  v9 = sub_CAE9C0(*(_WORD **)(a2 + 8LL * (((v6 & 0x4000) != 0) + ((v6 & 0x2000) != 0)) + 16));
  v11 = HIBYTE(v9);
  v12 = HIBYTE(v9);
  if ( !HIBYTE(v9) )
  {
    v18 = (*(_BYTE *)(a2 + 1) >> 1) & 7;
    if ( v18 == 2 )
    {
      v42[0] = a2 | 4;
      if ( !(unsigned __int8)sub_CABBE0(a1, v42) )
        return 0;
    }
    else if ( v18 == 3 )
    {
      v42[0] = a2 | 4;
      if ( !(unsigned __int8)sub_CABBE0(a1, v42) )
        return 0;
      v42[0] = a2 | 4;
      if ( !(unsigned __int8)sub_CA1FD0(a1, v42) )
        return 0;
    }
    else if ( !(unsigned __int8)sub_CB2190(
                                  (_QWORD *)a1,
                                  *(_QWORD *)(a2
                                            + 8LL * (((*(_QWORD *)a2 & 0x4000) != 0) + ((*(_QWORD *)a2 & 0x2000) != 0))
                                            + 16)) )
    {
      return 0;
    }
    v19 = sub_EEDE70(a2);
    if ( (unsigned __int8)sub_CC6A90(a1, v19) )
    {
      v20 = *(_DWORD *)(a1 + 384);
      v21 = v20 + 1;
      if ( (*(_QWORD *)a2 & 0x1000LL) != 0
        && (v22 = *(_QWORD *)(a2
                            + 8LL
                            * (((*(_QWORD *)a2 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x2000) != 0) + 2)
                            + 16)) != 0 )
      {
        v23 = v20 + 2;
        v40 = v21;
        *(_DWORD *)(a1 + 384) = v23;
        LODWORD(v42[0]) = v23;
        if ( !(unsigned __int8)sub_CACEF0(a1, &v40) )
          return v12;
        if ( !(unsigned __int8)sub_CCA430(
                                 &v41,
                                 *(_QWORD *)(a2
                                           + 8LL
                                           * (((*(_QWORD *)a2 & 0x4000) != 0)
                                            + (unsigned int)((*(_QWORD *)a2 & 0x2000) != 0)
                                            + 1)
                                           + 16),
                                 (*(_QWORD *)a2 & 0x4000) != 0,
                                 v24,
                                 v25) )
          return v12;
        if ( !(unsigned __int8)sub_CACDE0(a1, (int *)v42) )
          return v12;
        sub_CAE070(a1, v40, v26, v27, v28, v29);
        v35 = sub_CCA430(&v41, v22, v30, v31, v32);
        if ( !(_BYTE)v35 )
          return v12;
      }
      else
      {
        *(_DWORD *)(a1 + 384) = v21;
        LODWORD(v42[0]) = v20 + 1;
        if ( !(unsigned __int8)sub_CACEF0(a1, (int *)v42) )
          return v12;
        v35 = sub_CCA430(
                &v41,
                *(_QWORD *)(a2
                          + 8LL * (((*(_QWORD *)a2 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x2000) != 0) + 1)
                          + 16),
                (*(_QWORD *)a2 & 0x4000) != 0,
                v38,
                v39);
        if ( !(_BYTE)v35 )
          return v12;
      }
      v12 = v35;
      sub_CAE070(a1, v42[0], v33, v34, v36, v37);
      return v12;
    }
    return 0;
  }
  v13 = (_BYTE)v9 == 0;
  v14 = *(_QWORD *)a2;
  if ( v13 )
  {
    if ( (v14 & 0x1000) != 0 )
    {
      v15 = (v14 & 0x4000) != 0;
      v16 = *(_QWORD *)(a2 + 8LL * ((unsigned int)v15 + ((v14 & 0x2000) != 0) + 2) + 16);
      if ( v16 )
        return (unsigned int)sub_CCA430(&v41, v16, v15, v11, v10);
    }
    return v12;
  }
  return (unsigned int)sub_CCA430(
                         &v41,
                         *(_QWORD *)(a2 + 8LL * (((v14 & 0x4000) != 0) + (unsigned int)((v14 & 0x2000) != 0) + 1) + 16),
                         (v14 & 0x4000) != 0,
                         v11,
                         v10);
}
