__int64 *__fastcall sub_141B0D0(__int64 *a1, __int64 *a2, int *a3)
{
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v8; // rdx
  _BYTE v9[120]; // [rsp+0h] [rbp-78h] BYREF

  v4 = a2[141];
  v5 = a2[142];
  if ( !(unsigned __int8)sub_14363F0(a2) || (v6 = 0, !*(_BYTE *)(a2[7] + 744)) )
  {
    if ( (unsigned __int8)sub_14363F0(a2) )
    {
      v5 = 0;
      v4 = 0;
      sub_FC70B0((__int64)v9, a2[6], *a3, 1290);
      sub_AEA040((__int64)v9);
      v6 = 0;
    }
    else
    {
      v6 = a2[145];
      if ( v6 )
      {
        v6 = sub_1465F30(a2[140]);
        if ( v6 )
        {
          v8 = *(_QWORD *)(v6 + 8);
          if ( v8 )
          {
            while ( 1 )
            {
              v6 = v8 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v8 & 4) == 0 || !v6 )
                break;
              v8 = *(_QWORD *)(v6 + 8);
              if ( !v8 )
                goto LABEL_15;
            }
          }
          else
          {
LABEL_15:
            v6 = 0;
          }
          v5 = 0;
          v4 = 0;
        }
        else
        {
          v4 = 0;
          v5 = 0;
        }
      }
      else if ( v4 )
      {
        ++v5;
      }
      else
      {
        sub_FC70B0((__int64)v9, a2[6], *a3, 1289);
        sub_AEA040((__int64)v9);
        v6 = 0;
      }
    }
  }
  *a1 = v4;
  a1[1] = v5;
  a1[2] = v6;
  return a1;
}
