__int64 __fastcall sub_D24230(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rdx
  void *v14; // rax
  __int64 v15; // r13
  void *v16; // r12
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 **v19; // rbx
  void *v20; // r12
  unsigned __int64 v21; // r12
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // r13
  __int64 v27; // [rsp+8h] [rbp-D0h] BYREF
  char v28; // [rsp+1Fh] [rbp-B9h] BYREF
  __int64 v29; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v31[48]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v32; // [rsp+60h] [rbp-78h] BYREF
  __int128 v33; // [rsp+68h] [rbp-70h]
  __int64 v34; // [rsp+78h] [rbp-60h]
  __int64 *v35; // [rsp+80h] [rbp-58h]
  char *v36; // [rsp+88h] [rbp-50h]
  __int64 v37; // [rsp+90h] [rbp-48h]

  v27 = a3;
  if ( (unsigned __int8)sub_D0B8A0(a4) )
  {
    sub_DFF4A0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DA4BF0(a2, v27, a5, 4) && (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DA4610(a2, v27, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v15 = sub_CDA6B0(a5);
    v16 = sub_D0B7C0(a4);
    v17 = sub_CDA650(a5);
    v18 = *(__int64 **)(a5 + 32);
    v32 = nullptr;
    v33 = 0;
    v19 = &v32;
    LODWORD(v34) = 1;
    v35 = v18;
    v36 = (char *)(v17 * (_QWORD)v16 + v15);
    goto LABEL_27;
  }
  if ( v10 != 2 )
  {
    v11 = (unsigned int)sub_CDA8B0(a5);
    v29 = v11;
    if ( !(unsigned __int8)sub_CDA990(a5) )
      v11 = sub_CDA8F0((unsigned int *)a5);
    v30 = v11;
    v32 = &v30;
    *((_QWORD *)&v33 + 1) = &v27;
    v35 = &v29;
    v28 = 0;
    *(_QWORD *)&v33 = a2;
    v34 = a5;
    v36 = &v28;
    v37 = a4;
    if ( !v10 )
    {
      v14 = sub_D0B7C0(a4);
      if ( (unsigned __int64)v14 > v29 - v30 )
        sub_D24060((__int64)&v32);
      if ( v28 && (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
      {
LABEL_5:
        *(_BYTE *)(a1 + 48) = 0;
        return a1;
      }
      v11 = v30;
    }
    v12 = sub_D1E130(a4) + v11;
    if ( v12 || !(unsigned __int8)sub_CDA990(a5) )
    {
      v13 = v12;
      goto LABEL_20;
    }
    if ( *(_BYTE *)(sub_CDA220(a5) + 60) )
    {
      v13 = 0;
LABEL_20:
      sub_CDA6F0((__int64)v31, a5, v13);
      sub_DFF520(a1);
      *(_BYTE *)(a1 + 48) = 1;
      sub_DFF560(v31);
      return a1;
    }
    v23 = *(unsigned int *)(a5 + 40);
    v24 = *(_QWORD *)(a5 + 32);
    v19 = (__int64 **)v31;
    sub_DFF460(v31, v24, v23);
LABEL_27:
    sub_DFF520(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_DFF560(v19);
    return a1;
  }
  v20 = sub_D0B7C0(a4);
  v21 = (unsigned __int64)v20 + sub_CDAA10(a5);
  if ( v21 > 1 )
  {
    v32 = (__int64 *)sub_DFB160(*(_QWORD *)(a2 + 400), v27);
    v25 = (unsigned __int8 **)sub_E0FFE0(a2, &v32, 2381, 0);
    v26 = v25;
    if ( v25 )
    {
      sub_AC60B0(v25, v21, 3u);
      sub_AC60B0(v26, 1, 2u);
      sub_AC60B0(v26, 0, 2u);
    }
  }
  v22 = *(__int64 **)(a5 + 32);
  v32 = (__int64 *)v21;
  v33 = 0;
  LODWORD(v34) = 2;
  v35 = v22;
  sub_DFF520(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_DFF560(&v32);
  return a1;
}

