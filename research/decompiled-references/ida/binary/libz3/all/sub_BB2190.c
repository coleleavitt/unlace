__int64 __fastcall sub_BB2190(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned int *v4; // rsi
  unsigned int *v5; // rdi
  unsigned int v7; // [rsp+Ch] [rbp-1Ch]
  unsigned int *v8[3]; // [rsp+10h] [rbp-18h] BYREF

  sub_1407560((unsigned int)v8, a1 + 1848, a1 + 2160, a2, a3, 0, 0, *(_QWORD *)(*(_QWORD *)(a1 + 1848) + 840LL), 1);
  result = sub_966440(a1, v8[0]);
  v4 = v8[0];
  if ( v8[0] )
  {
    v5 = v8[1];
    if ( v8[0][2]-- == 1 )
    {
      v7 = result;
      sub_15D7BC0(v5, v4);
      return v7;
    }
  }
  return result;
}

