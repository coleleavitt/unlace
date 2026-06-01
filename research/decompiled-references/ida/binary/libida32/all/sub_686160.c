__int64 __fastcall sub_686160(__int64 *a1, int a2, __int64 a3)
{
  __int64 v4; // r12
  _BYTE *v5; // rax
  __int64 v6; // rbp
  size_t v7; // rbx
  size_t v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+10h] [rbp-58h]
  size_t v15; // [rsp+18h] [rbp-50h]
  _BYTE src[4]; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a2 <= 0 )
    return 1;
  v4 = 0;
  v13 = 8LL * a2;
  while ( 1 )
  {
    v5 = sub_54EFA0(src, *(unsigned int *)(v4 + *(_QWORD *)(a3 + 64)), *(_DWORD *)(v4 + *(_QWORD *)(a3 + 64) + 4));
    if ( !v5 )
      break;
    v6 = a1[1];
    v7 = v5 - src;
    v8 = v5 - src;
    if ( v6 )
    {
      --v6;
      v8 = v7 + v6;
    }
    v9 = *a1;
    v10 = v8 + 1;
    if ( a1[2] < v8 + 1 )
    {
      v15 = v8;
      v14 = v8 + 1;
      v11 = qvector_reserve(a1, v9, v10, 1);
      v8 = v15;
      v10 = v14;
      *a1 = v11;
      v9 = v11;
    }
    a1[1] = v10;
    v4 += 8;
    *(_BYTE *)(v9 + v8) = 0;
    memmove((void *)(v6 + *a1), src, v7);
    if ( v13 == v4 )
      return 1;
  }
  return 0;
}

