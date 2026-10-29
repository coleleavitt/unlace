__int64 __fastcall sub_C0F150(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi

  sub_13A2C50(a1 + 128);
  v2 = *(_QWORD **)(a1 + 936);
  *(_DWORD *)(a1 + 944) = 0;
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[3 * v3];
      do
      {
        v7 = v2[1];
        v8 = *v2;
        if ( v7 )
        {
          v6 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v6 )
          {
            sub_15D7BC0(v8, v7);
            v8 = *v2;
          }
        }
        v5 = v2[2];
        if ( v5 )
        {
          v6 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v8, v5);
        }
        v2 += 3;
      }
      while ( v2 != v4 );
      v2 = *(_QWORD **)(a1 + 936);
    }
    *((_DWORD *)v2 - 1) = 0;
  }
  sub_1380CB0(a1 + 952);
  sub_1535180(a1 + 2064);
  sub_14B6450(a1 + 24);
  *(_BYTE *)(a1 + 2200) = 0;
  return sub_16952A0(a1 + 40);
}

