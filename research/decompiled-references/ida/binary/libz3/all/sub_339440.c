__int64 __fastcall sub_339440(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // r12
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _QWORD v8[6]; // [rsp+8h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 272LL))(*(_QWORD *)(a1 + 8), a1 + 96);
  v4 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4);
  if ( a3 && (sub_180C5A0(v8, "symba"), *(_QWORD *)(a1 + 80) == v8[0]) )
    v5 = sub_334F60(a1);
  else
    v5 = sub_336920((_QWORD *)a1, a2);
  v6 = v5;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 200LL))(v4, 1);
  return v6;
}

