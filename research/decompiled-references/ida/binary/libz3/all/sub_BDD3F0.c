__int64 __fastcall sub_BDD3F0(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r14d
  char v12; // al
  bool v13; // zf
  _DWORD v14[14]; // [rsp+0h] [rbp-38h] BYREF

  sub_1684300(v14, *(_QWORD *)(a1 + 24));
  v5 = *a3;
  if ( !*(_WORD *)(*a3 + 4) )
  {
    do
    {
      v6 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
      if ( !v6 || *v6 != v14[0] || v6[1] || a2 <= 1 )
        break;
      v8 = 0;
      while ( 1 )
      {
        v9 = a3[v8 + 1];
        v10 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v8 + 1) + 32);
        v11 = v8++ + 2;
        v12 = sub_15D27F0(*(_QWORD *)(a1 + 24), v9, v10);
        if ( v11 >= a2 )
          break;
        if ( v12 == 1 )
          goto LABEL_11;
        v5 = *a3;
      }
      if ( !v12 )
        return sub_15DCAD0(*(_QWORD *)(a1 + 24), (int)a3, 0);
LABEL_11:
      v5 = *(_QWORD *)(*a3 + 32);
      v13 = *(_WORD *)(v5 + 4) == 0;
      *a3 = v5;
    }
    while ( v13 );
  }
  return sub_15DCAD0(*(_QWORD *)(a1 + 24), (int)a3, 0);
}

