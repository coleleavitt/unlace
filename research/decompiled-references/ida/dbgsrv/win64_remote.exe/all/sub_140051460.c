/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051460
// Address: 0x0000000140051460

//----- (0000000140051460) ----------------------------------------------------
_QWORD *__fastcall sub_140051460(int a1, unsigned __int64 *a2)
{
  signed __int64 v3; // r14
  __int64 v4; // rax
  bool v5; // cf
  size_t v6; // rax
  signed __int64 *v7; // rax
  _QWORD *v8; // r15
  signed __int64 v9; // rbp
  _QWORD *v10; // rbx
  _BYTE *v11; // rcx
  const char *v12; // rsi
  size_t v14; // rax
  _BYTE *v15; // rax
  const char *v16; // rsi
  size_t v18; // rax

  if ( a1 <= 0 )
    return nullptr;
  v3 = a1;
  v4 = 56LL * a1;
  if ( !is_mul_ok(a1, 0x38u) )
    v4 = -1;
  v5 = __CFADD__(v4, 8);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1;
  v7 = (signed __int64 *)operator new(v6);
  if ( v7 )
  {
    *v7 = v3;
    v8 = v7 + 1;
    `eh vector constructor iterator'(
      v7 + 1,
      0x38u,
      v3,
      (void (*)(void *))sub_140050690,
      (void (*)(void *))sub_14000B6D0);
  }
  else
  {
    v8 = nullptr;
  }
  v9 = 0;
  v10 = v8 + 5;
  do
  {
    *((_DWORD *)v10 - 10) = sub_14005B690(a2, a2[1]);
    *((_DWORD *)v10 - 9) = sub_14005B690(a2, a2[1]);
    v11 = (_BYTE *)*a2;
    v12 = (const char *)*a2;
    while ( (unsigned __int64)v11 < a2[1] )
    {
      if ( !*v11++ )
      {
        *a2 = (unsigned __int64)v11;
        if ( v12 )
        {
          v14 = strlen(v12);
          if ( v14 )
          {
            sub_140001810((__int64)(v10 - 4), v12, v14);
            goto LABEL_17;
          }
        }
        break;
      }
    }
    *(v10 - 3) = 0;
LABEL_17:
    v15 = (_BYTE *)*a2;
    v16 = (const char *)*a2;
    while ( (unsigned __int64)v15 < a2[1] )
    {
      if ( !*v15++ )
      {
        *a2 = (unsigned __int64)v15;
        if ( v16 )
        {
          v18 = strlen(v16);
          if ( v18 )
          {
            sub_140001810((__int64)(v10 - 1), v16, v18);
            goto LABEL_24;
          }
        }
        break;
      }
    }
    *v10 = 0;
LABEL_24:
    ++v9;
    v10 += 7;
  }
  while ( v9 < v3 );
  return v8;
}
// 1400514EB: conditional instruction was optimized away because r14.8 is in (1..7FFFFFFF)
