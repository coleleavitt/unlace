void __fastcall sub_1F5A580(__int64 *a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rsi
  char *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  char *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdi
  int v16; // r11d
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // r10d
  __int64 v20; // rdi
  void *v21; // rsi
  char *v22; // rdi
  _BYTE *v23; // rsi
  char *v24; // rdx
  signed __int64 v25; // rdx
  char *v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  _BYTE *v30; // rsi
  int v31; // eax
  __int64 v32; // rdi
  int v33; // eax
  _BYTE *v34; // rdi
  void *v35; // [rsp+10h] [rbp-98h] BYREF
  __int64 v36; // [rsp+18h] [rbp-90h]
  _BYTE s[32]; // [rsp+20h] [rbp-88h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v39; // [rsp+48h] [rbp-60h]
  _BYTE v40[88]; // [rsp+50h] [rbp-58h] BYREF

  sub_1F58FC0(a1, (__int64)a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  v7 = *(_QWORD *)(v4 + 8);
  v8 = (unsigned int)v6;
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * *(unsigned int *)(v7 + 13072) - 8);
  v10 = s;
  LODWORD(v5) = *(_DWORD *)(v7 + 13072) - 1;
  v35 = s;
  *(_DWORD *)(v7 + 13072) = v5;
  v11 = (unsigned int)a2[6];
  v36 = 0x400000000LL;
  *(_QWORD *)&a2[2 * v11 + 8] = v9;
  if ( (_DWORD)v6 )
  {
    v12 = s;
    if ( (unsigned int)v6 > 4uLL )
    {
      sub_2237220(&v35, s, (unsigned int)v6, 8);
      v12 = v35;
      v10 = (char *)v35 + 8 * (unsigned int)v36;
    }
    v13 = (char *)&v12[(unsigned int)v6];
    if ( v13 != v10 )
    {
      memset(v10, 0, 8 * ((unsigned __int64)(v13 - v10 - 8) >> 3) + 8);
      v12 = v35;
    }
    LODWORD(v36) = v6;
    v14 = *(_QWORD *)(*a1 + 8);
    v15 = *(unsigned int *)(v14 + 13072);
    v16 = *(_DWORD *)(v14 + 13072);
    v17 = v15 - 1;
    *v12 = *(_QWORD *)(*(_QWORD *)(v14 + 13064) + 8 * v15 - 8);
    if ( (_DWORD)v6 != 1 )
    {
      v18 = 8;
      v19 = v15 - v6;
      do
      {
        v20 = v17--;
        *(_QWORD *)((char *)v35 + v18) = *(_QWORD *)(*(_QWORD *)(v14 + 13064) + 8 * v20 - 8);
        v18 += 8;
      }
      while ( v19 != v17 );
    }
    v21 = v35;
    *(_DWORD *)(v14 + 13072) = v16 - v6;
    sub_C03C50((__int64)a2, v21, (unsigned int)v6);
    ptr = v40;
    v39 = 0x400000000LL;
    v22 = v40;
    v23 = v40;
    if ( (unsigned int)v6 > 4uLL )
    {
      sub_2237220(&ptr, v40, (unsigned int)v6, 8);
      v23 = ptr;
      v22 = (char *)ptr + 8 * (unsigned int)v39;
    }
    v24 = &v23[8 * (unsigned int)v6];
    if ( v24 != v22 )
    {
      v25 = v24 - v22;
      v26 = v22;
      v27 = ((unsigned __int64)(v25 - 8) >> 3) + 1;
      if ( v25 == 8 )
        goto LABEL_15;
      do
      {
        *(_OWORD *)v26 = 0;
        v26 += 16;
      }
      while ( v26 != &v22[16 * (v27 >> 1)] );
      v22 += 8 * (v27 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v27 & 0xFFFFFFFFFFFFFFFELL) != v27 )
LABEL_15:
        *(_QWORD *)v22 = 0;
    }
    LODWORD(v39) = v6;
    v28 = 0;
    do
    {
      v29 = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
      v30 = ptr;
      *((_QWORD *)ptr + v28++) = v29;
    }
    while ( (unsigned int)v6 > (unsigned int)v28 );
    v8 = (unsigned int)v39;
  }
  else
  {
    sub_C03C50((__int64)a2, s, 0);
    v30 = v40;
    ptr = v40;
    v39 = 0x400000000LL;
  }
  sub_C03C70((__int64)a2, (__int64)v30, v8);
  v31 = sub_1EE7490(*a1);
  v32 = *a1;
  a2[4] = v31;
  v33 = sub_1EE7490(v32);
  v34 = ptr;
  a2[5] = v33;
  if ( v34 != v40 )
    free(v34);
  if ( v35 != s )
    free(v35);
}
