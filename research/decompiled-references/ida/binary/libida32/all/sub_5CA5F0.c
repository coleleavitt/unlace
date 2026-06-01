__int64 __fastcall sub_5CA5F0(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax

  v2 = *(_WORD *)(a1 + 64);
  if ( v2 <= 0x97u )
  {
    if ( v2 > 0x93u )
    {
      if ( v2 == 148 )
      {
        v3 = 96;
      }
      else if ( v2 == 149 )
      {
        v3 = 128;
      }
      else
      {
        v3 = 192;
        if ( v2 == 150 )
          v3 = 160;
      }
    }
    else if ( v2 == 139 )
    {
      v3 = 64;
    }
    else
    {
      if ( ((v2 - 138) & 0xFFFD) != 0 )
        goto LABEL_13;
      v3 = 32;
    }
  }
  else
  {
    if ( v2 == 220 )
    {
      v4 = *(_QWORD *)(a1 + 120);
      v3 = 256;
      if ( v4 )
        goto LABEL_7;
      goto LABEL_16;
    }
    if ( v2 != 221 )
    {
      if ( v2 == 219 )
      {
        v3 = 224;
        goto LABEL_6;
      }
LABEL_13:
      if ( !under_debugger )
        interr(907);
      BUG();
    }
    v3 = 288;
  }
LABEL_6:
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 )
    goto LABEL_7;
LABEL_16:
  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 104);
LABEL_7:
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x1E0) != 0 )
  {
    if ( (*(_QWORD *)(v4 + 40) & 0x1E0LL) != v3 )
      return set_qerrno(80, a2);
    sub_5CA510(a1);
    v5 = *(_QWORD *)(v4 + 40);
  }
  *(_QWORD *)(v4 + 40) = v3 | v5;
  return 0;
}

