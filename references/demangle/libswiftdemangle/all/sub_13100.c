unsigned __int64 __fastcall sub_13100(__int64 a1, __int16 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned int v11; // edx
  char *v12; // r13
  __int64 v14; // rcx
  char *v15; // rcx
  size_t v16; // r15
  unsigned __int64 v17; // rax
  unsigned int v18; // ebp
  char *v19; // rcx
  unsigned __int64 v20; // rdx
  char *v21; // rax
  unsigned __int64 v22; // r14
  size_t v23; // r14
  _QWORD *v24; // rax
  __int64 v25; // rcx
  char *v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 96);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 - 1);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v3);
    v5 = *(unsigned __int16 *)(v4 + 16);
    if ( (unsigned __int16)v5 > 0x80u )
    {
      LOWORD(v5) = v5 - 163;
      if ( (unsigned __int16)v5 > 0x3Bu )
        goto LABEL_5;
      v6 = 0x800000080000087LL;
      if ( !_bittest64(&v6, v5) )
        goto LABEL_5;
LABEL_12:
      *(_DWORD *)(a1 + 96) = v3;
      v7 = sub_12FF0(a1);
      if ( v7 )
        goto LABEL_6;
      goto LABEL_13;
    }
    if ( (unsigned __int16)v5 > 0x61u )
    {
      v14 = 1074790401;
      if ( _bittest64(&v14, (unsigned int)(v5 - 98)) )
        goto LABEL_12;
    }
  }
LABEL_5:
  v4 = 0;
  v7 = sub_12FF0(a1);
  if ( v7 )
    goto LABEL_6;
LABEL_13:
  v7 = sub_BD60(a1);
LABEL_6:
  v8 = sub_CE00((_QWORD *)a1, a2, v7, v4);
  v9 = sub_CD20((_QWORD *)a1, 221, v8);
  if ( v9 )
  {
    v10 = *(unsigned int *)(a1 + 112);
    v11 = *(_DWORD *)(a1 + 116);
    v12 = *(char **)(a1 + 104);
    if ( (unsigned int)v10 >= v11 )
    {
      v15 = *(char **)(a1 + 8);
      v16 = 8LL * v11;
      if ( v15 == &v12[v16] && (unsigned __int64)(v15 + 8) <= *(_QWORD *)(a1 + 16) )
      {
        *(_QWORD *)(a1 + 8) = v15 + 8;
        *(_DWORD *)(a1 + 116) = v11 + 1;
      }
      else
      {
        v17 = 2 * v11;
        v18 = 2 * v11;
        if ( v17 < 4 )
          v17 = 4;
        v19 = (char *)((unsigned __int64)(v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        *(_QWORD *)(a1 + 8) = v19;
        v20 = 8 * (v11 + v17);
        if ( !v19 || (v21 = &v19[v20], (unsigned __int64)&v19[v20] > *(_QWORD *)(a1 + 16)) )
        {
          v28 = v20;
          v22 = 2LL * *(_QWORD *)(a1 + 32);
          if ( v22 < v20 + 8 )
            v22 = v20 + 8;
          *(_QWORD *)(a1 + 32) = v22;
          v23 = v22 + 8;
          v24 = malloc(v23);
          v25 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)(a1 + 24) = v24;
          *v24 = v25;
          v19 = (char *)(((unsigned __int64)v24 + 15) & 0xFFFFFFFFFFFFFFF8LL);
          *(_QWORD *)(a1 + 16) = (char *)v24 + v23;
          v21 = &v19[v28];
        }
        *(_QWORD *)(a1 + 8) = v21;
        v26 = (char *)memcpy(v19, v12, v16);
        *(_QWORD *)(a1 + 104) = v26;
        v27 = 4;
        v12 = v26;
        if ( v18 >= 4 )
          v27 = v18;
        *(_DWORD *)(a1 + 116) += v27;
        v10 = *(unsigned int *)(a1 + 112);
      }
    }
    *(_DWORD *)(a1 + 112) = v10 + 1;
    *(_QWORD *)&v12[8 * v10] = v9;
  }
  return v9;
}
