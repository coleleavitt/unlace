/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400684D0
// Address: 0x00000001400684D0

//----- (00000001400684D0) ----------------------------------------------------
char *__fastcall sub_1400684D0(char **a1, int a2, char *a3, _QWORD *a4)
{
  int v6; // r9d
  __int64 v7; // rsi
  int v8; // r12d
  char *v9; // r10
  char *v10; // r8
  int v11; // edi
  char v12; // al
  char *v13; // rdi
  char *v14; // rax
  int v15; // ecx
  char v16; // al
  char *v17; // r15
  char v18; // r15
  char *v19; // rdi
  void *v20; // rax
  signed __int64 v21; // rdi
  unsigned __int64 v22; // r14
  void *v23; // rax
  void *v24; // rdi
  void *v25; // rcx
  void *v26; // r15
  void **v27; // r15
  _QWORD *v28; // r14
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdi
  char *v31; // rax
  char *v32; // r13
  void *v33; // r12
  _QWORD *v34; // rdi
  __int64 v35; // r15
  char *v36; // r14
  void *v37; // rcx
  __int64 v38; // rdi
  void *v39; // rcx
  void *v40; // rdx
  unsigned __int64 v41; // r8
  int v43; // [rsp+20h] [rbp-48h]
  void *Block[2]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-30h]
  void *v46[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-18h]
  int v48; // [rsp+B0h] [rbp+48h]
  int v49; // [rsp+B8h] [rbp+50h]
  int v50; // [rsp+C0h] [rbp+58h]

  v6 = -1;
  v49 = -1;
  v7 = 0;
  v8 = 0;
  v48 = 0;
  v9 = a1[1];
  v10 = v9 - 1;
  if ( !v9 )
    v10 = nullptr;
  v43 = (_DWORD)a3 - (_DWORD)v10;
  v50 = (_DWORD)a3 - (_DWORD)v10 - a2;
  if ( !v10 )
  {
    v11 = 0;
    goto LABEL_69;
  }
  v12 = (*a1)[(_QWORD)v10 - 1];
  if ( v12 == 62 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      v6 = 1;
      v49 = 1;
    }
    else if ( (_DWORD)v10 == 2 )
    {
      v13 = &byte_140094B4F;
      v14 = &byte_140094B4F;
      if ( v9 )
        v14 = *a1;
      v15 = (unsigned __int8)*v14;
      if ( (v15 & 0x80u) == 0 )
      {
        if ( isdigit(v15) )
        {
          if ( a1[1] )
            v13 = *a1;
          v6 = *v13 - 48;
          v49 = v6;
        }
        else
        {
          v6 = -1;
        }
      }
    }
    v16 = *a3;
    if ( *a3 == 62 )
      ++a3;
    v8 = 6;
    if ( v16 != 62 )
      v8 = 2;
    goto LABEL_25;
  }
  if ( v12 == 60 && (_DWORD)v10 == 1 )
  {
    v6 = 0;
    v49 = 0;
    v8 = 1;
LABEL_25:
    v48 = v8;
  }
  v11 = 0;
  if ( v6 != -1 )
  {
    *(_OWORD *)Block = 0;
    v45 = 0;
    a3 = sub_14006A360(a3);
    v17 = a3;
    if ( *a3 == 34 )
    {
      if ( !*++a3 )
      {
LABEL_31:
        Block[1] = nullptr;
        v48 = v8 | 8;
        goto LABEL_56;
      }
      while ( 1 )
      {
        if ( *a3 == 92 )
        {
          if ( !*++a3 )
            goto LABEL_31;
        }
        else if ( *a3 == 34 )
        {
          ++a3;
          v48 = v8 | 8;
          goto LABEL_56;
        }
        v18 = *a3++;
        v19 = (char *)Block[1] - 1;
        if ( !Block[1] )
          v19 = nullptr;
        if ( (unsigned __int64)(v19 + 2) <= v45 )
        {
          v20 = Block[0];
        }
        else
        {
          v20 = sub_14005ABE0((__int64)Block, Block[0], (unsigned __int64)(v19 + 2), 1u);
          Block[0] = v20;
        }
        Block[1] = v19 + 2;
        v19[(_QWORD)v20] = v18;
        *((_BYTE *)Block[0] + (unsigned __int64)v19 + 1) = 0;
        if ( !*a3 )
        {
          Block[1] = nullptr;
          v48 = v8 | 8;
          goto LABEL_56;
        }
      }
    }
    if ( *a3 )
    {
      do
      {
        if ( *a3 >= 0 && isspace((unsigned __int8)*a3) )
          break;
        if ( *a3 == 62 )
          break;
        if ( *a3 == 60 )
          break;
        ++a3;
      }
      while ( *a3 );
      if ( a3 > v17 )
      {
        v21 = a3 - v17;
        *(_OWORD *)v46 = 0;
        v22 = 0;
        v47 = 0;
        if ( a3 != v17 )
        {
          v23 = nullptr;
          if ( v21 != -1 )
          {
            v23 = sub_14005ABE0((__int64)v46, nullptr, v21 + 1, 1u);
            v46[0] = v23;
          }
          v46[1] = (void *)(v21 + 1);
          memcpy(v23, v17, a3 - v17);
          *((_BYTE *)v46[0] + v21) = 0;
          v22 = v47;
        }
        v24 = v46[0];
        v25 = nullptr;
        v46[0] = nullptr;
        v26 = v46[1];
        v46[1] = nullptr;
        v47 = 0;
        if ( Block[0] )
        {
          Block[1] = nullptr;
          j_free(Block[0]);
          v25 = v46[0];
        }
        Block[0] = v24;
        Block[1] = v26;
        v45 = v22;
        if ( v25 )
        {
          v46[1] = nullptr;
          j_free(v25);
        }
      }
    }
LABEL_56:
    v11 = 0;
    if ( Block[1] > (void *)1 )
    {
      v27 = (void **)a4;
      v28 = a4 + 1;
      v29 = a4[1] + 1LL;
      v30 = a4[2];
      if ( v29 > v30 )
      {
        v31 = (char *)sub_14005ABE0((__int64)a4, nullptr, v29, 0x30u);
        v32 = v31;
        v33 = (void *)a4[2];
        a4[2] = v30;
        v34 = (_QWORD *)*a4;
        v35 = *v28 - 1LL;
        if ( v35 < 0 )
        {
          v27 = (void **)a4;
        }
        else
        {
          v36 = v31 + 16;
          do
          {
            *((_DWORD *)v36 - 4) = *(_DWORD *)v34;
            *((_QWORD *)v36 - 1) = v34[1];
            v34[1] = 0;
            *(_QWORD *)v36 = v34[2];
            v34[2] = 0;
            *((_QWORD *)v36 + 1) = v34[3];
            v34[3] = 0;
            *((_DWORD *)v36 + 4) = *((_DWORD *)v34 + 8);
            *((_DWORD *)v36 + 5) = *((_DWORD *)v34 + 9);
            *((_DWORD *)v36 + 6) = *((_DWORD *)v34 + 10);
            v37 = (void *)v34[1];
            if ( v37 )
            {
              v34[2] = 0;
              j_free(v37);
              v34[1] = 0;
              v34[3] = 0;
            }
            v34 += 6;
            v36 += 48;
            --v35;
          }
          while ( v35 >= 0 );
          v27 = (void **)a4;
          v28 = a4 + 1;
        }
        j_free(*v27);
        *v27 = v32;
        v27[2] = v33;
      }
      v38 = (__int64)*v27 + 48 * *v28;
      *(_QWORD *)(v38 + 8) = 0;
      *(_QWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 24) = 0;
      ++*v28;
      v39 = *(void **)(v38 + 8);
      v40 = *(void **)(v38 + 16);
      v41 = *(_QWORD *)(v38 + 24);
      *(void **)(v38 + 8) = Block[0];
      *(void **)(v38 + 16) = Block[1];
      *(_QWORD *)(v38 + 24) = v45;
      Block[0] = v39;
      Block[1] = v40;
      v45 = v41;
      *(_DWORD *)(v38 + 32) = v48;
      *(_DWORD *)v38 = v49;
      a3 = sub_14006A360(a3);
      *(_DWORD *)(v38 + 36) = v50;
      *(_DWORD *)(v38 + 40) = (_DWORD)a3 - v43;
      v11 = 1;
    }
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
  }
LABEL_69:
  if ( v11 )
    return a3;
  return (char *)v7;
}
// 140094B4F: using guessed type char byte_140094B4F;
