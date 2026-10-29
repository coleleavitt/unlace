__int64 __fastcall sub_97F220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  int v14; // [rsp+8h] [rbp-30h]
  char v15; // [rsp+Ch] [rbp-2Ch]

  v5 = *(_QWORD *)(a1 + 184);
  v6 = (_QWORD *)sub_A1A5A0(v5, 24);
  v7 = *v6;
  v8 = v6;
  if ( v7 == sub_2575D20(v5, 24, v9) )
    v8 = (_QWORD *)v8[1];
  v10 = 0;
  if ( (*((_BYTE *)v8 + 20) & 7) == 0 )
  {
    v10 = 1;
    if ( (*((_BYTE *)v8 + 20) & 8) != 0 )
      v10 = 0xFFFFFFFFLL;
  }
  v11 = *(_QWORD *)(a3 + 8);
  v13 = v10;
  v14 = 32;
  v15 = 0;
  return sub_97E3E0(a1, (__int64)&v13, v11);
}

