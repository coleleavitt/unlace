_QWORD *__fastcall sub_221E660(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v9; // r12
  char v10; // [rsp+1Fh] [rbp-F9h] BYREF
  unsigned __int64 v11; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-F0h] BYREF
  void *v13[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v15[4]; // [rsp+50h] [rbp-C8h] BYREF
  __int16 v16; // [rsp+70h] [rbp-A8h]
  _QWORD v17[4]; // [rsp+80h] [rbp-98h] BYREF
  __int16 v18; // [rsp+A0h] [rbp-78h]
  _QWORD v19[4]; // [rsp+B0h] [rbp-68h] BYREF
  __int16 v20; // [rsp+D0h] [rbp-48h]

  v3 = *(_QWORD *)(a2 + 184);
  v4 = v3 + a3;
  v11 = v3;
  if ( v4 <= v3 )
  {
LABEL_12:
    *a1 = 0;
    return a1;
  }
  while ( 1 )
  {
    v6 = sub_2219FE0((char *)(a2 + 160), (char *)(a2 + 184), (_QWORD *)(a2 + 192));
    v7 = *(_QWORD *)a2;
    v12 = v6;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, char *))(v7 + 56))(v19, a2, v6, &v10);
    v5 = v19[0];
    if ( v19[0] )
    {
LABEL_10:
      *a1 = v5;
      return a1;
    }
    if ( !v10 )
      break;
LABEL_4:
    v11 = *(_QWORD *)(a2 + 184);
    if ( v4 <= v11 )
      goto LABEL_12;
  }
  if ( v12 > 0x1F )
  {
    if ( (v12 & 1) != 0 )
    {
      sub_221E0F0(v19, a2, v12);
      v5 = v19[0];
      if ( v19[0] )
        goto LABEL_10;
    }
    else
    {
      sub_221E490(v19, a2, v12);
      v5 = v19[0];
      if ( v19[0] )
        goto LABEL_10;
    }
    goto LABEL_4;
  }
  v18 = 770;
  v15[0] = "invalid tag 0x";
  v15[2] = &v12;
  v16 = 3843;
  v17[0] = v15;
  v17[2] = " at offset 0x";
  v19[0] = v17;
  v20 = 3842;
  v19[2] = &v11;
  v9 = std::_V2::generic_category((std::_V2 *)v19);
  sub_2253560(v13, v19);
  sub_22205D0(a1, v13, 22, v9);
  if ( v13[0] != &v14 )
    operator delete(v13[0]);
  return a1;
}
