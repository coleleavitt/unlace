__int64 __fastcall sub_B79AF0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // ebx
  unsigned int v15; // r13d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int16 v20; // ax
  int *v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  sub_15D08E0(a1 + 32);
  v5 = *(_QWORD **)(a1 + 24);
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( v6 == *((_DWORD *)v5 - 2) )
    {
      v15 = (3 * v6 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v16 || v6 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B75C60(v27, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v5 - 1, v16);
      v18 = v17[1];
      v5 = v17 + 2;
      *v17 = v15;
      *(_QWORD *)(a1 + 24) = v17 + 2;
      LODWORD(v17) = v18;
      v9 = &v5[v18];
      v8 = (_DWORD)v17 + 1;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = &v5[v7];
    }
  }
  else
  {
    v19 = (_QWORD *)sub_186B270(0x18u);
    v5 = v19 + 1;
    *v19 = 2;
    v8 = 1;
    *(_QWORD *)(a1 + 24) = v5;
    v9 = v5;
  }
  *v9 = a2;
  *((_DWORD *)v5 - 1) = v8;
  while ( v5 )
  {
    v10 = *((_DWORD *)v5 - 1);
    if ( !v10 )
      return 1;
    v11 = (unsigned int)(v10 - 1);
    v12 = v5[v11];
    *((_DWORD *)v5 - 1) = v11;
    v13 = sub_15D37A0(a1 + 32, v12);
    if ( !(_BYTE)v13 )
    {
      sub_15D0A90(a1 + 32, v12, 1);
      v20 = *(_WORD *)(v12 + 4);
      if ( v20 != 1 )
      {
        if ( v20 )
          return v13;
        v21 = *(int **)(*(_QWORD *)(v12 + 16) + 24LL);
        if ( !v21 )
        {
          if ( *(_DWORD *)(v12 + 24) )
            return v13;
          goto LABEL_9;
        }
        v22 = *v21;
        if ( *v21 )
        {
          v23 = *(_DWORD *)(v12 + 24);
          if ( v22 == 5 )
          {
            v24 = v21[1];
            switch ( v24 )
            {
              case 2:
                goto LABEL_38;
              case 3:
                goto LABEL_34;
              case 4:
LABEL_38:
                if ( v23 != 2 )
                  return v13;
                v26 = *(_QWORD *)(v12 + 32);
                v25 = *(_QWORD *)(v12 + 40);
                break;
              case 5:
LABEL_34:
                if ( v23 != 2 )
                  return v13;
                v25 = *(_QWORD *)(v12 + 32);
                v26 = *(_QWORD *)(v12 + 40);
                break;
              default:
                return v13;
            }
            if ( !(unsigned __int8)sub_B79830(a1, v26, v25) )
              return v13;
            goto LABEL_9;
          }
          if ( v23 || v22 != -1 )
            return v13;
        }
        else if ( v21[1] == 2
               && *(_DWORD *)(v12 + 24) == 2
               && !(unsigned __int8)sub_B79830(a1, *(_QWORD *)(v12 + 32), *(_QWORD *)(v12 + 40)) )
        {
          return v13;
        }
      }
    }
LABEL_9:
    v5 = *(_QWORD **)(a1 + 24);
  }
  return 1;
}

