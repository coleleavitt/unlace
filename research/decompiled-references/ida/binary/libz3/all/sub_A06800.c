__int64 __fastcall sub_A06800(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  int *v4; // rsi
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h] BYREF
  char v9; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD **)(a1 + 8);
  v3 = v2[3];
  if ( v3 && *(_DWORD *)(v3 - 4) )
  {
LABEL_3:
    sub_A03380(*(__int64 **)(a1 + 8));
    sub_180C5A0(&v7, a2);
    v4 = (int *)v2[4];
    v9 = 2;
    v8 = v7;
    sub_98B110((int *)&v8, (__int64)v4, v4);
    sub_15D0DF0(v5);
    return v2[4];
  }
  result = v2[2];
  if ( result )
  {
    if ( !*(_DWORD *)(result - 4) )
      return 0;
    goto LABEL_3;
  }
  return result;
}

