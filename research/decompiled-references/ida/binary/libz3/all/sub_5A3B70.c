__int64 __fastcall sub_5A3B70(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  void (***v10)(void); // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v14[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  sub_5A3680(a2, 1, a3);
  v5 = *(_QWORD *)(a2 + 104);
  v6 = *(_QWORD *)(v5 + 16);
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4) - 1;
  else
    v7 = -1;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a2 + 104);
  v14[0] = v7;
  v10 = (void (***)(void))sub_4C5900(v8, v9, 1u, v14);
  v11 = ((__int64 (__fastcall *)(void (***)(void), __int64))(*v10)[2])(v10, v5);
  v12 = sub_4C40F0(*(_QWORD *)(a1 + 24), a2 + 16, v11);
  sub_4CFE00(v10);
  return v12;
}

