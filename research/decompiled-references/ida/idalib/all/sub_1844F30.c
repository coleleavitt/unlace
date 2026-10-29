bool __fastcall sub_1844F30(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = a2;
  v12[0] = 0;
  if ( (unsigned int)sub_B76070(a2, a2, a3, a4)
    && (a2 = *(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL),
        (unsigned __int8)sub_1844A50(a1, a2, nullptr, "type_identity", (_QWORD **)(a1 + 4184), v12)) )
  {
    v5 = 2;
  }
  else
  {
    v5 = (v12[0] != 0) + 1;
  }
  return (*(_BYTE *)(v4 + 28) & 0x7Fu) - 35 <= 3
      && (unsigned int)sub_B77890(v4) == 2
      && (unsigned int)sub_B76070(v4, a2, v7, v8) > v5
      && sub_1837A90(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 120) + 8LL * v5) + 48LL),
           a2,
           *(_QWORD *)(v4 + 120),
           v9,
           v10,
           v11);
}
