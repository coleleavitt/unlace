__int64 __fastcall bitrange_t_inject_using_bitrange(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // r11
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v12; // esi
  unsigned __int16 v13; // cx
  unsigned int v14; // ebx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r11
  __int64 v17; // r13
  __int16 v18; // cx
  unsigned int v19; // r9d
  __int64 v20; // rcx
  int v21; // r12d
  __int64 v22; // rsi
  unsigned __int64 v23; // r14
  _BYTE *v24; // rax
  __int64 v25; // rdx
  unsigned __int8 v27; // [rsp+0h] [rbp-54h]
  int v28; // [rsp+4h] [rbp-50h]
  bool v29; // [rsp+Bh] [rbp-49h]
  unsigned __int64 v30; // [rsp+Ch] [rbp-48h]
  unsigned __int8 v31; // [rsp+14h] [rbp-40h]
  int v32; // [rsp+18h] [rbp-3Ch]

  v6 = a1[1];
  if ( !(_WORD)v6 )
    v6 = 8 * a3;
  v9 = (unsigned __int64)(v6 + 7) >> 3;
  if ( v9 != a5 )
    return 0;
  v10 = 1;
  v12 = *a1;
  v13 = *a1;
  v14 = v12 >> 3;
  if ( a6 )
  {
    a4 = &a4[v9 - 1];
    v10 = 0xFFFFFFFFLL;
    v14 = a3 - 1 - v14;
  }
  v15 = v13;
  v16 = v13 + v6;
  if ( v13 < v16 )
  {
    v17 = a2;
    v18 = v13 & 7;
    v29 = v18 != 0;
    v19 = v16 - v12;
    v30 = 8 * a3 - 8;
    v27 = v18;
    v31 = 8 - v18;
    v28 = (1 << v18) - 1;
    v32 = -(1 << v18);
    do
    {
      v23 = v15;
      v22 = *a4;
      v24 = (_BYTE *)(v17 + v14);
      v15 = (_DWORD)v16 + 8 - v19;
      v25 = (unsigned __int8)*v24;
      if ( v16 < v15 )
      {
        v20 = v27;
        v21 = (int)(unsigned __int8)v25 >> v27;
        if ( v30 >= v23 )
        {
          if ( (_DWORD)v10 && v29 )
          {
            v20 = v31;
            v21 = ((int)(unsigned __int8)v25 >> v27) | ((unsigned __int8)v24[(int)v10] << v31);
          }
        }
        else
        {
          v10 = 0;
        }
        if ( v19 > 8 )
          sub_826B70(v15, v22, v25, v20, v10);
        if ( v19 != 8 )
          LODWORD(v22) = v22 & ((1 << v19) - 1) | v21 & -(1 << v19);
      }
      *v24 = ((unsigned __int8)v22 << v27) | v28 & v25;
      if ( (_DWORD)v10 )
      {
        if ( v29 )
          v24[(int)v10] = ((int)(unsigned __int8)v22 >> v31) | v24[(int)v10] & v32;
      }
      v14 += v10;
      a4 += (int)v10;
      v19 -= 8;
    }
    while ( v15 < v16 );
  }
  return 1;
}
