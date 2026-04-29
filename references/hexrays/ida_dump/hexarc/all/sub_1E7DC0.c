char __fastcall sub_1E7DC0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // r14d
  signed int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  int v10; // ebp
  int v12; // eax

  v4 = *(_DWORD *)(a1 + 72);
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v8 = round_down_power2((unsigned int)a3);
  if ( v8 > 1 )
  {
    while ( 1 )
    {
      v6 = (unsigned int)(a3 >> 31);
      LODWORD(v6) = a3 % v8;
      if ( !(a3 % v8) )
        break;
      v8 >>= 1;
      if ( v8 == 1 )
        goto LABEL_6;
    }
  }
  if ( (v8 & (v8 - 1)) == 0 )
  {
LABEL_6:
    v10 = 2 * v5;
    if ( 2 * v5 >= v8 )
    {
      if ( v5 > v8 )
      {
        if ( v4 > 0x10 )
        {
LABEL_9:
          if ( v4 != 176 && v4 != 256 )
          {
LABEL_11:
            if ( !(unsigned __int8)getinf_flag(67, 2) )
              goto LABEL_13;
          }
LABEL_12:
          v5 = v8;
          goto LABEL_13;
        }
LABEL_29:
        v4 = getinf(99);
        goto LABEL_9;
      }
      if ( v4 > 0x10 )
      {
LABEL_16:
        if ( v4 != 176 && v4 != 256 )
        {
LABEL_18:
          if ( (unsigned __int8)getinf_flag(67, 4) )
            v5 = v8;
          if ( *(char *)(a2 + 25) < 0 )
            return 0;
          return sub_1E7B70(a2, *(_QWORD *)(a1 + 1504), nullptr, v5, *(_DWORD *)(a1 + 72));
        }
LABEL_13:
        if ( *(char *)(a2 + 25) < 0 )
          return 0;
        return sub_1E7B70(a2, *(_QWORD *)(a1 + 1504), nullptr, v5, *(_DWORD *)(a1 + 72));
      }
LABEL_37:
      v4 = getinf(99);
      goto LABEL_16;
    }
    if ( v4 <= 0x10 )
    {
      v12 = getinf(99);
      if ( v12 == 176 || v12 == 256 )
      {
        if ( v5 > v10 )
        {
LABEL_28:
          v8 = 2 * v5;
          goto LABEL_29;
        }
LABEL_36:
        v8 = 2 * v5;
        goto LABEL_37;
      }
    }
    else if ( v4 == 256 || v4 == 176 )
    {
      if ( v5 > v10 )
        v5 *= 2;
      goto LABEL_13;
    }
    if ( (unsigned __int8)getinf_flag(67, 512) )
      goto LABEL_12;
    if ( v5 > v10 )
    {
      v8 = 2 * v5;
      if ( v4 > 0x10 )
        goto LABEL_11;
      goto LABEL_28;
    }
    v8 = 2 * v5;
    if ( v4 > 0x10 )
      goto LABEL_18;
    goto LABEL_36;
  }
  if ( under_debugger )
    BUG();
  interr(2858, a2, v6, v7, v9);
  return sub_1E7FC0();
}
