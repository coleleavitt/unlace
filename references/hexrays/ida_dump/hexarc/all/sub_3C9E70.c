__int64 *__fastcall sub_3C9E70(__int64 *a1, unsigned __int8 **a2, char a3)
{
  unsigned __int8 *v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  unsigned __int8 *v11; // rbx
  unsigned __int8 *v12; // rbp
  bool v13; // zf
  const char *v14; // r12

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v4 = a2[1];
  if ( 2LL * (_QWORD)v4 )
  {
    v5 = 2LL * (_QWORD)v4 + 1;
    v6 = qvector_reserve(a1, 0, v5, 1);
    v7 = a1[1];
    *a1 = v6;
    memset((void *)(v6 + v7), 0, v5 - v7);
    v8 = *a1;
    a1[1] = v5;
    *(_BYTE *)(v8 + 2LL * (_QWORD)v4) = 0;
    v9 = *a1;
    v4 = a2[1];
    v10 = *a1 + a1[1];
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  v11 = *a2;
  v12 = &v4[(_QWORD)*a2];
  if ( *a2 != v12 )
  {
    v13 = a3 == 0;
    v14 = "%02X";
    if ( v13 )
      v14 = "%02x";
    do
    {
      qsnprintf(v9, v10 - v9, v14, *v11++);
      v9 += 2;
    }
    while ( v12 != v11 );
  }
  return a1;
}
