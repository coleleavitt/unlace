__int64 __fastcall sub_1CB5030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 v8; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rsi
  __int128 *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  __int64 result; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int8 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  unsigned __int16 v38; // bp
  char v39; // r13
  __int64 v40; // r12
  __int16 v41; // bp
  char v42; // dl
  char v43; // cl
  unsigned __int8 v44; // al
  _QWORD *v45; // rdi
  _QWORD *v46; // rsi
  unsigned __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdi
  unsigned int v50; // r13d
  _QWORD *v51; // rsi
  __int64 v52; // r14
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // rax
  __int64 v55; // r8
  unsigned __int64 v56; // rsi
  __int64 v57; // rbp
  unsigned __int64 v58; // rcx
  unsigned int v59; // ecx
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  int v64; // [rsp+8h] [rbp-A0h]
  __int64 v65; // [rsp+8h] [rbp-A0h]
  _QWORD *v66; // [rsp+8h] [rbp-A0h]
  __int64 v67; // [rsp+10h] [rbp-98h]
  unsigned __int64 v68; // [rsp+10h] [rbp-98h]
  unsigned __int64 v69; // [rsp+18h] [rbp-90h] BYREF
  __int64 v70; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v71; // [rsp+28h] [rbp-80h]
  __int64 v72; // [rsp+30h] [rbp-78h] BYREF
  __int128 v73; // [rsp+40h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-58h]
  __int128 v75; // [rsp+60h] [rbp-48h]

  v8 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v69 = a3;
  v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  v15 = (unsigned int)(v14 - 2);
  if ( (unsigned __int8)(v14 - 2) > 4u )
  {
    if ( (unsigned int)(v14 - 25) <= 1 )
    {
      v69 = sub_A70010(*(_QWORD *)(a1 + 248), a3);
      v8 = v69 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  else
  {
    v69 = sub_A72210(*(_QWORD **)(a1 + 248), a3);
    v8 = v69 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v16 = *(_DWORD *)a2 & 0x7FFFFFFF;
  if ( (_DWORD)v16 != 3 )
  {
    v17 = *(_QWORD *)(a2 + 16);
    v73 = 0;
    *(_OWORD *)ptr = 0;
    v75 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
    {
      v45 = *(_QWORD **)(a1 + 248);
      v46 = (_QWORD *)(*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v17 + 16) & 4) != 0 )
        v46 = (_QWORD *)*v46;
      if ( !v46 )
        BUG();
      v47 = *(v46 - 2);
      if ( !v47 )
      {
        v47 = sub_A7AA70((__int64)v45, (__int64)(v46 - 8), v16, v15, a5, a6);
        v45 = *(_QWORD **)(a1 + 248);
      }
      v48 = sub_E91A00(v45, 0, *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL));
      sub_15AB890((__int64 *)&v73, *(_QWORD **)(a1 + 248), (__int64)v48, ((unsigned __int64)a4 << 32) | a4);
    }
    v18 = *(_QWORD *)(v17 + 40);
    v71 = a4;
    v70 = v18;
    sub_B85890(&v72, v18);
    v19 = &v73;
    v20 = sub_190AE60(a1, (__int64 *)&v73, (__int64)&v70, v17, 0, 0, (__m128i)0LL, a8, 0);
    v21 = v20;
    if ( v20 == 1 )
      goto LABEL_6;
    v23 = v20 & 0xFFFFFFFFFFFFFFFELL;
    v24 = sub_F649E0(*(_QWORD *)(*(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v27 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL);
    v28 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    LOBYTE(v29) = (_BYTE)v28 == 42;
    v30 = v24 & 0xFFFFFFFFFFFFFFF0LL;
    if ( v30 && (_BYTE)v28 == 42 )
    {
      v68 = v30;
      v66 = *(_QWORD **)(a1 + 248);
      v60 = sub_F68450(v27, (__int64)&v73, v28, v29, v25);
      v19 = (__int128 *)v68;
      if ( (unsigned __int8)sub_AC0070(v66, v68, v60, v61, v62) )
      {
        v21 = sub_190ABA0(a1, (_QWORD *)v23, 1, v29, v25, v26, (__m128i)0LL, a8);
        if ( v21 != 1 )
          goto LABEL_37;
        goto LABEL_6;
      }
      v28 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
      LOBYTE(v29) = (_BYTE)v28 == 42;
    }
    if ( (_BYTE)v28 != 33 && !(_BYTE)v29 )
    {
      result = v21;
      if ( (_BYTE)v28 == 48 )
      {
LABEL_7:
        if ( HIDWORD(ptr[1]) )
        {
          v65 = result;
          free(ptr[0]);
          return v65;
        }
        return result;
      }
      if ( !a5
        || (*(_BYTE *)(a5 + 28) & 0x7F) != 0x2F
        || (v31 = *(_QWORD *)(*(_QWORD *)(a5 + 48) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v31 + 16) != 16)
        && ((v63 = *(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v63 + 16) != 16)
         || (v31 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a5 + 48) & 0xFFFFFFFFFFFFFFF0LL), v19, v63, v29)) == 0)
        || ((*(_BYTE *)(v31 + 18) >> 3) & 3) != 1 )
      {
LABEL_38:
        v54 = sub_F67970(&v69, *(_QWORD *)(a1 + 248));
        v56 = *(_QWORD *)(v23 + 8);
        v57 = v54;
        v58 = *(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)&byte_8[v56 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)v56 | (unsigned __int8)*(_QWORD *)&byte_8[v56 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (v58 | ((unsigned __int8)v54 | (unsigned __int8)*(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
        {
          if ( (unsigned __int8)sub_AC0070(*(_QWORD **)(a1 + 248), v56, v54, v58, v55)
            || sub_1BE5710(a1, *(_QWORD *)(v23 + 8), v57, nullptr, nullptr) )
          {
            v59 = 5;
          }
          else
          {
            sub_F67340(*(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL));
            v59 = 1;
          }
          v21 = sub_160A600(a1, v23, v57, v59, (*(_BYTE *)(v23 + 1) >> 1) & 3, 0, 0.0, *(double *)a8.m128_u64, 0);
        }
        result = v21;
        goto LABEL_7;
      }
      v32 = sub_F68450(*(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v19, v28, v29, v25);
      v33 = *(_BYTE *)(v23 + 1);
      v67 = v32;
      v37 = sub_C00A40(v23, (__int64)v19, v34, v35, v36);
      v38 = *(_WORD *)(a5 + 70);
      v64 = v37;
      v39 = (v33 >> 1) & 3;
      v40 = sub_EEE9A0(40, *(_QWORD **)(a1 + 248), 8u);
      v41 = v38 >> 4;
      *(_WORD *)v40 = *(_WORD *)v40 & 0xFE00 | 8;
      if ( unk_2CD7484 )
        sub_EE9B50(8);
      v42 = *(_BYTE *)(v40 + 1);
      v43 = v39 & 3;
      *(_QWORD *)(v40 + 16) = v23;
      v21 = v40;
      *(_QWORD *)(v40 + 24) = v17 | 4;
      *(_BYTE *)(v40 + 1) = v42 & 0xF9 | (2 * v43);
      *(_WORD *)(v40 + 1) &= 0xF807u;
      *(_QWORD *)(v40 + 8) = v67;
      *(_WORD *)(v40 + 32) = *(_WORD *)(v40 + 32) & 0x8000 | v41;
      *(_DWORD *)(v40 + 32) = *(_DWORD *)(v40 + 32) & 0x80007FFF | 0x40000000;
      *(_DWORD *)(v40 + 4) = v64;
      v44 = sub_B63940(v40);
      *(_BYTE *)(v40 + 1) = (v44 << 6) | *(_BYTE *)(v40 + 1) & 0x3F;
      *(_BYTE *)(v40 + 2) = *(_BYTE *)(v40 + 2) & 0xF8 | (v44 >> 2) & 7;
LABEL_37:
      v23 = v21 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_38;
    }
    v21 = sub_19249E0(a1, a4, 4u, v23, 0, v26, (__m128)0LL, a8);
    if ( v21 != 1 )
      goto LABEL_37;
LABEL_6:
    result = 1;
    goto LABEL_7;
  }
  v49 = *(_QWORD *)v8;
  if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) == 33
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33
    && sub_F63050(v49, a3, v16, v15) )
  {
    v50 = 14;
  }
  else
  {
    v50 = 13;
  }
  v51 = *(_QWORD **)(a1 + 248);
  v52 = v51[2383];
  v53 = sub_EEE9A0(16, v51, 8u);
  *(_WORD *)v53 = *(_WORD *)v53 & 0xFE00 | 0x68;
  if ( unk_2CD7484 )
    sub_EE9B50(104);
  *(_DWORD *)(v53 + 4) = a4;
  *(_QWORD *)(v53 + 8) = v52;
  *(_WORD *)(v53 + 1) &= 0xF801u;
  return sub_160A600(a1, v53, v69, v50, 0, 0, a7, *(double *)a8.m128_u64, 0);
}
