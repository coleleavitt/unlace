__int64 __fastcall sub_5082C0(__int64 a1)
{
  int v1; // esi
  __int64 v3; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rax

  v1 = *(unsigned __int8 *)(a1 + 8);
  if ( (_BYTE)v1 == 36 )
    return 0;
  if ( (unsigned __int8)(v1 - 66) <= 0x37u )
  {
    v3 = 0x8FFED300C33EDFLL;
    if ( _bittest64(&v3, (unsigned int)(v1 - 66)) )
      return 0;
  }
  v5 = (_QWORD *)(qword_8D2330 + 8 * xmmword_8D2338);
  if ( (_QWORD *)qword_8D2330 != v5 )
  {
    v6 = qword_8D2330;
    while ( (_BYTE)v1 != *(_BYTE *)(*(_QWORD *)v6 + 8LL) )
    {
      v6 += 8;
      if ( v5 == (_QWORD *)v6 )
        goto LABEL_11;
    }
    if ( *(_QWORD *)v6 )
      return 0;
  }
LABEL_11:
  if ( *((_QWORD *)&xmmword_8D2338 + 1) < (unsigned __int64)(xmmword_8D2338 + 1) )
  {
    qword_8D2330 = qvector_reserve(&qword_8D2330, qword_8D2330, xmmword_8D2338 + 1, 8);
    v5 = (_QWORD *)(qword_8D2330 + 8 * xmmword_8D2338);
  }
  *v5 = a1;
  *(_QWORD *)&xmmword_8D2338 = xmmword_8D2338 + 1;
  return 1;
}
