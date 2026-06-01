__int64 __fastcall sub_A318F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 i; // r13
  __int64 v6; // r14
  void (__fastcall *v7)(__int64, __int64, __int64); // r15
  __int64 v8; // [rsp+8h] [rbp-50h]
  __int64 v9[8]; // [rsp+18h] [rbp-40h] BYREF

  v9[0] = 0;
  sub_A30ED0(a1 + 760, a3, v9);
  v3 = v9[0];
  v8 = v9[0];
  sub_9E4980(a1 + 144);
  result = sub_9E7500(a1 + 168);
  if ( v3 )
  {
    for ( i = v3 + 8LL * *(unsigned int *)(v3 - 4); i != v3; v3 += 8 )
    {
      v6 = *(_QWORD *)v3;
      v7 = *(void (__fastcall **)(__int64, __int64, __int64))(**(_QWORD **)v3 + 32LL);
      std::__ostream_insert<char,std::char_traits<char>>();
      v7(v6, a1, a2);
    }
    return sub_186B220((void *)(v8 - 8));
  }
  return result;
}

