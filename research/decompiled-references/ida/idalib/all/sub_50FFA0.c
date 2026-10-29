__int64 __fastcall sub_50FFA0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned int v4; // ebx
  int v5; // r14d
  __int64 v6; // rax
  __int128 v7; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = sub_506150(a1 + 1624);
  if ( v2 )
  {
    while ( v2[6] != a2 )
    {
      v2 = sub_505EB0(a1 + 1624, *v2);
      if ( !v2 )
        goto LABEL_6;
    }
    return 1;
  }
  else
  {
LABEL_6:
    v4 = 0;
    v5 = sub_5190D0(a1, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 84LL));
    if ( v5 > 0 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        v7 = 0;
        if ( !(unsigned __int8)sub_519230(a1, &v7, *(unsigned int *)(v6 + 84), v4) )
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
