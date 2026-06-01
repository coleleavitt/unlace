unsigned int *__fastcall sub_7FE5F0(unsigned int **a1)
{
  __int64 v1; // rax
  unsigned int *v2; // rdx
  __int64 v3; // rax
  unsigned int *v4; // rax
  void *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int *v9; // rax
  void *ptr; // [rsp+0h] [rbp-78h]
  __int128 v12; // [rsp+18h] [rbp-60h] BYREF
  __int128 v13; // [rsp+28h] [rbp-50h] BYREF

  v12 = 0;
  v13 = 0;
  v1 = sub_186B270(0x140u);
  *(_QWORD *)(v1 + 224) = 1;
  *(_QWORD *)v1 = 0;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 24) = 1;
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 56) = 0;
  *(_QWORD *)(v1 + 64) = 1;
  *(_QWORD *)(v1 + 72) = 0;
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 96) = 0;
  *(_QWORD *)(v1 + 104) = 1;
  *(_QWORD *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 128) = 0;
  *(_QWORD *)(v1 + 136) = 0;
  *(_QWORD *)(v1 + 144) = 1;
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 160) = 0;
  *(_QWORD *)(v1 + 168) = 0;
  *(_QWORD *)(v1 + 176) = 0;
  *(_QWORD *)(v1 + 184) = 1;
  *(_QWORD *)(v1 + 192) = 0;
  *(_QWORD *)(v1 + 200) = 0;
  *(_QWORD *)(v1 + 208) = 0;
  *(_QWORD *)(v1 + 216) = 0;
  *(_BYTE *)(v1 + 228) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_OWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  v2 = *a1;
  *(_QWORD *)(v1 + 264) = 1;
  *(_QWORD *)(v1 + 272) = 0;
  *(_QWORD *)(v1 + 280) = 0;
  *(_QWORD *)(v1 + 288) = 0;
  *(_QWORD *)(v1 + 296) = 0;
  *(_QWORD *)(v1 + 304) = 1;
  *(_QWORD *)(v1 + 312) = 0;
  ptr = (void *)v1;
  v12 = 0u;
  v13 = 1u;
  if ( !v2 || (v3 = *(v2 - 1), (_DWORD)v3 == *(v2 - 2)) )
  {
    sub_7FE340(a1);
    v2 = *a1;
    v3 = *(*a1 - 1);
  }
  v4 = &v2[14 * v3];
  v5 = qword_1C7F2C0;
  *(_QWORD *)v4 = ptr;
  *((_QWORD *)v4 + 1) = 8;
  v4[4] = 0;
  v4[6] = v12;
  *((_BYTE *)v4 + 28) = BYTE4(v12) & 3 | v4[7] & 0xFC;
  v6 = *((_QWORD *)&v12 + 1);
  *((_QWORD *)&v12 + 1) = 0;
  *((_QWORD *)v4 + 4) = v6;
  v4[10] = v13;
  *((_BYTE *)v4 + 44) = BYTE4(v13) & 3 | v4[11] & 0xFC;
  v7 = *((_QWORD *)&v13 + 1);
  *((_QWORD *)&v13 + 1) = 0;
  *((_QWORD *)v4 + 6) = v7;
  ++*(v2 - 1);
  sub_182CBA0(v5, &v12);
  sub_182CBA0(v5, &v13);
  v8 = 0xDFFFFFFF2LL;
  v9 = *a1;
  if ( *a1 )
    v8 = 14LL * (*(v9 - 1) - 1);
  return &v9[v8];
}

