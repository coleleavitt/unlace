__int64 __fastcall sub_281E40(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v5; // rax
  int tinfo_size; // eax
  unsigned int v7; // r14d
  __int64 v8; // rdx
  unsigned int v9; // ebp
  char v12; // [rsp+Fh] [rbp-A9h]
  __int64 v13; // [rsp+28h] [rbp-90h] BYREF
  __int64 v14; // [rsp+30h] [rbp-88h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v17; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+60h] [rbp-58h] BYREF
  int v19; // [rsp+68h] [rbp-50h]
  __int16 v20; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v21; // [rsp+78h] [rbp-40h]

  v12 = a4;
  v21 = __readfsqword(0x28u);
  v13 = 0;
  copy_tinfo_t(&v13, a1 + 48);
  set_tinfo_property(&v13, 6, 192);
  v16[0] = 0;
  v16[1] = 0;
  if ( (unsigned __int8)get_tinfo_details(v13, 11, v16) )
  {
    v15 = 0;
    v14 = 0;
    v17 = 0;
    copy_tinfo_t((char *)&v17 + 8, &v14);
    v18 = 0;
    copy_tinfo_t(&v18, &v15);
    v19 = 0;
    v20 = 0;
    clear_tinfo_t(&v14);
    clear_tinfo_t(&v15);
    v5 = v17;
    *(_QWORD *)&v17 = v16[0];
    v16[0] = v5;
    create_tinfo(&v13, 10, 10, &v17);
    clear_tinfo_t(&v18);
    clear_tinfo_t((char *)&v17 + 8);
    clear_tinfo_t(&v17);
  }
  clear_tinfo_t(v16);
  tinfo_size = get_tinfo_size(0, v13, 0);
  v7 = tinfo_size;
  if ( !a4 || (v8 = *(unsigned __int8 *)(a2 + 130), (int)v8 <= tinfo_size) )
  {
    if ( a3 == (unsigned int)get_tinfo_property(v13, 3) )
      goto LABEL_13;
    if ( set_tinfo_property(&v13, 1, (int)a3) )
    {
      v9 = sub_246F00(a1, a2, &v13);
      goto LABEL_12;
    }
    v12 = 0;
    v8 = v7;
  }
  sub_32C760(&v17, *(_QWORD *)(a2 + 112), v8, a3);
  copy_tinfo_t(&v13, &v17);
  clear_tinfo_t(&v17);
  if ( !(unsigned __int8)sub_246F00(a1, a2, &v13) )
  {
    if ( v12 )
    {
      sub_245230(a1, &v13);
      goto LABEL_8;
    }
LABEL_13:
    v9 = 0;
    goto LABEL_12;
  }
LABEL_8:
  v9 = 1;
LABEL_12:
  clear_tinfo_t(&v13);
  return v9;
}
