__int64 __fastcall sub_78AE60(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  __int64 v8; // rax
  char *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  char *i; // rax
  __int64 v16; // rdx
  int v18; // ebp
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax
  int *v22; // rax
  unsigned int v23; // r12d
  unsigned int v24; // ecx
  unsigned int *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  char **exception; // rbx
  __int64 v29[7]; // [rsp+10h] [rbp-38h] BYREF

  v8 = *(unsigned int *)(a1 + 104);
  v9 = *(char **)(a1 + 96);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = &v9[v8];
  v13 = 16LL * (v10 & v11);
  v14 = (__int64)&v9[v13];
  if ( v13 != v8 )
  {
    for ( i = &v9[v13]; v12 != i; i += 16 )
    {
      v16 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v16 + 12) == v10 && a2 == v16 )
        {
LABEL_10:
          v18 = *((_DWORD *)i + 2) ^ a4;
          if ( a3 )
          {
            LODWORD(v29[0]) = *((_DWORD *)i + 2) ^ a4;
            sub_7872D0(a1, 1u, (__int64)v29, (__int64)v9, v14, a2);
          }
          else
          {
            v20 = *(_QWORD **)(a1 + 88);
            if ( v20 )
            {
              v21 = *((unsigned int *)v20 - 1);
              if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
              {
                v23 = (unsigned int)(3 * v21 + 1) >> 1;
                v24 = 4 * v23 + 8;
                if ( 4 * (int)v21 + 8 >= v24 || (unsigned int)v21 >= v23 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v29, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v29);
                  sub_233E40((__int64)v29);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v25 = (unsigned int *)sub_186B300(v20 - 1, v24);
                v20 = v25 + 2;
                *v25 = v23;
                v26 = v25[1];
                *(_QWORD *)(a1 + 88) = v20;
                v22 = (int *)v20 + v26;
              }
              else
              {
                v22 = (int *)v20 + v21;
              }
            }
            else
            {
              v27 = (_QWORD *)sub_186B270(0x10u);
              *v27 = 2;
              v20 = v27 + 1;
              *(_QWORD *)(a1 + 88) = v27 + 1;
              v22 = (int *)(v27 + 1);
            }
            *v22 = v18;
            ++*((_DWORD *)v20 - 1);
          }
          return 1;
        }
      }
      else if ( !v16 )
      {
        return 0;
      }
    }
  }
  for ( ; (char *)v14 != v9; v9 += 16 )
  {
    v19 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 > 1u )
    {
      if ( *(_DWORD *)(v19 + 12) == v10 && a2 == v19 )
      {
        i = v9;
        goto LABEL_10;
      }
    }
    else if ( !v19 )
    {
      return 0;
    }
  }
  return 0;
}

