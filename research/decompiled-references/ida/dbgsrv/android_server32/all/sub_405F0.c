/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_405F0
// Address: 0x000405F0

//----- (000405F0) --------------------------------------------------------
int __fastcall sub_405F0(int a1, int a2, int a3)
{
  int v5; // r0
  int *v6; // r5
  int v7; // r6
  const char *v8; // r1
  const char *v9; // r0
  size_t v10; // r4
  _DWORD *v11; // r6
  void *v12; // r0
  const void *v14; // [sp+8h] [bp-30h]
  size_t *v15; // [sp+Ch] [bp-2Ch]
  void **v16; // [sp+10h] [bp-28h]
  int v17; // [sp+14h] [bp-24h]
  int v18; // [sp+18h] [bp-20h]
  int v19; // [sp+1Ch] [bp-1Ch]
  int v20; // [sp+24h] [bp-14h] BYREF
  void *v21; // [sp+28h] [bp-10h]
  size_t v22; // [sp+2Ch] [bp-Ch]
  size_t v23; // [sp+30h] [bp-8h]
  int v24; // [sp+34h] [bp-4h]

  v5 = *(_DWORD *)(a1 + 48);
  v6 = (int *)(a1 + 44);
  if ( !v5 )
  {
    v10 = *(_DWORD *)(a3 + 4);
LABEL_13:
    v21 = nullptr;
    v20 = a2;
    v22 = 0;
    v23 = 0;
    if ( v10 )
    {
      v21 = qalloc_or_throw(v10);
      v23 = v10;
      qmemcpy(v21, *(const void **)a3, v10);
      v22 = v10;
    }
    sub_4071C(v6, &v20);
    if ( v21 )
    {
      v22 = 0;
      qfree(v21);
      v23 = 0;
      v21 = nullptr;
    }
    return _stack_chk_guard - v24;
  }
  v19 = a2;
  v18 = *v6;
  v17 = 16 * (v5 - 1);
  v7 = *v6 + v17;
  v15 = (size_t *)(v7 + 8);
  v8 = &byte_B3CBE;
  v9 = &byte_B3CBE;
  if ( *(_DWORD *)(v7 + 8) )
    v9 = *(const char **)(*v6 + v17 + 4);
  v16 = (void **)(v18 + v17 + 4);
  v10 = *(_DWORD *)(a3 + 4);
  if ( v10 )
    v8 = *(const char **)a3;
  v14 = *(const void **)a3;
  if ( strcmp(v9, v8) )
  {
    a2 = v19;
    if ( *(_DWORD *)(v18 + v17) == v19 )
    {
      if ( v16 != (void **)a3 )
      {
        if ( v10 < 2 )
        {
          *v15 = 0;
        }
        else
        {
          if ( *(_DWORD *)(v7 + 12) >= v10 )
          {
            v11 = (_DWORD *)(v18 + v17 + 4);
            v12 = *v16;
          }
          else
          {
            v11 = (_DWORD *)(v18 + v17 + 4);
            v12 = qvector_reserve((int)v16, *v16, v10, 1u);
            *v16 = v12;
          }
          *v15 = v10;
          memmove(v12, v14, v10 - 1);
          *(_BYTE *)(*v11 + v10 - 1) = 0;
        }
      }
      return _stack_chk_guard - v24;
    }
    goto LABEL_13;
  }
  return _stack_chk_guard - v24;
}
// B3CBE: using guessed type char byte_B3CBE;
