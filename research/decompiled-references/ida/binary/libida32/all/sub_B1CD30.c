unsigned __int8 *__fastcall sub_B1CD30(__int64 a1, _DWORD *a2, __int64 a3, char a4, __int64 a5)
{
  char v7; // bp
  __int64 v9; // rax
  __int64 v10; // rax
  const char *v11; // r15
  size_t v12; // rbp
  size_t v13; // r9
  size_t v14; // rdx
  void *v15; // rdi
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int8 *result; // rax
  unsigned __int8 *v19; // rdx
  __int64 v20; // rdi
  unsigned __int8 *v21; // rsi
  size_t v22; // [rsp+8h] [rbp-40h]
  size_t v23; // [rsp+8h] [rbp-40h]

  v7 = 92;
  *(_QWORD *)(a1 + 72) = 0;
  if ( a4 != 92 )
    v7 = 64;
  v9 = 0;
  if ( !*(_QWORD *)(a1 + 80) )
  {
    sub_22130D0(a1 + 64, a1 + 88, 1, 1);
    v9 = *(_QWORD *)(a1 + 72);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 64) + v9) = v7;
  v10 = *(_QWORD *)(a1 + 72);
  v11 = *(const char **)(a5 + 8);
  v12 = v10 + 1;
  *(_QWORD *)(a1 + 72) = v10 + 1;
  if ( v11 )
  {
    v13 = strlen(v11);
    v14 = v12 + v13;
    if ( v12 + v13 <= *(_QWORD *)(a1 + 80) )
      goto LABEL_7;
  }
  else
  {
    if ( v12 <= *(_QWORD *)(a1 + 80) )
      goto LABEL_9;
    v14 = v10 + 1;
    v13 = 0;
  }
  v23 = v13;
  sub_22130D0(a1 + 64, a1 + 88, v14, 1);
  v12 = *(_QWORD *)(a1 + 72);
  v13 = v23;
LABEL_7:
  v15 = (void *)(v12 + *(_QWORD *)(a1 + 64));
  if ( v13 )
  {
    v22 = v13;
    memcpy(v15, v11, v13);
    v12 = *(_QWORD *)(a1 + 72) + v22;
  }
LABEL_9:
  v16 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 72) = v12;
  v17 = *(_DWORD *)(a1 + 56) + v16 - *(_DWORD *)(a1 + 24);
  a2[1] = 6;
  *a2 = v17;
  a2[3] = a3 - v16;
  *(_QWORD *)(a1 + 40) = a3;
  a2[2] = *(_DWORD *)(a5 + 16) & 0xFFFFF;
  result = *(unsigned __int8 **)(a1 + 40);
  v19 = *(unsigned __int8 **)(a1 + 48);
  if ( result != v19 && (v20 = *result, (byte_23ED5E0[2 * v20] & 2) != 0) )
  {
    v21 = result + 1;
    if ( (_BYTE)v20 != 10 && v19 != v21 && result[1] == 10 )
      v21 = result + 2;
    *(_QWORD *)(a1 + 40) = v21;
    *(_BYTE *)(a1 + 62) = 2;
  }
  else
  {
    *(_BYTE *)(a1 + 62) = 1;
  }
  return result;
}

