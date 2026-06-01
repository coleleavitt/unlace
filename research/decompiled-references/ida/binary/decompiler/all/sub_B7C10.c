void __fastcall sub_B7C10(char *a1, unsigned int *a2, __int64 a3)
{
  char *i; // r14
  unsigned int v5; // r12d
  __int64 v6; // rdi
  int v7; // ebp
  __int64 v8; // rdi
  int v9; // eax
  char *j; // rbp
  int v11; // r12d
  __int64 v12; // rdi
  unsigned int v13; // r13d
  char *v14; // r15
  __int64 v15; // rdi
  unsigned int v16; // [rsp+Ch] [rbp-4Ch]

  if ( a1 != (char *)a2 )
  {
    for ( i = a1 + 4; a2 != (unsigned int *)i; *(_DWORD *)v14 = v16 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)a1;
        v6 = sub_32D9C0(a3, *(unsigned int *)i);
        if ( v6 != *(_QWORD *)(a3 + 56) || (v7 = 1000, *(_DWORD *)(a3 + 76) != 4) )
          v7 = sub_172A00(v6);
        v8 = sub_32D9C0(a3, v5);
        if ( v8 != *(_QWORD *)(a3 + 56) || (v9 = 1000, *(_DWORD *)(a3 + 76) != 4) )
          v9 = sub_172A00(v8);
        v16 = *(_DWORD *)i;
        if ( v9 <= v7 )
          break;
        if ( i - a1 <= 4 )
        {
          if ( i - a1 == 4 )
            *(_DWORD *)i = *(_DWORD *)a1;
        }
        else
        {
          memmove(a1 + 4, a1, i - a1);
        }
        i += 4;
        *(_DWORD *)a1 = v16;
        if ( a2 == (unsigned int *)i )
          return;
      }
      for ( j = i; ; *((_DWORD *)j + 1) = *(_DWORD *)j )
      {
        v13 = *((_DWORD *)j - 1);
        v14 = j;
        v15 = sub_32D9C0(a3, v16);
        if ( v15 != *(_QWORD *)(a3 + 56) || (v11 = 1000, *(_DWORD *)(a3 + 76) != 4) )
          v11 = sub_172A00(v15);
        v12 = sub_32D9C0(a3, v13);
        if ( v12 == *(_QWORD *)(a3 + 56) && *(_DWORD *)(a3 + 76) == 4 )
          break;
        j -= 4;
        if ( (int)sub_172A00(v12) <= v11 )
          goto LABEL_22;
LABEL_16:
        ;
      }
      j -= 4;
      if ( v11 < 1000 )
        goto LABEL_16;
LABEL_22:
      i += 4;
    }
  }
}
