__int64 __fastcall sub_D08730(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, char a6)
{
  bool v7; // zf
  int v10; // ecx
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  char v13; // al
  unsigned __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 *v19; // r14
  unsigned __int64 *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned __int64 *v23; // rdx
  __int64 **v24; // rbx
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned __int64 v29; // [rsp+8h] [rbp-E0h]
  int v30; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v31; // [rsp+10h] [rbp-D8h]
  __int64 v32; // [rsp+18h] [rbp-D0h] BYREF
  char v33; // [rsp+2Fh] [rbp-B9h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v36[48]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v37; // [rsp+70h] [rbp-78h] BYREF
  __int128 v38; // [rsp+78h] [rbp-70h]
  __int64 v39; // [rsp+88h] [rbp-60h]
  unsigned __int64 *v40; // [rsp+90h] [rbp-58h]
  char *v41; // [rsp+98h] [rbp-50h]
  __int64 *v42; // [rsp+A0h] [rbp-48h]

  v7 = *a4 == 0;
  v32 = a3;
  if ( v7 )
  {
    sub_DFF4A0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DA4BF0(a2, a3, a5, 4) && (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DA4610(a2, v32, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v21 = sub_CDA6B0(a5);
    v22 = *a4 * sub_CDA650(a5);
    v23 = *(unsigned __int64 **)(a5 + 32);
    v37 = nullptr;
    LODWORD(v39) = 1;
    v24 = &v37;
    v40 = v23;
    v38 = 0;
    v41 = (char *)(v21 + v22);
    goto LABEL_30;
  }
  v11 = *a4;
  v29 = *a4;
  if ( v10 != 2 )
  {
    v30 = *(_DWORD *)(a5 + 24);
    v12 = (unsigned int)sub_CDA8B0(a5);
    v34 = v12;
    v13 = sub_CDA990(a5);
    v14 = v12;
    v15 = v30;
    if ( !v13 )
    {
      v16 = sub_CDA8F0((unsigned int *)a5);
      v15 = v30;
      v14 = v16;
    }
    v35 = v14;
    v37 = (__int64 *)&v35;
    *((_QWORD *)&v38 + 1) = &v32;
    v40 = &v34;
    v33 = 0;
    *(_QWORD *)&v38 = a2;
    v39 = a5;
    v41 = &v33;
    v42 = a4;
    if ( v15 )
      goto LABEL_18;
    if ( v11 < 0 )
    {
      if ( v11 != 0x8000000000000000LL && -v11 <= v14 )
      {
LABEL_35:
        v14 = v35;
        v29 = v11;
LABEL_18:
        v17 = v14 + v29;
        if ( v14 + v29 || !(unsigned __int8)sub_CDA990(a5) )
        {
          v18 = v17;
          goto LABEL_28;
        }
        if ( *(_BYTE *)(sub_CDA220(a5) + 60) )
        {
          v18 = 0;
LABEL_28:
          sub_CDA6F0((__int64)v36, a5, v18);
          sub_DFF520(a1);
          *(_BYTE *)(a1 + 48) = 1;
          sub_DFF560(v36);
          return a1;
        }
        v27 = *(unsigned int *)(a5 + 40);
        v28 = *(_QWORD *)(a5 + 32);
        v24 = (__int64 **)v36;
        sub_DFF460(v36, v28, v27);
LABEL_30:
        sub_DFF520(a1);
        *(_BYTE *)(a1 + 48) = 1;
        sub_DFF560(v24);
        return a1;
      }
      v31 = v12 - v14;
      sub_D08570(&v37);
      if ( *a4 < 0 || v31 >= v29 )
      {
LABEL_15:
        if ( v33 )
        {
          if ( (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
          {
LABEL_5:
            *(_BYTE *)(a1 + 48) = 0;
            return a1;
          }
          v14 = v35;
          v29 = *a4;
          goto LABEL_18;
        }
        v11 = *a4;
        goto LABEL_35;
      }
    }
    else if ( v12 - v14 >= v11 )
    {
      goto LABEL_18;
    }
    sub_D08570(&v37);
    goto LABEL_15;
  }
  v19 = (__int64 *)(sub_CDAA10(a5) + v11);
  if ( (unsigned __int64)v19 > 1 )
  {
    v37 = (__int64 *)sub_DFB160(*(_QWORD *)(a2 + 400), v32);
    v25 = (unsigned __int8 **)sub_E0FFE0(a2, &v37, 2381, 0);
    v26 = v25;
    if ( v25 )
    {
      sub_AC60B0(v25, (__int64)v19, 3u);
      sub_AC60B0(v26, 1, 2u);
      sub_AC60B0(v26, 0, 2u);
    }
  }
  v20 = *(unsigned __int64 **)(a5 + 32);
  v37 = v19;
  v38 = 0;
  LODWORD(v39) = 2;
  v40 = v20;
  sub_DFF520(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_DFF560(&v37);
  return a1;
}

