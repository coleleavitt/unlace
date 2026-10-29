_QWORD *__fastcall sub_FA73F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r9d
  unsigned int *v4; // rcx
  size_t v5; // r8
  const char *v6; // rcx
  unsigned int *v7; // rsi
  unsigned __int64 v8; // rdx
  _WORD *v9; // rsi
  unsigned int v10; // r10d
  _BYTE *v11; // rsi
  void *v12; // rdx
  char *v14; // rax
  __int64 v15; // r11
  unsigned int *v16; // rsi
  size_t v17; // rdx
  void *ptr[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+18h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_BYTE *)(a2 + 34) & 0xF;
  if ( v2 )
  {
    v4 = *(unsigned int **)(v2 + 16);
    v5 = *v4;
    v6 = (const char *)(v4 + 4);
    if ( (unsigned int)(v3 - 2) <= 1 )
    {
      v14 = sub_F95FE0((__int64)v6, v5);
      v16 = *(unsigned int **)(v15 + 16);
      v5 = v17;
      v6 = v14;
      v8 = *v16;
      v9 = v16 + 4;
      goto LABEL_5;
    }
  }
  else
  {
    v5 = 0;
    v6 = &byte_22F0C30;
  }
  v7 = *(unsigned int **)(*(_QWORD *)a2 + 16LL);
  v8 = *v7;
  v9 = v7 + 4;
  if ( v3 == 1 )
  {
LABEL_10:
    v9 = sub_F96040(v9, v8);
    goto LABEL_6;
  }
  v10 = v3 - 2;
LABEL_5:
  if ( v10 > 1 )
    goto LABEL_6;
  if ( !v5 )
    goto LABEL_10;
  if ( v5 == 3 )
  {
    if ( *(_WORD *)v6 == 28263 && v6[2] == 117 )
      goto LABEL_10;
  }
  else if ( v5 == 5 && *(_DWORD *)v6 == 1851878499 && v6[4] == 103 )
  {
    goto LABEL_10;
  }
LABEL_6:
  sub_F95E40(ptr, v9, v8, v6, v5, v3);
  v11 = ptr[0];
  v12 = ptr[1];
  *a1 = a1 + 2;
  sub_F95D80(a1, v11, (__int64)v12 + (_QWORD)v11);
  if ( ptr[0] != &v19 )
    free(ptr[0]);
  return a1;
}
