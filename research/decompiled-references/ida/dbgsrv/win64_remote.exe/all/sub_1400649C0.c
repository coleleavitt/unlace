/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400649C0
// Address: 0x00000001400649C0

//----- (00000001400649C0) ----------------------------------------------------
__int64 __fastcall sub_1400649C0(__int64 a1, FILE *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  void *v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int16 *v10; // rax
  void *v11; // rcx
  unsigned __int64 v13; // rdi

  *(_QWORD *)(a1 + 8) = 0;
  v4 = 0;
  if ( feof(a2) )
    return -1;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = v5 + 1023;
    if ( !v5 )
      v6 = 1024;
    if ( v6 )
    {
      v8 = v6 + 1;
      if ( v6 + 1 <= v5 )
      {
        if ( v6 + 1 == v5 || v6 + 1 >= v5 )
          goto LABEL_14;
      }
      else
      {
        if ( v8 > *(_QWORD *)(a1 + 16) )
          *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v6 + 1, 1u);
        memset((void *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8)), 0, v8 - *(_QWORD *)(a1 + 8));
      }
      *(_QWORD *)(a1 + 8) = v8;
LABEL_14:
      *(_BYTE *)(v6 + *(_QWORD *)a1) = 0;
      goto LABEL_15;
    }
    v7 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      j_free(v7);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
LABEL_15:
    v9 = *(_QWORD *)(a1 + 8) - v4;
    if ( v9 < 0 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(1225);
    }
    if ( !a2 )
    {
      sub_1400640B0(1u);
      *errno() = 9;
      sub_1400640B0(1u);
LABEL_30:
      if ( !v4 )
        return -1;
      goto LABEL_31;
    }
    if ( !common_fgets<char>(v4 + *(_QWORD *)a1, v9, a2) )
      goto LABEL_30;
    v4 += strlen((const char *)(*(_QWORD *)a1 + v4));
    if ( v4 )
    {
      if ( *(_QWORD *)(a1 + 8) || (v10 = word_1400CAE32, v4 != 1) )
        v10 = (__int16 *)(*(_QWORD *)a1 + v4 - 1);
      if ( *(_BYTE *)v10 == 10 )
        break;
    }
    if ( feof(a2) )
      goto LABEL_26;
  }
  --v4;
LABEL_26:
  if ( !v4 )
  {
    v11 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      j_free(v11);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
      return 0;
    }
    return v4;
  }
LABEL_31:
  v13 = v4 + 1;
  if ( (unsigned __int64)(v4 + 1) <= *(_QWORD *)(a1 + 8) )
  {
    if ( v4 + 1 != *(_QWORD *)(a1 + 8) && (unsigned __int64)(v4 + 1) < *(_QWORD *)(a1 + 8) )
      *(_QWORD *)(a1 + 8) = v13;
    *(_BYTE *)(v4 + *(_QWORD *)a1) = 0;
    return v4;
  }
  if ( v13 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v4 + 1, 1u);
  memset((void *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8)), 0, v13 - *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = v13;
  *(_BYTE *)(v4 + *(_QWORD *)a1) = 0;
  return v4;
}
// 140080604: using guessed type __int64 __fastcall common_fgets<char>(_QWORD, _QWORD, _QWORD);
// 1400CAE32: using guessed type __int16 word_1400CAE32[3];
// 1400CB61C: using guessed type char byte_1400CB61C;
