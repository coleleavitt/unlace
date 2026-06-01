__int64 __fastcall sub_BAA400(__int64 a1, unsigned int a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rbp
  int v7; // eax
  __int64 v8; // rsi
  unsigned int *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbp
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // esi
  __int64 result; // rax
  unsigned int *v23; // rsi
  __int64 v24; // rdi
  __int64 v26; // [rsp+8h] [rbp-30h] BYREF
  unsigned int *v27; // [rsp+10h] [rbp-28h] BYREF
  __int64 v28; // [rsp+18h] [rbp-20h]

  v5 = a2;
  v7 = sub_18002C0();
  v8 = 255;
  if ( v7 )
  {
    v8 = 0xFFFF;
    if ( v7 != 2 )
      v8 = 196607;
  }
  v9 = (unsigned int *)sub_163B390(a1 + 56, v8);
  v10 = sub_966570(a1, v9);
  v11 = (unsigned int)sub_B39350((__int64)v10, *(_DWORD *)(a1 + 8));
  sub_BA8A20((_QWORD *)a1, v5, a3, a4, a5);
  sub_BA8A20((_QWORD *)a1, v11, a3, a4, a5);
  v12 = *(_QWORD *)(a1 + 200) + 16 * v11;
  sub_BA8A20((_QWORD *)a1, v5, a3, a4, a5);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16 * v5 + 8);
  v15 = *(_QWORD *)(v12 + 8);
  v27 = nullptr;
  v16 = a1 + 224;
  v28 = v13;
  if ( v14 )
    v17 = *(unsigned int *)(v14 - 4);
  else
    v17 = 0;
  sub_FD8930(v16, v17, v14, v15, &v27);
  v18 = *(_QWORD *)(a1 + 16);
  v19 = sub_966440(a1, v27);
  v20 = *(_QWORD *)(v18 + 8848);
  v26 = 2;
  v21 = v19;
  result = *(unsigned __int8 *)(v20 + v19);
  if ( (_BYTE)result == 0xFF )
  {
    result = sub_8E8670(v18, &v26, v21 ^ 1);
  }
  else if ( !(_BYTE)result )
  {
    result = (__int64)sub_8F28B0(v18, v21, 2, 0);
  }
  v23 = v27;
  ++*(_DWORD *)(a1 + 500);
  if ( v23 )
  {
    v24 = v28;
    if ( v23[2]-- == 1 )
      return sub_15D7BC0(v24, v23);
  }
  return result;
}

