__int64 __fastcall sub_CC62F0(__int64 a1)
{
  __int64 v1; // rbx
  _OWORD *v2; // rax
  __int64 v3; // rsi
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  _OWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // r12
  void *v10; // rdi
  _DWORD *v11; // rbx
  char *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  char *v16; // rbp
  __int64 v17; // rdi
  void *v18; // [rsp+0h] [rbp-28h]

  v1 = sub_186B270(0x78u);
  *(_QWORD *)v1 = **(_QWORD **)(a1 + 16);
  v2 = (_OWORD *)sub_186B270(0x80u);
  v3 = *(_QWORD *)v1;
  *(_QWORD *)(v1 + 8) = v2;
  *(_DWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 16) = 8;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  sub_16669D0(v1 + 32, v3);
  sub_14B7810(v1 + 48, *(_QWORD *)v1, a1 + 24, v4, v5, v6, v18);
  *(_QWORD *)(v1 + 88) = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v1 + 96) = v7;
  *(_QWORD *)(v1 + 104) = 8;
  *(_DWORD *)(v1 + 112) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  result = sub_1859960(a1 + 24, "recover_01_max_bits", 10);
  v9 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v1 + 68) = result;
  *(_QWORD *)(a1 + 16) = v1;
  if ( v9 )
  {
    sub_CC60C0(*(_QWORD *)v9, v9 + 96);
    v10 = *(void **)(v9 + 96);
    if ( v10 )
      sub_186B220(v10);
    v11 = *(_DWORD **)(v9 + 88);
    if ( v11 )
    {
      if ( v11[8]-- == 1 )
      {
        sub_ED44E0(v11);
        sub_186B220(v11);
      }
    }
    sub_14B63F0(v9 + 48);
    v13 = *(char **)(v9 + 8);
    if ( v13 )
    {
      v14 = *(unsigned int *)(v9 + 16);
      if ( (_DWORD)v14 )
      {
        v15 = *(_QWORD *)(v9 + 8);
        v16 = &v13[16 * v14];
        do
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)(v15 + 8);
            if ( !v17 )
              break;
            v15 += 16;
            sub_186B220((void *)(v17 - 8));
            if ( (char *)v15 == v16 )
              goto LABEL_12;
          }
          v15 += 16;
        }
        while ( (char *)v15 != v16 );
      }
LABEL_12:
      sub_186B220(v13);
    }
    return sub_186B220((void *)v9);
  }
  return result;
}

