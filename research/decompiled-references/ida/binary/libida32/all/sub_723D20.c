void *__fastcall sub_723D20(_QWORD *a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v5; // r12
  unsigned int v6; // edx
  unsigned __int8 *v7; // rbx
  unsigned __int16 v8; // r15
  __int64 v9; // rax
  char *v10; // r13
  unsigned __int16 *v11; // rsi
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r8d
  void *result; // rax
  __int64 v17; // rcx

  v3 = 6 * a3;
  v5 = (_DWORD *)*a1;
  v6 = *(_DWORD *)(*a1 - 8LL);
  if ( *(_DWORD *)*a1 )
  {
    v17 = *(unsigned __int16 *)((char *)v5 + v3 + 10);
    if ( (unsigned int)v17 >= v6 )
      goto LABEL_15;
    v11 = (unsigned __int16 *)((char *)v5 + v17 + 1);
    if ( *(unsigned __int16 *)((char *)v5 + v17 + *v11 + 3) + *v11 + 4 + (unsigned int)v17 >= v6 )
      goto LABEL_15;
  }
  else
  {
    v7 = (unsigned __int8 *)v5 + v3 + 6;
    v8 = *v7;
    v9 = *(unsigned __int16 *)((char *)v5 + v3 + 10);
    if ( (unsigned int)v9 >= v6 )
      goto LABEL_15;
    v10 = (char *)v5 + v9;
    v11 = (unsigned __int16 *)((char *)v5 + v9 + 1);
    v12 = *(unsigned __int16 *)&v10[*(unsigned __int16 *)(v10 + 1) + 3] + *(unsigned __int16 *)(v10 + 1) + 4;
    if ( (int)v9 + v12 >= v6 )
      goto LABEL_15;
    if ( *v7 )
    {
      if ( v12 + (unsigned int)(unsigned __int8)v8 <= 0x60D )
      {
        sub_71D170((char *)a2 + *v7 + 2, v11, 0);
        *a2 = v8 + *(_WORD *)(v10 + 1);
        while ( 1 )
        {
          do
          {
            v13 = *(v7 - 6);
            v7 -= 6;
          }
          while ( (int)v13 >= v8 );
          v14 = *((unsigned __int16 *)v7 + 2);
          v15 = *(v5 - 2);
          if ( (unsigned int)v14 >= v15
            || (unsigned int)v14
             + *(unsigned __int16 *)((char *)v5 + v14 + *(unsigned __int16 *)((char *)v5 + v14 + 1) + 3)
             + *(unsigned __int16 *)((char *)v5 + v14 + 1)
             + 4 >= v15 )
          {
            break;
          }
          result = memcpy((char *)a2 + v13 + 2, (char *)v5 + v14 + 3, v8 - (int)v13);
          v8 = *v7;
          if ( !*v7 )
            return result;
        }
      }
LABEL_15:
      sub_722BF0();
    }
  }
  return sub_71D140(a2, v11);
}

