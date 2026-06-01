__int64 __fastcall sub_ABE40(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbp
  const void *v5; // r14
  __int64 v6; // r15
  size_t v7; // rax
  size_t v8; // r12
  int v9; // eax
  __int64 v10; // r14
  unsigned int v12; // edx
  __int64 v13; // rcx
  int i; // eax
  void *v15; // rdi
  size_t v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // [rsp+8h] [rbp-450h]

  if ( *(_QWORD *)a1 )
    goto LABEL_2;
  if ( *(_QWORD *)(a1 + 48) <= 1u )
    return 1;
  v17 = fopenA();
  *(_QWORD *)a1 = v17;
  if ( v17 )
  {
LABEL_2:
    v3 = 16 * ((qword_251F98 == 0) + ((qword_251F98 - qword_251F78) >> 3) - 1)
       + ((qword_251F70 - qword_251F60) >> 5)
       + ((qword_251F80 - qword_251F88) >> 5);
    if ( a2 < 0 )
    {
      if ( !(_DWORD)v3 )
        goto LABEL_4;
      v12 = 0;
    }
    else
    {
      if ( !a2 )
      {
LABEL_4:
        v4 = 0;
        if ( *(int *)(a1 + 8) <= 0 )
        {
LABEL_12:
          sub_9E2A0();
          return 1;
        }
        do
        {
          v5 = *(&off_22FC20 + v4);
          v6 = *(_QWORD *)(a1 + 16) + 24 * v4;
          if ( v5 && (v7 = strlen((const char *)*(&off_22FC20 + v4)), (v8 = v7) != 0) )
          {
            v15 = *(void **)v6;
            v16 = v7 + 1;
            if ( *(_QWORD *)(v6 + 16) < v7 + 1 )
            {
              v19 = v7 + 1;
              v18 = qvector_reserve();
              v16 = v19;
              *(_QWORD *)v6 = v18;
              v15 = (void *)v18;
            }
            *(_QWORD *)(v6 + 8) = v16;
            memmove(v15, v5, v8);
            *(_BYTE *)(*(_QWORD *)v6 + v8) = 0;
          }
          else
          {
            *(_QWORD *)(v6 + 8) = 0;
          }
          v9 = *(_DWORD *)(a1 + 8);
          ++v4;
        }
        while ( v9 > (int)v4 );
LABEL_9:
        if ( v9 > 0 )
        {
          v10 = 0;
          do
          {
            qsnprintf();
            ++v10;
            qfputs();
          }
          while ( *(_DWORD *)(a1 + 8) > (int)v10 );
        }
        goto LABEL_12;
      }
      if ( (int)v3 < a2 )
        return 0;
      v12 = v3 - a2;
    }
    v13 = 0;
    for ( i = 0; *(_DWORD *)(a1 + 8) > i; v13 += 24 )
    {
      ++i;
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + v13 + 8) = 0;
    }
    sub_ABAE0((__int64)xmmword_251F20, (__int64 **)(a1 + 16), v12);
    v9 = *(_DWORD *)(a1 + 8);
    goto LABEL_9;
  }
  return 0;
}

