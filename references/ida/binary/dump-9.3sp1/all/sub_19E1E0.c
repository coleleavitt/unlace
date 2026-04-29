__int64 __fastcall sub_19E1E0(__int64 a1, __m128i a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  __int64 v13; // rax
  char v14[16]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v15[8]; // [rsp+10h] [rbp-40h] BYREF

  v15[3] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 8) || (v5 = *(_QWORD *)(a1 + 24)) == 0 )
  {
    if ( !under_debugger )
      sub_383060(51648);
LABEL_20:
    BUG();
  }
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8LL) + 8LL);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 && *(_BYTE *)v7 == 2 )
  {
    v13 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL), *(unsigned int *)(v7 + 4), 1);
    v5 = *(_QWORD *)(a1 + 24);
    v6 += v13;
  }
  sub_123A40((__int64)v14, (unsigned __int8 *)v5, a4, a5);
  v8 = *(_QWORD *)(a1 + 8) == 0;
  v15[1] = 0;
  v15[0] = 0xFFFFFFFF00000000LL;
  if ( v8 || !*(_QWORD *)(a1 + 24) )
  {
    if ( !under_debugger )
      sub_383060(51647);
    goto LABEL_20;
  }
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 && *(_BYTE *)v9 == 2 && sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), *(unsigned int *)(v9 + 4), 1) )
    sub_125180((__int64)v15, *(unsigned __int8 **)(a1 + 32));
  sub_11CA10((char *)(*(_QWORD *)(a1 + 16) + 32LL), v14);
  sub_11CA10((char *)(*(_QWORD *)(a1 + 16) + 48LL), (char *)v15);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = 12;
  if ( !*(_BYTE *)(v10 + 48) )
    v11 = 4;
  *(_DWORD *)v10 = v11;
  sub_15BC70(*(unsigned int **)(a1 + 16), *(unsigned __int64 **)a1, 0, 0, nullptr, nullptr, a2, 0);
  sub_11CDA0((__int64)v15);
  sub_11CDA0((__int64)v14);
  return v6;
}
