_DWORD *__fastcall sub_65FD10(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned int v5; // eax
  bool v6; // cf
  _DWORD *result; // rax
  _DWORD *v8; // rbx
  unsigned int *v9; // rax
  unsigned int *v10; // r14

  v1 = *(_QWORD *)(a1 + 1480);
  v2 = sub_517910(*(_QWORD *)(a1 + 1680)) - 1;
  if ( v2 >= 0 )
  {
    v3 = v2;
    do
    {
      v4 = *(_QWORD *)(a1 + 1680);
      v5 = sub_5179F0(v4, v3);
      sub_518BB0(v4, v5);
      v6 = v3-- == 0;
    }
    while ( !v6 );
  }
  result = (_DWORD *)(get_fchunk_qty() - 1);
  v8 = result;
  if ( (__int64)result >= 0 )
  {
    do
    {
      v9 = sub_4EE890(v1 + 1624, (unsigned int)v8);
      v10 = v9;
      if ( (dword_2CA24C8 & 0x40) != 0 )
        sub_5ACD60(v1, v9, 0);
      result = sub_518BB0(*(_QWORD *)(a1 + 1680), v10[4]);
      if ( result )
        result[5] |= 0x40u;
      v6 = v8 == nullptr;
      v8 = (_DWORD *)((char *)v8 - 1);
    }
    while ( !v6 );
  }
  return result;
}

