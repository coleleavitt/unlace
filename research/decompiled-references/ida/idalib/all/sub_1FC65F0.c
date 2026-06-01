__int64 __fastcall sub_1FC65F0(__int64 a1, __int64 a2)
{
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // r13
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 **v13; // rbp
  __int64 **v14; // r13
  __int64 *v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-48h]
  __int64 v17; // [rsp+8h] [rbp-40h]

  v3 = (__int64 *)(a2 + 32);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_WORD *)(a2 + 16) & 0x7FFF);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 19) & 0x40) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  v4 = *(unsigned int *)(a1 + 40);
  v5 = a1 + 32;
  v6 = a1 + 48;
  v7 = a2 + 40 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF);
  do
  {
    while ( 1 )
    {
      v8 = *v3;
      if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
        break;
      ++v3;
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v4) = v8;
      v4 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v4;
      if ( (__int64 *)v7 == v3 )
        goto LABEL_4;
    }
    v17 = v6;
    v16 = v5;
    ++v3;
    sub_2237220(v5, v6, v4 + 1, 8);
    v5 = v16;
    v6 = v17;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v8;
    v4 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
    *(_DWORD *)(a1 + 40) = v4;
  }
  while ( v3 != (__int64 *)v7 );
LABEL_4:
  v9 = *(_WORD *)(a2 + 16) & 0x7FFF;
  result = 8LL * (v9 + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0));
  v11 = result + 32;
  if ( (*(_WORD *)(a2 + 16) & 0x7FFF) != 0 )
  {
    v12 = (unsigned int)(v9 - 1);
    v13 = (__int64 **)(v11 + a2);
    v14 = (__int64 **)(result + a2 + 40 + 8 * v12);
    do
    {
      v15 = *v13++;
      result = sub_1F9A760((__int64 *)(a1 + 8), v15, v12, v11, v6, v5);
    }
    while ( v14 != v13 );
  }
  *(_DWORD *)(a1 + 224) = 212;
  return result;
}
