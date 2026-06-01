void __fastcall sub_81FAA0(__int64 a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  unsigned int v5; // edx
  unsigned int v6; // r12d
  __int64 v7; // rbx
  int *v8; // rsi
  int *v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // [rsp+0h] [rbp-78h] BYREF
  char v12; // [rsp+4h] [rbp-74h]
  __int64 v13; // [rsp+8h] [rbp-70h]
  unsigned int v14; // [rsp+10h] [rbp-68h]
  int v15; // [rsp+14h] [rbp-64h]

  v2 = a2 + 1;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 20);
  if ( v2 < 8 )
    v2 = 8;
  v11 = 0;
  if ( v2 < 2 * v4 )
    v2 = 2 * v4;
  if ( v2 > v5 )
    v2 = v5;
  v12 &= ~1u;
  v6 = v2;
  sub_6A3820((__int64)&v11, v2, v5);
  if ( v4 )
  {
    v7 = 0;
    do
    {
      v8 = (int *)(v7 + *(_QWORD *)(a1 + 8));
      v9 = (int *)(v7 + v13);
      v7 += 56;
      sub_6A0310(v9, v8);
    }
    while ( v7 != 56LL * v4 );
  }
  while ( v6 != v4 )
  {
    v10 = v4++;
    sub_6A63E0(v13 + 56 * v10, *(_QWORD *)(a1 + 8) + 56LL * *(unsigned int *)(a1 + 16));
  }
  if ( v14 != v15 )
    sub_6A63E0(v13 + 56LL * v14, *(_QWORD *)(a1 + 8) + 56LL * *(unsigned int *)(a1 + 16));
  sub_6A0310((int *)a1, (int *)&v11);
  if ( v11 > 1 )
    sub_69F740((__int64)&v11);
}

