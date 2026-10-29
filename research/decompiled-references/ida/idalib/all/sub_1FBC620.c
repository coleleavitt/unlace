__int64 __fastcall sub_1FBC620(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 *v12; // rbp
  __int64 *v13; // r13
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // r14
  unsigned int v17; // r13d
  __int64 v18; // r12
  __int64 result; // rax
  unsigned int i; // ebp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 v25[6]; // [rsp+8h] [rbp-30h] BYREF

  sub_1FBBC70((__int64 *)a1, a2);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v3 != 0);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    sub_183F100(a1 + 32, v4);
  }
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 120), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 128), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 56) >> 17) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 56) >> 18) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 56) >> 19) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 56) >> 20) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 56) >> 21) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_DWORD *)(a2 + 60) & 0x10) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_DWORD *)(a2 + 60) & 0x20) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 56) >> 22) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned __int8)BYTE2(*(_QWORD *)(a2 + 56)) >> 7);
  if ( *(char *)(a2 + 58) < 0 )
  {
    v22 = sub_A63040(*(_QWORD *)(a1 + 8), a2);
    sub_1F92A90(*(_QWORD *)(a1 + 16), v22, *(_QWORD *)(a1 + 24));
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 59) & 3);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 56) >> 26) & 0x7FLL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_DWORD *)(a2 + 60) & 2) != 0);
  sub_1F85840(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 80), *(_QWORD **)(a1 + 24), v5, v6);
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 88), v7, v8, v9, v10);
  v11 = sub_BA8020(a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), v11, *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 104));
  v12 = *(__int64 **)(a2 + 96);
  v13 = &v12[*(unsigned int *)(a2 + 104)];
  while ( v13 != v12 )
  {
    v14 = *v12++;
    sub_1F92A90(*(_QWORD *)(a1 + 16), v14, *(_QWORD *)(a1 + 24));
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 60) >> 2) & 3);
  if ( (*(_BYTE *)(a2 + 60) & 0xC) != 0 || (*(_BYTE *)(a2 + 29) & 2) != 0 )
  {
    result = sub_9B9C90(*(_QWORD *)(a1 + 24), 0);
  }
  else
  {
    v25[0] = *(_QWORD *)(a2 + 40);
    if ( (v25[0] & 3) == 1 )
    {
      v23 = *(_QWORD *)(a2 + 96);
      v24 = *(unsigned int *)(a2 + 104);
      sub_9B9C90(*(_QWORD *)(a1 + 24), 1);
      result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v23 + 8 * v24), *(_QWORD *)(a1 + 24));
    }
    else
    {
      v15 = sub_FDE930(v25);
      v16 = *(_QWORD *)(a2 + 96);
      v17 = v15;
      v18 = 8LL * *(unsigned int *)(a2 + 104);
      result = sub_9B9C90(*(_QWORD *)(a1 + 24), v15);
      if ( v17 )
      {
        for ( i = 0; i != v17; ++i )
        {
          v21 = i;
          result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v16 + 4 * v21 + v18), *(_QWORD *)(a1 + 24));
        }
      }
    }
  }
  *(_DWORD *)(a1 + 224) = 57;
  return result;
}
