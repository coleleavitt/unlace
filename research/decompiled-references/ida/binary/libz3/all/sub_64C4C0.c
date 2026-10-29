__int64 __fastcall sub_64C4C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  void (*v4)(void); // rax
  char v5; // al
  __int64 *v6; // rbp
  __int64 v7; // r13
  __int64 result; // rax
  _BYTE v9[48]; // [rsp+8h] [rbp-30h] BYREF

  sub_1863170(a1 + 24, a2);
  v3 = *(_QWORD *)(a1 + 2976);
  if ( v3 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 168LL);
    if ( v4 != nullsub_188 )
      v4();
  }
  *(_BYTE *)(a1 + 40) = sub_1859630(**(_QWORD **)(a1 + 32), "generate_proof_trace", *(_QWORD *)(a1 + 32) + 8LL, 0);
  v5 = sub_1859630(**(_QWORD **)(a1 + 32), "datalog.unbound_compressor", *(_QWORD *)(a1 + 32) + 8LL, 1);
  v6 = *(__int64 **)(a1 + 32);
  *(_BYTE *)(a1 + 41) = v5;
  v7 = *v6;
  sub_180C5A0(v9, "pentagon");
  result = sub_185A820(v7, "datalog.default_relation", v6 + 1, v9);
  *(_QWORD *)(a1 + 48) = result;
  return result;
}

