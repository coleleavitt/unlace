__int64 __fastcall sub_4F86C0(__int64 a1, int a2)
{
  unsigned int *v2; // rax
  unsigned int v4; // ebx
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = sub_4EEBF0(a1 + 1552);
  if ( v2 )
  {
    while ( v2[7] != a2 )
    {
      v2 = sub_4EE960(a1 + 1552, *v2);
      if ( !v2 )
        goto LABEL_6;
    }
    return 1;
  }
  else
  {
LABEL_6:
    v4 = 0;
    v5 = sub_501430(a1, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 84LL));
    if ( v5 > 0 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        v7 = 0;
        if ( !(unsigned __int8)sub_501590(a1, &v7, *(unsigned int *)(v6 + 84), v4) )
          break;
        if ( v8 == a2 )
          return 1;
        if ( v5 == ++v4 )
          return 0;
      }
      return 0;
    }
    else
    {
      return 0;
    }
  }
}

