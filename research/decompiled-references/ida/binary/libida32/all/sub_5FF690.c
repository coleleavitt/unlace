_BYTE *sub_5FF690(
        _BYTE *a1,
        __int64 a2,
        _BYTE *a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        ...)
{
  _BYTE *v12; // rbx
  _BYTE *v13; // rsi
  unsigned __int64 v14; // r12
  _BYTE *v15; // rax
  _BYTE *v16; // kr00_8
  gcc_va_list va; // [rsp+0h] [rbp-68h] BYREF

  va_start(va, a11);
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    goto LABEL_27;
  }
  v12 = a1;
  if ( a1 )
  {
    v13 = a3;
    v14 = (unsigned __int64)&a1[a2];
    if ( a3 )
    {
      while ( 1 )
      {
        v15 = (_BYTE *)qstpncpy(a1, v13, v14 - (_QWORD)a1);
        if ( v12 < v15 )
        {
          do
          {
            if ( *(v15 - 1) != 47 )
              break;
            --v15;
          }
          while ( v12 != v15 );
        }
        if ( va[0].gp_offset > 0x2F )
        {
          v16 = va_arg(va, _BYTE *);
          v13 = v16;
          if ( !v16 )
            goto LABEL_17;
        }
        else
        {
          v13 = *(_BYTE **)((char *)va[0].reg_save_area + va[0].gp_offset);
          va[0].gp_offset += 8;
          if ( !v13 )
            goto LABEL_17;
        }
        while ( *v13 == 47 )
          ++v13;
        if ( (unsigned __int64)v15 >= v14 )
          break;
        a1 = v15 + 1;
        *v15 = 47;
        if ( (unsigned __int64)(v15 + 1) >= v14 )
        {
          *(_BYTE *)(v14 - 1) = 0;
          a1 = (_BYTE *)(v14 - 1);
        }
      }
      if ( !under_debugger )
        interr(518);
LABEL_27:
      BUG();
    }
    v15 = a1;
LABEL_17:
    if ( (unsigned __int64)v15 >= v14 )
    {
      if ( !under_debugger )
        interr(519);
      goto LABEL_27;
    }
    *v15 = 0;
  }
  qstrupr(v12);
  return v12;
}

