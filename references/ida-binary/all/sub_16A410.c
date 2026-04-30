unsigned __int64 __fastcall sub_16A410(
        __int64 *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // eax
  __int64 v10; // rsi
  __m128 si128; // xmm0
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r13
  const char *v17; // rsi
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 (__fastcall *v20)(); // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  unsigned int v30; // r13d
  FILE *v31; // r12
  double v32; // xmm4_8
  double v33; // xmm5_8
  char v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  __int64 errdesc; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  bool v48; // dl
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __m128 v53; // xmm4
  __m128 v54; // xmm5
  __int64 v55; // [rsp-8h] [rbp-10C8h]
  char v56; // [rsp+0h] [rbp-10C0h]
  unsigned int v57; // [rsp+4h] [rbp-10BCh]
  __int16 v58; // [rsp+16h] [rbp-10AAh] BYREF
  unsigned __int64 v59; // [rsp+18h] [rbp-10A8h] BYREF
  __int64 (__fastcall **v60)(); // [rsp+20h] [rbp-10A0h] BYREF
  FILE *stream; // [rsp+28h] [rbp-1098h]
  __int64 v62; // [rsp+30h] [rbp-1090h] BYREF
  __int128 v63; // [rsp+38h] [rbp-1088h]
  __int64 v64; // [rsp+50h] [rbp-1070h] BYREF
  __int64 v65; // [rsp+58h] [rbp-1068h]
  __int128 v66; // [rsp+60h] [rbp-1060h]
  int v67; // [rsp+70h] [rbp-1050h]
  _BYTE v68[4104]; // [rsp+80h] [rbp-1040h] BYREF
  unsigned __int64 v69; // [rsp+1088h] [rbp-38h]

  v69 = __readfsqword(0x28u);
  v59 = (int)reg_int_op("default_data_export_format", 0, 0, 0);
  v9 = reg_int_op("def_data_exp_save_clp", 0, 0, 0);
  v10 = *a1;
  si128 = 0;
  v57 = v9;
  v64 = 40;
  v65 = 0;
  v58 = v9 != 0;
  v67 = 0;
  v62 = 0;
  v66 = 0;
  v63 = 0;
  v12 = sub_168D40(&v62, v10);
  v13 = v62;
  if ( !v12 )
  {
    if ( *((_QWORD *)&v63 + 1) <= 0x12u )
    {
      v62 = qvector_reserve(&v62, v62, 19, 1);
      v13 = v62;
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC140);
    *(_QWORD *)&v63 = 19;
    *(_WORD *)(v13 + 16) = 29816;
    *(__m128 *)v13 = si128;
    *(_BYTE *)(v62 + 18) = 0;
    goto LABEL_8;
  }
  v14 = v63;
  if ( (_QWORD)v63 )
  {
    v15 = v63 + 4;
    v16 = v63 + 3;
    v14 = v63 - 1;
    if ( *((_QWORD *)&v63 + 1) >= (unsigned __int64)(v63 + 4) )
      goto LABEL_4;
LABEL_21:
    v62 = qvector_reserve(&v62, v62, v15, 1);
    v13 = v62;
    goto LABEL_4;
  }
  v15 = 5;
  v16 = 4;
  if ( *((_QWORD *)&v63 + 1) < 5u )
    goto LABEL_21;
LABEL_4:
  *(_QWORD *)&v63 = v15;
  *(_BYTE *)(v13 + v16) = 0;
  *(_DWORD *)(v62 + v14) = 1954051118;
LABEL_8:
  v17 = &s1;
  if ( (_QWORD)v63 )
    v17 = (const char *)v62;
  qstrncpy(&unk_8C80E0, v17, 4096);
  do
  {
    v20 = sub_16ADD0;
    v21 = sub_1697D0(
            (int)"BUTTON NO NONE\n"
                 "BUTTON YES Export\n"
                 "BUTTON CANCEL Cancel\n"
                 "Export data\n"
                 "%/%*<##Export as##hex string (~u~nspaced):R>\n"
                 "<hex string (~s~paced):R>\n"
                 "<string ~l~iteral:R>\n"
                 "<C unsigned char array (~h~ex):R>\n"
                 "<C unsigned char array (~d~ecimal):R>\n"
                 "<initialized ~C~ variable:R>\n"
                 "<~r~aw bytes:R>1>\n"
                 "<Save data to clipboard:c4>>\n"
                 "<~P~review:t2::100:::>\n"
                 "<~O~utput file:f3:1:50::>\n",
            (__int64)sub_16ADD0,
            (__int64)a1,
            (__int64)&v59,
            (__int64)&v58,
            (__int64)&v64,
            si128,
            a3,
            a4,
            a5,
            v18,
            v19,
            a8,
            a9,
            (char)&unk_8C80E0);
    v24 = v55;
    if ( v21 != 1 || batch )
      goto LABEL_15;
  }
  while ( (unsigned __int8)qfileexist(&unk_8C80E0)
       && (unsigned int)sub_1698A0(
                          0,
                          (int)"HIDECANCEL\nFile %s already exists, do you want to overwrite it?",
                          &unk_8C80E0) != 1 );
  reg_int_op("default_data_export_format", 1, (unsigned int)v59, 0);
  v29 = v57;
  if ( v57 )
  {
    if ( !v58 )
      goto LABEL_24;
    v48 = 1;
  }
  else
  {
    if ( !v58 )
      goto LABEL_24;
    v29 = (unsigned __int64)"HIDECANCEL\n"
                            "\"Save data to clipboard\" will overwrite the data in the clipboard\n"
                            " each time the dialog will be shown. Are you sure?";
    if ( (unsigned int)sub_1698A0(
                         0,
                         (int)"HIDECANCEL\n"
                              "\"Save data to clipboard\" will overwrite the data in the clipboard\n"
                              " each time the dialog will be shown. Are you sure?") != 1 )
    {
      v28 = 0;
      v58 = 0;
      goto LABEL_24;
    }
    v48 = v58 != 0;
  }
  v29 = 1;
  reg_int_op("def_data_exp_save_clp", 1, v48, 0);
LABEL_24:
  if ( v59 > 6 )
  {
    if ( !under_debugger )
      interr(30448, v29, v27, v28, *(double *)si128.m128_u64);
    BUG();
  }
  v30 = v59;
  if ( (_DWORD)v59 == 6 )
  {
    v31 = (FILE *)qfopen(&unk_8C80E0, "wb+");
    if ( v31 )
    {
      if ( (unsigned int)base2file(v31, 0, *a1, a1[1]) )
        goto LABEL_29;
      goto LABEL_38;
    }
  }
  else
  {
    v31 = (FILE *)qfopen(&unk_8C80E0, "w+");
    if ( v31 )
    {
      v60 = exp_file_sink_t___vtable;
      stream = v31;
      v34 = sub_169B10((__int64)&v60, v30, a1, *(double *)si128.m128_u64, a3, a4, a5, v32, v33, a8, a9);
      if ( v34 )
      {
        if ( !byte_8C80C8 )
          goto LABEL_29;
      }
      else
      {
        qfputs("\n... (string truncated)\n", stream);
        if ( ferror(stream) )
          set_qerrno(2021);
        if ( !byte_8C80C8 )
          goto LABEL_38;
      }
      qfputs("\n// *WARNING* One or more selections were skipped as they could not be interpreted as c data\n", stream);
      if ( ferror(stream) )
        set_qerrno(2021);
      if ( v34 )
      {
LABEL_29:
        v20 = (__int64 (__fastcall *)())qmake_full_path(v68, 4096, &unk_8C80E0);
        sub_169700(
          (int)"Stored export results in %s\n",
          (__int64)v20,
          v35,
          v36,
          v37,
          v38,
          si128,
          a3,
          a4,
          a5,
          v39,
          v40,
          a8,
          a9,
          v56);
        qfclose(v31);
        if ( v62 )
        {
          *(_QWORD *)&v63 = 0;
          qfree(v62, v20, v22, v23, v24);
        }
        v25 = v65;
        if ( v65 )
          goto LABEL_18;
        return v69 - __readfsqword(0x28u);
      }
LABEL_38:
      errdesc = get_errdesc(&unk_8C80E0, 0xFFFFFFFFLL);
      sub_169630((int)"%s", errdesc, v42, v43, v44, v45, si128, a3, a4, a5, v46, v47, a8, a9, v56);
      goto LABEL_29;
    }
  }
  v20 = (__int64 (__fastcall *)())get_errdesc(&unk_8C80E0, 0xFFFFFFFFLL);
  sub_169630((int)"%s", (__int64)v20, v49, v50, v51, v52, si128, a3, a4, a5, v53, v54, a8, a9, v56);
LABEL_15:
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62, v20, v22, v23, v24);
  }
  v25 = v65;
  if ( v65 )
  {
LABEL_18:
    *(_QWORD *)&v66 = 0;
    qfree(v25, v20, v22, v23, v24);
  }
  return v69 - __readfsqword(0x28u);
}
