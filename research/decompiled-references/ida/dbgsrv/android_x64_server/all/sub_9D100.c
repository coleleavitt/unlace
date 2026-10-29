/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D100
// Address: 0x000000000009D100

//----- (000000000009D100) ----------------------------------------------------
unsigned __int64 __fastcall sub_9D100(__int64 a1, unsigned __int64 *a2)
{
  void *v4; // rdi
  unsigned __int8 *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // ebp
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  unsigned __int8 *v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  int v16; // ecx
  int v17; // ebp
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ebp
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rcx
  char *v23; // rax
  const void *v24; // rsi
  unsigned __int64 v25; // rax
  void *v26; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  char *v30; // [rsp+8h] [rbp-40h] BYREF
  char v31; // [rsp+13h] [rbp-35h] BYREF
  _BYTE v32[4]; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  if ( *(int *)a1 >= -1 )
  {
    v4 = *(void **)(a1 + 8);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v4);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
  v5 = (unsigned __int8 *)*a2;
  v6 = *a2 + 1;
  if ( v6 < *a2 || (v7 = a2[1], v6 > v7) )
  {
    v31 = 0;
    v9 = 1;
  }
  else
  {
    *a2 = v6;
    v8 = *v5;
    v31 = v8;
    v9 = 1;
    if ( (v8 & 0x80u) == 0 )
      goto LABEL_12;
    if ( (v8 & 0xFFFFFFC0) == 0xC0 )
    {
      v10 = (unsigned int)((v8 & 0xFFFFFFE0) == 224) + 3;
      if ( ((v8 & 0xFFFFFFE0) == 224) == -3 )
        goto LABEL_12;
      v9 = ((v8 & 0xFFFFFFE0) == 224) | 4;
    }
    else
    {
      v9 = 2;
      v10 = 1;
    }
    v28 = v6 + v10;
    if ( v6 + v10 >= v6 && v28 <= v7 )
    {
      *a2 = v28;
      __memcpy_chk(v32, v6, v10, 4);
    }
  }
LABEL_12:
  v30 = &v31;
  v11 = unpack_dd((unsigned __int64 *)&v30, (unsigned __int64)&v32[v9 - 1]);
  v12 = v11 - 3;
  *(_DWORD *)a1 = v11 - 3;
  if ( v11 == 1 )
  {
    *(_QWORD *)(a1 + 8) = sub_9D3E0(a2) - 1;
    return __readfsqword(0x28u);
  }
  if ( !v11 )
    return __readfsqword(0x28u);
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)a1 = v12;
  if ( v12 <= -2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(3216);
    BUG();
  }
  v13 = (unsigned __int8 *)*a2;
  v14 = *a2 + 1;
  if ( v14 < *a2 || (v15 = a2[1], v14 > v15) )
  {
    v31 = 0;
    v17 = 1;
  }
  else
  {
    *a2 = v14;
    v16 = *v13;
    v31 = v16;
    v17 = 1;
    if ( (v16 & 0x80u) == 0 )
      goto LABEL_23;
    if ( (v16 & 0xFFFFFFC0) == 0xC0 )
    {
      v18 = (unsigned int)((v16 & 0xFFFFFFE0) == 224) + 3;
      if ( ((v16 & 0xFFFFFFE0) == 224) == -3 )
        goto LABEL_23;
      v17 = ((v16 & 0xFFFFFFE0) == 224) | 4;
    }
    else
    {
      v17 = 2;
      v18 = 1;
    }
    v29 = v14 + v18;
    if ( v14 + v18 >= v14 && v29 <= v15 )
    {
      *a2 = v29;
      __memcpy_chk(v32, v14, v18, 4);
    }
  }
LABEL_23:
  v30 = &v31;
  v19 = unpack_dd((unsigned __int64 *)&v30, (unsigned __int64)&v32[v17 - 1]);
  v20 = v19;
  v21 = v19;
  v22 = *(_QWORD *)(a1 + 16);
  if ( v22 < v19 )
  {
    v23 = *(char **)(a1 + 8);
    if ( *(_QWORD *)(a1 + 24) < v21 )
    {
      v23 = (char *)qvector_reserve(a1 + 8, *(char **)(a1 + 8), v21, 1u);
      *(_QWORD *)(a1 + 8) = v23;
      v22 = *(_QWORD *)(a1 + 16);
    }
    memset(&v23[v22], 0, v21 - v22);
    *(_QWORD *)(a1 + 16) = v21;
    if ( !v20 )
      return __readfsqword(0x28u);
LABEL_31:
    v24 = (const void *)*a2;
    v25 = *a2 + v21;
    if ( v25 >= *a2 && v25 <= a2[1] )
    {
      v26 = *(void **)(a1 + 8);
      *a2 = v25;
      memcpy(v26, v24, v21);
    }
    return __readfsqword(0x28u);
  }
  if ( v22 != v19 )
  {
    LOBYTE(v30) = 0;
    sub_5E330(a1 + 8, v19, (char *)&v30);
  }
  if ( v20 )
    goto LABEL_31;
  return __readfsqword(0x28u);
}
// 33BE0: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 158B40: using guessed type __int64 under_debugger;
