__int64 __fastcall sub_79AAE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // eax
  __int64 v5; // rsi
  char *v7; // rax
  int v8; // r14d
  char v9; // al
  __int64 *v10; // rbx
  int *v11; // rax
  int v12; // r13d
  bool v13; // r12
  __int64 v14; // rdx
  char *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(); // rax
  _DWORD *v19; // rax
  __int64 *i; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 64);
  v3 = *(_DWORD *)(v2 + 20);
  if ( v3 != -1 )
  {
    if ( v3 == 1 )
      return 1;
    v5 = *(_QWORD *)v2;
    if ( !*(_WORD *)(*(_QWORD *)v2 + 4LL) )
    {
      v19 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
      if ( v19 )
      {
        if ( !*v19 && v19[1] == 4 )
        {
LABEL_31:
          *(_DWORD *)(v2 + 20) = 1;
          return 1;
        }
      }
    }
    if ( *(int *)(v2 + 88) >> 8 == -1 )
    {
      v8 = 0;
      sub_15D2CB0(*(_QWORD *)(a1 + 144), v5);
    }
    else
    {
      v7 = (char *)(v2 + 88);
      v8 = 0;
      do
      {
        if ( *v7 )
        {
          if ( v8 )
            goto LABEL_31;
          v8 = *v7;
        }
        v7 = *((char **)v7 + 1);
      }
      while ( v7 );
      v9 = sub_15D2CB0(*(_QWORD *)(a1 + 144), v5);
      if ( v8 && v9 )
        goto LABEL_31;
    }
    v10 = *(__int64 **)(v2 + 48);
    if ( v10 )
    {
      for ( i = &v10[*((unsigned int *)v10 - 1)]; i != v10; ++v10 )
      {
        v11 = *(int **)(*(_QWORD *)(*(_QWORD *)*v10 + 16LL) + 24LL);
        if ( v11 )
        {
          v12 = *v11;
          v13 = *v11 != 0;
        }
        else
        {
          v13 = 1;
          v12 = -1;
        }
        if ( (((unsigned __int8)sub_79AA20(a1, *v10, v2) ^ 1) & (v12 != v8)) != 0 && v13 )
          goto LABEL_31;
      }
    }
    if ( *(int *)(v2 + 88) >> 8 != -1 )
    {
      v14 = *(_QWORD *)(a1 + 2400);
      v15 = (char *)(v2 + 88);
      do
      {
        v16 = (unsigned int)*v15;
        if ( !v14 )
          break;
        while ( (unsigned int)v16 < *(_DWORD *)(v14 - 4) )
        {
          v17 = *(_QWORD *)(v14 + 8 * v16);
          if ( v17 )
          {
            v18 = *(__int64 (__fastcall **)())(*(_QWORD *)v17 + 448LL);
            if ( v18 != sub_79EFB0 )
            {
              if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v18)(v17, (unsigned int)(*(int *)v15 >> 8)) )
                goto LABEL_31;
            }
          }
          v15 = *((char **)v15 + 1);
          if ( v15 )
          {
            v14 = *(_QWORD *)(a1 + 2400);
            v16 = (unsigned int)*v15;
            if ( v14 )
              continue;
          }
          goto LABEL_28;
        }
        v15 = *((char **)v15 + 1);
      }
      while ( v15 );
    }
LABEL_28:
    *(_DWORD *)(v2 + 20) = -1;
  }
  return 0;
}

