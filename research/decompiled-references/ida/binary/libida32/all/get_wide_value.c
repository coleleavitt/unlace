__int64 __fastcall get_wide_value(int a1)
{
  int v1; // ebx
  _QWORD *v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v1 = a1;
  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( a1 != -1 )
    v1 = sub_614FB0(*v2, 29) + a1;
  v3 = *v2;
  v6 = v1;
  v4 = sub_79B5C0(&v6, v3, 0xFFFFFFFFLL, v7, 8, 65);
  result = -1;
  if ( v4 > 0 )
    return v7[0] - 1LL;
  return result;
}

