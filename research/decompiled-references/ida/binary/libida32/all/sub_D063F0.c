__int64 __fastcall sub_D063F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, __int64 a5, char a6)
{
  bool v7; // zf
  int v10; // r14d
  __int64 v11; // r15
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 **v16; // r12
  __int64 v17; // rdx
  __int64 *v18; // r14
  __int64 *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rcx
  __int64 **v24; // rbx
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned __int16 v29; // [rsp+6h] [rbp-D2h]
  __int64 v30; // [rsp+8h] [rbp-D0h] BYREF
  char v31; // [rsp+1Fh] [rbp-B9h] BYREF
  __int64 v32; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v34[48]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v35; // [rsp+60h] [rbp-78h] BYREF
  __int128 v36; // [rsp+68h] [rbp-70h]
  __int64 v37; // [rsp+78h] [rbp-60h]
  __int64 *v38; // [rsp+80h] [rbp-58h]
  char *v39; // [rsp+88h] [rbp-50h]
  unsigned __int16 *v40; // [rsp+90h] [rbp-48h]

  v7 = *a4 == 0;
  v30 = a3;
  if ( v7 )
  {
    sub_DFF4A0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( (!a6 || (unsigned __int8)sub_DA4BF0(a2, a3, a5, 4) || (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) == 0)
    && (unsigned __int8)sub_DA4610(a2, v30, a5) )
  {
    v10 = *(_DWORD *)(a5 + 24);
    if ( v10 == 1 )
    {
      v20 = sub_CDA6B0(a5);
      v21 = sub_CDA650(a5);
      v22 = *a4;
      v23 = *(__int64 **)(a5 + 32);
      v35 = nullptr;
      LODWORD(v37) = 1;
      v24 = &v35;
      v38 = v23;
      v36 = 0;
      v39 = (char *)(v21 * v22 + v20);
    }
    else
    {
      v29 = *a4;
      if ( v10 == 2 )
      {
        v16 = &v35;
        v18 = (__int64 *)(sub_CDAA10(a5) + v29);
        if ( (unsigned __int64)v18 > 1 )
        {
          v35 = (__int64 *)sub_DFB160(*(_QWORD *)(a2 + 400), v30);
          v25 = (unsigned __int8 **)sub_E0FFE0(a2, &v35, 2381, 0);
          v26 = v25;
          if ( v25 )
          {
            sub_AC60B0(v25, (__int64)v18, 3u);
            sub_AC60B0(v26, 1, 2u);
            sub_AC60B0(v26, 0, 2u);
          }
        }
        v19 = *(__int64 **)(a5 + 32);
        v35 = v18;
        LODWORD(v37) = 2;
        v38 = v19;
        v36 = 0;
        goto LABEL_22;
      }
      v11 = (unsigned int)sub_CDA8B0(a5);
      v32 = v11;
      v12 = sub_CDA990(a5);
      v13 = v11;
      if ( !v12 )
        v13 = sub_CDA8F0((unsigned int *)a5);
      v33 = v13;
      v35 = &v33;
      *((_QWORD *)&v36 + 1) = &v30;
      v38 = &v32;
      v31 = 0;
      *(_QWORD *)&v36 = a2;
      v37 = a5;
      v39 = &v31;
      v40 = a4;
      if ( v10 )
      {
        v14 = v29;
      }
      else
      {
        v14 = v29;
        if ( v11 - v13 < (unsigned __int64)v29 )
        {
          sub_D06240(&v35);
          if ( v31 && (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
            goto LABEL_5;
          v13 = v33;
          v14 = *a4;
        }
      }
      v15 = v13 + v14;
      if ( v15 || !(unsigned __int8)sub_CDA990(a5) )
      {
        v16 = (__int64 **)v34;
        v17 = v15;
        goto LABEL_24;
      }
      if ( *(_BYTE *)(sub_CDA220(a5) + 60) )
      {
        v16 = (__int64 **)v34;
        v17 = 0;
LABEL_24:
        sub_CDA6F0((__int64)v34, a5, v17);
LABEL_22:
        sub_DFF520(a1);
        *(_BYTE *)(a1 + 48) = 1;
        sub_DFF560(v16);
        return a1;
      }
      v27 = *(unsigned int *)(a5 + 40);
      v28 = *(_QWORD *)(a5 + 32);
      v24 = (__int64 **)v34;
      sub_DFF460(v34, v28, v27);
    }
    sub_DFF520(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_DFF560(v24);
    return a1;
  }
LABEL_5:
  *(_BYTE *)(a1 + 48) = 0;
  return a1;
}

