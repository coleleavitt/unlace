__int64 __fastcall sub_208FB10(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v6; // rbx
  char i; // r15
  __int64 v8; // rax
  char v9; // cl
  _BYTE *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  _BYTE *v18; // rdx
  char v19; // [rsp+Fh] [rbp-39h]

  sub_20BE180(a2);
  if ( (unsigned __int8)sub_20C2E50("*", 1) )
  {
    v3 = *(_QWORD *)(a1 + 48);
    v4 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      v17 = sub_227BF10(v4, *(_QWORD *)(a1 + 40), v3);
      v18 = *(_BYTE **)(v17 + 32);
      if ( *(_BYTE **)(v17 + 24) == v18 )
      {
        sub_227BF10(v17, "\n", 1);
      }
      else
      {
        *v18 = 10;
        ++*(_QWORD *)(v17 + 32);
      }
      v4 = *(_QWORD *)(a1 + 32);
    }
    sub_2045D40(a2, v4, 0, *(_BYTE *)(a1 + 72), 0);
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 32);
    for ( i = 0; a2 + 24 != v6; v6 = *(_QWORD *)(v6 + 8) )
    {
      v12 = v6 - 56;
      if ( !v6 )
        v12 = 0;
      v13 = sub_20CC3B0(v12);
      v15 = sub_20C2E50(v13, v14);
      if ( v15 )
      {
        v11 = *(_QWORD *)(a1 + 32);
        if ( !i )
        {
          v16 = *(_QWORD *)(a1 + 48);
          if ( v16 )
          {
            v19 = v15;
            v8 = sub_227BF10(v11, *(_QWORD *)(a1 + 40), v16);
            v9 = v19;
            v10 = *(_BYTE **)(v8 + 32);
            if ( *(_BYTE **)(v8 + 24) == v10 )
            {
              sub_227BF10(v8, "\n", 1);
              v9 = v19;
            }
            else
            {
              *v10 = 10;
              ++*(_QWORD *)(v8 + 32);
            }
            v11 = *(_QWORD *)(a1 + 32);
            i = v9;
          }
        }
        sub_2044FE0(v12, v11, 0, 0, 0);
      }
    }
  }
  return 0;
}
