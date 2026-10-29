__int64 *__fastcall sub_67F2C0(__int64 *a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v4; // rax
  __int64 v5; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  void (__fastcall *v11)(__int64 *, __int64, __int64); // r13
  __int64 v12; // rax
  __int64 v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_DWORD **)(sub_15D1F10(a3) + 24);
  if ( v4 && *(_DWORD *)(a2 + 144) == *v4 && !v4[1] )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
    v8 = sub_67B850(*(__int64 **)(a2 + 16), a3);
    sub_1374250(v13, v7, v8);
    v9 = sub_15D1F10(a3);
    v10 = sub_678D40((const __m128i *)a2, v13[0], v9);
    if ( *(_DWORD *)(v10 + 28) )
    {
      sub_67ECA0(a1, a2, v10);
    }
    else
    {
      v11 = *(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)a2 + 40LL);
      v12 = sub_15D1F10(a3);
      v11(a1, a2, v12);
    }
    sub_675460(v13[0], v13[1]);
    return a1;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 8);
    *a1 = 0;
    a1[1] = v5;
    return a1;
  }
}

