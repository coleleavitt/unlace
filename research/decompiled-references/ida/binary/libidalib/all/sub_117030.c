void __fastcall sub_117030(macro_t *a1)
{
  macro_t *v2; // rdi
  macro_t *v3; // rdx

  v2 = qword_252E68;
  if ( qword_252E68 == a1 )
  {
    qword_252E68 = *(macro_t **)qword_252E68;
    if ( v2 )
LABEL_7:
      operator delete(v2, 0xB0u);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = *(macro_t **)v2;
      if ( !v2 )
        break;
      if ( v2 == a1 )
      {
        *(_QWORD *)v3 = *(_QWORD *)v2;
        goto LABEL_7;
      }
    }
  }
}

