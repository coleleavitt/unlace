/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: zip_deflate_bytevec
// Address: 0x0007AC7C

//----- (0007AC7C) --------------------------------------------------------
bool __fastcall zip_deflate_bytevec(int a1, _DWORD *a2)
{
  int v3; // r2
  int v4; // r3
  int v5; // r7
  int v6; // r4
  int v7; // r5
  unsigned int v8; // r7
  _DWORD *v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r7
  char *v12; // r1
  int v13; // r0
  size_t v14; // r5
  _DWORD *v15; // r0
  unsigned int v16; // r4
  unsigned int v17; // r6
  char *v18; // r0
  void *v20; // [sp+4h] [bp-10054h]
  char *v21; // [sp+8h] [bp-10050h]
  _DWORD *v22; // [sp+Ch] [bp-1004Ch]
  int v23; // [sp+10h] [bp-10048h]
  int v24; // [sp+14h] [bp-10044h]
  char v25; // [sp+18h] [bp-10040h] BYREF
  _DWORD v26[14]; // [sp+1Ch] [bp-1003Ch] BYREF
  _BYTE v27[32768]; // [sp+54h] [bp-10004h] BYREF
  _BYTE v28[32772]; // [sp+8054h] [bp-8004h] BYREF

  v24 = a1;
  v20 = &_stack_chk_guard;
  v21 = &v25;
  memset(v26, 0, sizeof(v26));
  v26[4] = 0x8000;
  v26[3] = v27;
  v5 = sub_856D0(v26, 0xFFFFFFFF, "1.3.1", 56);
  if ( !v5 )
  {
    v22 = a2;
    v6 = 0;
    v7 = 0x8000;
    while ( 1 )
    {
      v8 = v26[1];
      if ( v7 >= 1 && !v26[1] )
      {
        v8 = v22[1] - v6;
        if ( v8 >= 0x8000 )
          v8 = 0x8000;
        _memmove_chk(v28, *v22 + v6, v8, 0x8000);
        v26[0] = v28;
        v26[1] = v8;
        v6 += v8;
        v7 = v8;
      }
      if ( v26[4] )
        goto LABEL_19;
      v23 = v7;
      v9 = (_DWORD *)v24;
      v10 = *(_DWORD *)(v24 + 4);
      v11 = 0x7FFFFFFF;
      if ( v10 <= 0xFFFF7FFF )
        v11 = v10 + 0x8000;
      if ( v10 >= v11 )
      {
        if ( v10 <= v11 )
          goto LABEL_18;
      }
      else
      {
        v12 = *(char **)v24;
        if ( *(_DWORD *)(v24 + 8) < v11 )
        {
          v12 = (char *)qvector_reserve(v24, v12, v11, 1u);
          *(_DWORD *)v24 = v12;
        }
        memset(&v12[*(_DWORD *)(v24 + 4)], 0, v11 - *(_DWORD *)(v24 + 4));
        v9 = (_DWORD *)v24;
      }
      v9[1] = v11;
LABEL_18:
      qmemcpy((void *)(*v9 + v10), v27, 0x8000u);
      v26[3] = v27;
      v26[4] = 0x8000;
      v8 = v26[1];
      v7 = v23;
LABEL_19:
      sub_865F0((int)v26, 4 * (v8 == 0), v3, v4, (int)v20, (int)v21, (int)v22, v23, v24);
      if ( v13 )
      {
        v5 = v13;
        break;
      }
    }
  }
  sub_858EC(v26);
  v14 = v26[3] - (_DWORD)v27;
  if ( (_BYTE *)v26[3] != v27 )
  {
    v15 = (_DWORD *)v24;
    v16 = *(_DWORD *)(v24 + 4);
    v17 = v16 + v14;
    if ( v16 + v14 < v16 )
      v17 = 0x7FFFFFFF;
    if ( v16 >= v17 )
    {
      if ( v16 <= v17 )
        goto LABEL_32;
    }
    else
    {
      if ( *(_DWORD *)(v24 + 8) >= v17 )
      {
        v18 = *(char **)v24;
      }
      else
      {
        v18 = (char *)qvector_reserve(v24, *(void **)v24, v17, 1u);
        *(_DWORD *)v24 = v18;
      }
      memset(&v18[*(_DWORD *)(v24 + 4)], 0, v17 - *(_DWORD *)(v24 + 4));
      v15 = (_DWORD *)v24;
    }
    v15[1] = v17;
LABEL_32:
    qmemcpy((void *)(*v15 + v16), v27, v14);
  }
  return v5 >= 0;
}
// 7ACD6: variable 'v22' is possibly undefined
// 7AD00: variable 'v24' is possibly undefined
// 7AD60: variable 'v3' is possibly undefined
// 7AD60: variable 'v4' is possibly undefined
// 7AD60: variable 'v20' is possibly undefined
// 7AD60: variable 'v21' is possibly undefined
// 7AD60: variable 'v23' is possibly undefined
// 7AD66: variable 'v13' is possibly undefined
// 19688: using guessed type int __fastcall _memmove_chk(_DWORD, _DWORD, _DWORD, _DWORD);
