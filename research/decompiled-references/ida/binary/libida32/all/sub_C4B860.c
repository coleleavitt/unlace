__int64 __fastcall sub_C4B860(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  char v8; // al
  __int64 *v9; // rbp
  __int64 *v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 *v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+8h] [rbp-20h]

  v7 = *(__int64 **)a1;
  v8 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v8 == 6 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(_QWORD *)(a2 + 16);
    v19 = v7;
    v20 = v13;
    return (unsigned int)sub_C46FB0(&v19, v14, a3, a4, a5, a6);
  }
  if ( v8 != 7 )
  {
    v9 = (__int64 *)sub_E0FED0(v7, a2, 108, 0);
    v10 = (__int64 *)sub_EC8B80(a2);
    if ( v9 )
    {
      v19 = v10;
      LOBYTE(v20) = 1;
      sub_AC88D0(v9, (__int64 *)&v19);
    }
    return 0;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(a2 + 16);
  v19 = v7;
  v20 = v15;
  v11 = sub_C46FB0(&v19, v16, a3, a4, a5, a6);
  if ( !(_BYTE)v11 )
    return v11;
  v17 = sub_21D5390();
  v18 = *(_QWORD **)(a1 + 8);
  if ( *v18 == v17 )
  {
    sub_21DC230(v18);
    return v11;
  }
  sub_21D66D0(v18);
  return v11;
}

