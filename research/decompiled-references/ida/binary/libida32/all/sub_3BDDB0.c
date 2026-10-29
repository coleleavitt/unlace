__int64 __fastcall sub_3BDDB0(_QWORD *a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = a2;
  if ( a2 != -1 )
    v2 = sub_614FB0(*a1, 29) + a2;
  v3 = *a1;
  v7 = v2;
  v4 = sub_79B5C0(&v7, v3, 16, &v6, 4, 65);
  result = 0xFFFFFFFFLL;
  if ( v4 > 0 )
    return (unsigned int)(v6 - 1);
  return result;
}

