unsigned __int64 __fastcall sub_8C8800(
        _QWORD *a1,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        _DWORD *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        bool a15)
{
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  bool v24; // dl
  char v25; // r9
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  __int16 v31; // si
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rax
  char v35; // r9
  unsigned __int8 v36; // al
  _DWORD *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  char v43; // [rsp+28h] [rbp-50h]
  int v44; // [rsp+28h] [rbp-50h]
  __int64 v45; // [rsp+30h] [rbp-48h]
  bool v46; // [rsp+30h] [rbp-48h]
  __int64 v47; // [rsp+38h] [rbp-40h]

  v18 = a13;
  v19 = (unsigned int)(a13 + 1);
  v20 = 8 * v19 + 40;
  if ( a15 )
  {
    v21 = a1[274];
    a1[284] += v20;
    v22 = ((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL) + v20;
    if ( a1[275] >= v22 && v21 )
    {
      a1[274] = v22;
      v23 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v39 = sub_8C7D70((__int64)(a1 + 274), v20, 3);
      v18 = a13;
      v23 = v39;
    }
    v24 = a15;
    v25 = 0;
  }
  else
  {
    v45 = 8 * v19 + 40;
    v26 = sub_AC1E00(a6, a9, a10, a12, a13, a14, a7, a8);
    v27 = a1[274];
    v18 = a13;
    v28 = 4LL * (unsigned int)a10;
    if ( v26 )
      v28 = 0;
    v29 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v30 = v45 + v28;
    a1[284] += v30;
    if ( a1[275] >= v30 + v29 && v27 )
    {
      a1[274] = v30 + v29;
      v23 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v44 = v26;
      v40 = sub_8C7D70((__int64)(a1 + 274), v30, 3);
      v18 = a13;
      v26 = v44;
      v23 = v40;
    }
    v24 = v26 == 0;
    v25 = v26 & 3;
  }
  *(_WORD *)v23 = *(_WORD *)v23 & 0xFE00 | 0x22;
  if ( byte_4AD234C )
  {
    v47 = v18;
    v46 = v24;
    v43 = v25;
    sub_AC4570(34);
    v18 = v47;
    v24 = v46;
    v25 = v43;
  }
  v31 = *(_WORD *)(v23 + 1);
  *(_QWORD *)(v23 + 8) = a2;
  *(_DWORD *)(v23 + 32) = a4;
  *(_WORD *)(v23 + 1) = v31 & 0xF801 | (2 * (a3 & 3));
  v32 = a6;
  if ( a11 )
    v32 = a11;
  *(_QWORD *)(v23 + 16) = v32;
  v33 = 0;
  *(_QWORD *)(v23 + 24) = *(_QWORD *)(v23 + 24) & 0xF800FFFFLL
                        | (((unsigned __int64)a15 << 26) | ((unsigned __int64)(a11 != 0) << 24)) & 0xFFFFFFFF07FF0000LL;
  *(_WORD *)(v23 + 24) = v18;
  *(_DWORD *)(v23 + 36) = a14;
  v34 = 0;
  if ( v18 )
  {
    do
    {
      *(_QWORD *)(v23 + 8 * v34 + 48) = *(_QWORD *)(a12 + 8 * v34);
      v34 = (unsigned int)++v33;
    }
    while ( v33 != v18 );
  }
  v35 = (8 * v25) | *(_BYTE *)(v23 + 27) & 0xE7;
  *(_BYTE *)(v23 + 27) = v35;
  if ( (v35 & 4) == 0 && v24 )
  {
    v38 = (_DWORD *)(v23 + 8LL * *(unsigned __int16 *)(v23 + 24) + 48);
    if ( 4 * a10 <= 4 )
    {
      if ( 4 * a10 == 4 )
        *v38 = *a9;
    }
    else
    {
      v33 = (int)a9;
      memmove(v38, a9, 4 * a10);
    }
  }
  *(_QWORD *)(v23 + 40) = a5;
  v36 = sub_76D580(v23, v33);
  *(_BYTE *)(v23 + 1) = (v36 << 6) | *(_BYTE *)(v23 + 1) & 0x3F;
  *(_BYTE *)(v23 + 2) = *(_BYTE *)(v23 + 2) & 0xF8 | (v36 >> 2) & 7;
  return v23;
}

