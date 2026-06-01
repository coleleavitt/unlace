__int64 __fastcall sub_C19BE0(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int16 *v5; // rsi
  int v6; // r8d
  int v7; // r9d
  char v8; // al
  __int64 v9; // rbp
  char v11; // [rsp+Fh] [rbp-429h] BYREF
  __int16 v12; // [rsp+10h] [rbp-428h] BYREF
  __int64 v13; // [rsp+18h] [rbp-420h]
  __int16 v14; // [rsp+20h] [rbp-418h] BYREF
  __int64 v15; // [rsp+28h] [rbp-410h]
  unsigned int v16; // [rsp+30h] [rbp-408h] BYREF
  char v17; // [rsp+34h] [rbp-404h]
  __int64 (__fastcall **v18)(); // [rsp+70h] [rbp-3C8h] BYREF
  char v19; // [rsp+78h] [rbp-3C0h]
  __int64 v20; // [rsp+80h] [rbp-3B8h]
  __int16 *v21; // [rsp+88h] [rbp-3B0h]
  _QWORD *v22; // [rsp+90h] [rbp-3A8h]
  int v23; // [rsp+98h] [rbp-3A0h]
  int v24; // [rsp+9Ch] [rbp-39Ch]
  int v25; // [rsp+A0h] [rbp-398h]
  char v26; // [rsp+A4h] [rbp-394h]
  _QWORD v27[10]; // [rsp+A8h] [rbp-390h] BYREF
  int v28; // [rsp+F8h] [rbp-340h] BYREF
  __int64 v29; // [rsp+100h] [rbp-338h]
  int *v30; // [rsp+108h] [rbp-330h]
  int *v31; // [rsp+110h] [rbp-328h]
  __int64 v32; // [rsp+118h] [rbp-320h]
  __int64 v33; // [rsp+120h] [rbp-318h]
  int v34; // [rsp+128h] [rbp-310h]
  _DWORD *v35; // [rsp+130h] [rbp-308h]
  __int64 v36; // [rsp+138h] [rbp-300h]
  _DWORD v37[4]; // [rsp+140h] [rbp-2F8h] BYREF
  __int64 v38; // [rsp+150h] [rbp-2E8h]
  __int64 v39; // [rsp+158h] [rbp-2E0h]
  int v40; // [rsp+160h] [rbp-2D8h]
  __int64 v41; // [rsp+168h] [rbp-2D0h]
  char v42; // [rsp+170h] [rbp-2C8h]
  __int64 *v43; // [rsp+178h] [rbp-2C0h]
  __int64 v44; // [rsp+180h] [rbp-2B8h]
  __int64 v45; // [rsp+188h] [rbp-2B0h] BYREF
  _DWORD v46[6]; // [rsp+388h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+3A0h] [rbp-98h]
  __int64 v48; // [rsp+3A8h] [rbp-90h]
  __int64 v49; // [rsp+3B0h] [rbp-88h]
  int v50; // [rsp+3B8h] [rbp-80h]
  int v51; // [rsp+3C8h] [rbp-70h] BYREF
  __int64 v52; // [rsp+3D0h] [rbp-68h]
  int *v53; // [rsp+3D8h] [rbp-60h]
  int *v54; // [rsp+3E0h] [rbp-58h]
  __int64 v55; // [rsp+3E8h] [rbp-50h]
  __int64 v56; // [rsp+3F0h] [rbp-48h]
  __int64 v57; // [rsp+3F8h] [rbp-40h]
  __int64 v58; // [rsp+400h] [rbp-38h]

  v14 = 0;
  v12 = 0;
  v18 = &off_2B214A8;
  v21 = &v12;
  v3 = *(_QWORD *)(a2 + 2320);
  v17 &= ~1u;
  v4 = *(_DWORD *)(v3 + 136);
  LOBYTE(v3) = *(_BYTE *)(v3 + 140);
  v20 = a2;
  v15 = 0;
  v25 = v4;
  v26 = v3 & 1;
  v27[0] = &off_2B21540;
  v16 = 0;
  v13 = 0;
  v19 = 0;
  v27[1] = &v18;
  memset(&v27[2], 0, 56);
  v28 = 0;
  v29 = 0;
  v30 = &v28;
  v31 = &v28;
  v35 = v37;
  v36 = 0x200000001LL;
  v22 = v27;
  v43 = &v45;
  v44 = 0x1000000000LL;
  v24 = 2;
  v32 = 0;
  v33 = 0;
  v34 = 1;
  v37[0] = 1;
  v37[2] = 1;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v23 = 1;
  sub_A2B560((__int64)v46, 0, 0, 0);
  v5 = &v14;
  v46[4] = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = &v51;
  v54 = &v51;
  v55 = 0;
  v56 = 0;
  v57 = -1;
  v58 = 0;
  v19 = 1;
  if ( (unsigned __int8)sub_BF9D30(a1, (__int64)&v14, a2, &v11, v6, v7) )
  {
    v8 = v11;
  }
  else
  {
    v5 = (__int16 *)a1;
    v8 = sub_C167C0((__int64)&v18, a1, &v16);
  }
  if ( !v8 || (_BYTE)v14 || (v9 = 0, v16 != 2) )
    v9 = (sub_EC7AA0(a1) << 32) | 2;
  sub_C00040((__int64)&v18, (__int64)v5);
  if ( v16 > 1 )
    sub_A2BBA0((int *)&v16);
  return v9;
}

