__int64 __fastcall sub_B31BC0(unsigned int *a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // r12
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  _QWORD **v14; // rbx
  _QWORD **i; // r13
  unsigned int v16; // edx
  _QWORD *v17; // rsi
  __int64 (__fastcall *v18)(unsigned int *, _QWORD *); // rax
  unsigned int v19; // r14d
  unsigned int v20; // ecx
  unsigned int *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  _QWORD *v24; // rdx
  __int64 v25[9]; // [rsp+10h] [rbp-48h] BYREF

  do
  {
    result = a2;
    v5 = a2;
    a2 = *(_DWORD *)(*((_QWORD *)a1 + 43) + 4LL * a2);
  }
  while ( v5 != a2 );
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 32) + 8 * result);
  if ( !*(_BYTE *)(v6 + 24) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 33) + 8LL) )
    {
      return sub_BDFAB0(a1, a2);
    }
    else
    {
      v7 = (_QWORD *)sub_180C100(a1 + 100, 16);
      v8 = *((_QWORD **)a1 + 48);
      v9 = v7;
      *v7 = off_1C54E98;
      v7[1] = v6 + 24;
      if ( v8 )
      {
        v10 = *((_DWORD *)v8 - 1);
        if ( v10 == *((_DWORD *)v8 - 2) )
        {
          v19 = (3 * v10 + 1) >> 1;
          v20 = 8 * v19 + 8;
          if ( 8 * v10 + 8 >= v20 || v10 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v25, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v25);
            sub_233E40((__int64)v25);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v21 = (unsigned int *)sub_186B300(v8 - 1, v20);
          v22 = v21[1];
          v8 = v21 + 2;
          *v21 = v19;
          *((_QWORD *)a1 + 48) = v21 + 2;
          LODWORD(v21) = v22;
          v13 = &v8[v22];
          v12 = (_DWORD)v21 + 1;
        }
        else
        {
          v11 = v10;
          v12 = v10 + 1;
          v13 = &v8[v11];
        }
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x18u);
        *v24 = 2;
        v12 = 1;
        v8 = v24 + 1;
        *((_QWORD *)a1 + 48) = v8;
        v13 = v8;
      }
      *v13 = v9;
      *((_DWORD *)v8 - 1) = v12;
      result = *((_QWORD *)a1 + 33);
      *(_BYTE *)(v6 + 24) = 1;
      if ( !*(_BYTE *)(result + 16) )
        result = sub_B31820((__int64)a1, a2);
      v14 = *(_QWORD ***)v6;
      if ( *(_QWORD *)v6 )
      {
        result = *((unsigned int *)v14 - 1);
        for ( i = &v14[result]; i != v14; ++v14 )
        {
          while ( 1 )
          {
            v17 = *v14;
            v18 = *(__int64 (__fastcall **)(unsigned int *, _QWORD *))(*(_QWORD *)a1 + 400LL);
            if ( v18 == sub_B307F0 )
              break;
            ++v14;
            result = v18(a1, v17);
            if ( i == v14 )
              return result;
          }
          result = *(_QWORD *)(*(_QWORD *)(*v17 + 16LL) + 24LL);
          if ( result )
          {
            v16 = a1[2];
            if ( v16 == *(_DWORD *)result )
            {
              result = *(unsigned int *)(result + 4);
              if ( !(_DWORD)result )
              {
                v23 = sub_B39350(v17[14], v16);
                result = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 392LL))(a1, v23);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

