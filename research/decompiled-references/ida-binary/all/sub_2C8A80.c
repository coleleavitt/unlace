__int64 __fastcall text_enc_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  int v5; // edx
  bool v6; // al
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // rax
  bool v10; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 28 || (v3 = 6, v2 == 34) )
  {
    v3 = 7;
    if ( !*(_BYTE *)(*(_QWORD *)a2 + 1080LL) )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 728LL) + 48LL);
      v6 = *(_DWORD *)(a1 + 44) == v5;
      v7 = *(_DWORD *)(a1 + 40) == v5;
      v8 = *(_QWORD *)(a2 + 72);
      v10 = v7 || v6;
      v9 = sub_534430(v8);
      if ( v9 )
        sub_537630(v9, 7, &v10);
      return 3;
    }
  }
  return v3;
}
