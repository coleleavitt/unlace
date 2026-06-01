__int64 __fastcall sub_BD5750(__int64 a1, _QWORD *a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rbp
  _DWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // r12
  __int64 result; // rax
  __int64 v16; // [rsp+0h] [rbp-38h]
  unsigned __int8 v17; // [rsp+7h] [rbp-31h]
  _QWORD *v18; // [rsp+8h] [rbp-30h] BYREF
  int v19; // [rsp+10h] [rbp-28h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  __int64 v21; // [rsp+20h] [rbp-18h]
  __int64 v22; // [rsp+28h] [rbp-10h]
  __int64 v23; // [rsp+30h] [rbp-8h]

  v5 = *(_QWORD *)(a1 + 16);
  v18 = a2;
  if ( !sub_B70A50((__int64 *)(v5 + 8440), a1, -116, 1u, &v18, 0) )
    return 0;
  v6 = v18;
  ++*(_DWORD *)(a1 + 308);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD **)v6[14];
  v9 = sub_BDD510(a1, *v6);
  v13 = (_DWORD *)v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  sub_B6F780(*(_QWORD **)(a1 + 16), v9, 0, a3, a4, a5, v10, v11, v12, v16, (int)v18, v19, v20, v21, v22, v23);
  result = sub_BD4E90(a1, v8, v13);
  if ( v13 )
  {
    if ( v13[2]-- == 1 )
    {
      v17 = result;
      sub_15D7BC0(v7, v13);
      return v17;
    }
  }
  return result;
}

