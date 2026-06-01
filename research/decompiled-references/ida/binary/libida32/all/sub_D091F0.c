__int64 __fastcall sub_D091F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4, __int64 a5, char a6)
{
  bool v7; // zf
  int v10; // ecx
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  char v13; // al
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 **v18; // r12
  __int64 v19; // rdx
  __int64 *v20; // r15
  __int64 *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 *v24; // rdx
  __int64 **v25; // rbx
  unsigned __int8 **v26; // rax
  unsigned __int8 **v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rsi
  int v30; // [rsp+4h] [rbp-D4h]
  __int64 v31; // [rsp+8h] [rbp-D0h] BYREF
  char v32; // [rsp+1Fh] [rbp-B9h] BYREF
  __int64 v33; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v35[48]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v36; // [rsp+60h] [rbp-78h] BYREF
  __int128 v37; // [rsp+68h] [rbp-70h]
  __int64 v38; // [rsp+78h] [rbp-60h]
  __int64 *v39; // [rsp+80h] [rbp-58h]
  char *v40; // [rsp+88h] [rbp-50h]
  unsigned __int64 *v41; // [rsp+90h] [rbp-48h]

  v7 = *a4 == 0;
  v31 = a3;
  if ( v7 )
  {
    sub_DFF4A0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( (!a6 || (unsigned __int8)sub_DA4BF0(a2, a3, a5, 4) || (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) == 0)
    && (unsigned __int8)sub_DA4610(a2, v31, a5) )
  {
    v10 = *(_DWORD *)(a5 + 24);
    if ( v10 == 1 )
    {
      v22 = sub_CDA6B0(a5);
      v23 = *a4 * sub_CDA650(a5);
      v24 = *(__int64 **)(a5 + 32);
      v36 = nullptr;
      LODWORD(v38) = 1;
      v25 = &v36;
      v39 = v24;
      v37 = 0;
      v40 = (char *)(v22 + v23);
    }
    else
    {
      v11 = *a4;
      if ( v10 == 2 )
      {
        v18 = &v36;
        v20 = (__int64 *)(sub_CDAA10(a5) + v11);
        if ( (unsigned __int64)v20 > 1 )
        {
          v36 = (__int64 *)sub_DFB160(*(_QWORD *)(a2 + 400), v31);
          v26 = (unsigned __int8 **)sub_E0FFE0(a2, &v36, 2381, 0);
          v27 = v26;
          if ( v26 )
          {
            sub_AC60B0(v26, (__int64)v20, 3u);
            sub_AC60B0(v27, 1, 2u);
            sub_AC60B0(v27, 0, 2u);
          }
        }
        v21 = *(__int64 **)(a5 + 32);
        v36 = v20;
        LODWORD(v38) = 2;
        v39 = v21;
        v37 = 0;
        goto LABEL_22;
      }
      v30 = *(_DWORD *)(a5 + 24);
      v12 = (unsigned int)sub_CDA8B0(a5);
      v33 = v12;
      v13 = sub_CDA990(a5);
      v14 = v12;
      v15 = v30;
      if ( !v13 )
      {
        v16 = sub_CDA8F0((unsigned int *)a5);
        v15 = v30;
        v14 = v16;
      }
      v34 = v14;
      v36 = &v34;
      *((_QWORD *)&v37 + 1) = &v31;
      v39 = &v33;
      v32 = 0;
      *(_QWORD *)&v37 = a2;
      v38 = a5;
      v40 = &v32;
      v41 = a4;
      if ( !v15 && v12 - v14 < v11 )
      {
        sub_D09030(&v36);
        if ( v32 && (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
          goto LABEL_5;
        v14 = v34;
        v11 = *a4;
      }
      v17 = v14 + v11;
      if ( v17 || !(unsigned __int8)sub_CDA990(a5) )
      {
        v18 = (__int64 **)v35;
        v19 = v17;
        goto LABEL_24;
      }
      if ( *(_BYTE *)(sub_CDA220(a5) + 60) )
      {
        v18 = (__int64 **)v35;
        v19 = 0;
LABEL_24:
        sub_CDA6F0((__int64)v35, a5, v19);
LABEL_22:
        sub_DFF520(a1);
        *(_BYTE *)(a1 + 48) = 1;
        sub_DFF560(v18);
        return a1;
      }
      v28 = *(unsigned int *)(a5 + 40);
      v29 = *(_QWORD *)(a5 + 32);
      v25 = (__int64 **)v35;
      sub_DFF460(v35, v29, v28);
    }
    sub_DFF520(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_DFF560(v25);
    return a1;
  }
LABEL_5:
  *(_BYTE *)(a1 + 48) = 0;
  return a1;
}

