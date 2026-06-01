__int64 __fastcall sub_372430(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  void *v10; // rcx
  __int128 v11; // kr00_16
  const void *v13; // r12
  __int64 v14; // r13
  size_t v15; // rbx
  void *dest; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v3 = a1[2];
  v4 = a1[5];
  v18 = __readfsqword(0x28u);
  v5 = a1[9];
  v6 = (v3 == 0) + v3 - 1;
  if ( v4 < 0 )
  {
    v7 = v4 + v6 + 1;
    v4 = v6;
    if ( v7 <= v6 )
      v4 = v7;
    if ( v7 < 0 )
      v4 = 0;
  }
  if ( v5 < 0 )
  {
    v5 += v6 + 1;
    if ( v5 < 0 )
    {
LABEL_9:
      v10 = nullptr;
      v11 = 0u;
      goto LABEL_10;
    }
    if ( v5 > v6 )
      v5 = v6;
  }
  v8 = v5 - v4;
  dest = nullptr;
  v17 = 0;
  if ( v8 <= 0 )
    goto LABEL_9;
  v9 = v6 - v4;
  if ( v9 <= 0 )
    goto LABEL_9;
  if ( v8 <= v9 )
    v9 = v8;
  v13 = (const void *)(a1[1] + v4);
  v14 = v9 + 1;
  v15 = v9;
  dest = (void *)qvector_reserve(&dest, 0, v9 + 1, 1);
  *(_QWORD *)&v17 = v14;
  *((_BYTE *)dest + v15) = 0;
  memmove(dest, v13, v15);
  v10 = dest;
  v11 = v17;
LABEL_10:
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v10;
  *(_OWORD *)(a2 + 16) = v11;
  return 0;
}
