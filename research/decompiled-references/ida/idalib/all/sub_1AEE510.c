__int64 __fastcall sub_1AEE510(unsigned __int64 a1)
{
  _WORD *v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  _DWORD v10[7]; // [rsp+0h] [rbp-1Ch] BYREF

  if ( a1 )
  {
    v1 = (_WORD *)sub_1AE6910(a1);
    v3 = (unsigned __int64)v1;
    if ( !v1 )
      return 0;
    v4 = *v1 & 0x1FF;
    v5 = (unsigned int)v4 - 113;
    if ( (unsigned int)v5 <= 1 )
    {
      v6 = *(_QWORD *)(v3 + 16);
      if ( v6 )
      {
        if ( !(unsigned __int8)sub_B990E0(*(_QWORD *)(v3 + 16), v10, v5, v2) && !sub_B99130(v6, 0) )
          goto LABEL_10;
        v4 = *(_WORD *)v3 & 0x1FF;
        if ( !*(_DWORD *)(v3 + 32) )
          goto LABEL_11;
        if ( v4 == 114 )
        {
          v7 = *(_QWORD *)(v3 + 48);
          if ( !v7 )
            return 0;
          goto LABEL_9;
        }
        v7 = *(_QWORD *)(v3 + 40);
        if ( v7 )
        {
LABEL_9:
          v3 = sub_BFBAE0(v7);
          if ( v3 )
          {
LABEL_10:
            v4 = *(_WORD *)v3 & 0x1FF;
            goto LABEL_11;
          }
          return 0;
        }
      }
    }
LABEL_11:
    if ( v4 == 71 )
    {
      v8 = *(_QWORD *)(v3 + 16);
      if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 40 <= 6 )
        return sub_1AEE450(v8);
    }
    else if ( v4 == 46
           && (*(_QWORD *)v3 & 0x80000LL) != 0
           && (*(_WORD *)sub_BFBAE0(*(_QWORD *)(v3 + 16)) & 0x1FF) == 0x62 )
    {
      v8 = *(_QWORD *)(v3 + 24);
      return sub_1AEE450(v8);
    }
    return 0;
  }
  return 0;
}
