void __fastcall sub_1408AE0(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  _BYTE v11[104]; // [rsp+0h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(v2 + 48);
  if ( *(_QWORD *)(v3 + 40) )
  {
    sub_FC70B0((__int64)v11, *(_QWORD *)(v2 + 8), *a2, 1096);
    sub_AEA040((__int64)v11);
  }
  else
  {
    v4 = *(unsigned int *)(v3 + 1344);
    v5 = *(_QWORD *)(v3 + 1336);
    v6 = (unsigned __int64)(a2 + 2);
    v7 = v4 + 1;
    v8 = (_QWORD *)(v5 + 96 * v4);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 1348) )
    {
      if ( v5 > v6 || (unsigned __int64)v8 <= v6 )
      {
        sub_1407F20(v3 + 1336, v7);
        v8 = (_QWORD *)(*(_QWORD *)(v3 + 1336) + 96LL * *(unsigned int *)(v3 + 1344));
      }
      else
      {
        v9 = v6 - v5;
        sub_1407F20(v3 + 1336, v7);
        v10 = *(_QWORD *)(v3 + 1336);
        v6 = v10 + v9;
        v8 = (_QWORD *)(v10 + 96LL * *(unsigned int *)(v3 + 1344));
      }
    }
    *v8 = v8 + 2;
    v8[1] = 0x200000000LL;
    if ( *(_DWORD *)(v6 + 8) )
      sub_13FA600((__int64)v8, v6);
    ++*(_DWORD *)(v3 + 1344);
  }
}
