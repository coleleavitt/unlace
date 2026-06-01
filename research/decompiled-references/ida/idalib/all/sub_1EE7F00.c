void __fastcall sub_1EE7F00(__int64 *a1, _DWORD *a2)
{
  unsigned __int64 v3; // rbp
  int v4; // eax
  unsigned int v5; // r13d
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  size_t v14; // rdx
  _BYTE *v15; // rbp
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h]
  _BYTE v18[72]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (unsigned int)a2[4];
  v4 = sub_1EE7490(*a1);
  v5 = v3;
  v6 = 4;
  a2[3] = v4;
  src = v18;
  v17 = 0x400000000LL;
  if ( v3 > 4 )
  {
    sub_2237220(&src, v18, v3, 4);
    LODWORD(v7) = v17;
    v6 = HIDWORD(v17);
  }
  else
  {
    LODWORD(v7) = 0;
    if ( !(_DWORD)v3 )
      return;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = *a1;
    v10 = *(unsigned int *)(*a1 + 24);
    *(_DWORD *)(v9 + 24) = v10 + 1;
    v11 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10);
    v12 = (unsigned int)v7;
    v13 = (unsigned int)v7 + 1LL;
    if ( v13 > v6 )
      break;
    ++v8;
    *((_DWORD *)src + v12) = v11;
    v7 = (unsigned int)(v17 + 1);
    LODWORD(v17) = v17 + 1;
    if ( v8 >= v5 )
      goto LABEL_8;
LABEL_5:
    v6 = HIDWORD(v17);
  }
  ++v8;
  sub_2237220(&src, v18, v13, 4);
  *((_DWORD *)src + (unsigned int)v17) = v11;
  v7 = (unsigned int)(v17 + 1);
  LODWORD(v17) = v17 + 1;
  if ( v5 > v8 )
    goto LABEL_5;
LABEL_8:
  v14 = 4 * v7;
  v15 = src;
  if ( v14 )
    memmove(a2 + 5, src, v14);
  if ( v15 != v18 )
    free(v15);
}
