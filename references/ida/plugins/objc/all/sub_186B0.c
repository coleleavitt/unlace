__int64 __fastcall sub_186B0(__int64 *a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  _QWORD *v13; // rbx
  __int64 v15; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v16; // [rsp+8h] [rbp-E0h]
  __int128 v17; // [rsp+18h] [rbp-D0h]
  __int64 v18; // [rsp+28h] [rbp-C0h]
  int v19; // [rsp+30h] [rbp-B8h]
  __int64 v20; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+48h] [rbp-A0h]
  __int128 v22; // [rsp+58h] [rbp-90h]
  __int64 v23; // [rsp+68h] [rbp-80h]
  int v24; // [rsp+70h] [rbp-78h]
  __int64 idati; // [rsp+80h] [rbp-68h] BYREF
  __int128 v26; // [rsp+88h] [rbp-60h]
  __int128 v27; // [rsp+98h] [rbp-50h]
  __int64 v28; // [rsp+A8h] [rbp-40h]
  int v29; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v30; // [rsp+B8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  *(_QWORD *)&v26 = "objc_stringhash_t";
  v20 = 0;
  WORD4(v26) = 256;
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_36;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_36;
  clear_tinfo_t();
  v20 = 0;
  WORD4(v26) = 256;
  *(_QWORD *)&v26 = "objc_classheader_t";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo()
    || get_tinfo_tid() == -1
    || (clear_tinfo_t(),
        v20 = 0,
        WORD4(v26) = 256,
        *(_QWORD *)&v26 = "objc_headeropt_t",
        idati = get_idati(),
        !(unsigned __int8)create_tinfo())
    || get_tinfo_tid() == -1 )
  {
LABEL_36:
    sub_EC40();
    clear_tinfo_t();
    return 0;
  }
  else
  {
    clear_tinfo_t();
    v15 = 0;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    v23 = 0;
    v24 = 1;
    idati = 0;
    v28 = 0;
    v29 = 1;
    v16 = 0;
    v17 = 0;
    v21 = 0;
    v22 = 0;
    v26 = 0;
    v27 = 0;
    if ( (unsigned __int8)sub_ED00((__int64)&v15, a1 + 81, a1 + 84)
      && (unsigned __int8)sub_ED00((__int64)&v20, a1 + 82, a1 + 85)
      && (unsigned __int8)sub_ED00((__int64)&idati, a1 + 83, a1 + 86)
      && (unsigned __int8)sub_EE40(a1 + 87, &v15, "capacity")
      && (unsigned __int8)sub_EE40(a1 + 88, &v15, "mask")
      && (unsigned __int8)sub_EE40(a1 + 89, &v20, "clsOffset")
      && (unsigned __int8)sub_EE40(a1 + 90, &v20, "hiOffset")
      && (unsigned __int8)sub_EE40(a1 + 91, &idati, "count") )
    {
      v1 = sub_EE40(a1 + 92, &idati, "entsize");
    }
    else
    {
      v1 = 0;
    }
    v2 = idati;
    if ( idati )
    {
      v3 = v26;
      if ( (_QWORD)v26 )
      {
        v4 = 0;
        do
        {
          v5 = (_QWORD *)(v2 + 144 * v4);
          clear_tinfo_t();
          if ( v5[5] )
          {
            v5[6] = 0;
            qfree();
          }
          if ( v5[2] )
          {
            v5[3] = 0;
            qfree();
          }
          ++v4;
          v2 = idati;
        }
        while ( v3 != v4 );
      }
      *(_QWORD *)&v26 = 0;
      qfree();
    }
    v6 = v20;
    if ( v20 )
    {
      v7 = v21;
      if ( (_QWORD)v21 )
      {
        v8 = 0;
        do
        {
          v9 = (_QWORD *)(v6 + 144 * v8);
          clear_tinfo_t();
          if ( v9[5] )
          {
            v9[6] = 0;
            qfree();
          }
          if ( v9[2] )
          {
            v9[3] = 0;
            qfree();
          }
          ++v8;
          v6 = v20;
        }
        while ( v7 != v8 );
      }
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    v10 = v15;
    if ( v15 )
    {
      v11 = v16;
      if ( (_QWORD)v16 )
      {
        v12 = 0;
        do
        {
          v13 = (_QWORD *)(v10 + 144 * v12);
          clear_tinfo_t();
          if ( v13[5] )
          {
            v13[6] = 0;
            qfree();
          }
          if ( v13[2] )
          {
            v13[3] = 0;
            qfree();
          }
          ++v12;
          v10 = v15;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v16 = 0;
      qfree();
    }
  }
  return v1;
}
