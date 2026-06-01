__int64 __fastcall sub_597C10(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 i; // rbx
  _QWORD *v11; // rdx
  _QWORD *v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  unsigned int v16; // ecx
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // [rsp+Ch] [rbp-6Ch]
  __int64 v22[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *a4 )
    *(_DWORD *)(*a4 - 4LL) = 0;
  result = *a2;
  if ( *a2 )
  {
    v9 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        while ( 1 )
        {
          result = *a3;
          if ( *(_BYTE *)(*a3 + i) )
            break;
          if ( ++i == v9 )
            return result;
        }
        v11 = (_QWORD *)*a4;
        v12 = (_QWORD *)(*a2 + 8 * i);
        if ( *a4 )
        {
          v13 = *((_DWORD *)v11 - 1);
          if ( v13 == *((_DWORD *)v11 - 2) )
          {
            v16 = (3 * v13 + 1) >> 1;
            v17 = 8 * v16 + 8;
            if ( 8 * v13 + 8 >= (unsigned int)v17 || v13 >= v16 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v22, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v22);
              sub_233E40((__int64)v22);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v21 = (3 * v13 + 1) >> 1;
            v18 = (unsigned int *)sub_186B300(v11 - 1, v17);
            v11 = v18 + 2;
            *v18 = v21;
            v19 = v18[1];
            *a4 = v18 + 2;
            LODWORD(v18) = v19;
            v15 = &v11[v19];
            result = (unsigned int)((_DWORD)v18 + 1);
          }
          else
          {
            v14 = v13;
            result = v13 + 1;
            v15 = &v11[v14];
          }
        }
        else
        {
          v20 = (_QWORD *)sub_186B270(0x18u);
          v11 = v20 + 1;
          *v20 = 2;
          result = 1;
          *a4 = v11;
          v15 = v11;
        }
        *v15 = *v12;
        *((_DWORD *)v11 - 1) = result;
      }
    }
  }
  return result;
}

