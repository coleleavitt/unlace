__int64 __fastcall sub_398040(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebp
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r14
  _QWORD *v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r13
  _QWORD *v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int v23; // eax
  __int64 v24; // [rsp+10h] [rbp-128h]
  __int64 v25; // [rsp+18h] [rbp-120h]
  __int64 v26; // [rsp+28h] [rbp-110h] BYREF
  __int64 v27; // [rsp+30h] [rbp-108h] BYREF
  __int128 v28; // [rsp+38h] [rbp-100h]
  __int64 v29; // [rsp+48h] [rbp-F0h]
  __int64 v30; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+60h] [rbp-D8h]
  __int64 v33; // [rsp+70h] [rbp-C8h]
  __int128 v34; // [rsp+78h] [rbp-C0h]
  char v35; // [rsp+88h] [rbp-B0h]
  __int64 tinfo_property; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+98h] [rbp-A0h]
  __int64 v38; // [rsp+A8h] [rbp-90h]
  __int64 v39; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-78h]
  __int64 v42; // [rsp+D0h] [rbp-68h]
  __int128 v43; // [rsp+D8h] [rbp-60h]
  char v44; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v26 = 0;
  if ( !(unsigned __int8)sub_382240(
                           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL),
                           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                           (unsigned __int64)&v26,
                           2,
                           a6) )
    goto LABEL_5;
  v7 = sub_36D8D0(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v7 )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(v26, 24);
    copy_tinfo_t(a1 + 160, &tinfo_property);
    clear_tinfo_t(&tinfo_property);
    v7 = sub_389870(&v26, *(_QWORD *)(a1 + 128), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), -1);
  }
  else
  {
    a2 = 0.0;
    v27 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 16;
    v28 = 0;
    v32 = 0;
    v34 = 0;
    if ( (unsigned __int8)get_tinfo_details(v26, 12, &v27) )
    {
      v15 = *(_QWORD *)(a1 + 128);
      v25 = v15;
      copy_tinfo_t(&v30, a1 + 160);
      if ( !(_BYTE)v30 )
        copy_tinfo_t(&v30, v15 + 264);
      v16 = v35 & 0xF0;
      if ( (v35 & 0xF0) == 0xC0 )
        v16 = HIDWORD(v29);
      if ( v16 <= 0x10 )
        v16 = getinf(99);
      if ( v16 - 208 <= 0x2F )
      {
        tinfo_property = 0;
        a2 = 0.0;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        v42 = 0;
        v37 = 0;
        v41 = 0;
        v43 = 0;
        if ( (v16 & 0xFFFFFF0F) != 0 )
        {
          HIDWORD(v38) = v16;
          LOBYTE(v16) = -64;
        }
        v44 = v16;
        copy_tinfo_t(&v39, &v30);
        if ( (unsigned __int8)calc_retloc(&tinfo_property) )
        {
          v17 = v41;
          *(_QWORD *)&v41 = v32;
          *(_QWORD *)&v32 = v17;
          LODWORD(v17) = v40;
          LODWORD(v40) = v31;
          LODWORD(v31) = v17;
        }
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42);
        }
        cleanup_argloc(&v40);
        clear_tinfo_t(&v39);
        v18 = tinfo_property;
        if ( tinfo_property )
        {
          v24 = v37;
          if ( (_QWORD)v37 )
          {
            v19 = 0;
            do
            {
              v20 = (_QWORD *)(v18 + 80 * v19);
              clear_tinfo_t(v20 + 8);
              v21 = v20[5];
              if ( v21 )
              {
                v20[6] = 0;
                qfree(v21);
              }
              v22 = v20[2];
              if ( v22 )
              {
                v20[3] = 0;
                qfree(v22);
              }
              ++v19;
              cleanup_argloc(v20);
              v18 = tinfo_property;
            }
            while ( v24 != v19 );
          }
          *(_QWORD *)&v37 = 0;
          qfree(v18);
        }
      }
      if ( (unsigned __int8)create_tinfo(&v26, 12, 12, &v27) )
      {
        LOBYTE(v23) = sub_32CEA0(&v26, v25, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL));
        v7 = v23;
      }
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    cleanup_argloc(&v31);
    clear_tinfo_t(&v30);
    v9 = v27;
    if ( v27 )
    {
      v10 = v28;
      if ( (_QWORD)v28 )
      {
        v11 = 0;
        do
        {
          v12 = (_QWORD *)(v9 + 80 * v11);
          clear_tinfo_t(v12 + 8);
          v13 = v12[5];
          if ( v13 )
          {
            v12[6] = 0;
            qfree(v13);
          }
          v14 = v12[2];
          if ( v14 )
          {
            v12[3] = 0;
            qfree(v14);
          }
          ++v11;
          cleanup_argloc(v12);
          v9 = v27;
        }
        while ( v10 != v11 );
      }
      *(_QWORD *)&v28 = 0;
      qfree(v9);
      if ( (_BYTE)v7 )
        goto LABEL_5;
LABEL_19:
      sub_2B5230((__int64)"AUTOHIDE NONE\n"
                          "Sorry, cannot delete return value.\n"
                          "Please edit the function prototype instead");
      goto LABEL_6;
    }
  }
  if ( !(_BYTE)v7 )
    goto LABEL_19;
LABEL_5:
  sub_397C40(a1, (const char *)&v26, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), 0, 0, a2);
  v7 = 1;
LABEL_6:
  clear_tinfo_t(&v26);
  return v7;
}
