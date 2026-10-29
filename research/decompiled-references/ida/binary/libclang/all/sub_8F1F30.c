__int64 __fastcall sub_8F1F30(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 *v12; // rax
  _QWORD **v13; // rdi
  __int64 v14; // rbp
  __int64 (*v15)(void); // rax
  __int64 v16; // rsi
  _BYTE v17[48]; // [rsp-30h] [rbp-A8h] BYREF
  _DWORD v18[14]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int8 v19; // [rsp+38h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a3;
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
  v6 = sub_7A7530(a2, 1);
  v7 = *(_DWORD *)(v5 + 48);
  if ( v7 == 1 )
  {
    v8 = *(__int64 **)(v5 + 24);
  }
  else
  {
    if ( (unsigned int)(v7 - 2) <= 1 )
      BUG();
    v8 = *(__int64 **)(*(_QWORD *)(v5 + 24) + 32LL);
  }
  v9 = *v8;
  v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v9 & 2) == 0 )
    v10 = 0;
  v11 = *(unsigned int *)(a1 + 616);
  if ( *(unsigned int *)(a1 + 620) < (unsigned __int64)(v11 + 1) )
  {
    sub_25D6060(a1 + 608, a1 + 624, v11 + 1, 16);
    v11 = *(unsigned int *)(a1 + 616);
  }
  v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 608) + 16 * v11);
  v12[1] = a2;
  *v12 = v10;
  v13 = *(_QWORD ***)(a1 + 408);
  ++*(_DWORD *)(a1 + 616);
  v14 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL);
  v15 = (__int64 (*)(void))(*v13)[13];
  if ( (char *)v15 == (char *)sub_8D7E60 )
    v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 104LL))(v13[3]);
  else
    v16 = v15();
  sub_8C9AD0((__int64)v17, v16);
  sub_A24290(v18, v5, v17, v14);
  sub_8C9C10((__int64)v17);
  result = v19;
  if ( v19 )
  {
    sub_6A63E0(v6, (__int64)v18);
    if ( v19 )
    {
      v19 = 0;
      if ( v18[0] > 1u )
        sub_69F740((__int64)v18);
    }
    return 1;
  }
  return result;
}

