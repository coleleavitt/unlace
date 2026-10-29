void __fastcall sub_116C30(macro_t *a1)
{
  macro_t *v2; // rdi
  macro_t *v3; // rdx

  v2 = qword_251CC8;
  if ( qword_251CC8 == a1 )
  {
    qword_251CC8 = *(macro_t **)qword_251CC8;
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

