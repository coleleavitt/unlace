void __fastcall sub_F3CCF0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  int v5; // r15d
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdi
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]

  if ( (*(_BYTE *)(a1 + 17) & 4) == 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 29
    || (*(_BYTE *)(a1 + 18) & 8) != 0 )
  {
    v4 = sub_F32C40(a1);
    v5 = v4;
    v11 = HIDWORD(v4);
  }
  else
  {
    LODWORD(v11) = 0;
    v5 = 0;
  }
  v6 = *(unsigned int *)(a1 + 20);
  v7 = a1 + 48;
  v8 = *(_QWORD *)(a1 + 32);
  sub_993300(a2, v8);
  sub_993300(a2, SHIDWORD(v8));
  sub_993300(a2, v5);
  sub_993300(a2, v11);
  sub_993300(a2, v6);
  sub_993300(a2, 0);
  v9 = a1 + 48 + 24 * v6;
  if ( a1 + 48 != v9 )
  {
    do
    {
      v10 = v7;
      v7 += 24;
      sub_EF9920(v10, a2, a3);
    }
    while ( v9 != v7 );
  }
}

