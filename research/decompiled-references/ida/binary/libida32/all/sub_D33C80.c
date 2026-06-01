__int64 __fastcall sub_D33C80(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, char a6)
{
  int v11; // edx
  __int64 v12; // r15
  char v13; // al
  int v14; // edx
  __int64 v15; // rax
  void **v16; // r14
  __int64 v17; // r15
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // r13
  void *v23; // r12
  __int64 v24; // rax
  __int64 *v25; // rdx
  void *v26; // r12
  unsigned __int64 v27; // r12
  __int64 *v28; // rax
  unsigned __int8 **v29; // rax
  unsigned __int8 **v30; // r13
  int v31; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v32; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v33; // [rsp+10h] [rbp-D8h]
  __int64 v34; // [rsp+18h] [rbp-D0h] BYREF
  char v35; // [rsp+2Fh] [rbp-B9h] BYREF
  __int64 v36; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-B0h] BYREF
  void *v38; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-A0h]
  _QWORD *v40; // [rsp+70h] [rbp-78h] BYREF
  __int128 v41; // [rsp+78h] [rbp-70h]
  __int64 v42; // [rsp+88h] [rbp-60h]
  __int64 *v43; // [rsp+90h] [rbp-58h]
  char *v44; // [rsp+98h] [rbp-50h]
  __int64 *v45; // [rsp+A0h] [rbp-48h]

  v34 = a3;
  if ( (unsigned __int8)sub_D29E30(a4) )
  {
    sub_DFF4A0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( (!a6 || (unsigned __int8)sub_DA4BF0(a2, v34, a5, 4) || (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) == 0)
    && (unsigned __int8)sub_DA4610(a2, v34, a5) )
  {
    v11 = *(_DWORD *)(a5 + 24);
    if ( v11 == 1 )
    {
      v22 = sub_CDA6B0(a5);
      v23 = sub_D0B940((__int64)a4);
      v24 = sub_CDA650(a5);
      v25 = *(__int64 **)(a5 + 32);
      v41 = 0;
      v43 = v25;
      v40 = nullptr;
      LODWORD(v42) = 1;
      v44 = (char *)(v24 * (_QWORD)v23 + v22);
      sub_DFF520(a1);
      *(_BYTE *)(a1 + 48) = 1;
      sub_DFF560(&v40);
      return a1;
    }
    if ( v11 == 2 )
    {
      v16 = (void **)&v40;
      v26 = sub_D0B940((__int64)a4);
      v27 = (unsigned __int64)v26 + sub_CDAA10(a5);
      if ( v27 > 1 )
      {
        v40 = (_QWORD *)sub_DFB160(*(_QWORD *)(a2 + 400), v34);
        v29 = (unsigned __int8 **)sub_E0FFE0(a2, &v40, 2381, 0);
        v30 = v29;
        if ( v29 )
        {
          sub_AC60B0(v29, v27, 3u);
          sub_AC60B0(v30, 1, 2u);
          sub_AC60B0(v30, 0, 2u);
        }
      }
      v28 = *(__int64 **)(a5 + 32);
      v40 = (_QWORD *)v27;
      v41 = 0;
      LODWORD(v42) = 2;
      v43 = v28;
    }
    else
    {
      v31 = *(_DWORD *)(a5 + 24);
      v12 = (unsigned int)sub_CDA8B0(a5);
      v36 = v12;
      v13 = sub_CDA990(a5);
      v14 = v31;
      if ( !v13 )
      {
        v15 = sub_CDA8F0((unsigned int *)a5);
        v14 = v31;
        v12 = v15;
      }
      v37 = v12;
      v16 = &v38;
      v40 = &v37;
      *((_QWORD *)&v41 + 1) = &v34;
      v43 = &v36;
      v35 = 0;
      *(_QWORD *)&v41 = a2;
      v42 = a5;
      v44 = &v35;
      v45 = a4;
      if ( !v14 )
      {
        v18 = (__int64)sub_D0B940((__int64)a4);
        v32 = v36 - v37;
        if ( (unsigned __int8)sub_D31740(a4) && ((unsigned __int8)sub_D33B90((__int64)a4) || -v18 > v37) )
          sub_D28080((__int64)&v40);
        v16 = &v38;
        sub_D279E0((__int64)&v38, a4);
        v19 = 1LL << ((unsigned __int8)v39 - 1);
        v20 = v19 & (unsigned __int64)v38;
        if ( v39 > 0x40 )
        {
          v21 = *((_QWORD *)v38 + ((v39 - 1) >> 6)) & v19;
          v20 = v21;
          if ( v38 )
          {
            v33 = v21;
            operator delete[](v38);
            v20 = v33;
          }
        }
        if ( !v20 && v18 > v32 )
          sub_D28080((__int64)&v40);
        if ( v35 && (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
          goto LABEL_5;
        v12 = v37;
      }
      v17 = sub_D1E250((__int64)a4) + v12;
      if ( v17 || !(unsigned __int8)sub_CDA990(a5) )
      {
        sub_CDA6F0((__int64)&v38, a5, v17);
      }
      else if ( *(_BYTE *)(sub_CDA220(a5) + 60) )
      {
        sub_CDA6F0((__int64)&v38, a5, 0);
      }
      else
      {
        sub_DFF460(&v38, *(_QWORD *)(a5 + 32), *(unsigned int *)(a5 + 40));
      }
    }
    sub_DFF520(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_DFF560(v16);
    return a1;
  }
LABEL_5:
  *(_BYTE *)(a1 + 48) = 0;
  return a1;
}

