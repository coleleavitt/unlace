volatile signed __int32 **__fastcall sub_23BD0(volatile signed __int32 **a1, __int64 a2, char *a3)
{
  char v5; // r14
  char v6; // r13
  char v7; // r11
  char v8; // r10
  char v9; // r15
  __int64 v10; // r9
  __int64 v11; // r8
  char v12; // di
  char v13; // si
  __int64 v14; // rcx
  char v15; // al
  char v16; // dl
  __int64 v17; // rax
  void (__fastcall *v18)(__int128 *, char *, __int64, __int64, __int64, __int64); // rax
  unsigned __int16 v19; // kr00_2
  __m128i v20; // xmm2
  volatile signed __int32 *v21; // rdi
  int v23; // edx
  unsigned __int8 v24; // [rsp+6h] [rbp-102h]
  char v25; // [rsp+7h] [rbp-101h]
  char v26; // [rsp+8h] [rbp-100h]
  __int16 v27; // [rsp+9h] [rbp-FFh]
  char v28; // [rsp+Bh] [rbp-FDh]
  unsigned __int8 v29; // [rsp+Ch] [rbp-FCh]
  __int16 v30; // [rsp+Dh] [rbp-FBh]
  char v31; // [rsp+Fh] [rbp-F9h]
  char v32; // [rsp+1Fh] [rbp-E9h] BYREF
  __int64 v33; // [rsp+20h] [rbp-E8h]
  __int64 v34; // [rsp+28h] [rbp-E0h]
  int v35; // [rsp+30h] [rbp-D8h]
  char v36; // [rsp+34h] [rbp-D4h]
  __m128i v37; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+48h] [rbp-C0h] BYREF
  void (__fastcall *v39)(__int128 *, __int128 *, __int64); // [rsp+58h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-A8h]
  volatile signed __int32 *v41; // [rsp+70h] [rbp-98h] BYREF
  char v42; // [rsp+78h] [rbp-90h]
  char v43; // [rsp+79h] [rbp-8Fh]
  char v44; // [rsp+7Ah] [rbp-8Eh]
  char v45; // [rsp+7Bh] [rbp-8Dh]
  char v46; // [rsp+7Ch] [rbp-8Ch]
  char v47; // [rsp+7Dh] [rbp-8Bh]
  __int16 v48; // [rsp+7Eh] [rbp-8Ah]
  unsigned __int16 v49; // [rsp+80h] [rbp-88h]
  char v50; // [rsp+82h] [rbp-86h]
  char v51; // [rsp+83h] [rbp-85h]
  __int16 v52; // [rsp+84h] [rbp-84h]
  char v53; // [rsp+86h] [rbp-82h]
  char v54; // [rsp+87h] [rbp-81h]
  char v55; // [rsp+88h] [rbp-80h]
  char v56; // [rsp+89h] [rbp-7Fh]
  char v57; // [rsp+8Ah] [rbp-7Eh]
  char v58; // [rsp+8Bh] [rbp-7Dh]
  char v59; // [rsp+8Ch] [rbp-7Ch]
  __m128i v60; // [rsp+90h] [rbp-78h]
  __int128 v61; // [rsp+A0h] [rbp-68h] BYREF
  void (__fastcall *v62)(__int128 *, __int128 *, __int64); // [rsp+B0h] [rbp-58h]
  __int64 v63; // [rsp+B8h] [rbp-50h]
  __int16 v64; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v65; // [rsp+C8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = *a3;
    v6 = a3[1];
    v7 = a3[2];
    v8 = a3[3];
    v9 = a3[14];
    v26 = a3[4];
    v10 = (unsigned __int8)a3[15];
    v11 = (unsigned __int8)a3[16];
    v12 = a3[17];
    v13 = a3[18];
    v14 = (unsigned __int8)a3[19];
    v25 = a3[5];
    v27 = *((_WORD *)a3 + 3);
    v24 = a3[8];
    v29 = a3[9];
    v28 = a3[10];
    v31 = a3[11];
    LOBYTE(v30) = a3[12];
    v15 = a3[13];
    v16 = a3[20];
    HIBYTE(v30) = v15;
    v33 = *(_QWORD *)a3;
    v17 = *((_QWORD *)a3 + 1);
    v36 = v16;
    v34 = v17;
    LODWORD(v17) = *((_DWORD *)a3 + 4);
    v39 = nullptr;
    v35 = v17;
    v18 = *((void (__fastcall **)(__int128 *, char *, __int64, __int64, __int64, __int64))a3 + 7);
    v40 = 0;
    v37 = _mm_loadu_si128((const __m128i *)(a3 + 24));
    v38 = 0;
    v19 = __PAIR16__(v29, v24);
    if ( v18 )
    {
      v18(&v38, a3 + 40, 2, v14, v11, v10);
      v5 = v33;
      v6 = BYTE1(v33);
      v26 = BYTE4(v33);
      v7 = BYTE2(v33);
      v40 = *((_QWORD *)a3 + 8);
      v18 = *((void (__fastcall **)(__int128 *, char *, __int64, __int64, __int64, __int64))a3 + 7);
      v8 = BYTE3(v33);
      v28 = BYTE2(v34);
      v9 = BYTE6(v34);
      v25 = BYTE5(v33);
      v39 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v18;
      LOBYTE(v10) = HIBYTE(v34);
      LOBYTE(v11) = v35;
      v27 = HIWORD(v33);
      v30 = WORD2(v34);
      v12 = BYTE1(v35);
      v19 = v34;
      v31 = BYTE3(v34);
      v13 = BYTE2(v35);
      LOBYTE(v14) = HIBYTE(v35);
      v16 = v36;
    }
    v42 = v5;
    v43 = v6;
    v44 = v7;
    v41 = (volatile signed __int32 *)(&std::string::_Rep::_S_empty_rep_storage + 3);
    v45 = v8;
    v46 = v26;
    v53 = v9;
    v47 = v25;
    v54 = v10;
    v48 = v27;
    v55 = v11;
    v56 = v12;
    v49 = v19;
    v57 = v13;
    v58 = v14;
    v50 = v28;
    v51 = v31;
    v52 = v30;
    v59 = v16;
    v20 = _mm_loadu_si128(&v37);
    v62 = nullptr;
    v63 = 0;
    v60 = v20;
    v61 = 0;
    if ( v18 )
    {
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v18)(&v61, &v38, 2);
      v63 = v40;
      v62 = v39;
    }
    v64 = 256;
    sub_24010((std::string *)&v41);
    if ( HIBYTE(v64) )
    {
      *a1 = v41;
      v41 = (volatile signed __int32 *)(&std::string::_Rep::_S_empty_rep_storage + 3);
    }
    else
    {
      *a1 = (volatile signed __int32 *)(&std::string::_Rep::_S_empty_rep_storage + 3);
    }
    if ( v62 )
      v62(&v61, &v61, 3);
    v21 = v41 - 6;
    if ( v41 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd(v41 - 2, 0xFFFFFFFF);
      }
      else
      {
        v23 = *((_DWORD *)v41 - 2);
        *((_DWORD *)v41 - 2) = v23 - 1;
      }
      if ( v23 <= 0 )
        std::string::_Rep::_M_destroy(v21, &v32);
    }
    if ( v39 )
      v39(&v38, &v38, 3);
  }
  else
  {
    *a1 = (volatile signed __int32 *)(&std::string::_Rep::_S_empty_rep_storage + 3);
  }
  return a1;
}

