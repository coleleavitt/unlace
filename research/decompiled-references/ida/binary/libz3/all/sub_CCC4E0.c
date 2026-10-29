__int64 __fastcall sub_CCC4E0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdi
  void *v10; // r12
  void *v11; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // r12
  void *v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  void *v19; // rdi
  __int64 *v20; // rbx
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi

  v2 = sub_186B270(0xB8u);
  v3 = *(__int64 **)(a1 + 16);
  v4 = *v3;
  *(_QWORD *)v2 = *v3;
  sub_16669D0(v2 + 8, v4);
  v5 = *(_QWORD *)v2;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 24) = v5;
  v6 = sub_186B270(0x80u);
  *(_QWORD *)v6 = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 0;
  *(_DWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_DWORD *)(v6 + 104) = 0;
  *(_QWORD *)(v6 + 112) = 0;
  *(_DWORD *)(v6 + 120) = 0;
  *(_QWORD *)(v2 + 40) = v6;
  *(_QWORD *)(v2 + 48) = 8;
  *(_DWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 1;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 1;
  *(_QWORD *)(v2 + 160) = 0;
  *(_QWORD *)(v2 + 176) = 0;
  *(_OWORD *)(v2 + 64) = 0;
  *(_OWORD *)(v2 + 80) = 0;
  sub_CC9C40(v2, a1 + 24);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(v7 + 168);
  v9 = *(_QWORD *)(v7 + 176);
  *(_QWORD *)(a1 + 16) = v2;
  *(_DWORD *)(v2 + 168) = v8;
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v7 + 136);
  sub_182CBA0(v10, v7 + 152);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v7 + 104);
  sub_182CBA0(v11, v7 + 120);
  v12 = *(_QWORD *)(v7 + 88);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD **)(v7 + 80);
  if ( v13 )
  {
    v14 = *((unsigned int *)v13 - 1);
    if ( (_DWORD)v14 )
    {
      v15 = &v13[v14];
      do
      {
        while ( *v13 )
        {
          v16 = (void *)(*v13++ - 8LL);
          sub_186B220(v16);
          if ( v15 == v13 )
          {
            v13 = *(_QWORD **)(v7 + 80);
            goto LABEL_11;
          }
        }
        ++v13;
      }
      while ( v13 != v15 );
      v13 = *(_QWORD **)(v7 + 80);
    }
LABEL_11:
    sub_186B220(v13 - 1);
  }
  v17 = *(_QWORD *)(v7 + 72);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(_QWORD *)(v7 + 64);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = *(void **)(v7 + 40);
  if ( v19 )
    sub_186B220(v19);
  v20 = *(__int64 **)(v7 + 32);
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 >= v21 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = *(_QWORD *)(v7 + 24);
          if ( (*(_DWORD *)(v22 + 8))-- == 1 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_25;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_25:
    v20 = *(__int64 **)(v7 + 32);
    if ( v20 )
LABEL_26:
      sub_186B220(v20 - 1);
  }
  return sub_186B220((void *)v7);
}

