void __fastcall sub_E843E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  __m128 v14[3]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (unsigned __int64)(v3 + 1) > *(_QWORD *)(a1 + 40) )
  {
    sub_22130D0(a1 + 24, a1 + 48, v3 + 1, 1);
    v3 = *(_QWORD *)(a1 + 32);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v3) = v4 != 0;
  ++*(_QWORD *)(a1 + 32);
  if ( v4 )
    sub_E843E0(a1, v4);
  v5 = sub_E6C2C0(a2);
  v8 = *(unsigned int *)(a1 + 184);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    LODWORD(v13) = v5;
    sub_22134E0(a1 + 176, a1 + 192, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 184);
    v5 = v13;
  }
  v9 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(v9 + 4 * v8) = v5;
  ++*(_DWORD *)(a1 + 184);
  if ( v5 == 1 )
  {
    v12 = sub_E6C320(a2);
    sub_E81B80(a1, v12);
  }
  else if ( v5 )
  {
    if ( v5 == 2 )
    {
      v11 = sub_E6C350(a2);
      sub_E81B80(a1, v11);
    }
    else if ( v5 == 3 )
    {
      v10 = nullptr;
      if ( ((*(__int64 *)(a2 + 8) >> 1) & 3) == 2 )
        v10 = *(unsigned int **)(a2 + 16);
      v13 = a1;
      v14[0] = _mm_loadh_ps((const double *)&v13);
      sub_E82800((__int64 *)v14, v10, v9, v8, v6, v7);
    }
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 8) & 6) != 0 )
      BUG();
    sub_21FEE70(
      a1 + 176,
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL) + 16LL,
      **(unsigned int **)(*(_QWORD *)(a2 + 16) + 16LL));
  }
}

