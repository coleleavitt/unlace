unsigned __int16 *__fastcall sub_8C4D20(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        void *src,
        __int64 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        int a12,
        __int64 a13)
{
  __int64 v18; // rax
  unsigned __int8 v19; // r9
  unsigned __int8 v20; // r8
  const void *v21; // rcx
  unsigned __int16 *v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdx
  void *v25; // rdi
  __int64 v26; // rsi
  unsigned __int8 v27; // al
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-58h]
  __int64 v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  unsigned __int8 v34; // [rsp+10h] [rbp-48h]
  unsigned __int8 v35; // [rsp+14h] [rbp-44h]
  const void *v36; // [rsp+18h] [rbp-40h]

  v18 = a1[274];
  v19 = a9;
  v20 = a10;
  v21 = src;
  v22 = (unsigned __int16 *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v23 = (unsigned int)(8 * a8) + 40LL;
  a1[284] += v23;
  if ( a1[275] >= (unsigned __int64)v22 + v23 && v18 )
  {
    a1[274] = (char *)v22 + v23;
  }
  else
  {
    v33 = a4;
    v31 = a2;
    v29 = sub_8C1090((__int64)(a1 + 274), v23, 3);
    v21 = src;
    v20 = a10;
    v19 = a9;
    a4 = v33;
    v22 = (unsigned __int16 *)v29;
    a2 = v31;
  }
  v24 = 114;
  *v22 = *v22 & 0xFE00 | 0x72;
  if ( byte_4AD234C )
  {
    v36 = v21;
    v35 = v20;
    v34 = v19;
    v32 = a4;
    v30 = a2;
    sub_AC4570(114);
    v24 = *v22;
    v21 = v36;
    v20 = v35;
    v19 = v34;
    a4 = v32;
    a2 = v30;
    LOWORD(v24) = v24 & 0x1FF;
  }
  v25 = v22 + 24;
  *((_QWORD *)v22 + 1) = a2;
  *((_QWORD *)v22 + 2) = a4;
  *((_DWORD *)v22 + 8) = a8;
  *((_QWORD *)v22 + 3) = a13;
  *((_DWORD *)v22 + 1) = a3;
  v26 = *(_DWORD *)v22 & 0xF00001FF;
  *(_DWORD *)v22 = v26
                 | (a12 << 24) & 0x7000000
                 | ((a11 << 23) | (v20 << 22) | (v19 << 21) | (a5 << 19) | (a6 << 20)) & 0xFFFFE00;
  if ( (_WORD)v24 != 115 )
    v25 = v22 + 20;
  if ( (_DWORD)a8 )
  {
    v26 = (__int64)v21;
    memmove(v25, v21, 8LL * (unsigned int)a8);
  }
  v27 = sub_76CEC0((__int64)v22, v26, v24, (int)v21);
  *((_BYTE *)v22 + 1) = (v27 << 6) | *((_BYTE *)v22 + 1) & 0x3F;
  *((_BYTE *)v22 + 2) = v22[1] & 0xF8 | (v27 >> 2) & 7;
  return v22;
}

