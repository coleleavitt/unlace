void __fastcall sub_63ED50(__int64 a1, __int64 a2)
{
  char **exception; // r12
  __int64 *v3; // r15
  __int64 v4; // r13
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // rax
  int v10; // edi
  __int64 *v11; // rcx
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *i; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 *v21; // rdx
  __int64 *v22; // rax
  __int64 *v23; // r12
  __int64 *v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rbx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int *v29; // rax
  unsigned int v30; // [rsp+Ch] [rbp-6Ch]
  __int64 v31[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(__int64 **)a1;
  v4 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v4 )
  {
    while ( (unsigned __int64)*v3 <= 1 )
    {
      v3 += 2;
      if ( (__int64 *)v4 == v3 )
        return;
    }
    if ( (__int64 *)v4 != v3 )
    {
      v7 = *v3;
      v8 = nullptr;
      while ( 1 )
      {
        v9 = *(unsigned int *)(a2 + 8);
        v10 = *(_DWORD *)(v7 + 12);
        v11 = *(__int64 **)a2;
        v12 = v9 - 1;
        v9 *= 8;
        v13 = (__int64 *)(*(_QWORD *)a2 + v9);
        v14 = 8LL * (v10 & v12);
        v15 = (__int64 *)(*(_QWORD *)a2 + v14);
        if ( v14 != v9 )
        {
          for ( i = (__int64 *)(*(_QWORD *)a2 + v14); v13 != i; ++i )
          {
            v17 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v17 + 12) == v10 && v17 == v7 )
              {
LABEL_28:
                sub_4CDCE0(v3[1], a2);
                goto LABEL_18;
              }
            }
            else if ( !v17 )
            {
              goto LABEL_14;
            }
          }
        }
        if ( v11 == v15 )
        {
LABEL_14:
          if ( !v8 )
            goto LABEL_37;
          goto LABEL_15;
        }
        while ( 1 )
        {
          v25 = *v11;
          if ( (unsigned __int64)*v11 <= 1 )
            break;
          if ( *(_DWORD *)(v25 + 12) == v10 && v25 == v7 )
            goto LABEL_28;
LABEL_33:
          if ( v15 == ++v11 )
            goto LABEL_14;
        }
        if ( v25 )
          goto LABEL_33;
        if ( !v8 )
        {
LABEL_37:
          v26 = (_QWORD *)sub_186B270(0x18u);
          *v26 = 2;
          v20 = 1;
          v8 = v26 + 1;
          v21 = v8;
          goto LABEL_17;
        }
LABEL_15:
        v18 = *((_DWORD *)v8 - 1);
        if ( v18 == *((_DWORD *)v8 - 2) )
        {
          v27 = (3 * v18 + 1) >> 1;
          v28 = 8 * v27 + 8;
          if ( 8 * v18 + 8 >= v28 || v18 >= v27 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v31, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v31);
            sub_233E40((__int64)v31);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v30 = (3 * v18 + 1) >> 1;
          v29 = (unsigned int *)sub_186B300(v8 - 1, v28);
          v8 = (__int64 *)(v29 + 2);
          *v29 = v30;
          LODWORD(v29) = v29[1];
          v21 = &v8[(unsigned int)v29];
          v20 = (_DWORD)v29 + 1;
        }
        else
        {
          v19 = v18;
          v20 = v18 + 1;
          v21 = &v8[v19];
        }
LABEL_17:
        *v21 = v7;
        *((_DWORD *)v8 - 1) = v20;
LABEL_18:
        v22 = v3 + 2;
        if ( (__int64 *)v4 != v3 + 2 )
        {
          while ( 1 )
          {
            v7 = *v22;
            v3 = v22;
            if ( (unsigned __int64)*v22 > 1 )
              break;
            v22 += 2;
            if ( (__int64 *)v4 == v22 )
              goto LABEL_23;
          }
          if ( (__int64 *)v4 != v22 )
            continue;
        }
LABEL_23:
        if ( v8 )
        {
          v23 = v8;
          v24 = &v8[*((unsigned int *)v8 - 1)];
          if ( v8 != v24 )
          {
            do
              sub_639510(a1, *v23++);
            while ( v24 != v23 );
          }
          sub_186B220(v8 - 1);
        }
        return;
      }
    }
  }
}

