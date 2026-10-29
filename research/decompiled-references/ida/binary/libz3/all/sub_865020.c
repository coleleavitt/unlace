__int64 __fastcall sub_865020(__int64 a1, unsigned int a2, double a3)
{
  char **exception; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned int v6; // r13d
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  unsigned int v16; // r12d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = 24LL * a2;
  v5 = v4 + *(_QWORD *)(a1 + 440);
  if ( *(_DWORD *)(v5 + 4) == 2 )
  {
    return 0;
  }
  else
  {
    switch ( *(_DWORD *)v5 )
    {
      case 0:
        v6 = sub_861930(a1, **(_QWORD **)(v5 + 8));
        break;
      case 1:
        v6 = sub_862110(a1, a2, v5, a3);
        break;
      case 2:
        v6 = sub_862B60(a1, **(_QWORD **)(v5 + 8), **(_QWORD **)(v5 + 16));
        break;
      case 3:
        v6 = sub_864C70(a1, v4 + *(_QWORD *)(a1 + 440));
        break;
      case 4:
        v6 = sub_862FF0(a1, **(_QWORD **)(v5 + 8), **(_QWORD **)(v5 + 16));
        break;
      default:
        sub_1872CE0("");
        sub_1873130(114, 72);
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 440) + v4 + 4) != 1 )
    {
      v8 = *(_QWORD *)(a1 + 80);
      v9 = sub_180C100(v8 + 2144, 24);
      v10 = *(_QWORD **)(v8 + 2128);
      v11 = v9;
      *(_QWORD *)v9 = off_1C55520;
      *(_QWORD *)(v9 + 8) = a1;
      *(_DWORD *)(v9 + 16) = a2;
      if ( v10 )
      {
        v12 = *((_DWORD *)v10 - 1);
        if ( v12 == *((_DWORD *)v10 - 2) )
        {
          v16 = (3 * v12 + 1) >> 1;
          v17 = 8 * v16 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v17 || v12 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v18 = (unsigned int *)sub_186B300(v10 - 1, v17);
          v19 = v18[1];
          v10 = v18 + 2;
          *(_QWORD *)(v8 + 2128) = v18 + 2;
          *v18 = v16;
          LODWORD(v18) = v19;
          v15 = &v10[v19];
          v14 = (_DWORD)v18 + 1;
        }
        else
        {
          v13 = v12;
          v14 = v12 + 1;
          v15 = &v10[v13];
        }
      }
      else
      {
        v20 = (_QWORD *)sub_186B270(0x18u);
        v10 = v20 + 1;
        *v20 = 2;
        v14 = 1;
        *(_QWORD *)(v8 + 2128) = v10;
        v15 = v10;
      }
      *v15 = v11;
      *((_DWORD *)v10 - 1) = v14;
      *(_DWORD *)(*(_QWORD *)(a1 + 440) + v4 + 4) = 2;
    }
  }
  return v6;
}

