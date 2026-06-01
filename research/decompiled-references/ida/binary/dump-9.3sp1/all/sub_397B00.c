__int64 __fastcall sub_397B00(__int64 a1, double a2)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  _QWORD *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r13
  _QWORD *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // [rsp+10h] [rbp-128h]
  __int64 v20; // [rsp+18h] [rbp-120h]
  __int64 v21; // [rsp+28h] [rbp-110h] BYREF
  __int64 v22; // [rsp+30h] [rbp-108h]
  __int128 v23; // [rsp+38h] [rbp-100h]
  __int64 v24; // [rsp+48h] [rbp-F0h]
  __int64 v25; // [rsp+50h] [rbp-E8h]
  __int64 v26; // [rsp+58h] [rbp-E0h]
  __int128 v27; // [rsp+60h] [rbp-D8h]
  __int64 v28; // [rsp+70h] [rbp-C8h]
  __int128 v29; // [rsp+78h] [rbp-C0h]
  char v30; // [rsp+88h] [rbp-B0h]
  __int64 tinfo_property; // [rsp+90h] [rbp-A8h]
  __int128 v32; // [rsp+98h] [rbp-A0h]
  __int64 v33; // [rsp+A8h] [rbp-90h]
  __int64 v34; // [rsp+B0h] [rbp-88h]
  __int64 v35; // [rsp+B8h] [rbp-80h]
  __int128 v36; // [rsp+C0h] [rbp-78h]
  __int64 v37; // [rsp+D0h] [rbp-68h]
  __int128 v38; // [rsp+D8h] [rbp-60h]
  char v39; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+F8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v21 = 0;
  if ( !(unsigned __int8)sub_381D00(
                           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL),
                           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                           (__int64)&v21,
                           2) )
    goto LABEL_5;
  v3 = sub_36D390(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v3 )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    v3 = sub_389330(&v21, *(_QWORD *)(a1 + 128), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), -1);
  }
  else
  {
    a2 = 0.0;
    v22 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 16;
    v23 = 0;
    v27 = 0;
    v29 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      v20 = *(_QWORD *)(a1 + 128);
      copy_tinfo_t();
      if ( !(_BYTE)v25 )
        copy_tinfo_t();
      v11 = v30 & 0xF0;
      if ( (v30 & 0xF0) == 0xC0 )
        v11 = HIDWORD(v24);
      if ( v11 <= 0x10 )
        v11 = getinf();
      if ( v11 - 208 <= 0x2F )
      {
        tinfo_property = 0;
        a2 = 0.0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v37 = 0;
        v32 = 0;
        v36 = 0;
        v38 = 0;
        if ( (v11 & 0xFFFFFF0F) != 0 )
        {
          HIDWORD(v33) = v11;
          LOBYTE(v11) = -64;
        }
        v39 = v11;
        copy_tinfo_t();
        if ( (unsigned __int8)calc_retloc() )
        {
          v12 = v36;
          *(_QWORD *)&v36 = v27;
          *(_QWORD *)&v27 = v12;
          LODWORD(v12) = v35;
          LODWORD(v35) = v26;
          LODWORD(v26) = v12;
        }
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v13 = tinfo_property;
        if ( tinfo_property )
        {
          v19 = v32;
          if ( (_QWORD)v32 )
          {
            v14 = 0;
            do
            {
              v15 = (_QWORD *)(v13 + 80 * v14);
              clear_tinfo_t();
              v16 = v15[5];
              if ( v16 )
              {
                v15[6] = 0;
                qfree(v16);
              }
              v17 = v15[2];
              if ( v17 )
              {
                v15[3] = 0;
                qfree(v17);
              }
              ++v14;
              cleanup_argloc();
              v13 = tinfo_property;
            }
            while ( v19 != v14 );
          }
          *(_QWORD *)&v32 = 0;
          qfree(v13);
        }
      }
      if ( (unsigned __int8)create_tinfo() )
      {
        LOBYTE(v18) = sub_32CB80(&v21, v20);
        v3 = v18;
      }
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v5 = v22;
    if ( v22 )
    {
      v6 = v23;
      if ( (_QWORD)v23 )
      {
        v7 = 0;
        do
        {
          v8 = (_QWORD *)(v5 + 80 * v7);
          clear_tinfo_t();
          v9 = v8[5];
          if ( v9 )
          {
            v8[6] = 0;
            qfree(v9);
          }
          v10 = v8[2];
          if ( v10 )
          {
            v8[3] = 0;
            qfree(v10);
          }
          ++v7;
          cleanup_argloc();
          v5 = v22;
        }
        while ( v6 != v7 );
      }
      *(_QWORD *)&v23 = 0;
      qfree(v5);
      if ( (_BYTE)v3 )
        goto LABEL_5;
LABEL_19:
      sub_2B4E70((__int64)"AUTOHIDE NONE\n"
                          "Sorry, cannot delete return value.\n"
                          "Please edit the function prototype instead");
      goto LABEL_6;
    }
  }
  if ( !(_BYTE)v3 )
    goto LABEL_19;
LABEL_5:
  sub_397700(a1, (const char *)&v21, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), 0, 0, a2);
  v3 = 1;
LABEL_6:
  clear_tinfo_t();
  return v3;
}
