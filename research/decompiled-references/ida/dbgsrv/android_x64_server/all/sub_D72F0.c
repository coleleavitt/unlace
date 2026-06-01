/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D72F0
// Address: 0x00000000000D72F0

//----- (00000000000D72F0) ----------------------------------------------------
char *__fastcall sub_D72F0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char *v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  char *result; // rax
  char *v7; // rcx
  char *v8; // rax
  char *v9; // rax
  char *v10; // r15
  char *v11; // rbx
  _BYTE *v12; // r12
  signed __int64 v13; // rbx
  char *v14; // rbp
  __int64 v15; // rax
  char *v16; // rax
  const void *v17; // r14
  signed __int64 v18; // r15
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rbp
  __int64 v21; // rcx
  _QWORD *v22; // rax
  char *v23; // r12
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+0h] [rbp-48h]

  v2 = *(char **)a1;
  v3 = *(char **)(a1 + 8);
  v4 = (unsigned __int64)&v3[-*(_QWORD *)a1];
  if ( !v4 )
    return sub_D4260(a1);
  v5 = (unsigned int)*v2;
  if ( (_DWORD)v5 == 74 )
  {
    v8 = v2 + 1;
    *(_QWORD *)a1 = v8;
    v30 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
    if ( v8 == v3 )
      goto LABEL_14;
LABEL_11:
    if ( *v8 != 69 )
    {
LABEL_14:
      while ( 1 )
      {
        v9 = sub_D72F0(a1, v5);
        if ( !v9 )
          return nullptr;
        v10 = v9;
        v11 = *(char **)(a1 + 24);
        if ( v11 == *(char **)(a1 + 32) )
        {
          v12 = *(_BYTE **)(a1 + 16);
          v13 = v11 - v12;
          v5 = 2 * v13;
          if ( (_BYTE *)(a1 + 40) == v12 )
          {
            v16 = (char *)malloc(2 * v13);
            v14 = v16;
            if ( v13 )
            {
              v5 = (__int64)v12;
              memmove(v16, v12, v13);
            }
            v15 = v13 >> 2;
          }
          else
          {
            v14 = (char *)realloc(*(void **)(a1 + 16), v5);
            v15 = v13 >> 2;
          }
          *(_QWORD *)(a1 + 16) = v14;
          v11 = &v14[8 * (v13 >> 3)];
          *(_QWORD *)(a1 + 24) = v11;
          *(_QWORD *)(a1 + 32) = &v14[8 * v15];
        }
        *(_QWORD *)(a1 + 24) = v11 + 8;
        *(_QWORD *)v11 = v10;
        v8 = *(char **)a1;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
          goto LABEL_11;
      }
    }
    *(_QWORD *)a1 = v8 + 1;
    v31 = 8 * v30;
    v17 = (const void *)(v31 + *(_QWORD *)(a1 + 16));
    v18 = *(_QWORD *)(a1 + 24) - (_QWORD)v17;
    v19 = ((_DWORD)v18 + 15) & 0xFFFFFFF0;
    v20 = *(_QWORD **)(a1 + 4832);
    v21 = v20[1];
    if ( v19 + v21 < 0xFF0 )
    {
      v24 = v20 + 1;
    }
    else
    {
      if ( v19 >= 0xFF1 )
      {
        v22 = (_QWORD *)operator new[](v19 + 16);
        *v22 = *v20;
        v22[1] = 0;
        *v20 = v22;
        v23 = (char *)(v22 + 2);
        if ( !v18 )
          goto LABEL_37;
        goto LABEL_36;
      }
      v25 = (_QWORD *)operator new[](0x1000u);
      *v25 = v20;
      v25[1] = 0;
      *(_QWORD *)(a1 + 4832) = v25;
      v21 = 0;
      v24 = v25 + 1;
      v20 = v25;
    }
    *v24 = v21 + v19;
    v23 = (char *)v20 + v21 + 16;
    if ( !v18 )
    {
LABEL_37:
      v26 = v18 >> 3;
      *(_QWORD *)(a1 + 24) = v17;
      v27 = v20[1];
      if ( (unsigned __int64)(v27 + 32) < 0xFF0 )
      {
        v29 = v20 + 1;
      }
      else
      {
        v28 = (_QWORD *)operator new[](0x1000u);
        *v28 = v20;
        v28[1] = 0;
        *(_QWORD *)(a1 + 4832) = v28;
        v27 = 0;
        v29 = v28 + 1;
        v20 = v28;
      }
      *v29 = v27 + 32;
      *(_DWORD *)((char *)v20 + v27 + 24) = 16843036;
      *(_QWORD *)((char *)v20 + v27 + 16) = off_152E68;
      *(_QWORD *)((char *)v20 + v27 + 32) = v23;
      *(_QWORD *)((char *)v20 + v27 + 40) = v26;
      return (char *)v20 + v27 + 16;
    }
LABEL_36:
    memmove(v23, v17, v18);
    v17 = (const void *)(*(_QWORD *)(a1 + 16) + v31);
    v20 = *(_QWORD **)(a1 + 4832);
    goto LABEL_37;
  }
  if ( (_DWORD)v5 != 76 )
  {
    if ( (_DWORD)v5 == 88 )
    {
      *(_QWORD *)a1 = v2 + 1;
      result = sub_D97A0(a1);
      if ( result )
      {
        v7 = *(char **)a1;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v7 == 69 )
        {
LABEL_8:
          *(_QWORD *)a1 = v7 + 1;
          return result;
        }
      }
      return nullptr;
    }
    return sub_D4260(a1);
  }
  if ( v4 >= 2 && v2[1] == 90 )
  {
    *(_QWORD *)a1 = v2 + 2;
    result = sub_D3180(a1);
    if ( result )
    {
      v7 = *(char **)a1;
      if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v7 == 69 )
        goto LABEL_8;
    }
    return nullptr;
  }
  return sub_DC480((char **)a1, v5);
}
// 152E68: using guessed type __int64 (__fastcall *off_152E68[7])();
