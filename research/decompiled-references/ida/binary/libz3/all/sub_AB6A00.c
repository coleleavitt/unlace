__int64 __fastcall sub_AB6A00(__int64 a1, unsigned int a2, __int64 a3)
{
  char **exception; // r12
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned int *v6; // r12
  unsigned int *i; // rbp
  __int64 v9; // rbx
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 *v17; // rdx
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int *v20; // rax
  unsigned int v21; // [rsp+Ch] [rbp-5Ch]
  __int64 v22[11]; // [rsp+10h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 504);
  v6 = *(unsigned int **)(result + 8LL * a2);
  if ( v6 )
  {
    result = *(v6 - 1);
    for ( i = &v6[result]; i != v6; *((_DWORD *)v17 - 1) = 1 )
    {
      while ( 1 )
      {
        v14 = *v6;
        v15 = *(_QWORD *)(a1 + 16);
        if ( dword_1C7ECF4 != *v6 )
          break;
        v9 = *(_QWORD *)(*(_QWORD *)(v15 + 104) + 856LL);
        if ( v9 )
          goto LABEL_7;
        v10 = *(_DWORD **)(a3 + 8);
        if ( !v10 )
          goto LABEL_15;
LABEL_9:
        v11 = *(v10 - 1);
        if ( v11 == *(v10 - 2) )
        {
          v18 = (3 * v11 + 1) >> 1;
          v19 = 8 * v18 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v19 || v11 >= v18 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_139F3A(v22, "Overflow encountered when expanding vector", v4);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v22);
            sub_233E40((__int64)v22);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v21 = (3 * v11 + 1) >> 1;
          v20 = (unsigned int *)sub_186B300(v10 - 2, v19);
          v10 = v20 + 2;
          *(_QWORD *)(a3 + 8) = v20 + 2;
          *v20 = v21;
          LODWORD(v20) = v20[1];
          v13 = (__int64 *)&v10[2 * (unsigned int)v20];
          result = (unsigned int)((_DWORD)v20 + 1);
        }
        else
        {
          v12 = v11;
          result = v11 + 1;
          v13 = (__int64 *)&v10[2 * v12];
        }
        ++v6;
        *v13 = v9;
        *(v10 - 1) = result;
        if ( i == v6 )
          return result;
      }
      if ( dword_1C7ECF0 == v14 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v15 + 104) + 864LL);
        if ( v9 )
          goto LABEL_7;
      }
      else
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v15 + 8840) + 8LL * (v14 >> 1));
        if ( (v14 & 1) == 0 )
        {
          if ( !v9 )
            goto LABEL_8;
LABEL_7:
          ++*(_DWORD *)(v9 + 8);
          goto LABEL_8;
        }
        v9 = sub_15E1A70(*(_QWORD *)(v15 + 104));
        if ( v9 )
          goto LABEL_7;
      }
LABEL_8:
      v10 = *(_DWORD **)(a3 + 8);
      if ( v10 )
        goto LABEL_9;
LABEL_15:
      v16 = (_QWORD *)sub_186B270(0x18u);
      v17 = v16 + 1;
      *v16 = 2;
      ++v6;
      result = 1;
      *(_QWORD *)(a3 + 8) = v17;
      *v17 = v9;
    }
  }
  return result;
}

