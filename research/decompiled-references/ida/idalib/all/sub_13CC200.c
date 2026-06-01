bool __fastcall sub_13CC200(
        __int64 *a1,
        _QWORD *a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        char *a8)
{
  _QWORD *v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // r12
  char *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // r15
  size_t v20; // rax
  int v21; // eax
  int v22; // ecx
  char v23; // dl
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r14
  char *v27; // r15
  size_t v28; // rax
  __int64 v29; // rax
  __int64 v32[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(*a1 + 280) & 4) == 0 )
  {
    if ( a8 )
    {
      v14 = a1[5];
      v15 = (char *)sub_228A4B0(a7, a8, 0);
      sub_FD9440((__int64)v32, v14, v15, v16, 1);
      v17 = sub_A05D80(v32);
      if ( v18 )
      {
        v9 = (_QWORD *)v17;
        sub_A04D70(v32);
        if ( v9 )
          goto LABEL_4;
      }
      else
      {
        sub_A04D70(v32);
      }
      v9 = *(_QWORD **)(sub_FDBF00(a1[5], a7, a8, 0, 0) + 16);
    }
    else
    {
      v9 = (_QWORD *)a2[2];
    }
LABEL_4:
    v10 = *v9;
    v11 = sub_228AA60(v9 + 4, *v9, 0);
    if ( v12 == 7 && *(_DWORD *)v11 == 1969516365 && *(_WORD *)(v11 + 4) == 25964 && *(_BYTE *)(v11 + 6) == 115 )
    {
      v24 = sub_228A4B0(v9 + 4, v10, 0);
      v26 = v25;
      v27 = (char *)v24;
      v28 = j__strlen(".framework");
      if ( v28 <= v26 && (!v28 || !memcmp(&v27[v26 - v28], ".framework", v28)) )
      {
        v29 = sub_13C4290(a1[5], v27, v26);
        if ( v29 )
          LODWORD(v9) = v29;
      }
    }
    return (unsigned int)sub_13C7AE0((__int64)a1, a2, a3, (int)v9, a4, a5) > 1;
  }
  v19 = a1[5];
  v20 = j__strlen(".");
  sub_FD9440((__int64)v32, v19, ".", v20, 1);
  v21 = sub_A05D80(v32);
  v22 = 0;
  if ( v23 )
    v22 = v21;
  LODWORD(v9) = v22;
  sub_A04D70(v32);
  return (unsigned int)sub_13C7AE0((__int64)a1, a2, a3, (int)v9, a4, a5) > 1;
}
