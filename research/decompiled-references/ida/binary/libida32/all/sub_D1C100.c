__int64 __fastcall sub_D1C100(__int64 a1, __int64 a2, __int64 a3, int *a4, __int64 a5, char a6)
{
  int v7; // eax
  int v10; // r14d
  int v11; // r15d
  char v12; // al
  unsigned __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rdx
  unsigned __int64 v18; // r12
  unsigned __int64 *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 *v23; // rcx
  unsigned __int64 **v24; // rbx
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned __int64 v29; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v30; // [rsp+10h] [rbp-D8h]
  __int64 v31; // [rsp+18h] [rbp-D0h] BYREF
  char v32; // [rsp+2Fh] [rbp-B9h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v35[48]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 *v36; // [rsp+70h] [rbp-78h] BYREF
  __int128 v37; // [rsp+78h] [rbp-70h]
  __int64 v38; // [rsp+88h] [rbp-60h]
  unsigned __int64 *v39; // [rsp+90h] [rbp-58h]
  char *v40; // [rsp+98h] [rbp-50h]
  int *v41; // [rsp+A0h] [rbp-48h]

  v7 = *a4;
  v31 = a3;
  if ( !v7 )
  {
    sub_DFF4A0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DA4BF0(a2, a3, a5, 4) && (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DA4610(a2, v31, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v20 = sub_CDA6B0(a5);
    v21 = sub_CDA650(a5);
    v22 = *a4;
    v23 = *(unsigned __int64 **)(a5 + 32);
    v36 = nullptr;
    LODWORD(v38) = 1;
    v24 = &v36;
    v39 = v23;
    v37 = 0;
    v40 = (char *)(v20 - v21 * v22);
    goto LABEL_34;
  }
  v11 = *a4;
  if ( v10 != 2 )
  {
    v29 = (unsigned int)sub_CDA8B0(a5);
    v33 = v29;
    v12 = sub_CDA990(a5);
    v13 = v29;
    if ( !v12 )
      v13 = sub_CDA8F0((unsigned int *)a5);
    v14 = v10 == 0;
    v34 = v13;
    v15 = v11;
    v36 = &v34;
    *((_QWORD *)&v37 + 1) = &v31;
    v39 = &v33;
    v32 = 0;
    *(_QWORD *)&v37 = a2;
    v38 = a5;
    v40 = &v32;
    v41 = a4;
    if ( v14 )
    {
      if ( v11 >= 0 && v11 > v13 )
      {
        v30 = v13;
        sub_D1BF50((__int64)&v36);
        v11 = *a4;
        v13 = v30;
        if ( *a4 >= 0 )
        {
LABEL_15:
          if ( v32 && (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
          {
LABEL_5:
            *(_BYTE *)(a1 + 48) = 0;
            return a1;
          }
          v13 = v34;
          v15 = *a4;
          goto LABEL_18;
        }
LABEL_28:
        if ( v11 == 0x80000000 || -v15 > v29 - v13 )
          sub_D1BF50((__int64)&v36);
        goto LABEL_15;
      }
      if ( v11 < 0 )
        goto LABEL_28;
    }
LABEL_18:
    v16 = v13 - v15;
    if ( v13 != v15 || !(unsigned __int8)sub_CDA990(a5) )
    {
      v17 = v16;
      goto LABEL_32;
    }
    if ( *(_BYTE *)(sub_CDA220(a5) + 60) )
    {
      v17 = 0;
LABEL_32:
      sub_CDA6F0((__int64)v35, a5, v17);
      sub_DFF520(a1);
      *(_BYTE *)(a1 + 48) = 1;
      sub_DFF560(v35);
      return a1;
    }
    v27 = *(unsigned int *)(a5 + 40);
    v28 = *(_QWORD *)(a5 + 32);
    v24 = (unsigned __int64 **)v35;
    sub_DFF460(v35, v28, v27);
LABEL_34:
    sub_DFF520(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_DFF560(v24);
    return a1;
  }
  v18 = sub_CDAA10(a5) - v11;
  if ( v18 > 1 )
  {
    v36 = (unsigned __int64 *)sub_DFB160(*(_QWORD *)(a2 + 400), v31);
    v25 = (unsigned __int8 **)sub_E0FFE0(a2, &v36, 2381, 0);
    v26 = v25;
    if ( v25 )
    {
      sub_AC60B0(v25, v18, 3u);
      sub_AC60B0(v26, 1, 2u);
      sub_AC60B0(v26, 0, 2u);
    }
  }
  v19 = *(unsigned __int64 **)(a5 + 32);
  v36 = (unsigned __int64 *)v18;
  v37 = 0;
  LODWORD(v38) = 2;
  v39 = v19;
  sub_DFF520(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_DFF560(&v36);
  return a1;
}

