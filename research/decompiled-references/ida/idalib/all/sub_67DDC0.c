_QWORD *__fastcall sub_67DDC0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  bool v7; // cf
  _QWORD *result; // rax
  _QWORD *v9; // rbx
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // r14

  v2 = *(_QWORD *)(a1 + 1672);
  v3 = sub_52FD10(*(_QWORD *)(a1 + 1872)) - 1;
  if ( v3 >= 0 )
  {
    v4 = v3;
    do
    {
      v5 = *(_QWORD *)(a1 + 1872);
      v6 = sub_52FDF0(v5, v4);
      sub_5310F0(v5, v6);
      v7 = v4-- == 0;
    }
    while ( !v7 );
  }
  result = (_QWORD *)(get_fchunk_qty() - 1);
  v9 = result;
  if ( (__int64)result >= 0 )
  {
    do
    {
      v10 = sub_505DE0(v2 + 1704, (unsigned int)v9);
      v11 = v10;
      if ( (dword_2CCC3C8 & 0x40) != 0 )
        sub_5C77B0(v2, v10, 0);
      result = sub_5310F0(*(_QWORD *)(a1 + 1872), v11[3]);
      if ( result )
        *((_DWORD *)result + 7) |= 0x40u;
      v7 = v9 == nullptr;
      v9 = (_QWORD *)((char *)v9 - 1);
    }
    while ( !v7 );
  }
  return result;
}
