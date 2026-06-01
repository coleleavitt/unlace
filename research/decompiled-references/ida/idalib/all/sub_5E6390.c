__int64 __fastcall sub_5E6390(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax

  v1 = *(_WORD *)(a1 + 64);
  if ( v1 <= 0x97u )
  {
    if ( v1 > 0x93u )
    {
      if ( v1 == 148 )
      {
        v2 = 96;
      }
      else if ( v1 == 149 )
      {
        v2 = 128;
      }
      else
      {
        v2 = 192;
        if ( v1 == 150 )
          v2 = 160;
      }
    }
    else if ( v1 == 139 )
    {
      v2 = 64;
    }
    else
    {
      if ( ((v1 - 138) & 0xFFFD) != 0 )
        goto LABEL_13;
      v2 = 32;
    }
  }
  else
  {
    if ( v1 == 220 )
    {
      v3 = *(_QWORD *)(a1 + 128);
      v2 = 256;
      if ( v3 )
        goto LABEL_7;
      goto LABEL_16;
    }
    if ( v1 != 221 )
    {
      if ( v1 == 219 )
      {
        v2 = 224;
        goto LABEL_6;
      }
LABEL_13:
      if ( !under_debugger )
        interr(907);
      BUG();
    }
    v2 = 288;
  }
LABEL_6:
  v3 = *(_QWORD *)(a1 + 128);
  if ( v3 )
    goto LABEL_7;
LABEL_16:
  v3 = *(_QWORD *)(a1 + 136);
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 112);
LABEL_7:
  v4 = *(_QWORD *)(v3 + 40);
  if ( (v4 & 0x1E0) != 0 )
  {
    if ( (*(_QWORD *)(v3 + 40) & 0x1E0LL) != v2 )
      return set_qerrno(80);
    sub_5E62B0(a1);
    v4 = *(_QWORD *)(v3 + 40);
  }
  *(_QWORD *)(v3 + 40) = v2 | v4;
  return 0;
}
