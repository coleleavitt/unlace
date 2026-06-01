__int64 __fastcall sub_81A000(unsigned int *a1, __int64 a2)
{
  unsigned int *v2; // rbx
  __int64 v3; // rax
  unsigned int *v4; // r13
  int v5; // r12d
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // ecx
  __int64 result; // rax

  v2 = a1 + 19;
  v3 = 2LL * a1[8];
  v4 = &a1[v3 + 19];
  if ( v3 * 4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *v2;
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, HIDWORD(*(_QWORD *)v2));
        if ( v9 )
          break;
        v2 += 2;
        v5 += v8;
        if ( v4 == v2 )
          goto LABEL_8;
      }
      v7 = v6 + v8;
      if ( v9 == 1 )
        v6 = v7;
      v2 += 2;
    }
    while ( v4 != v2 );
LABEL_8:
    v10 = v6 + v5;
  }
  else
  {
    v10 = 0;
    v6 = 0;
  }
  v11 = a1[15];
  result = 0xFFFFFFFFLL;
  if ( v10 >= v11 )
    return v6 >= v11;
  return result;
}

