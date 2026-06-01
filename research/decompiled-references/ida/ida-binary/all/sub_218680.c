unsigned __int64 __fastcall sub_218680(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r14
  __int64 v6; // rdi
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  bool v22; // cc
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  struct _Unwind_Exception *v31; // [rsp+0h] [rbp-128h]
  struct _Unwind_Exception *v32; // [rsp+8h] [rbp-120h]
  unsigned int v33; // [rsp+18h] [rbp-110h]
  unsigned int v34; // [rsp+18h] [rbp-110h]
  int v35; // [rsp+18h] [rbp-110h]
  int v36; // [rsp+18h] [rbp-110h]
  int v37; // [rsp+1Ch] [rbp-10Ch]
  char v38; // [rsp+2Dh] [rbp-FBh] BYREF
  char v39; // [rsp+2Eh] [rbp-FAh] BYREF
  char v40; // [rsp+2Fh] [rbp-F9h] BYREF
  char *v41; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v42[4]; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v43; // [rsp+58h] [rbp-D0h]
  __int64 v44; // [rsp+68h] [rbp-C0h]
  __int128 v45; // [rsp+70h] [rbp-B8h]
  __int64 v46; // [rsp+80h] [rbp-A8h]
  __int16 v47; // [rsp+88h] [rbp-A0h]
  _QWORD v48[3]; // [rsp+90h] [rbp-98h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-80h]
  __int64 v50; // [rsp+B8h] [rbp-70h]
  __int128 v51; // [rsp+C0h] [rbp-68h]
  __int64 v52; // [rsp+D0h] [rbp-58h]
  __int16 v53; // [rsp+D8h] [rbp-50h]
  char v54; // [rsp+E3h] [rbp-45h] BYREF
  _BYTE v55[4]; // [rsp+E4h] [rbp-44h] BYREF
  unsigned __int64 v56; // [rsp+E8h] [rbp-40h]

  v3 = 1;
  v6 = *a2;
  v56 = __readfsqword(0x28u);
  LOBYTE(v48[0]) = 0;
  qlread(v6, v48, 1);
  v54 = v48[0];
  if ( SLOBYTE(v48[0]) < 0 )
  {
    v3 = 2;
    v30 = 1;
    if ( (~LOBYTE(v48[0]) & 0xC0) == 0 )
    {
      v3 = 3;
      v30 = 2;
    }
    qlread(*a2, v55, v30);
  }
  v48[0] = &v54;
  v8 = unpack_dw(v48, &v55[v3 - 1]);
  v32 = (struct _Unwind_Exception *)v8;
  if ( v8 )
  {
    v31 = nullptr;
    v9 = 0;
    v10 = 0;
    do
    {
      v22 = *(_BYTE *)a1 <= 7u;
      v42[3] = 0;
      v44 = 0;
      v23 = *a2;
      v46 = 0;
      v47 = 0;
      v43 = 0;
      v45 = 0;
      if ( v22 )
      {
        v40 = 0;
        qlread(v23, &v40, 1);
        v24 = 1;
        v54 = v40;
        if ( v40 < 0 )
        {
          if ( (~v40 & 0xC0) != 0 )
          {
            v35 = 2;
            v27 = 1;
          }
          else if ( (~v40 & 0xE0) != 0 )
          {
            v35 = 4;
            v27 = 3;
          }
          else
          {
            v35 = 5;
            v27 = 4;
          }
          qlread(*a2, v55, v27);
          v24 = v35;
        }
        v48[0] = &v54;
        v15 = (unsigned int)unpack_dd(v48, &v55[v24 - 1]);
      }
      else
      {
        v38 = 0;
        qlread(v23, &v38, 1);
        v11 = 1;
        v54 = v38;
        if ( v38 < 0 )
        {
          if ( (~v38 & 0xC0) != 0 )
          {
            v36 = 2;
            v29 = 1;
          }
          else if ( (~v38 & 0xE0) != 0 )
          {
            v36 = 4;
            v29 = 3;
          }
          else
          {
            v36 = 5;
            v29 = 4;
          }
          qlread(*a2, v55, v29);
          v11 = v36;
        }
        v41 = &v54;
        v12 = unpack_dd(&v41, &v55[v11 - 1]);
        v13 = *a2;
        v33 = v12;
        v39 = 0;
        qlread(v13, &v39, 1);
        v14 = 1;
        v54 = v39;
        if ( v39 < 0 )
        {
          if ( (~v39 & 0xC0) != 0 )
          {
            v37 = 2;
            v28 = 1;
          }
          else if ( (~v39 & 0xE0) != 0 )
          {
            v37 = 4;
            v28 = 3;
          }
          else
          {
            v37 = 5;
            v28 = 4;
          }
          qlread(*a2, v55, v28);
          v14 = v37;
        }
        v42[0] = &v54;
        v15 = v33 | (unsigned __int64)(unpack_dd(v42, &v55[v14 - 1]) << 32);
      }
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
      if ( v16 == v15 )
        v15 = -1;
      v9 = v16 & (v9 + v15);
      if ( *(_BYTE *)a1 <= 7u )
      {
        v17 = (unsigned int)sub_217810(a2);
      }
      else
      {
        v34 = sub_217810(a2);
        v17 = v34 | (unsigned __int64)(sub_217810(a2) << 32);
      }
      v18 = *a3;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
      v49 = 0;
      v48[2] = 0;
      v51 = 0;
      v50 = 0;
      if ( v19 == v17 )
        v17 = -1;
      v52 = 0;
      v10 = v19 & (v10 + v17);
      v20 = a3[1];
      v53 = 0;
      if ( a3[2] < (unsigned __int64)(v20 + 1) )
      {
        v25 = qvector_reserve(a3, v18, v20 + 1, 80);
        *a3 = v25;
        v18 = v25;
        v20 = a3[1];
      }
      v31 = (struct _Unwind_Exception *)((char *)v31 + 1);
      v21 = 80 * v20 + v18;
      *(_WORD *)(v21 + 72) = 0;
      *(_QWORD *)v21 = v9;
      *(_QWORD *)(v21 + 8) = v10;
      *(_QWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 64) = 0;
      *(_OWORD *)(v21 + 24) = 0;
      *(_OWORD *)(v21 + 48) = 0;
      ++a3[1];
    }
    while ( v32 != v31 );
  }
  return v56 - __readfsqword(0x28u);
}
