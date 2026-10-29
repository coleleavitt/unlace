__int64 __fastcall sub_1FC6960(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // eax
  unsigned int v4; // r12d
  __int64 v5; // r15
  __int64 v6; // r14
  int *v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // [rsp+8h] [rbp-60h]
  int v13; // [rsp+20h] [rbp-48h]

  v2 = 0;
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_DWORD *)(a2 + 16) & 0x7FFFFFFF);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 19) >> 7);
  v12 = a1 + 32;
  v3 = *(_DWORD *)(a2 + 16) & 0x7FFFFFFF;
  if ( v3 )
  {
    do
    {
      v13 = 0;
      v4 = 0;
      v5 = *(_QWORD *)(a2 + 16 * v2 + 40);
      v6 = *(_QWORD *)(a2 + 16 * v2 + 48);
      if ( *(char *)(a2 + 19) < 0 )
      {
        v7 = (int *)(a2 + 16LL * v3 + 8 * v2 + 40);
        v4 = v7[1];
        v13 = *v7;
      }
      v8 = *(unsigned int *)(a1 + 40);
      if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(v12, a1 + 48, v8 + 1, 8);
        v8 = *(unsigned int *)(a1 + 40);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v8) = v5;
      v9 = *(unsigned int *)(a1 + 44);
      v10 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v10;
      if ( v10 + 1 > v9 )
      {
        sub_2237220(v12, a1 + 48, v10 + 1, 8);
        v10 = *(unsigned int *)(a1 + 40);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v10) = v6;
      ++*(_DWORD *)(a1 + 40);
      if ( *(char *)(a2 + 19) < 0 )
      {
        sub_1F6F570(*(_QWORD **)(a1 + 16), v13, *(_QWORD *)(a1 + 24));
        sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
      }
      ++v2;
      v3 = *(_DWORD *)(a2 + 16) & 0x7FFFFFFF;
    }
    while ( v3 > (unsigned int)v2 );
  }
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 24));
  result = sub_1F6F5B0(*(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 219;
  return result;
}
