char __fastcall sub_1844E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]
  __int64 v15[4]; // [rsp+18h] [rbp-20h] BYREF

  result = sub_B77270(a2, a2, a3, a4);
  if ( result )
  {
    v9 = *(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL);
    v10 = *(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
    v11 = *(_QWORD *)v10;
    v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 43;
    if ( (unsigned int)v12 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
      && (v14 = *(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL),
          v13 = sub_F63050(v11, v9, v12, v7),
          v9 = v14,
          (v11 = v13) != 0) )
    {
      v15[0] = sub_9B4870(v11, v9, v12, v7, v8);
      v9 = sub_6D5440(v15);
    }
    return sub_1844A50(a1, v9, nullptr, "initializer_list", (_QWORD **)(a1 + 4176), nullptr);
  }
  return result;
}
