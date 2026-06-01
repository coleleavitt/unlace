__int64 __fastcall sub_3C07C0(_QWORD *a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rsi
  char v4; // dl
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
  v4 = sub_79BBD0(&v7, v3, &v6, 15, 65);
  result = 0xFFFFFFFFLL;
  if ( v4 )
    return (unsigned int)(v6 - 1);
  return result;
}

