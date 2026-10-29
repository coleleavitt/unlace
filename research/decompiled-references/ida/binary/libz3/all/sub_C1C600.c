__int64 __fastcall sub_C1C600(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rbp
  void (__fastcall ***v11)(_QWORD); // rbx
  void *v12; // rbx
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  void *v19; // rdi
  void *v20; // rdi
  char *v21; // r15
  __int64 v22; // rax
  char *v23; // rbx
  char *v24; // r14
  void *v25; // r13
  char *v26; // rsi

  v2 = sub_186B270(0xA8u);
  v3 = *(__int64 **)(a1 + 16);
  v4 = *v3;
  *(_QWORD *)v2 = *v3;
  sub_16669D0(v2 + 8, v4);
  v5 = sub_186B270(0x140u);
  *(_QWORD *)(v5 + 224) = 1;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 1;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 1;
  *(_QWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_QWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_QWORD *)(v5 + 104) = 1;
  *(_QWORD *)(v5 + 112) = 0;
  *(_QWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 128) = 0;
  *(_QWORD *)(v5 + 136) = 0;
  *(_QWORD *)(v5 + 144) = 1;
  *(_QWORD *)(v5 + 152) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  *(_QWORD *)(v5 + 168) = 0;
  *(_QWORD *)(v5 + 176) = 0;
  *(_QWORD *)(v5 + 184) = 1;
  *(_QWORD *)(v5 + 192) = 0;
  *(_QWORD *)(v5 + 200) = 0;
  *(_QWORD *)(v5 + 208) = 0;
  *(_QWORD *)(v5 + 216) = 0;
  *(_BYTE *)(v5 + 228) = 0;
  *(_QWORD *)(v5 + 248) = 0;
  *(_OWORD *)(v5 + 232) = 0;
  *(_QWORD *)(v5 + 256) = 0;
  *(_QWORD *)(v5 + 264) = 1;
  *(_QWORD *)(v5 + 272) = 0;
  *(_QWORD *)(v5 + 280) = 0;
  *(_QWORD *)(v5 + 288) = 0;
  *(_QWORD *)(v5 + 296) = 0;
  *(_QWORD *)(v5 + 304) = 1;
  *(_QWORD *)(v5 + 312) = 0;
  *(_QWORD *)(v2 + 24) = v5;
  *(_QWORD *)(v2 + 32) = 8;
  *(_DWORD *)(v2 + 40) = 0;
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v2 + 48) = v6;
  *(_QWORD *)(v2 + 56) = 8;
  *(_DWORD *)(v2 + 64) = 0;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v2 + 80) = 8;
  *(_QWORD *)(v2 + 72) = v7;
  *(_DWORD *)(v2 + 88) = 0;
  v8 = qword_1C7F2C0;
  *(_QWORD *)(v2 + 96) = v4;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 1;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 1;
  *(_QWORD *)(v2 + 144) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  result = sub_182CBA0(v8, v2 + 136);
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v2;
  *(_BYTE *)(v2 + 140) &= ~1u;
  *(_DWORD *)(v2 + 136) = 1;
  *(_QWORD *)(v2 + 160) = 0;
  if ( v10 )
  {
    v11 = *(void (__fastcall ****)(_QWORD))(v10 + 160);
    if ( v11 )
    {
      (**v11)(*(_QWORD *)(v10 + 160));
      sub_186B220(v11);
    }
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v10 + 120);
    sub_182CBA0(v12, v10 + 136);
    v13 = *(_QWORD *)(v10 + 112);
    if ( v13 )
      sub_186B220((void *)(v13 - 8));
    v14 = *(__int64 **)(v10 + 104);
    if ( v14 )
    {
      v15 = &v14[*((unsigned int *)v14 - 1)];
      if ( v14 >= v15 )
        goto LABEL_14;
      do
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            v17 = *(_QWORD *)(v10 + 96);
            if ( (*(_DWORD *)(v16 + 8))-- == 1 )
              break;
          }
          if ( ++v14 >= v15 )
            goto LABEL_13;
        }
        sub_15D7BC0(v17, v16);
        ++v14;
      }
      while ( v14 < v15 );
LABEL_13:
      v14 = *(__int64 **)(v10 + 104);
      if ( v14 )
LABEL_14:
        sub_186B220(v14 - 1);
    }
    v19 = *(void **)(v10 + 72);
    if ( v19 )
      sub_186B220(v19);
    v20 = *(void **)(v10 + 48);
    if ( v20 )
      sub_186B220(v20);
    v21 = *(char **)(v10 + 24);
    if ( v21 )
    {
      v22 = *(unsigned int *)(v10 + 32);
      if ( (_DWORD)v22 )
      {
        v23 = *(char **)(v10 + 24);
        v24 = &v21[40 * v22];
        do
        {
          v25 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v23 + 8);
          v26 = v23 + 24;
          v23 += 40;
          sub_182CBA0(v25, v26);
        }
        while ( v23 != v24 );
      }
      sub_186B220(v21);
    }
    return sub_186B220((void *)v10);
  }
  return result;
}

