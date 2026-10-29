unsigned __int64 __fastcall sub_BA11A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r15
  __int64 v11; // rdi

  v7 = a1[10];
  if ( !v7 )
    v7 = sub_B9F7C0(a1);
  v8 = v7 + 8;
  v9 = sub_BA0FE0((__int64)a1, v7 + 8, a4, a2, a3);
  if ( !v9
    && (v11 = *(_QWORD *)(sub_B685F0((__int64)a1) + 18360)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v11 + 88LL))(
         v11,
         a1[9],
         a2,
         a3) )
  {
    return sub_BA0FE0((__int64)a1, v8, a4, a2, a3);
  }
  else
  {
    return v9;
  }
}

