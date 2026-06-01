__int64 __fastcall sub_734B90(unsigned int *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned __int64 v6; // r12
  unsigned int v7; // ebp
  void *v8; // rax
  void *v9; // rbx
  __int64 v10; // rdi

  v3 = qfilelength(*a1);
  if ( a2 == v3 )
  {
    return 0;
  }
  else
  {
    v4 = v3;
    v5 = qchsize(*a1, a2);
    if ( !v5 && a2 >= v4 )
    {
      v6 = a2 - v4;
      v7 = 61440;
      if ( a2 - v4 <= 0xF000 )
        v7 = a2 - v4;
      while ( 1 )
      {
        v8 = (void *)qalloc(v7);
        v9 = v8;
        if ( v8 )
          break;
        if ( v7 == 1 )
          abort();
        v7 >>= 1;
      }
      memset(v8, 0, v7);
      if ( qseek(*a1, v4, 0) == -1 )
      {
LABEL_13:
        v5 = 0;
      }
      else
      {
        while ( 1 )
        {
          v10 = *a1;
          if ( v7 >= v6 )
            break;
          if ( v7 != (unsigned int)qwrite(v10, v9, v7) )
            goto LABEL_19;
          v6 -= v7;
        }
        if ( (unsigned int)qwrite(v10, v9, v6) == (_DWORD)v6 )
          goto LABEL_13;
LABEL_19:
        v5 = -1;
        qchsize(*a1, v4);
      }
      qfree(v9);
    }
  }
  return v5;
}
