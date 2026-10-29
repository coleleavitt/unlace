__int64 __fastcall sub_1F99A00(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  _BOOL8 v7; // r9
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // [rsp+0h] [rbp-58h]
  _BOOL8 v14; // [rsp+8h] [rbp-50h]
  _QWORD v15[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)a2, *(_QWORD *)(a1 + 16));
  sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 16));
  v3 = *(unsigned int *)(a2 + 8);
  sub_9B9C90(*(_QWORD *)(a1 + 16), v3);
  result = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)result )
  {
    v9 = a2 + 16;
    v10 = a2 + 32LL * (unsigned int)(result - 1) + 48;
    do
    {
      sub_1F992F0((__int64 *)a1, v3, v4, v5, v6, v7, *(_QWORD *)v9, *(void **)(v9 + 8), *(_QWORD *)(v9 + 16));
      v3 = *(_DWORD *)v9 & 0x7FFFFFFF;
      if ( (_DWORD)v3 == 8 )
      {
        v11 = *(_QWORD *)(a1 + 16);
        v6 = *(_QWORD *)(v9 + 8);
        result = *(unsigned int *)(v11 + 8);
        v12 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFFCLL;
        v5 = *(unsigned int *)(v11 + 12);
        v7 = v6 == v12;
        if ( result + 1 > v5 )
        {
          v3 = v11 + 16;
          v13 = *(_QWORD *)(v9 + 8);
          v14 = v6 == v12;
          sub_2237220(*(_QWORD *)(a1 + 16), v11 + 16, result + 1, 8);
          result = *(unsigned int *)(v11 + 8);
          v7 = v14;
          v6 = v13;
        }
        v4 = *(_QWORD *)v11;
        *(_QWORD *)(*(_QWORD *)v11 + 8 * result) = v7;
        ++*(_DWORD *)(v11 + 8);
        if ( v6 == v12 )
          goto LABEL_4;
        v3 = *(_DWORD *)v9 & 0x7FFFFFFF;
      }
      v15[0] = *(_QWORD *)(v9 + 24);
      result = sub_1FA10D0(a1, v3, v15);
LABEL_4:
      v9 += 32;
    }
    while ( v10 != v9 );
  }
  return result;
}
