/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100037B28
// Address: 0x0000000100037B28

//----- (0000000100037B28) ----------------------------------------------------
__int64 __fastcall sub_100037B28(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned __int8 *a5, char a6)
{
  unsigned int v9; // w20
  _QWORD *v11; // x0
  _DWORD *v12; // x8
  int v13; // w25
  __int64 v14; // x9
  _DWORD *v15; // x26
  _DWORD *v16; // x0
  _QWORD *v17; // x1
  __int64 v18; // x8
  unsigned __int8 *v19; // x0
  size_t v20; // x25
  _QWORD *v21; // x1
  __int64 v22; // x8
  unsigned __int8 *v23; // x0
  _QWORD *v24; // x1
  __int64 v25; // x8
  unsigned __int8 *v26; // x0
  __int64 v27; // x8
  _QWORD *v28; // x1
  __int64 v29; // x8
  _QWORD *v30; // x8
  unsigned __int8 *v31; // x20
  __int64 result; // x0
  __int64 v33; // x19
  __int64 v34; // x19
  __int64 v35; // x19
  __int64 v36; // x19
  unsigned __int8 v37[8]; // [xsp+8h] [xbp-C8h] BYREF
  void *v38; // [xsp+10h] [xbp-C0h]
  __int64 v39; // [xsp+18h] [xbp-B8h]
  __int64 v40; // [xsp+20h] [xbp-B0h]
  unsigned __int8 v41[8]; // [xsp+28h] [xbp-A8h] BYREF
  void *v42; // [xsp+30h] [xbp-A0h]
  size_t v43; // [xsp+38h] [xbp-98h]
  size_t v44; // [xsp+40h] [xbp-90h]
  unsigned __int8 v45[8]; // [xsp+48h] [xbp-88h] BYREF
  void *v46; // [xsp+50h] [xbp-80h]
  __int64 v47; // [xsp+58h] [xbp-78h]
  __int64 v48; // [xsp+60h] [xbp-70h]
  unsigned __int8 v49[8]; // [xsp+68h] [xbp-68h] BYREF
  void *v50; // [xsp+70h] [xbp-60h]
  __int64 v51; // [xsp+78h] [xbp-58h]
  __int64 v52; // [xsp+80h] [xbp-50h]

  v9 = a3;
  if ( (a3 & 0x80000000) != 0 )
  {
    if ( (_DWORD)a3 == -1 || qword_1000A4A00 <= (unsigned __int64)-(int)a3 )
      goto LABEL_21;
  }
  else if ( *(_QWORD *)(a1[1] + 8LL) <= (unsigned __int64)(unsigned int)a3 )
  {
LABEL_21:
    set_error_string(0);
    set_qerrno();
    v27 = a1[4];
    if ( !v27 )
    {
      v28 = (_QWORD *)a1[3];
      if ( a1[5] )
      {
        v29 = 0;
      }
      else
      {
        v28 = qvector_reserve(a1 + 3, v28, 1u, 0x20u);
        a1[3] = v28;
        v29 = a1[4];
      }
      v30 = &v28[4 * v29];
      *(_BYTE *)v30 = 2;
      v30[2] = 0;
      v30[3] = 0;
      v30[1] = 0;
      v27 = a1[4] + 1LL;
      a1[4] = v27;
    }
    v31 = (unsigned __int8 *)(a1[3] + 32 * v27 - 32);
    sub_1000368F0(v31);
    sub_100036528((__int64)a1, (__int64)v31);
    return 0;
  }
  v11 = a1 + 9;
  v12 = (_DWORD *)a1[9];
  v13 = *((_DWORD *)a1 + 8);
  v14 = a1[10];
  if ( a1[11] < (unsigned __int64)(v14 + 1) )
  {
    v15 = a2;
    v16 = qvector_reserve(v11, (_QWORD *)a1[9], v14 + 1, 4u);
    a2 = v15;
    v12 = v16;
    a1[9] = v16;
    v14 = a1[10];
  }
  v12[v14] = v13;
  ++a1[10];
  v47 = 0;
  v48 = 0;
  v45[0] = 5;
  v46 = a2;
  ++a2[6];
  v17 = (_QWORD *)a1[3];
  v18 = a1[4];
  if ( a1[5] < (unsigned __int64)(v18 + 1) )
  {
    v17 = qvector_reserve(a1 + 3, v17, v18 + 1, 0x20u);
    a1[3] = v17;
    v18 = a1[4];
  }
  v19 = (unsigned __int8 *)&v17[4 * v18];
  *v19 = 2;
  *((_QWORD *)v19 + 2) = 0;
  *((_QWORD *)v19 + 3) = 0;
  *((_QWORD *)v19 + 1) = 0;
  ++a1[4];
  move_idcv(v19, v45);
  v41[0] = 7;
  v43 = 0;
  v44 = 0;
  v42 = nullptr;
  v20 = *(_QWORD *)(a4 + 8);
  if ( v20 )
  {
    v42 = qalloc_or_throw(*(_QWORD *)(a4 + 8));
    v44 = v20;
    memcpy(v42, *(const void **)a4, v20);
    v43 = v20;
  }
  v21 = (_QWORD *)a1[3];
  v22 = a1[4];
  if ( a1[5] < (unsigned __int64)(v22 + 1) )
  {
    v21 = qvector_reserve(a1 + 3, v21, v22 + 1, 0x20u);
    a1[3] = v21;
    v22 = a1[4];
  }
  v23 = (unsigned __int8 *)&v21[4 * v22];
  *v23 = 2;
  *((_QWORD *)v23 + 2) = 0;
  *((_QWORD *)v23 + 3) = 0;
  *((_QWORD *)v23 + 1) = 0;
  ++a1[4];
  move_idcv(v23, v41);
  if ( (a6 & 1) == 0 )
  {
    v37[0] = 2;
    v39 = 0;
    v40 = 0;
    v38 = nullptr;
    copy_idcv(v37, a5);
    v49[0] = 2;
    v51 = 0;
    v52 = 0;
    v50 = nullptr;
    copy_idcv(v49, v37);
    v24 = (_QWORD *)a1[3];
    v25 = a1[4];
    if ( a1[5] < (unsigned __int64)(v25 + 1) )
    {
      v24 = qvector_reserve(a1 + 3, v24, v25 + 1, 0x20u);
      a1[3] = v24;
      v25 = a1[4];
    }
    v26 = (unsigned __int8 *)&v24[4 * v25];
    *v26 = 2;
    *((_QWORD *)v26 + 2) = 0;
    *((_QWORD *)v26 + 3) = 0;
    *((_QWORD *)v26 + 1) = 0;
    copy_idcv(v26, v49);
    ++a1[4];
    if ( v49[0] == 5 )
    {
      sub_10003307C((__int64)v50, v49);
    }
    else if ( v49[0] == 7 && v50 )
    {
      v51 = 0;
      qfree(v50);
    }
    if ( v37[0] == 5 )
    {
      sub_10003307C((__int64)v38, v37);
    }
    else if ( v37[0] == 7 && v38 )
    {
      v39 = 0;
      qfree(v38);
    }
    a5 = nullptr;
  }
  result = sub_100037FE0(a1, a5, nullptr, v9);
  if ( v41[0] == 5 )
  {
    v34 = result;
    sub_10003307C((__int64)v42, v41);
    result = v34;
  }
  else if ( v41[0] == 7 && v42 )
  {
    v43 = 0;
    v33 = result;
    qfree(v42);
    result = v33;
  }
  if ( v45[0] == 5 )
  {
    v36 = result;
    sub_10003307C((__int64)v46, v45);
    return v36;
  }
  else if ( v45[0] == 7 && v46 )
  {
    v47 = 0;
    v35 = result;
    qfree(v46);
    return v35;
  }
  return result;
}
// 1000A4A00: using guessed type __int64 qword_1000A4A00;
