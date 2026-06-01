__int64 __fastcall sub_17D760(__int64 a1, const char *a2, const char *a3, int a4, int a5)
{
  char *v8; // rbx
  size_t v9; // r12
  __int64 v10; // rdx
  void *v11; // rax
  const char *v12; // rax
  const char *v13; // r14
  size_t v14; // rax
  size_t v15; // rbx
  bool v16; // cc
  char i; // r12
  __int64 v18; // rbx
  unsigned __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 result; // rax
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rcx
  int v25; // edx
  int v26; // esi
  int v27; // edx
  void *v28; // rdi
  size_t v29; // r12
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  if ( a3 )
  {
    v8 = (char *)a3;
    *(_OWORD *)(a1 + 8) = 0;
    v9 = strlen(a3);
    v10 = v9 + 1;
  }
  else
  {
    v10 = 1;
    v9 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v8 = "";
  }
  v31 = v10;
  v11 = (void *)qvector_reserve();
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v31;
  memmove(v11, v8, v9);
  *(_BYTE *)(*(_QWORD *)a1 + v9) = 0;
  *(_DWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 84) = a5;
  *(_BYTE *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_WORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  v12 = sub_17CF40(a1, a2);
  v13 = v12;
  if ( !v12 || (v14 = strlen(v12), (v15 = v14) == 0) )
  {
    v16 = *(_QWORD *)(a1 + 72) <= 0x63u;
    *(_QWORD *)(a1 + 40) = 0;
    if ( !v16 )
      goto LABEL_6;
    goto LABEL_34;
  }
  v28 = *(void **)(a1 + 32);
  v29 = v14 + 1;
  if ( *(_QWORD *)(a1 + 48) < v14 + 1 )
  {
    v30 = qvector_reserve();
    *(_QWORD *)(a1 + 32) = v30;
    v28 = (void *)v30;
  }
  *(_QWORD *)(a1 + 40) = v29;
  memmove(v28, v13, v15);
  *(_BYTE *)(*(_QWORD *)(a1 + 32) + v15) = 0;
  if ( *(_QWORD *)(a1 + 72) <= 0x63u )
LABEL_34:
    *(_QWORD *)(a1 + 56) = qvector_reserve();
LABEL_6:
  for ( i = *v13; *v13; i = *v13 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      if ( (unsigned __int64)--v18 > 0x63 )
        goto LABEL_25;
      if ( (unsigned __int8)(i - 65) > 0x19u && (unsigned __int8)(i - 48) > 9u && (unsigned __int8)(i - 97) >= 0x1Au )
        i = 32;
      v19 = v18 + 2;
    }
    else
    {
      if ( (unsigned __int8)(i - 48) > 9u && (unsigned __int8)(i - 65) > 0x19u )
      {
        v20 = *(_QWORD *)(a1 + 56);
        v19 = 2;
        if ( (unsigned __int8)(i - 97) > 0x19u )
          i = 32;
        if ( *(_QWORD *)(a1 + 72) >= 2u )
          goto LABEL_15;
LABEL_22:
        v21 = qvector_reserve();
        *(_QWORD *)(a1 + 56) = v21;
        v20 = v21;
        goto LABEL_15;
      }
      v19 = 2;
    }
    v20 = *(_QWORD *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 72) < v19 )
      goto LABEL_22;
LABEL_15:
    *(_QWORD *)(a1 + 64) = v19;
    ++v13;
    *(_BYTE *)(v20 + v18) = i;
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + v18 + 1) = 0;
  }
  result = *(_QWORD *)(a1 + 64);
  if ( !result )
  {
LABEL_36:
    v25 = 0;
    goto LABEL_30;
  }
LABEL_25:
  v23 = *(unsigned __int8 **)(a1 + 56);
  v24 = v23 + 1;
  result = *v23;
  if ( !(_BYTE)result )
    goto LABEL_36;
  v25 = 0;
  do
  {
    v26 = 2 * v25;
    v27 = ~v25;
    if ( (result & 1) != 0 )
      v27 = v26;
    ++v24;
    v25 = ((char)result >> 1) + v27;
    result = *(v24 - 1);
  }
  while ( (_BYTE)result );
LABEL_30:
  *(_DWORD *)(a1 + 80) = v25;
  return result;
}

