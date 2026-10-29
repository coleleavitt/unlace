__int64 __fastcall sub_115320(int a1, unsigned int *a2, _DWORD *a3, int *a4, double a5, double a6)
{
  unsigned int v7; // r13d
  int v9; // eax
  int v10; // ecx
  bool v11; // sf
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // r15d
  int v17; // eax
  unsigned int v18; // r13d
  __int64 v19; // r14
  bool v20; // r14
  char v21; // al
  __int64 ph; // r14
  char v23; // al
  int v24; // r9d
  int v25; // [rsp+10h] [rbp-D8h]
  unsigned int v26; // [rsp+14h] [rbp-D4h]
  unsigned int v27; // [rsp+14h] [rbp-D4h]
  __int16 v28; // [rsp+20h] [rbp-C8h] BYREF
  __int16 v29; // [rsp+22h] [rbp-C6h] BYREF
  unsigned int v30; // [rsp+24h] [rbp-C4h] BYREF
  int v31; // [rsp+28h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+2Ch] [rbp-BCh] BYREF
  int v33; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-B4h] BYREF
  int v35; // [rsp+38h] [rbp-B0h] BYREF
  int v36; // [rsp+3Ch] [rbp-ACh] BYREF
  __int128 v37; // [rsp+40h] [rbp-A8h]
  __int64 v38; // [rsp+50h] [rbp-98h]
  __int64 v39; // [rsp+58h] [rbp-90h]
  __int128 v40; // [rsp+60h] [rbp-88h]
  __int128 v41; // [rsp+70h] [rbp-78h]
  __int128 v42; // [rsp+80h] [rbp-68h]
  __int128 v43; // [rsp+90h] [rbp-58h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-40h]

  v7 = *a2;
  v45 = __readfsqword(0x28u);
  dword_251CB0 = a1;
  v32 = v7;
  v9 = *(_DWORD *)(get_ph() + 16);
  v30 = 0;
  v31 = 0;
  v10 = v9 + 14;
  v11 = v9 + 7 < 0;
  v12 = v9 + 7;
  v29 = 1;
  if ( !v11 )
    v10 = v12;
  v34 = v7;
  v35 = 0;
  v13 = v10 >> 3;
  if ( !v13 )
    v13 = 1;
  v28 = 0;
  v14 = (v13 + dword_251CB0 - 1) / v13;
  dword_251CB0 = v14;
  v33 = v14;
  v36 = v14;
  if ( batch )
  {
    v17 = sub_114E10(0, 0, 0, 1u, v7, v14, v7, v14);
    if ( v17 == 3 )
    {
      get_eah();
      v15 = ~v32;
      sub_8F660(
        (__int64)"The file size 0x%a is too big and does not fit into the address space, truncating to 0x%a\n",
        a5,
        a6);
      v33 = ~v32;
      v36 = ~v32;
LABEL_8:
      if ( v15 )
      {
        v18 = v30;
        v25 = v31;
        v27 = v32;
        ph = get_ph();
        getinf();
        v20 = (*(_BYTE *)(ph + 8) & 4) != 0;
        v44 = 0xFFFFFFFF00000000LL;
        v37 = 0;
        v40 = -1;
        v41 = -1;
        v42 = -1;
        v43 = -1;
        v38 = 0;
        v39 = 0;
        HIDWORD(v39) = setup_selector();
        DWORD1(v37) = v27 + v15;
        HIBYTE(v38) = v20;
        LODWORD(v37) = v27;
        WORD2(v38) = 1281;
        v23 = add_segm_ex();
        v24 = v25;
        if ( v27 + v15 == -1 && v23 )
        {
          set_segm_end();
          v24 = v25;
        }
        if ( !v24 )
          goto LABEL_19;
        v26 = v18 + v24;
      }
      else
      {
        if ( !v31 )
        {
LABEL_10:
          *a2 = v34;
          *a3 = v35;
          *a4 = v36;
          return 1;
        }
        v18 = v30;
        v26 = v30 + v31;
        v19 = get_ph();
        getinf();
        v20 = (*(_BYTE *)(v19 + 8) & 4) != 0;
      }
      v38 = 0;
      v37 = 0;
      v40 = -1;
      v41 = -1;
      v42 = -1;
      v43 = -1;
      v39 = 0;
      v44 = 0xFFFFFFFF00000000LL;
      HIDWORD(v39) = setup_selector();
      *(_QWORD *)&v37 = __PAIR64__(v26, v18);
      WORD2(v38) = 1281;
      HIBYTE(v38) = v20;
      v21 = add_segm_ex();
      if ( v26 == -1 )
      {
        if ( v21 )
          set_segm_end();
      }
LABEL_19:
      set_default_dataseg();
      goto LABEL_10;
    }
    if ( (v17 & 0xFFFFFFF7) == 0 )
    {
LABEL_7:
      v15 = v33;
      goto LABEL_8;
    }
    sub_8F660((__int64)"%s\n", off_230CE0[v17]);
  }
  else if ( (int)sub_8F730(
                   (__int64)"Disassembly memory organization\n"
                            "\n"
                            "%/RAM\n"
                            "  <Create RAM section:C1>>\n"
                            "  <RAM start address:N2:500:30::>\n"
                            "  <RAM size         :N3:500:30::>\n"
                            "\n"
                            "\n"
                            "ROM\n"
                            "  <Create ROM section:C4>>\n"
                            "  <ROM start address:N5:500:30::>\n"
                            "  <ROM size         :N6:500:30::>\n"
                            "\n"
                            "\n"
                            "Input file\n"
                            "  <Loading address:N7:500:30::>\n"
                            "  <File offset    :N8:500:30::>\n"
                            "  <Loading size   :N9:500:30::>\n"
                            "\n"
                            "Additional binary files can be loaded into the database using the\n"
                            "\"File, Load file, Addtional binary file\" command.\n"
                            "\n",
                   sub_115050,
                   &v28,
                   &v30,
                   &v31,
                   &v29,
                   &v32,
                   &v33,
                   &v34,
                   &v35,
                   &v36) > 0 )
  {
    goto LABEL_7;
  }
  return 0;
}

