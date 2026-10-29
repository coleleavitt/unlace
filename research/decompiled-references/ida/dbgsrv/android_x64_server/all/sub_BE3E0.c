/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BE3E0
// Address: 0x00000000000BE3E0

//----- (00000000000BE3E0) ----------------------------------------------------
__int64 __fastcall sub_BE3E0(__int64 a1, void *a2, __int64 a3)
{
  __int64 v5; // rsi
  size_t v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r15
  int v14; // ebp
  int v15; // eax
  int v16; // esi
  __int64 v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // r14
  unsigned __int64 v23; // [rsp+8h] [rbp-50h]
  size_t v24; // [rsp+10h] [rbp-48h]
  void *dest; // [rsp+18h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 < 0 )
    return 0;
  v6 = a3;
  v7 = v5 + a3;
  if ( v5 + a3 < v5 )
    return 0;
  v10 = *(_QWORD *)(a1 + 48);
  if ( !v10 )
  {
    v8 = (***(__int64 (__fastcall ****)(_QWORD, __int64, void *, __int64))(a1 + 8))(*(_QWORD *)(a1 + 8), v5, a2, a3);
    v22 = v8;
    if ( v8 < 0 )
      return v8;
LABEL_33:
    v8 = v22;
    *(_QWORD *)(a1 + 24) += v22;
    return v8;
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( v7 <= v11 )
  {
LABEL_10:
    dest = a2;
    v12 = (v10 + v7 - 1) / v10;
    v13 = v5 / v10;
    if ( (int)(v5 / v10) <= (int)v12 )
    {
      v24 = v6;
      v14 = -1;
      v23 = (v10 + v7 - 1) / v10;
      do
      {
        if ( (_DWORD)v13 == (_DWORD)v12
          || (v15 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)(int)v13 >> 3)),
              _bittest(&v15, v13 & 7)) )
        {
          v16 = -1;
          if ( v14 != -1 )
          {
            v17 = v14;
            v18 = v14 * *(_QWORD *)(a1 + 48);
            v19 = (int)v13 * *(_QWORD *)(a1 + 48);
            if ( v19 > *(_QWORD *)(a1 + 16) )
              v19 = *(_QWORD *)(a1 + 16);
            v20 = v19 - v18;
            v8 = -1;
            if ( v20 < 0
              || (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 8))(
                   *(_QWORD *)(a1 + 8),
                   v18,
                   v18 + *(_QWORD *)(a1 + 40)) != v20 )
            {
              return v8;
            }
            v16 = -1;
            if ( v14 >= (int)v13 )
            {
              LODWORD(v12) = v23;
            }
            else
            {
              if ( (((_BYTE)v13 - (_BYTE)v14) & 1) != 0 )
              {
                *(_BYTE *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)v14 >> 3)) |= 1 << (v14 & 7);
                v17 = v14 + 1LL;
              }
              LODWORD(v12) = v23;
              if ( (int)v13 + ~(__int64)v14 )
              {
                do
                {
                  *(_BYTE *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)v17 >> 3)) |= 1 << (v17 & 7);
                  v21 = v17 + 1;
                  v17 += 2;
                  *(_BYTE *)(*(_QWORD *)(a1 + 32) + (v21 >> 3)) |= 1 << (v21 & 7);
                }
                while ( v17 < (int)v13 );
              }
            }
          }
        }
        else
        {
          if ( v14 == -1 )
            v14 = v13;
          v16 = v14;
        }
        LODWORD(v13) = v13 + 1;
        v14 = v16;
      }
      while ( (int)v13 <= (int)v12 );
      v5 = *(_QWORD *)(a1 + 24);
      v6 = v24;
    }
    v22 = v6;
    memcpy(dest, (const void *)(*(_QWORD *)(a1 + 40) + v5), v6);
    goto LABEL_33;
  }
  v6 = v11 - v5;
  if ( v11 > v5 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    goto LABEL_10;
  }
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
