__int64 __fastcall sub_1FC88B0(__int64 a1, __int64 a2)
{
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 *v13; // [rsp+8h] [rbp-40h]

  v3 = (__int64 *)(a2 + 32);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 24) + 32));
  v4 = *(unsigned int *)(a2 + 24);
  v5 = 8 * v4;
  v6 = a2 + 32 + 8 * v4;
  if ( v6 != a2 + 32 )
  {
    v7 = *(unsigned int *)(a1 + 40);
    do
    {
      while ( 1 )
      {
        v8 = *v3;
        if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        ++v3;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v7) = v8;
        v7 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = v7;
        if ( (__int64 *)v6 == v3 )
          goto LABEL_6;
      }
      v13 = (__int64 *)v6;
      sub_2237220(a1 + 32, a1 + 48, v7 + 1, 8);
      ++v3;
      v6 = (__int64)v13;
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v8;
      v7 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v7;
    }
    while ( v13 != v3 );
LABEL_6:
    v4 = *(unsigned int *)(a2 + 24);
    v5 = 8 * v4;
  }
  v9 = a2 + 8LL * (unsigned int)(v4 + 1) + 32;
  v10 = v9 + v5;
  while ( v10 != v9 )
  {
    v11 = *(unsigned int *)(v9 + 4);
    v9 += 8;
    sub_1F6F5B0(*(_QWORD **)(a1 + 16), (v11 << 32) | *(unsigned int *)(v9 - 8), *(_QWORD *)(a1 + 24));
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 381;
  return result;
}
