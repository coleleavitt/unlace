/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438CF0
// Address: 0x0000000000438CF0

//----- (0000000000438CF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_438CF0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int16 v4; // ax
  signed __int64 v7; // rax
  size_t v8; // rbx
  int v9; // r14d
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rbx
  int *v13; // rbx
  _BYTE *v14; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // rax
  size_t v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r14
  char *v20; // rsi
  __int64 v21; // rax
  char *v22; // rax
  int v23; // [rsp+Ch] [rbp-6Ch]
  __int16 v24; // [rsp+1Eh] [rbp-5Ah] BYREF
  _BYTE src[5]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v26[15]; // [rsp+25h] [rbp-53h] BYREF
  _BYTE v27[4]; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v28 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 24) = v2;
  v3 = a2[1];
  v4 = 0;
  if ( !v3 )
    goto LABEL_2;
  v7 = sub_47FB50(src, (unsigned __int64)v26, v3) - src;
  v8 = v7;
  if ( v7 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    v19 = v18 + v7;
    if ( __CFADD__(v18, v7) )
    {
      if ( v18 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v18 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_14;
      }
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v20 = *(char **)a1;
    v21 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) < v19 )
    {
      v22 = (char *)sub_481540(a1, v20, v19, 1u);
      *(_QWORD *)a1 = v22;
      v20 = v22;
      v21 = *(_QWORD *)(a1 + 8);
    }
    memset(&v20[v21], 0, v19 - v21);
    *(_QWORD *)(a1 + 8) = v19;
LABEL_14:
    memcpy((void *)(v18 + *(_QWORD *)a1), src, v8);
  }
  if ( a2[1] )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = (int *)(*a2 + 16 * v12);
      v23 = v10;
      v14 = sub_47FB50(src, (unsigned __int64)v27, (unsigned int)(*v13 - v11));
      v15 = sub_47FB50(v14, (unsigned __int64)v27, (unsigned int)(v13[1] - v23));
      v16 = sub_47FB50(v15, (unsigned __int64)v27, (unsigned int)v13[2]);
      v17 = sub_47FB50(v16, (unsigned __int64)v27, (unsigned int)v13[3]) - src;
      if ( v17 )
        sub_437420((char **)a1, src, v17);
      ++v9;
      v11 = *v13;
      v10 = v13[1];
      v12 = v9;
    }
    while ( (unsigned __int64)v9 < a2[1] );
  }
  v4 = *(_QWORD *)(a1 + 8) - *(_WORD *)(a1 + 24);
LABEL_2:
  v24 = v4;
  sub_437420((char **)a1, &v24, 2u);
  return v28 - __readfsqword(0x28u);
}
