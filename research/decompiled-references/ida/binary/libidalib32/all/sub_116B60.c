__int64 sub_116B60()
{
  __int64 *v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx

  v0 = (__int64 *)qword_251CB8;
  if ( !qword_251CB8 )
    return 0;
  v1 = *(_QWORD *)(qword_251CB8 + 8);
  v2 = *(unsigned __int8 *)(qword_251CB8 + 16);
  if ( (unsigned __int8)v2 < *(_BYTE *)(v1 + 10) )
  {
    *(_BYTE *)(qword_251CB8 + 16) = v2 + 1;
    return *(unsigned __int16 *)(v1 + 2 * v2 + 12);
  }
  else
  {
    do
    {
      v5 = *v0;
      operator delete(v0, 0x18u);
      qword_251CB8 = v5;
      if ( !v5 )
        return 0;
      v3 = *(_QWORD *)(v5 + 8);
      v4 = *(unsigned __int8 *)(v5 + 16);
      v0 = (__int64 *)v5;
    }
    while ( (unsigned __int8)v4 >= *(_BYTE *)(v3 + 10) );
    *(_BYTE *)(v5 + 16) = v4 + 1;
    return *(unsigned __int16 *)(v3 + 2 * v4 + 12);
  }
}

