__int64 __fastcall sub_188E6E0(__int64 *a1, unsigned int a2, __int64 a3, double a4, double a5)
{
  __int64 v6; // r12
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 *v20; // rsi
  void *v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // eax
  char v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  __int64 v36; // r12
  void *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  unsigned __int64 v43; // r14
  unsigned __int64 i; // r15
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rax
  __m128 *v51; // rax
  __m128 *v52; // r14
  char v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  _QWORD *v58; // rsi
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rdx
  char v63; // al
  _QWORD *v64; // r13
  unsigned __int64 v65; // rax
  _QWORD *v66; // r13
  unsigned __int64 v67; // r14
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // rbx
  __int16 v71; // ax
  __int64 v72; // rax
  void (*v73)(); // rdx
  void (*v74)(); // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rsi
  __int64 *v78; // [rsp-10h] [rbp-188h]
  unsigned int v79; // [rsp+Ch] [rbp-16Ch]
  __int16 *v80; // [rsp+10h] [rbp-168h]
  __int64 v81; // [rsp+18h] [rbp-160h]
  unsigned __int64 v82; // [rsp+20h] [rbp-158h]
  __int64 v83; // [rsp+20h] [rbp-158h]
  __m128 *v84; // [rsp+28h] [rbp-150h]
  __int64 v86; // [rsp+58h] [rbp-120h]
  __int64 v87; // [rsp+60h] [rbp-118h]
  __int16 v88; // [rsp+7Eh] [rbp-FAh] BYREF
  _BYTE v89[16]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v90; // [rsp+90h] [rbp-E8h]
  unsigned int v91; // [rsp+A0h] [rbp-D8h]
  _QWORD v92[6]; // [rsp+B0h] [rbp-C8h] BYREF
  char v93[16]; // [rsp+E0h] [rbp-98h] BYREF
  void *ptr; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v95; // [rsp+F8h] [rbp-80h]
  _BYTE v96[120]; // [rsp+100h] [rbp-78h] BYREF

  v6 = a3 + 72;
  v9 = sub_B72690(a3 + 72);
  result = v9 - 64;
  if ( v9 )
    v9 -= 64LL;
  if ( (*(_BYTE *)(a3 + 84) & 0x40) == 0 && *(char *)(a3 + 28) >= 0 )
  {
    sub_183ABA0((__int64)v92, (__int64)a1, v6, v8, v10, v11);
    v14 = (_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v14 + 16LL) != 26 )
      sub_F63050(*v14, a1, *v14, v13);
    sub_18B0530(a1, a2);
    v15 = (__int64 *)v9;
    v16 = 0;
    sub_1884910((__int64)a1, a2, v15, 0, v17, v18);
    sub_1837F10(v92, v93, a2);
    v19 = *(_QWORD *)(a3 + 80);
    if ( (v19 & 0x2000000000000000LL) != 0 )
      v16 = *(_QWORD *)(a3 + 176);
    v84 = nullptr;
    if ( (v19 & 0x2000000000000000LL) != 0 )
      v84 = *(__m128 **)(a3 + 184);
    v20 = a1;
    sub_1885FB0((__int64)v89, (__int64)a1, a2, v16);
    v23 = *(_QWORD *)(v16 + 16);
    if ( (v23 & 4) != 0 )
      v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    v25 = v24;
    v26 = v24 - 64;
    v27 = 256;
    v86 = a3;
    if ( !v25 )
      v26 = 0;
    v28 = (__int64)&v88;
    v88 = 256;
    v80 = &v88;
    v81 = v26;
    v29 = *(_DWORD *)(v16 + 24);
    v95 = 0x800000000LL;
    v79 = v29;
    ptr = v96;
    do
    {
      v30 = *(_BYTE *)v80;
      if ( *(_BYTE *)v80 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v81 + 104) + 96LL), *(_QWORD *)(v81 + 104), (__int64)v21, v28, v27, v22);
        v35 = *(_QWORD *)(v81 + 128);
        if ( (*(_BYTE *)(v35 + 32) & 1) != 0 )
          v36 = sub_B969C0(v35);
        else
          v36 = *(_QWORD *)(v35 + 32);
        sub_7052B0((__int64 *)(*(_QWORD *)(v81 + 104) + 96LL), *(_QWORD *)(v81 + 104), v31, v32, v33, v34);
        v20 = *(__int64 **)(v81 + 104);
        v37 = (void *)(v36 + 24LL * *(unsigned int *)(*(_QWORD *)(v81 + 128) + 20LL));
        sub_7052B0(v20 + 12, (__int64)v20, v38, v39, v40, v41);
        v42 = *(_QWORD *)(v81 + 128);
        if ( (*(_BYTE *)(v42 + 32) & 1) != 0 )
          v43 = sub_B969C0(v42);
        else
          v43 = *(_QWORD *)(v42 + 32);
      }
      else
      {
        v43 = sub_1845530(v81, (__int64)v20, (__int64)v21, v28, v27, v22);
        v37 = v21;
      }
      for ( i = v43; v37 != (void *)i; LODWORD(v95) = v95 + 1 )
      {
        while ( 1 )
        {
          if ( v30 == (*(_BYTE *)(i + 12) & 1) )
          {
            v45 = sub_1839D10(*(__int64 **)(i + 16), (__int64)v20, (__int64)v21, v28, v27);
            v50 = sub_F63270(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v20, v46, v47, v48, v49);
            if ( v50 )
            {
              v20 = v50;
              v51 = sub_1887770((__int64)v89, (__int64)v50, v84);
              v52 = v51;
              v53 = (char)v21;
              if ( v51 )
                break;
            }
          }
          i += 24LL;
          if ( v37 == (void *)i )
            goto LABEL_32;
        }
        sub_1910D40(a1, a2, v51, 1);
        v57 = sub_1839D10(*(__int64 **)(i + 16), a2, v54, v55, v56);
        v58 = (_QWORD *)a1[31];
        v82 = v57;
        v60 = sub_EEE9A0(32, v58, 8u);
        *(_WORD *)v60 = *(_WORD *)v60 & 0xFE00 | 0x6B;
        if ( unk_2CD7484 )
        {
          v87 = v60;
          sub_EE9B50(107);
          v60 = v87;
        }
        *(_QWORD *)(v60 + 16) = v52;
        v61 = v30 & 1;
        v62 = 2 * (v53 & 1u);
        *(_WORD *)(v60 + 1) &= 0xF801u;
        *(_QWORD *)(v60 + 8) = v82;
        v63 = *(_BYTE *)(v60 + 28);
        *(_DWORD *)(v60 + 24) = v79;
        v83 = v60;
        *(_BYTE *)(v60 + 28) = (2 * (v53 & 1)) | v61 | v63 & 0xFC;
        v64 = (_QWORD *)a1[31];
        v65 = sub_1839D10(*(__int64 **)(i + 16), (__int64)v58, v62, v61, v59);
        v66 = sub_A81910(v64, v65, v79);
        v67 = sub_18406C0((__int64 *)(a1[31] + 2352), 32, 3u);
        sub_B98A00(v67, a1[31], (__int64)v66, v30, v79, v83 & 0xFFFFFFFFFFFFFFFELL, v79, 0);
        v68 = (unsigned int)v95;
        v28 = HIDWORD(v95);
        v20 = v78;
        v69 = (unsigned int)v95 + 1LL;
        if ( v69 > HIDWORD(v95) )
        {
          v20 = (__int64 *)v96;
          sub_2237220(&ptr, v96, v69, 8);
          v68 = (unsigned int)v95;
        }
        v21 = ptr;
        i += 24LL;
        *((_QWORD *)ptr + v68) = v67;
      }
LABEL_32:
      v80 = (__int16 *)((char *)v80 + 1);
    }
    while ( v89 != (_BYTE *)v80 );
    if ( (unsigned __int8)sub_187BB90(a1, v86, 0, ptr, (unsigned int)v95, a4, a5) )
    {
      sub_B88650(v86, 1);
    }
    else
    {
      v70 = sub_EEE9A0(16, (_QWORD *)a1[31], 8u);
      v71 = *(_WORD *)v70 & 0xFE00;
      LOBYTE(v71) = -7;
      *(_WORD *)v70 = v71;
      if ( unk_2CD7484 )
        sub_EE9B50(249);
      *(_BYTE *)(v70 + 1) &= ~2u;
      *(_DWORD *)(v70 + 4) = 0;
      *(_DWORD *)(v70 + 8) = v79;
      *(_DWORD *)(v70 + 12) = v79;
      sub_B74930(v86, v70);
      sub_B8C4D0(v86, a1[31]);
      v72 = sub_15F1120((__int64)a1);
      if ( v72 )
      {
        v74 = nullsub_438;
        v73 = *(void (**)())(*(_QWORD *)v72 + 88LL);
        if ( v73 != nullsub_438 )
          ((void (__fastcall *)(__int64, __int64))v73)(v72, v86);
      }
      sub_186FAF0((__int64)a1, v86, (__int64)v73, (__int64)v74, v75, v76);
    }
    if ( ptr != v96 )
      free(ptr);
    v77 = 16LL * v91;
    operator delete(v90, v77, 8);
    return sub_185CCD0(v92, v77);
  }
  return result;
}
