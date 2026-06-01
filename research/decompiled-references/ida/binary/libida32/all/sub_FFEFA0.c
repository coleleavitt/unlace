__int64 __fastcall sub_FFEFA0(__int64 a1, const void *a2, size_t a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 *v8; // r8
  __int64 v9; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  size_t v13; // rdx
  _BYTE *v14; // rcx
  unsigned int v15; // eax
  __int64 *v16; // rbp
  __int64 *v17; // rsi
  _BYTE *v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+4h] [rbp-54h]
  int v21; // [rsp+4h] [rbp-54h]
  __int64 *v22; // [rsp+8h] [rbp-50h]
  __int64 *v23; // [rsp+8h] [rbp-50h]
  __int64 *v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  v5 = *(_QWORD *)(a1 + 128);
  v6 = sub_2220DF0(a2, a3);
  v7 = (unsigned int)sub_2220F70(a1, a2, a3, v6);
  v8 = (__int64 *)(*(_QWORD *)a1 + 8 * v7);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_E138D0(v24, v8, 0);
      v9 = *v24[0];
      return *(unsigned int *)(v9 + 8);
    }
    --*(_DWORD *)(a1 + 16);
  }
  v11 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 104) += a3 + 17;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v13 = a3 + 17 + v12;
  if ( *(_QWORD *)(a1 + 32) >= v13 && v11 )
  {
    *(_QWORD *)(a1 + 24) = v13;
  }
  else
  {
    v23 = v8;
    v21 = v7;
    v19 = sub_962430(a1 + 24, a3 + 17, a3 + 17, 3, (__int64)v8, v7);
    v8 = v23;
    LODWORD(v7) = v21;
    v12 = v19;
  }
  v14 = (_BYTE *)(v12 + 16);
  if ( a3 )
  {
    v22 = v8;
    v20 = v7;
    v18 = memcpy((void *)(v12 + 16), a2, a3);
    v8 = v22;
    LODWORD(v7) = v20;
    v14 = v18;
  }
  v14[a3] = 0;
  *(_QWORD *)v12 = a3;
  *(_DWORD *)(v12 + 8) = (v5 - v4) >> 3;
  *v8 = v12;
  ++*(_DWORD *)(a1 + 12);
  v15 = sub_2221390(a1, (unsigned int)v7);
  sub_E138D0(v24, (__int64 *)(*(_QWORD *)a1 + 8LL * v15), 0);
  v16 = v24[0];
  v17 = *(__int64 **)(a1 + 128);
  v9 = *v24[0];
  v24[0] = *(__int64 **)v24[0];
  if ( v17 == *(__int64 **)(a1 + 136) )
  {
    sub_FFA8E0(a1 + 120, v17, (__int64 *)v24);
    v9 = *v16;
  }
  else
  {
    *v17 = v9;
    *(_QWORD *)(a1 + 128) = v17 + 1;
  }
  return *(unsigned int *)(v9 + 8);
}

