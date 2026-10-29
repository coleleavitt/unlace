__int64 __fastcall sub_120D6F0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r12
  char *v3; // r15
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  char *v7; // rbp
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, _QWORD *); // rdx
  char v10; // al
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, _QWORD *); // rdx
  char v13; // al
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, _QWORD *); // rdx
  char v16; // al
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, _QWORD *); // rdx
  char v19; // al
  void **v20; // rbp
  void **v21; // rbx
  __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64, _QWORD *); // rdx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, _QWORD *); // rdx
  char v27; // bl
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64, _QWORD *); // rdx
  char *v30; // [rsp+0h] [rbp-B8h]
  char v31; // [rsp+Fh] [rbp-A9h]
  char v32; // [rsp+Fh] [rbp-A9h]
  char v33; // [rsp+Fh] [rbp-A9h]
  char v34; // [rsp+Fh] [rbp-A9h]
  void *v35; // [rsp+10h] [rbp-A8h] BYREF
  char *v36; // [rsp+18h] [rbp-A0h]
  void *v37[2]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v38[16]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v39[4]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v40; // [rsp+70h] [rbp-48h]

  sub_120D4C0((__int64)&v35, **(_QWORD **)a1, a2);
  v3 = (char *)v35;
  v4 = *(_QWORD *)(a1 + 8);
  v30 = v36;
  v5 = (v36 - (_BYTE *)v35) >> 7;
  v6 = (v36 - (_BYTE *)v35) >> 5;
  if ( v5 > 0 )
  {
    v7 = (char *)v35 + 128 * v5;
    v2 = v38;
    while ( 1 )
    {
      v37[0] = v38;
      sub_120B5E0(v37, *(_BYTE **)v3, *(_QWORD *)v3 + *((_QWORD *)v3 + 1));
      v17 = sub_112C5D0(v4);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 96LL);
      v40 = 260;
      v39[0] = v37;
      v19 = v18(v17, v39);
      if ( v37[0] != v38 )
      {
        v34 = v19;
        operator delete(v37[0]);
        v19 = v34;
      }
      if ( v19 )
        goto LABEL_16;
      v37[0] = v38;
      sub_120B5E0(v37, *((_BYTE **)v3 + 4), *((_QWORD *)v3 + 4) + *((_QWORD *)v3 + 5));
      v8 = sub_112C5D0(v4);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 96LL);
      v40 = 260;
      v39[0] = v37;
      v10 = v9(v8, v39);
      if ( v37[0] != v38 )
      {
        v31 = v10;
        operator delete(v37[0]);
        v10 = v31;
      }
      if ( v10 )
      {
        LOBYTE(v2) = v30 == v3 + 32;
        goto LABEL_17;
      }
      v37[0] = v38;
      sub_120B5E0(v37, *((_BYTE **)v3 + 8), *((_QWORD *)v3 + 8) + *((_QWORD *)v3 + 9));
      v11 = sub_112C5D0(v4);
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 96LL);
      v40 = 260;
      v39[0] = v37;
      v13 = v12(v11, v39);
      if ( v37[0] != v38 )
      {
        v32 = v13;
        operator delete(v37[0]);
        v13 = v32;
      }
      if ( v13 )
      {
        LOBYTE(v2) = v30 == v3 + 64;
        goto LABEL_17;
      }
      v37[0] = v38;
      sub_120B5E0(v37, *((_BYTE **)v3 + 12), *((_QWORD *)v3 + 12) + *((_QWORD *)v3 + 13));
      v14 = sub_112C5D0(v4);
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 96LL);
      v40 = 260;
      v39[0] = v37;
      v16 = v15(v14, v39);
      if ( v37[0] != v38 )
      {
        v33 = v16;
        operator delete(v37[0]);
        v16 = v33;
      }
      if ( v16 )
      {
        LOBYTE(v2) = v30 == v3 + 96;
        goto LABEL_17;
      }
      v3 += 128;
      if ( v3 == v7 )
      {
        v6 = (v30 - v3) >> 5;
        break;
      }
    }
  }
  switch ( v6 )
  {
    case 2LL:
LABEL_39:
      v37[0] = v38;
      sub_120B5E0(v37, *(_BYTE **)v3, *(_QWORD *)v3 + *((_QWORD *)v3 + 1));
      v28 = sub_112C5D0(v4);
      v29 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v28 + 96LL);
      v40 = 260;
      v39[0] = v37;
      LODWORD(v2) = v29(v28, v39);
      if ( v37[0] != v38 )
        operator delete(v37[0]);
      if ( (_BYTE)v2 )
        goto LABEL_16;
      v3 += 32;
LABEL_35:
      v37[0] = v38;
      sub_120B5E0(v37, *(_BYTE **)v3, *(_QWORD *)v3 + *((_QWORD *)v3 + 1));
      v25 = sub_112C5D0(v4);
      v26 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 96LL);
      v39[0] = v37;
      v40 = 260;
      v27 = v26(v25, v39);
      if ( v37[0] != v38 )
        operator delete(v37[0]);
      if ( !v27 )
        break;
LABEL_16:
      LOBYTE(v2) = v30 == v3;
      goto LABEL_17;
    case 3LL:
      v37[0] = v38;
      sub_120B5E0(v37, *(_BYTE **)v3, *(_QWORD *)v3 + *((_QWORD *)v3 + 1));
      v23 = sub_112C5D0(v4);
      v24 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v23 + 96LL);
      v40 = 260;
      v39[0] = v37;
      LODWORD(v2) = v24(v23, v39);
      if ( v37[0] != v38 )
        operator delete(v37[0]);
      if ( (_BYTE)v2 )
        goto LABEL_16;
      v3 += 32;
      goto LABEL_39;
    case 1LL:
      goto LABEL_35;
  }
  LODWORD(v2) = 1;
LABEL_17:
  v20 = (void **)v36;
  v21 = (void **)v35;
  if ( v36 != v35 )
  {
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 4;
        if ( v20 == v21 )
          goto LABEL_20;
      }
      v21 += 4;
    }
    while ( v20 != v21 );
LABEL_20:
    v21 = (void **)v35;
  }
  if ( v21 )
    operator delete(v21);
  return (unsigned int)v2;
}
