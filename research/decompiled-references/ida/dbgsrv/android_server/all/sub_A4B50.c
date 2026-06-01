/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4B50
// Address: 0x00000000000A4B50

//----- (00000000000A4B50) ----------------------------------------------------
__int64 __fastcall sub_A4B50(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v6; // x0
  unsigned __int64 v7; // x25
  unsigned __int64 v8; // x0
  unsigned __int64 v9; // x8
  bool v10; // cf
  unsigned __int64 v11; // x8
  int v12; // w26
  unsigned __int64 v13; // x27
  unsigned int *v14; // x21
  unsigned __int64 v15; // x22
  unsigned __int64 v16; // x0
  __int64 v17; // x22
  unsigned __int64 v18; // x0
  unsigned __int64 v19; // x8
  unsigned __int64 v20; // x8
  unsigned __int64 v21; // x1
  __int64 v22; // x0
  unsigned int v23; // w19
  unsigned int v24; // w9
  unsigned int v25; // w8
  __int64 v26; // x22
  void *v27; // x21
  char *v28; // x21
  __int64 v29; // x25
  unsigned __int64 v30; // x26
  void *v31; // x0
  unsigned __int64 v32; // x0
  unsigned __int64 v33; // x8
  unsigned __int64 v34; // x8
  unsigned __int64 v35; // x22
  unsigned __int64 v36; // x0
  __int64 v37; // x22
  unsigned __int64 v38; // x0
  unsigned __int64 v39; // x8
  unsigned __int64 v40; // x8
  unsigned __int64 v41; // x1
  __int64 v42; // x0
  __int128 v43; // kr00_16
  void *v44; // x10
  void *v45; // x0
  void *v46; // x0
  void *ptr[3]; // [xsp+0h] [xbp-A0h] BYREF
  unsigned int v49; // [xsp+1Ch] [xbp-84h] BYREF
  __int128 v50; // [xsp+20h] [xbp-80h]
  void *v51; // [xsp+30h] [xbp-70h]
  __int64 v52; // [xsp+38h] [xbp-68h]

  v52 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 < 0 )
  {
    v7 = 0;
    goto LABEL_8;
  }
  v6 = qtime64();
  v7 = (unsigned int)v6 + 1000LL * a3 + 1000000 * HIDWORD(v6);
  if ( !v7 )
  {
LABEL_8:
    v13 = 0;
    v14 = &v49;
    v12 = 1;
    goto LABEL_10;
  }
  v8 = qtime64();
  v9 = 1000000 * HIDWORD(v8) + (unsigned int)v8;
  v10 = v7 >= v9;
  v11 = v7 - v9;
  if ( v11 == 0 || !v10 )
  {
    LODWORD(v15) = 0;
LABEL_9:
    v14 = &v49;
    v16 = qtime64();
    v12 = 0;
    v13 = (unsigned int)v16 + 1000LL * (int)v15 + 1000000 * HIDWORD(v16);
    goto LABEL_10;
  }
  v15 = v11 / 0x3E8;
  if ( ((v11 / 0x3E8) & 0x80000000) == 0 )
    goto LABEL_9;
  v12 = 0;
  v13 = 0;
  v14 = &v49;
LABEL_10:
  v17 = 4;
  while ( 1 )
  {
    if ( v13 )
    {
      v18 = qtime64();
      v19 = 1000000 * HIDWORD(v18) + (unsigned int)v18;
      v10 = v13 >= v19;
      v20 = v13 - v19;
      v21 = (v20 != 0) & (unsigned __int8)v10 ? v20 / 0x3E8 : 0LL;
    }
    else
    {
      v21 = 0xFFFFFFFFLL;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v21) < 1 )
      break;
    v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v14, v17);
    if ( v22 < 1 )
      break;
    v17 -= v22;
    v14 = (unsigned int *)((char *)v14 + v22);
    if ( !v17 )
      goto LABEL_22;
  }
  if ( v17 == 4 )
    return 0;
LABEL_22:
  v24 = v49;
  v25 = bswap32(v49);
  v49 = v25;
  if ( !v24 )
  {
    v31 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v31);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
    }
    return 1;
  }
  v26 = v25;
  v27 = (void *)(v25 + 1LL);
  memset(ptr, 0, sizeof(ptr));
  ptr[0] = qvector_reserve((pthread_mutex_t *)ptr, nullptr, (unsigned __int64)v27, 1u);
  memset((char *)ptr[0] + (unsigned __int64)ptr[1], 0, (size_t)v27 - (unsigned __int64)ptr[1]);
  ptr[1] = v27;
  *((_BYTE *)ptr[0] + v26) = 0;
  if ( v12 )
  {
    v28 = (char *)ptr[0];
    v29 = v49;
    goto LABEL_25;
  }
  v32 = qtime64();
  v33 = 1000000 * HIDWORD(v32) + (unsigned int)v32;
  v10 = v7 >= v33;
  v34 = v7 - v33;
  if ( v34 == 0 || !v10 )
  {
    v28 = (char *)ptr[0];
    v29 = v49;
    LODWORD(v35) = 0;
    goto LABEL_33;
  }
  v28 = (char *)ptr[0];
  v29 = v49;
  v35 = v34 / 0x3E8;
  if ( ((v34 / 0x3E8) & 0x80000000) == 0 )
  {
LABEL_33:
    v36 = qtime64();
    v30 = (unsigned int)v36 + 1000LL * (int)v35 + 1000000 * HIDWORD(v36);
    if ( !v29 )
      goto LABEL_48;
LABEL_34:
    v37 = v29;
    while ( 1 )
    {
      if ( v30 )
      {
        v38 = qtime64();
        v39 = 1000000 * HIDWORD(v38) + (unsigned int)v38;
        v10 = v30 >= v39;
        v40 = v30 - v39;
        v41 = (v40 != 0) & (unsigned __int8)v10 ? v40 / 0x3E8 : 0LL;
      }
      else
      {
        v41 = 0xFFFFFFFFLL;
      }
      if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v41) < 1 )
        break;
      v42 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v28, v37);
      if ( v42 <= 0 )
        break;
      v37 -= v42;
      v28 += v42;
      if ( !v37 )
        goto LABEL_43;
    }
    if ( v29 == v37 )
      goto LABEL_48;
LABEL_43:
    v43 = *(_OWORD *)ptr;
    v44 = ptr[2];
    memset(ptr, 0, sizeof(ptr));
    v50 = v43;
    v51 = v44;
    v45 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v45);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
      v44 = v51;
      v43 = v50;
    }
    *(_OWORD *)a2 = v43;
    *(_QWORD *)(a2 + 16) = v44;
    v23 = 1;
    v46 = ptr[0];
    if ( ptr[0] )
      goto LABEL_49;
    return v23;
  }
LABEL_25:
  v30 = 0;
  if ( v29 )
    goto LABEL_34;
LABEL_48:
  v23 = 0;
  v46 = ptr[0];
  if ( ptr[0] )
  {
LABEL_49:
    ptr[1] = nullptr;
    qfree(v46);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v23;
}
// A4E5C: conditional instruction was optimized away because x25.8 is in (1..FFFFFFFF)
