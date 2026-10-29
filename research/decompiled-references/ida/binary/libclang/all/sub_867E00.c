__int64 __fastcall sub_867E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rax
  int v10; // r8d
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rdx
  int v14; // ecx
  bool v15; // si
  unsigned __int8 v16; // di
  bool v17; // al
  char v18; // al
  unsigned int v19; // ebp
  _QWORD *v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  size_t v26; // r8
  const void *v27; // r11
  __int64 v28; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  char v32; // r8
  char v33; // al
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  _QWORD *v39; // [rsp+8h] [rbp-1C0h]
  __int64 v40; // [rsp+8h] [rbp-1C0h]
  __int64 v41; // [rsp+8h] [rbp-1C0h]
  int v42; // [rsp+10h] [rbp-1B8h]
  int v43; // [rsp+10h] [rbp-1B8h]
  __int64 v44; // [rsp+18h] [rbp-1B0h]
  size_t v45; // [rsp+18h] [rbp-1B0h]
  int v46; // [rsp+20h] [rbp-1A8h]
  const void *v47; // [rsp+28h] [rbp-1A0h]
  bool v48; // [rsp+3Fh] [rbp-189h] BYREF
  _QWORD v49[2]; // [rsp+40h] [rbp-188h] BYREF
  unsigned int v50; // [rsp+50h] [rbp-178h] BYREF
  char v51; // [rsp+54h] [rbp-174h]
  unsigned int v52; // [rsp+90h] [rbp-138h]
  __int128 v53; // [rsp+98h] [rbp-130h] BYREF
  void *ptr; // [rsp+A8h] [rbp-120h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-118h]
  _BYTE v56[72]; // [rsp+B8h] [rbp-110h] BYREF
  _QWORD v57[2]; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+110h] [rbp-B8h]
  int v59; // [rsp+118h] [rbp-B0h]
  __int64 v60; // [rsp+120h] [rbp-A8h]
  __int64 v61; // [rsp+128h] [rbp-A0h]
  void *v62[2]; // [rsp+130h] [rbp-98h] BYREF
  _BYTE v63[64]; // [rsp+140h] [rbp-88h] BYREF
  char v64; // [rsp+180h] [rbp-48h]
  char v65; // [rsp+181h] [rbp-47h]

  v7 = *(_QWORD **)(a1 + 16);
  LOBYTE(v59) = v59 | 1;
  v51 &= ~1u;
  v58 = 0;
  v61 = 0;
  v62[0] = v63;
  v62[1] = (void *)0x800000000LL;
  v65 = 0;
  v50 = 0;
  v39 = v7;
  v57[0] = sub_6A34D0(a3);
  v57[1] = v8;
  v9 = (__int64 *)sub_6A34F0(a3);
  v10 = 1;
  v11 = *v9;
  v64 &= ~2u;
  v12 = *(_DWORD *)a3 == 7;
  v58 = v11;
  if ( v12 )
    v10 = !sub_6A3500(a3);
  v52 = v10;
  ptr = v56;
  v55 = 0x800000000LL;
  v53 = 0;
  if ( (v10 & 1) != 0 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
  }
  else
  {
    LOBYTE(v52) = (2 * sub_6A34E0(a3)) | v52 & 0xFD;
    v24 = sub_6A3510(a3);
    v26 = 8 * v25;
    v27 = (const void *)v24;
    v28 = (unsigned int)v55;
    v29 = (8 * v25) >> 3;
    v30 = (unsigned int)v55 + v29;
    if ( HIDWORD(v55) < v30 )
    {
      v47 = v27;
      v46 = v29;
      v45 = v26;
      sub_25D6060(&ptr, v56, v30, 8);
      v27 = v47;
      LODWORD(v29) = v46;
      v28 = (unsigned int)v55;
      v26 = v45;
    }
    if ( v26 )
    {
      v42 = v29;
      memcpy((char *)ptr + 8 * v28, v27, v26);
      LODWORD(v29) = v42;
      LODWORD(v28) = v55;
    }
    LODWORD(v55) = v29 + v28;
    v49[0] = sub_6A34D0(a3);
    v49[1] = v31;
    if ( sub_69F610(v49) )
    {
      v48 = 0;
      LOBYTE(v49[0]) = 0;
      v44 = sub_6A3510(a3);
      v43 = v34;
      v35 = sub_6A34D0(a3);
      v37 = sub_824B30(v39, v35, v36, v44, v43, &v53, (__int64 *)&v53 + 1, &v48, v49);
      v15 = v48;
      v16 = v49[0];
      v14 = v37 & 0xFFFFFFF;
      v52 = (16 * v37) | v52 & 0xF;
      v32 = (4 * (v49[0] & 1)) | (8 * v48) | v52 & 0xF3;
      LOBYTE(v52) = v32;
    }
    else
    {
      v32 = v52;
      v14 = v52 >> 4;
      v16 = (v52 & 4) != 0;
      v15 = (v52 & 8) != 0;
    }
    v33 = v32;
    v13 = v53;
    v10 = v32 & 1;
    v17 = (v33 & 2) != 0;
  }
  v60 = v13;
  v59 = (16 * v14) | (8 * v15) | (4 * v16) | v10 | (2 * v17);
  v61 = *((_QWORD *)&v53 + 1);
  sub_820970((__int64)v62, (__int64)&ptr);
  if ( ptr != v56 )
    free(ptr);
  v18 = sub_6A3540(a3);
  v64 = v18 & 1 | v64 & 0xFE;
  v65 = *(_BYTE *)(a3 + 4) & 1;
  if ( (unsigned __int8)sub_85F440(
                          a1,
                          (_DWORD *)a4,
                          *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL) | 1LL,
                          (__int64)v57,
                          (__int64)&v50,
                          1u)
    && (v21 = *(_QWORD **)(a1 + 16),
        v40 = *(_QWORD *)(a4 + 8),
        v22 = sub_AC6DA0(a4),
        (unsigned __int8)sub_83BCC0(v22, v40, a1, v21, 1u))
    && (v41 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL),
        v23 = sub_AC6DA0(a4),
        (unsigned __int8)sub_83BCC0(v23, v41, a1, v21, 0)) )
  {
    v19 = sub_8435C0(a1, a2, (__int64)&v50, a4);
  }
  else
  {
    v19 = 0;
  }
  if ( v50 > 1 )
    sub_69F740((__int64)&v50);
  if ( v62[0] != v63 )
    free(v62[0]);
  return v19;
}

