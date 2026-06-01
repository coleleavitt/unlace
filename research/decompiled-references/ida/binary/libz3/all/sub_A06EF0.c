__int64 __fastcall sub_A06EF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int *v3; // rsi
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF
  char v8; // [rsp+18h] [rbp-20h]

  v2 = a1[3];
  if ( v2 && *(_DWORD *)(v2 - 4) )
  {
LABEL_3:
    sub_A068C0(a1);
    sub_180C5A0(&v6, a2);
    v3 = (int *)a1[4];
    v8 = 2;
    v7 = v6;
    sub_98B110((int *)&v7, (__int64)v3, v3);
    sub_15D0DF0(v4);
    return a1[4];
  }
  result = a1[2];
  if ( result )
  {
    if ( !*(_DWORD *)(result - 4) )
      return 0;
    goto LABEL_3;
  }
  return result;
}

