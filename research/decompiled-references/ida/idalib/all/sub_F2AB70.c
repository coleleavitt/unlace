void __fastcall sub_F2AB70(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdi
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax

  sub_995540(*(_QWORD *)(a1 + 1096), "CXXCtorInitializer");
  v3 = *(_QWORD *)a2;
  v4 = (*(__int64 *)a2 >> 1) & 3;
  if ( v4 == 2 || v4 == 1 )
  {
    v5 = *(_QWORD *)(a1 + 1096);
    v6 = *(_BYTE **)(v5 + 32);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 24) )
    {
      sub_227BA10(v5, 32);
    }
    else
    {
      *(_QWORD *)(v5 + 32) = v6 + 1;
      *v6 = 32;
    }
    v7 = *(_QWORD *)a2;
    v8 = (*(__int64 *)a2 >> 1) & 3;
    if ( v8 == 1 )
    {
      sub_F2A6D0(a1, v7 & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v9 = 0;
      if ( v8 == 2 )
        v9 = *(_QWORD *)(*(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                       + 8LL * *(unsigned int *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                       - 8);
      sub_F2A6D0(a1, v9);
    }
  }
  else if ( (*(_BYTE *)(a2 + 28) & 1) != 0 )
  {
    if ( !v3 )
      BUG();
    sub_F2A610(a1, *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL));
  }
  else
  {
    v10 = sub_B98AD0(a2);
    sub_F2A610(a1, v10 & 0xFFFFFFFFFFFFFFF0LL);
  }
}
