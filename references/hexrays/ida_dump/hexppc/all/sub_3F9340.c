__int64 __fastcall sub_3F9340(_QWORD *a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  void *v9; // rdi
  void (*v10)(void); // rax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r14
  bool v14; // zf
  int v15; // esi
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // rdi
  __int64 v22; // r14
  __int64 v23; // r14
  int v24; // esi
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r9d
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rdx
  _QWORD *v34; // r14
  char *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // r8
  __int64 v44; // r9
  __int16 v45; // ax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r12
  __int64 (__fastcall *v51)(__int64, __int64); // rax
  __int64 v52; // [rsp+0h] [rbp-218h]
  __int64 v53; // [rsp+0h] [rbp-218h]
  __int64 v54; // [rsp+0h] [rbp-218h]
  unsigned int v55; // [rsp+Ch] [rbp-20Ch]
  unsigned int v56; // [rsp+1Ch] [rbp-1FCh] BYREF
  __int64 v57; // [rsp+20h] [rbp-1F8h] BYREF
  _QWORD *v58; // [rsp+28h] [rbp-1F0h]
  __int64 (__fastcall **v59)(); // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v60; // [rsp+38h] [rbp-1E0h]
  int v61; // [rsp+48h] [rbp-1D0h]
  __int64 (__fastcall **v62)(); // [rsp+50h] [rbp-1C8h]
  __int64 v63; // [rsp+58h] [rbp-1C0h]
  int v64; // [rsp+60h] [rbp-1B8h]
  __int128 v65; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v66; // [rsp+80h] [rbp-198h]
  __int64 v67; // [rsp+88h] [rbp-190h]
  __int64 v68; // [rsp+90h] [rbp-188h]
  char v69; // [rsp+98h] [rbp-180h] BYREF
  unsigned __int16 v70; // [rsp+9Eh] [rbp-17Ah]
  __int64 v71; // [rsp+C0h] [rbp-158h]
  __int64 v72; // [rsp+D0h] [rbp-148h]
  char v73; // [rsp+E9h] [rbp-12Fh]
  __int16 v74; // [rsp+EEh] [rbp-12Ah]
  _QWORD v75[8]; // [rsp+1D8h] [rbp-40h] BYREF

  v4 = a1[104];
  v75[0] = __readfsqword(0x28u);
  sub_3F7810(v4);
  sub_1CEFB0(a1[100]);
  v6 = a1[104];
  v7 = *(_QWORD *)(v6 + 4512);
  sub_14DD30(v6, v7);
  v8 = a1[104];
  v9 = *(void **)(v8 + 4512);
  if ( v9 )
  {
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
    if ( (char *)v10 == (char *)sub_3E6020 )
    {
      v7 = 16;
      operator delete(v9, 0x10u);
    }
    else
    {
      v10();
    }
    v8 = a1[104];
  }
  *(_QWORD *)(v8 + 4512) = 0;
  sub_3F9270((__int64)a1);
  v11 = a1[100];
  if ( *(_BYTE *)(v11 + 137) == 12 && !sub_33ADF0(v11) )
    return 4294967294LL;
  v12 = a1[104];
  if ( *(_DWORD *)(get_ph(v11) + 4) != 15 )
  {
    if ( !under_debugger )
      sub_37EEE0(0x2801u, v7, a3);
LABEL_66:
    BUG();
  }
  v57 = -1;
  sub_CC530(0xBC0u, &v57);
  *(_QWORD *)(v12 + 4416) = v57;
  v13 = a1[104];
  v14 = *(_QWORD *)(v13 + 4416) == -1;
  v15 = *(_DWORD *)(v13 + 360);
  v16 = *(_DWORD *)(v13 + 80);
  v57 = 0;
  v58 = nullptr;
  if ( v14 )
  {
    sub_60440(&v57, v15, v16);
    v59 = nullptr;
    v60 = 0;
    sub_60840((__int64 *)(v13 + 264), &v57);
    sub_312B30((__int64 *)(v13 + 280), (__int64 **)&v59);
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree(v59);
    }
  }
  else
  {
    sub_60440(&v57, v15, v16);
    v59 = nullptr;
    v60 = 0;
    sub_60C00((__int64 *)(v13 + 264), &v57, v17, v18, v19, v20);
    sub_313AE0((__int64 *)(v13 + 280), (__int64)&v59);
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree(v59);
    }
  }
  v21 = v57;
  qfree(v57);
  v22 = a1[104];
  if ( *(_DWORD *)(get_ph(v21) + 4) != 15 )
  {
    if ( !under_debugger )
      sub_37EEE0(0x2800u, (__int64)&v59, 0.0);
    goto LABEL_66;
  }
  v57 = -1;
  sub_CC530(0xBBFu, &v57);
  *(_QWORD *)(v22 + 4424) = v57;
  v23 = a1[104];
  v14 = *(_QWORD *)(v23 + 4424) == -1;
  v24 = *(_DWORD *)(v23 + 392);
  v25 = *(_DWORD *)(v23 + 80);
  v57 = 0;
  v58 = nullptr;
  if ( v14 )
  {
    sub_60440(&v57, v24, v25);
    v59 = nullptr;
    v60 = 0;
    sub_60840((__int64 *)(v23 + 264), &v57);
    sub_312B30((__int64 *)(v23 + 280), (__int64 **)&v59);
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree(v59);
    }
  }
  else
  {
    sub_60440(&v57, v24, v25);
    v59 = nullptr;
    v60 = 0;
    sub_60C00((__int64 *)(v23 + 264), &v57, v26, v27, v28, v29);
    sub_313AE0((__int64 *)(v23 + 280), (__int64)&v59);
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree(v59);
    }
  }
  qfree(v57);
  v30 = sub_CC530(0xBC4u);
  v31 = a1[104];
  if ( v30 == 9 )
  {
    *(_QWORD *)(v31 + 4432) = *(_QWORD *)(a1[1] + 40LL);
    v32 = a1[104];
    v42 = *(_QWORD *)(a1[1] + 40LL);
    if ( *(_DWORD *)(get_ph(3012) + 4) != 15 )
      goto LABEL_40;
    goto LABEL_38;
  }
  *(_QWORD *)(v31 + 4432) = -1;
  v32 = a1[104];
  if ( *(_QWORD *)(v32 + 4416) == -1 )
  {
    v42 = *(_QWORD *)(a1[1] + 40LL);
    if ( *(_DWORD *)(get_ph(3012) + 4) != 15 )
LABEL_40:
      sub_3E67E0(0.0, 3012, (__int64)&v59);
LABEL_38:
    v57 = -1;
    sub_CC530(0xBC5u, &v57, v42);
    *(_QWORD *)(v32 + 4416) = v57;
  }
  v33 = a1[1];
  v34 = *(_QWORD **)(v33 + 920);
  if ( !*(_BYTE *)(a1[100] + 148LL) || *(int *)(a2 + 96) <= 1 )
    goto LABEL_17;
  v66 = -1;
  v36 = &v69;
  v67 = 0;
  v68 = 0;
  v65 = -1;
  do
  {
    *(_WORD *)v36 = 0;
    v36 += 40;
    *((_WORD *)v36 - 19) = 0;
    *((_WORD *)v36 - 18) = 0;
    *((_DWORD *)v36 - 2) = 0;
    *((_WORD *)v36 - 17) = 0;
    *((_OWORD *)v36 - 2) = 0;
    *((_QWORD *)v36 - 2) = 0;
  }
  while ( v75 != (_QWORD *)v36 );
  v52 = *(_QWORD *)(v33 + 40);
  if ( (int)decode_insn(&v65, v52, v33, v75, 0, 0, 0.0) > 0
    && (_WORD)v67 == 88
    && (v71 & 0xFFFF00000000FF00LL) == 0x1E000000000400LL
    && v72 == 16 )
  {
    v53 = v52 + WORD1(v67);
    if ( (int)decode_insn(&v65, v53, v53, v37, v38, v39, 0.0) > 0 )
    {
      v45 = v67;
      v46 = v53;
      v47 = 1;
      if ( (_WORD)v67 != 4 )
      {
LABEL_46:
        if ( v45 == 236
          && v73 == 1
          && v74 == (_WORD)v47
          && (int)decode_insn(&v65, v46 + WORD1(v67), v46, v47, v43, v44, 0.0) > 0
          && (_WORD)v67 == 329 )
        {
          v48 = v72 + 16 * v65;
          v49 = *(_QWORD *)(*(_QWORD *)(a1[100] + 24LL) + 16LL);
          if ( v48 != v49 )
          {
            if ( v48 == -1 )
              v49 = -1;
            else
              v49 &= v48;
          }
          v34[16] = v49;
        }
        goto LABEL_24;
      }
      if ( HIWORD(v71) == 1 )
      {
        v55 = v70;
        v54 = WORD1(v67) + v53;
        decode_insn(&v65, v54, v54, v70, v43, v44, 0.0);
        v47 = v55;
        v46 = v54;
        v45 = v67;
        goto LABEL_46;
      }
    }
  }
LABEL_24:
  v33 = a1[1];
LABEL_17:
  v57 = (__int64)off_4D6BA0;
  v58 = v34 + 8;
  *((_QWORD *)&v60 + 1) = -1;
  v61 = -1;
  v59 = off_4C8EF0;
  v63 = -1;
  v64 = -1;
  *(_QWORD *)&v60 = off_4C8ED0;
  v62 = off_4C8ED0;
  if ( !(unsigned __int8)sub_1CBB80((__int64)&v57, &v56, v33, a2) )
    return v56;
  sub_3F4CB0(v34);
  if ( v34[13] == -1 )
    return v56;
  v40 = a1[1];
  v41 = *(_QWORD *)(v40 + 928);
  if ( !v41 )
  {
    v50 = *(_QWORD *)(v40 + 1504);
    v51 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 312LL);
    if ( v51 == sub_3F4E30 )
    {
      v41 = operator new(0x198u);
      sub_3F4D70(v41, v50, v40);
    }
    else
    {
      v41 = v51(*(_QWORD *)(v40 + 1504), v40);
    }
    *(_QWORD *)(v40 + 928) = v41;
  }
  if ( (unsigned __int8)sub_195CE0(v41, (__int64)&v59) )
    return v56;
  else
    return 4294967283LL;
}
