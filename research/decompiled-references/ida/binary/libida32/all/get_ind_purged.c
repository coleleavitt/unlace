__int64 __fastcall get_ind_purged(int a1)
{
  int v1; // ebx
  _QWORD *v2; // rbp
  __int64 v3; // rsi
  char v4; // dl
  __int64 result; // rax
  int v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v1 = a1;
  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( a1 != -1 )
    v1 = sub_614FB0(*v2, 29) + a1;
  v3 = *v2;
  v7 = v1;
  v4 = sub_79BBD0(&v7, v3, &v6, 15, 65);
  result = 0xFFFFFFFFLL;
  if ( v4 )
    return (unsigned int)(v6 - 1);
  return result;
}

