void __fastcall sub_51C150(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  if ( a3 )
  {
    v4 = *(_QWORD **)(a1 + 56);
    v5 = &v4[10 * *(_QWORD *)(a1 + 64)];
    if ( v5 != v4 )
    {
      while ( a2 != *v4 )
      {
        v4 += 10;
        if ( v5 == v4 )
          return;
      }
      if ( v4 )
      {
        if ( (unsigned __int64)a3 < v4[2] )
        {
          v6 = (_QWORD *)(v4[1] + 8LL * a3);
          if ( *v6 != -1 )
          {
            *v6 = -1;
            return;
          }
          if ( !under_debugger )
            interr(1078);
LABEL_17:
          BUG();
        }
        if ( !sub_51AFC0(v4 + 4, a3) )
        {
          if ( !under_debugger )
            interr(1079);
          goto LABEL_17;
        }
      }
    }
  }
}

