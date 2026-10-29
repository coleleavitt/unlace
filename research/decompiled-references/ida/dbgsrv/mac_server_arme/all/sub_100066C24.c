/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066C24
// Address: 0x0000000100066C24

//----- (0000000100066C24) ----------------------------------------------------
void __fastcall sub_100066C24(__int64 a1, __int16 a2, __int64 a3)
{
  _QWORD *v6; // x0
  const char *v7; // x8
  void *v8; // x1
  __int64 v9; // x23
  char *v10; // x8
  void *v11; // x1
  __int64 v12; // x23
  char *v13; // x8
  void *v14; // x1
  __int64 v15; // x23
  char *v16; // x8
  void *v17; // x1
  __int64 v18; // x23
  void *v19; // x1
  __int64 v20; // x23
  void *v21; // x1
  __int64 v22; // x23
  void *v23; // x1
  __int64 v24; // x23
  void *v25; // [xsp+20h] [xbp-50h] BYREF
  __int64 v26; // [xsp+28h] [xbp-48h]
  unsigned __int64 v27; // [xsp+30h] [xbp-40h]

  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  v6 = qvector_reserve(&v25, nullptr, 0xEu, 1u);
  v7 = "SSL_accept : ";
  if ( (a2 & 0x2000) == 0 )
    v7 = "SSL_???    : ";
  if ( (a2 & 0x1000) != 0 )
    v7 = "SSL_connect: ";
  v25 = v6;
  v26 = 14;
  *v6 = *(_QWORD *)v7;
  *(_QWORD *)((char *)v6 + 5) = *(_QWORD *)(v7 + 5);
  *((_BYTE *)v25 + 13) = 0;
  if ( (a2 & 1) != 0 )
  {
    v8 = v25;
    if ( v26 )
      v9 = v26 - 1;
    else
      v9 = 0;
    if ( v27 < v9 + 13 )
    {
      v8 = qvector_reserve(&v25, v25, v9 + 13, 1u);
      v25 = v8;
    }
    v26 = v9 + 13;
    *((_BYTE *)v8 + v9 + 12) = 0;
    v10 = (char *)v25 + v9;
    *(_QWORD *)v10 = *(_QWORD *)" SSL_CB_LOOP";
    *((_DWORD *)v10 + 2) = 1347374924;
  }
  if ( (a2 & 2) != 0 )
  {
    v11 = v25;
    if ( v26 )
      v12 = v26 - 1;
    else
      v12 = 0;
    if ( v27 < v12 + 13 )
    {
      v11 = qvector_reserve(&v25, v25, v12 + 13, 1u);
      v25 = v11;
    }
    v26 = v12 + 13;
    *((_BYTE *)v11 + v12 + 12) = 0;
    v13 = (char *)v25 + v12;
    *(_QWORD *)v13 = *(_QWORD *)" SSL_CB_EXIT";
    *((_DWORD *)v13 + 2) = 1414092869;
  }
  if ( (a2 & 4) != 0 )
  {
    v14 = v25;
    if ( v26 )
      v15 = v26 - 1;
    else
      v15 = 0;
    if ( v27 < v15 + 13 )
    {
      v14 = qvector_reserve(&v25, v25, v15 + 13, 1u);
      v25 = v14;
    }
    v26 = v15 + 13;
    *((_BYTE *)v14 + v15 + 12) = 0;
    v16 = (char *)v25 + v15;
    *(_QWORD *)v16 = *(_QWORD *)" SSL_CB_READ";
    *((_DWORD *)v16 + 2) = 1145128274;
  }
  if ( (a2 & 8) != 0 )
  {
    v17 = v25;
    if ( v26 )
      v18 = v26 - 1;
    else
      v18 = 0;
    if ( v27 < v18 + 14 )
    {
      v17 = qvector_reserve(&v25, v25, v18 + 14, 1u);
      v25 = v17;
    }
    v26 = v18 + 14;
    *((_BYTE *)v17 + v18 + 13) = 0;
    qmemcpy((char *)v25 + v18, " SSL_CB_WRITE", 13);
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v19 = v25;
    if ( v26 )
      v20 = v26 - 1;
    else
      v20 = 0;
    if ( v27 < v20 + 14 )
    {
      v19 = qvector_reserve(&v25, v25, v20 + 14, 1u);
      v25 = v19;
    }
    v26 = v20 + 14;
    *((_BYTE *)v19 + v20 + 13) = 0;
    qmemcpy((char *)v25 + v20, " SSL_CB_ALERT", 13);
  }
  if ( (a2 & 0x10) != 0 )
  {
    v21 = v25;
    if ( v26 )
      v22 = v26 - 1;
    else
      v22 = 0;
    if ( v27 < v22 + 24 )
    {
      v21 = qvector_reserve(&v25, v25, v22 + 24, 1u);
      v25 = v21;
    }
    v26 = v22 + 24;
    *((_BYTE *)v21 + v22 + 23) = 0;
    qmemcpy((char *)v25 + v22, " SSL_CB_HANDSHAKE_START", 23);
  }
  if ( (a2 & 0x20) != 0 )
  {
    v23 = v25;
    if ( v26 )
      v24 = v26 - 1;
    else
      v24 = 0;
    if ( v27 < v24 + 23 )
    {
      v23 = qvector_reserve(&v25, v25, v24 + 23, 1u);
      v25 = v23;
    }
    v26 = v24 + 23;
    *((_BYTE *)v23 + v24 + 22) = 0;
    qmemcpy((char *)v25 + v24, " SSL_CB_HANDSHAKE_DONE", 22);
  }
  sub_100000B44();
  (*(void (__fastcall **)(__int64))(qword_1000A5AD8 + 304))(a1);
  sub_100000B44();
  if ( (a2 & 0x4000) != 0 )
  {
    (*(void (__fastcall **)(__int64))(qword_1000A5AD8 + 200))(a3);
    (*(void (__fastcall **)(__int64))(qword_1000A5AD8 + 192))(a3);
    sub_100000B44();
  }
  if ( v25 )
  {
    v26 = 0;
    qfree(v25);
  }
}
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
