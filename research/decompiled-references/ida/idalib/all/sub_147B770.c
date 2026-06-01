void __fastcall sub_147B770(__int64 a1, __int64 a2)
{
  int *v2; // r15
  __int64 *v4; // r12
  unsigned int v5; // r14d
  unsigned __int64 v6; // rdi
  char v7; // al
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-90h]
  _BYTE v12[136]; // [rsp+10h] [rbp-88h] BYREF

  v2 = (int *)(a1 + 16);
  v4 = *(__int64 **)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 16);
  if ( (unsigned int)(*(_DWORD *)(v4[8] + 248) - 55) > 1 )
  {
    *(_DWORD *)(a1 + 40) = v5;
    sub_14634E0(v4, (int *)(a1 + 16));
    sub_1564820(v12, a1, v5, 5467);
    sub_AEA040((__int64)v12);
  }
  else
  {
    v6 = *(unsigned __int16 *)(a1 + 32);
    v7 = sub_141A630(v6);
    if ( (_WORD)v6 == 1 || v7 )
      v8 = 0;
    else
      v8 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 40) = v5;
    sub_14634E0(v4, v2);
    v9 = sub_1479050(
           a2 + 40,
           v8,
           ((unsigned __int64)*(unsigned int *)(a1 + 40) << 32) | *(unsigned int *)(a1 + 40),
           0,
           0,
           246,
           0);
    v10 = *(unsigned int *)(a2 + 16);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 20) )
    {
      v11 = v9;
      sub_2237220(a2 + 8, a2 + 24, v10 + 1, 8);
      v10 = *(unsigned int *)(a2 + 16);
      v9 = v11;
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v10) = v9;
    ++*(_DWORD *)(a2 + 16);
  }
}
