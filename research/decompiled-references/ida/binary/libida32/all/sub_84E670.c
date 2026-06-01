__int64 __fastcall sub_84E670(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int *v7; // r12
  char *v9; // rax

  v5 = *(int *)(a1 + 100);
  v6 = a4;
  v7 = *(unsigned int **)a1;
  if ( (_DWORD)v5 )
  {
    sub_847F60(*(unsigned int **)a1, 32, 1, 0, 142, v5);
    if ( (_DWORD)v6 )
      sub_849F80(v7, 0x40u, 2, 0, 2, 0, 0x7Fu, (int)v6);
    sub_847F60(v7, 32, 3, 0, 13, 0);
    sub_849F80(v7, 0x40u, 1, 0, 1, 0, 0x7Fu, (int)v6 + 1);
    if ( !*v7 )
    {
      v7[36] = 0;
      v9 = sub_844340((__int64)v7, 1u, 13, 0, 1, 0);
      if ( v9 )
        *v9 = 59;
    }
    sub_847920(v7, 4, 13, 1, 0, 13);
    sub_84DED0(a1, a2, a3);
    if ( (_DWORD)v6 )
      sub_849F80(v7, 0x42u, 2, 0, 2, 0, 0x7Fu, v6);
    return sub_847F60(v7, 32, 13, 0, 3, 0);
  }
  else if ( a4 )
  {
    sub_849F80(v7, 0x40u, 2, 0, 2, 0, 0x7Fu, a4);
    sub_84DED0(a1, a2, a3);
    return sub_849F80(v7, 0x42u, 2, 0, 2, 0, 0x7Fu, v6);
  }
  else
  {
    return sub_84DED0(a1, a2, a3);
  }
}

