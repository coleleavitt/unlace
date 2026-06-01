unsigned __int64 __fastcall sub_EF2EA0(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *src,
        __int64 a8,
        int a9,
        int a10,
        void *a11,
        __int64 a12)
{
  int v13; // r10d
  const void *v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int16 v20; // ax
  __int64 v21; // r15
  void *v22; // rdi
  __int64 v24; // rax
  int v25; // [rsp+Ch] [rbp-4Ch]
  int v26; // [rsp+Ch] [rbp-4Ch]
  int v27; // [rsp+10h] [rbp-48h]
  int v29; // [rsp+14h] [rbp-44h]
  int v30; // [rsp+14h] [rbp-44h]
  const void *v31; // [rsp+18h] [rbp-40h]

  v13 = a3;
  v16 = src;
  v17 = 8 * (a8 + a12 + 1) + 56;
  v18 = a1[294];
  a1[304] += v17;
  v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v17 + v19 && v18 )
  {
    a1[294] = v17 + v19;
  }
  else
  {
    v30 = a6;
    v26 = a2;
    v24 = sub_986170((__int64)(a1 + 294), v17, v17, 3, (__int64)src, a6);
    v16 = src;
    LODWORD(a6) = v30;
    v19 = v24;
    v13 = a3;
    a2 = v26;
  }
  v20 = *(_WORD *)v19 & 0xFE00;
  LOBYTE(v20) = -116;
  *(_WORD *)v19 = v20;
  if ( unk_2CD7484 )
  {
    v31 = v16;
    v29 = a6;
    v27 = v13;
    v25 = a2;
    sub_EE9B50(140);
    v16 = v31;
    LODWORD(a6) = v29;
    v13 = v27;
    a2 = v25;
  }
  *(_DWORD *)(v19 + 40) = a4;
  v21 = (unsigned int)(a8 + 1);
  *(_BYTE *)(v19 + 8) = 18;
  *(_DWORD *)(v19 + 16) = a10;
  *(_DWORD *)(v19 + 12) = a2;
  *(_DWORD *)(v19 + 20) = v13;
  *(_QWORD *)(v19 + 24) = 0;
  *(_QWORD *)(v19 + 32) = 0;
  *(_DWORD *)(v19 + 44) = a9;
  *(_DWORD *)(v19 + 48) = a6;
  *(_DWORD *)(v19 + 52) = v21;
  *(_QWORD *)(v19 + 56) = a5;
  if ( 8 * a8 )
    memmove((void *)(v19 + 64), v16, 8 * a8);
  v22 = (void *)(v19 + 8 * v21 + 56);
  if ( 8 * a12 )
  {
    memmove(v22, a11, 8 * a12);
    v22 = (void *)(v19 + 8LL * *(unsigned int *)(v19 + 52) + 56);
  }
  *(_QWORD *)(v19 + 24) = v22;
  *(_QWORD *)(v19 + 32) = a12;
  return v19;
}
