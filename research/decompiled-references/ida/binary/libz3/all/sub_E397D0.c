void __fastcall sub_E397D0(__int64 a1, __int64 *a2)
{
  _QWORD *exception; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rbx
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 *v17; // rdx
  __int64 *v18; // r14
  _QWORD *v19; // rax
  int v20; // eax
  __int64 *v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // r13d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // [rsp+2h] [rbp-48h] BYREF
  __int64 v28; // [rsp+Ah] [rbp-40h]
  _QWORD v29[7]; // [rsp+12h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 52) == -1 )
  {
    v8 = (__int64 *)a2[1];
    v9 = v8;
    if ( v8 )
    {
      v10 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
      if ( (unsigned __int64)v8 >= v10 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v11 = *v9;
          if ( *v9 )
          {
            v12 = *a2;
            if ( (*(_DWORD *)(v11 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v9 >= v10 )
            goto LABEL_9;
        }
        sub_15D7BC0(v12, v11);
        ++v9;
      }
      while ( (unsigned __int64)v9 < v10 );
LABEL_9:
      v8 = (__int64 *)a2[1];
      if ( v8 )
LABEL_10:
        *((_DWORD *)v8 - 1) = 0;
    }
    v14 = *(__int64 **)(a1 + 104);
    if ( v14 )
    {
      v15 = *((unsigned int *)v14 - 1);
      if ( (_DWORD)v15 )
      {
        v16 = *v14;
        v17 = v8;
        v18 = &v14[v15];
        if ( *v14 )
          ++*(_DWORD *)(v16 + 8);
        if ( v8 )
          goto LABEL_20;
        v19 = (_QWORD *)sub_186B270(0x18u);
        v17 = v19 + 1;
        *v19 = 2;
        v20 = 1;
        a2[1] = (__int64)v17;
        v21 = v17;
        while ( 1 )
        {
          ++v14;
          *v21 = v16;
          *((_DWORD *)v17 - 1) = v20;
          if ( v18 == v14 )
            break;
          while ( 1 )
          {
            v16 = *v14;
            if ( *v14 )
              ++*(_DWORD *)(v16 + 8);
LABEL_20:
            v22 = *((_DWORD *)v17 - 1);
            if ( v22 == *((_DWORD *)v17 - 2) )
              break;
            ++v14;
            v17[v22] = v16;
            *((_DWORD *)v17 - 1) = v22 + 1;
            if ( v18 == v14 )
              return;
          }
          v23 = (3 * v22 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v24 || v22 >= v23 )
          {
            exception = __cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v27, "Overflow encountered when expanding vector");
            v3 = v27;
            exception[1] = exception + 3;
            v4 = v28;
            *exception = off_1C63128;
            if ( v3 == v29 )
            {
              qmemcpy(exception + 3, v29, (unsigned int)(v4 + 1));
            }
            else
            {
              v5 = v29[0];
              exception[1] = v3;
              exception[3] = v5;
            }
            exception[2] = v4;
            v27 = v29;
            v28 = 0;
            LOBYTE(v29[0]) = 0;
            sub_233E40((__int64)&v27);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = (unsigned int *)sub_186B300(v17 - 1, v24);
          v26 = v25[1];
          v17 = (__int64 *)(v25 + 2);
          *v25 = v23;
          a2[1] = (__int64)(v25 + 2);
          LODWORD(v25) = v26;
          v21 = &v17[v26];
          v20 = (_DWORD)v25 + 1;
        }
      }
    }
  }
}

