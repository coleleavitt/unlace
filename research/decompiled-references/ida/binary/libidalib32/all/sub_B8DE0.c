__int64 __fastcall sub_B8DE0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 i; // rbp
  _QWORD *v4; // r12
  char *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  bool v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rsi
  __int64 v18; // [rsp+8h] [rbp-40h]

  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  result = get_first_seg();
  for ( i = result; result; i = result )
  {
    v6 = a1[1];
    v7 = a1[2];
    v8 = *(_QWORD *)i;
    v9 = (*(_WORD *)(i + 24) & 0x18) == 8;
    if ( v7 >= v6 + 1 )
    {
      v4 = (_QWORD *)*a1;
    }
    else
    {
      v10 = qvector_reserve();
      v11 = a1[1];
      v12 = (_QWORD *)*a1;
      v4 = (_QWORD *)v10;
      v13 = a1[2];
      a1[2] = v7;
      v14 = v11 - 1;
      if ( v14 >= 0 )
      {
        v15 = v4;
        do
        {
          v16 = *v12;
          v15 = (_QWORD *)((char *)v15 + 12);
          v12 = (_QWORD *)((char *)v12 + 12);
          *(_QWORD *)((char *)v15 - 12) = v16;
          *((_DWORD *)v15 - 1) = *((_DWORD *)v12 - 1);
        }
        while ( v14-- != 0 );
      }
      v18 = v13;
      qfree();
      v6 = a1[1];
      *a1 = v4;
      a1[2] = v18;
    }
    v5 = (char *)v4 + 12 * v6;
    *(_QWORD *)v5 = v8;
    v5[8] = v9;
    ++a1[1];
    result = get_next_seg();
  }
  return result;
}

