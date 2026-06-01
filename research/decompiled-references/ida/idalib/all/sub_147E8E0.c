__int64 __fastcall sub_147E8E0(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rbp
  unsigned __int16 v5; // dx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 2944);
  if ( v3 >= *(unsigned int *)(v2 + 2912) )
    v4 = sub_14180A0(v2, 1u);
  else
    v4 = *(_QWORD *)(v2 + 2904) + 24 * v3;
  v5 = *(_WORD *)(v4 + 16);
  if ( v5 > 0x63u )
  {
    if ( v5 == 114 )
      goto LABEL_20;
    if ( v5 <= 0x72u )
    {
      result = 0;
      if ( (unsigned __int16)(v5 - 107) <= 1u )
        goto LABEL_20;
    }
    else
    {
      if ( v5 == 127 )
        goto LABEL_20;
      result = 0;
      if ( v5 >= 0x7Fu && (unsigned __int16)(v5 - 369) <= 1u )
        goto LABEL_20;
    }
  }
  else
  {
    if ( v5 >= 0x62u || v5 == 84 )
      goto LABEL_20;
    if ( v5 > 0x54u )
    {
      if ( v5 == 92 || v5 == 95 || v5 == 88 )
        goto LABEL_20;
      return 0;
    }
    else
    {
      if ( v5 == 5 )
      {
        v6 = sub_141A630(5u);
        v7 = *(_QWORD *)(a1 + 400);
        if ( v6 )
        {
          if ( v7 && *(_QWORD *)(a1 + 384) )
          {
            v8 = 0;
            goto LABEL_11;
          }
        }
        else
        {
          v8 = *(_QWORD *)(v4 + 8);
          if ( v8 != v7 && v8 != *(_QWORD *)(a1 + 384) )
          {
LABEL_11:
            if ( *(_QWORD *)(a1 + 392) != v8 )
              return 0;
          }
        }
LABEL_20:
        *(_WORD *)(a1 + 32) = 368;
        return 1;
      }
      if ( v5 == 79 )
        goto LABEL_20;
      return 0;
    }
  }
  return result;
}
