unsigned __int64 __fastcall sub_167390(__int64 a1)
{
  char v1; // al
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r13
  __m128i si128; // xmm0
  int v8; // r13d
  FILE *v9; // rax
  char v10; // bp
  const char *v11; // rax
  const char *errdesc; // rax
  const char *v13; // rax
  int v14; // [rsp+Ch] [rbp-10BCh]
  unsigned __int64 v15; // [rsp+18h] [rbp-10B0h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+20h] [rbp-10A8h] BYREF
  FILE *stream; // [rsp+28h] [rbp-10A0h]
  __int64 v18; // [rsp+30h] [rbp-1098h] BYREF
  __int128 v19; // [rsp+38h] [rbp-1090h]
  __int64 v20; // [rsp+50h] [rbp-1078h] BYREF
  __int64 v21; // [rsp+58h] [rbp-1070h]
  __int128 v22; // [rsp+60h] [rbp-1068h]
  int v23; // [rsp+70h] [rbp-1058h]
  unsigned __int64 v24; // [rsp+1088h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v15 = (int)reg_int_op();
  v20 = 40;
  v14 = reg_int_op();
  v22 = 0;
  v21 = 0;
  v23 = 0;
  v18 = 0;
  v19 = 0;
  v1 = sub_159200(&v18);
  v2 = v18;
  if ( !v1 )
  {
    if ( *((_QWORD *)&v19 + 1) <= 0x12u )
    {
      v18 = qvector_reserve();
      v2 = v18;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D39E0);
    *(_QWORD *)&v19 = 19;
    *(_WORD *)(v2 + 16) = 29816;
    *(__m128i *)v2 = si128;
    *(_BYTE *)(v18 + 18) = 0;
    goto LABEL_8;
  }
  v3 = v19;
  if ( (_QWORD)v19 )
  {
    v4 = v19 + 4;
    v5 = v19 + 3;
    v3 = v19 - 1;
    if ( *((_QWORD *)&v19 + 1) >= (unsigned __int64)(v19 + 4) )
      goto LABEL_4;
LABEL_19:
    v18 = qvector_reserve();
    v2 = v18;
    goto LABEL_4;
  }
  v4 = 5;
  v5 = 4;
  if ( *((_QWORD *)&v19 + 1) < 5u )
    goto LABEL_19;
LABEL_4:
  *(_QWORD *)&v19 = v4;
  *(_BYTE *)(v2 + v5) = 0;
  *(_DWORD *)(v18 + v3) = 1954051118;
LABEL_8:
  qstrncpy();
  do
  {
    if ( (unsigned int)sub_8F810(
                         (__int64)"BUTTON NO NONE\n"
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
                                  "<~P~review:t2::100:::>\n"
                                  "<~O~utput file:f3:1:50::>\n",
                         sub_167930,
                         a1,
                         &v15,
                         &v20,
                         byte_254500) != 1
      || batch )
    {
      goto LABEL_13;
    }
  }
  while ( (unsigned __int8)qfileexist()
       && (unsigned int)sub_92580(
                          0,
                          (__int64)"HIDECANCEL\nFile %s already exists, do you want to overwrite it?",
                          byte_254500) != 1 );
  reg_int_op();
  if ( v14 )
    reg_int_op();
  if ( v15 > 6 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v8 = v15;
  if ( (_DWORD)v15 == 6 )
  {
    if ( qfopen() )
    {
      if ( (unsigned int)base2file() )
        goto LABEL_27;
      goto LABEL_34;
    }
  }
  else
  {
    v9 = (FILE *)qfopen();
    if ( v9 )
    {
      stream = v9;
      v16 = off_235560;
      v10 = sub_166A90((__int64)&v16, v8, a1);
      if ( v10 )
      {
        if ( !byte_2544FC )
          goto LABEL_27;
      }
      else
      {
        qfputs();
        if ( ferror(stream) )
          set_qerrno();
        if ( !byte_2544FC )
          goto LABEL_34;
      }
      qfputs();
      if ( ferror(stream) )
        set_qerrno();
      if ( v10 )
      {
LABEL_27:
        v11 = (const char *)qmake_full_path();
        sub_8F740((__int64)"Stored export results in %s\n", v11);
        qfclose();
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree();
        }
        if ( v21 )
          goto LABEL_16;
        return v24 - __readfsqword(0x28u);
      }
LABEL_34:
      errdesc = (const char *)get_errdesc();
      sub_92200((__int64)"%s", errdesc);
      goto LABEL_27;
    }
  }
  v13 = (const char *)get_errdesc();
  sub_92200((__int64)"%s", v13);
LABEL_13:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  if ( v21 )
  {
LABEL_16:
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v24 - __readfsqword(0x28u);
}

