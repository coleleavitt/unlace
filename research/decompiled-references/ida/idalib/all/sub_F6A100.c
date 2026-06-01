unsigned __int64 __fastcall sub_F6A100(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rax
  unsigned __int64 result; // rax
  _DWORD *v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]
  unsigned int v15; // [rsp+8h] [rbp-40h]
  unsigned int v16; // [rsp+8h] [rbp-40h]
  unsigned int v17; // [rsp+14h] [rbp-34h]
  unsigned int v18; // [rsp+14h] [rbp-34h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]
  void *v21; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+28h] [rbp-20h]

  v6 = sub_F68800(a1, *(_QWORD *)(a2 + 32), a3, a4, a5);
  if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( *(_QWORD *)(a2 + 32) == v6 )
    return a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = nullptr;
  v9 = a1->m128i_i64[0];
  v10 = *(_QWORD *)(a2 + 40);
  v11 = (*(_BYTE *)(a2 + 18) >> 3) & 7;
  v12 = (*(_WORD *)(a2 + 18) >> 6) & 7;
  if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
    v8 = *(_DWORD **)(v10 + 16);
  v13 = *(_BYTE *)(a2 + 19);
  if ( (v13 & 2) != 0 )
  {
    v22 = *(_DWORD *)(v10 + 8);
    if ( (unsigned int)v22 > 0x40 )
    {
      v20 = v6;
      v18 = v11;
      v16 = v12;
      sub_2205510(&v21);
      v12 = v16;
      v11 = v18;
      v6 = v20;
    }
    else
    {
      v21 = *(void **)v10;
    }
  }
  else
  {
    v22 = 8 * ((v13 >> 2) & 0x1F);
    if ( v22 > 64 )
    {
      v19 = v6;
      v17 = v11;
      v15 = v12;
      sub_2205470(&v21, v10, 0);
      v6 = v19;
      v11 = v17;
      v12 = v15;
    }
    else
    {
      v21 = (void *)v10;
    }
  }
  result = sub_A70F70(v9, v6, (__int64)&v21, v8, v12, v11);
  if ( (unsigned int)v22 > 0x40 )
  {
    if ( v21 )
    {
      v14 = result;
      operator delete[](v21);
      return v14;
    }
  }
  return result;
}
