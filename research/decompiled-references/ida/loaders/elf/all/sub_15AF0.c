__int64 __fastcall sub_15AF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(get_ph() + 4) != 12 )
LABEL_19:
    sub_15060();
  v7[0] = -1;
  sub_101F0(0xBC4u, v7);
  v2 = v7[0];
  if ( v7[0] == -1 )
  {
    v3 = a1[2];
    if ( *(_BYTE *)(v3 + 248) && *(_QWORD *)(v3 + 120) && *(_WORD *)(v3 + 520) == 1 )
    {
      v2 = a1[52];
      if ( v2 != -1 )
      {
        v5 = a1[51];
        if ( v5 != -1 )
          v2 += v5;
        v2 &= *(_QWORD *)(v3 + 456);
        if ( *(_DWORD *)(get_ph() + 4) == 12 )
          goto LABEL_14;
        goto LABEL_18;
      }
      if ( a2 )
      {
        v6 = sub_4A750(a2 + 16, *(_QWORD *)(a2 + 8), 1);
        if ( v6 )
        {
          v2 = *(_QWORD *)(a1[2] + 456LL) & (a1[50] + v6);
          if ( *(_DWORD *)(get_ph() + 4) == 12 )
          {
LABEL_14:
            sub_101F0(0xBBAu, v2);
            return v2;
          }
          goto LABEL_18;
        }
      }
    }
    else
    {
      v2 = a1[51];
      if ( v2 != -1 )
      {
        if ( *(_DWORD *)(get_ph() + 4) != 12 )
        {
LABEL_18:
          sub_15040();
          goto LABEL_19;
        }
        sub_101F0(0xBBAu, v2);
        return a1[51];
      }
    }
  }
  return v2;
}

