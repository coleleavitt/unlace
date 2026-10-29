unsigned __int64 __fastcall sub_C76A10(
        _QWORD *a1,
        char a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        const __m128i *a10,
        __int64 a11,
        _BYTE *src,
        char *a13)
{
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // esi
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r15
  __int64 v23; // rax
  _DWORD *v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+10h] [rbp-48h]
  char v26; // [rsp+18h] [rbp-40h]
  int v27; // [rsp+1Ch] [rbp-3Ch]

  if ( a11 )
  {
    v16 = 16;
    v17 = 32 * *(_DWORD *)(a11 + 8);
  }
  else
  {
    v17 = 0;
    v16 = 16 * (a9 != 0);
  }
  v18 = v17 + v16 + 8 * ((a13 - src) >> 3) + 80;
  v19 = a1[294];
  a1[304] += v18;
  v20 = v18 + ((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= v20 && v19 )
  {
    a1[294] = v20;
    v21 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v27 = a6;
    v26 = a5;
    v25 = a4;
    v24 = a3;
    v23 = sub_962430((__int64)(a1 + 294), v18, v18, 3, a5, a6);
    LODWORD(a6) = v27;
    LOBYTE(a5) = v26;
    v21 = v23;
    a4 = v25;
    a3 = v24;
  }
  sub_C71930(v21, (__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, src, a13);
  return v21;
}

