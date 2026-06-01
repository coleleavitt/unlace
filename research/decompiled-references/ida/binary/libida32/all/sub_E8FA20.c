unsigned __int64 __fastcall sub_E8FA20(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *src,
        __int64 a8)
{
  const void *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v16; // rax
  int v17; // [rsp+0h] [rbp-48h]
  int v18; // [rsp+4h] [rbp-44h]

  v10 = src;
  v11 = a1[294];
  v12 = 8 * (a8 + 1);
  a1[304] += v12 + 48;
  v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v12 + 48 + v13;
  if ( a1[295] >= v14 && v11 )
  {
    a1[294] = v14;
  }
  else
  {
    v18 = a6;
    v17 = a5;
    v16 = sub_962430((__int64)(a1 + 294), v12 + 48, v12 + 48, 3, a5, a6);
    v10 = src;
    LODWORD(a6) = v18;
    v13 = v16;
    LODWORD(a5) = v17;
  }
  *(_DWORD *)(v13 + 20) = a3;
  *(_BYTE *)(v13 + 8) = 48;
  *(_DWORD *)(v13 + 12) = a2;
  *(_DWORD *)(v13 + 16) = a6;
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = 0;
  *(_QWORD *)v13 = off_2B21D40;
  *(_DWORD *)(v13 + 40) = a5;
  *(_QWORD *)(v13 + 48) = a4;
  if ( v12 != 8 )
    memmove((void *)(v13 + 56), v10, v12 - 8);
  *(_QWORD *)(v13 + 24) = v13 + 48;
  *(_QWORD *)(v13 + 32) = a8 + 1;
  return v13;
}

