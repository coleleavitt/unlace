__int64 (__fastcall **__fastcall sub_3B68B0(_QWORD *a1))()
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 (__fastcall **result)(); // rax

  v2 = a1[28];
  *a1 = &unk_4CC408;
  a1[4] = &unk_4CC440;
  a1[27] = &off_4CC500;
  if ( v2 )
  {
    v3 = a1[29];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 40 * i;
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree(v6);
          v2 = a1[28];
        }
      }
    }
    a1[29] = 0;
    qfree(v2);
  }
  v7 = a1 + 26;
  a1[4] = &unk_4CBCC8;
  v8 = a1 + 14;
  while ( v8 != v7 )
  {
    while ( 1 )
    {
      v9 = *(v7 - 3);
      v7 -= 3;
      if ( !v9 )
        break;
      v7[1] = 0;
      qfree(v9);
      if ( v8 == v7 )
        goto LABEL_12;
    }
  }
LABEL_12:
  v10 = a1[1];
  result = &off_4C7CA8;
  *a1 = &off_4C7CA8;
  if ( v10 )
  {
    a1[2] = 0;
    return (__int64 (__fastcall **)())qfree(v10);
  }
  return result;
}
