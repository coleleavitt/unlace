/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: replace_tabs
// Address: 0x00000000000C58E0

//----- (00000000000C58E0) ----------------------------------------------------
__int64 __fastcall replace_tabs(__int64 a1, const char *a2, unsigned int a3)
{
  const char *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r13
  char *v7; // rax
  char *v8; // r15
  size_t v9; // rbx
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  size_t v16; // r15
  __int64 v17; // rax
  __int64 v18; // rbx
  size_t v19; // rcx
  unsigned __int64 v20; // rbp
  char *v21; // rax
  unsigned __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  char v26; // [rsp+2Fh] [rbp-39h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( !a2 )
  {
    LODWORD(v6) = 0;
    return (unsigned int)v6;
  }
  v3 = a2;
  if ( !a3 )
  {
    LODWORD(v6) = 0;
LABEL_20:
    v16 = strlen(v3);
    v17 = *(_QWORD *)(a1 + 8);
    v18 = v17 - 1;
    if ( !v17 )
      v18 = 0;
    v19 = v18 + v16;
    v20 = v18 + v16 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v20 )
    {
      v21 = *(char **)a1;
    }
    else
    {
      v21 = (char *)qvector_reserve(a1, *(char **)a1, v18 + v16 + 1, 1u);
      v19 = v18 + v16;
      *(_QWORD *)a1 = v21;
    }
    *(_QWORD *)(a1 + 8) = v20;
    v21[v19] = 0;
    memmove((void *)(*(_QWORD *)a1 + v18), v3, v16);
    return (unsigned int)v6;
  }
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 0;
  v25 = v5;
  v24 = a3;
  LODWORD(v6) = 0;
  while ( 1 )
  {
    v7 = strchr(v3, 9);
    if ( !v7 )
      break;
    v8 = v7;
    v9 = v7 - v3;
    v10 = *(_BYTE **)a1;
    v11 = *(_QWORD *)(a1 + 8);
    v12 = v11 - 1;
    if ( !v11 )
      v12 = 0;
    v6 = v9 + v12 + 1;
    if ( *(_QWORD *)(a1 + 16) < v6 )
    {
      v10 = qvector_reserve(a1, *(char **)a1, v9 + v12 + 1, 1u);
      *(_QWORD *)a1 = v10;
    }
    *(_QWORD *)(a1 + 8) = v6;
    v10[v9 + v12] = 0;
    memmove((void *)(*(_QWORD *)a1 + v12), v3, v9);
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v13 - 1;
    if ( v13 )
      --v13;
    v15 = v13 + (int)(a3 - (v13 - v25) % v24);
    v26 = 32;
    if ( v14 < v15 )
      *(_BYTE *)(*(_QWORD *)a1 + v14) = 32;
    sub_5F0D0(a1, v15 + 1, &v26);
    *(_BYTE *)(*(_QWORD *)a1 + v15) = 0;
    LOBYTE(v6) = 1;
    v3 = v8 + 1;
  }
  if ( v3 )
    goto LABEL_20;
  return (unsigned int)v6;
}
// C5ABB: masking with 0x1 was optimized away because r13.1 <= 0x1
