void __fastcall sub_7F2E70(__int64 a1)
{
  char **v1; // rbp
  char **exception; // rbp
  __int64 v4; // rax
  _QWORD *v5; // rdx
  int v6; // r12d
  _QWORD *v7; // rax
  _DWORD *i; // rax
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r13d
  int v14; // edx
  _DWORD *v15; // r14
  __int64 v16; // rdx
  _DWORD *v17; // rdx
  _QWORD *v18; // rdi
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned int v26; // ebp
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r12d
  size_t v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  _DWORD *v34; // rbp
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39[9]; // [rsp+2h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      v5 = *(_QWORD **)(a1 + 24);
      if ( v4 )
        v6 = *(_DWORD *)(v4 - 4);
      else
        v6 = 0;
      if ( v5 )
        goto LABEL_10;
      v7 = (_QWORD *)sub_186B270(0x10u);
      v5 = v7 + 1;
      *v7 = 2;
      *(_QWORD *)(a1 + 24) = v7 + 1;
      for ( i = v7 + 1; ; i = (_DWORD *)v5 + v29 )
      {
        *i = v6;
        ++*((_DWORD *)v5 - 1);
        v9 = (*(_DWORD *)(a1 + 32))-- == 1;
        if ( v9 )
          break;
        while ( 1 )
        {
          v10 = *(_QWORD *)(a1 + 16);
          v6 = v10 ? *(_DWORD *)(v10 - 4) : 0;
LABEL_10:
          v11 = *((unsigned int *)v5 - 1);
          if ( (_DWORD)v11 == *((_DWORD *)v5 - 2) )
            break;
          *((_DWORD *)v5 + v11) = v6;
          ++*((_DWORD *)v5 - 1);
          v9 = (*(_DWORD *)(a1 + 32))-- == 1;
          if ( v9 )
            goto LABEL_12;
        }
        v26 = (unsigned int)(3 * v11 + 1) >> 1;
        v27 = 4 * v26 + 8;
        if ( 4 * (int)v11 + 8 >= (unsigned int)v27 || (unsigned int)v11 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v39, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v28 = (unsigned int *)sub_186B300(v5 - 1, v27);
        v5 = v28 + 2;
        *v28 = v26;
        v29 = v28[1];
        *(_QWORD *)(a1 + 24) = v5;
      }
    }
LABEL_12:
    v12 = *(_QWORD *)(a1 + 648);
    v13 = *(_DWORD *)(a1 + 640);
    if ( v12 )
      v14 = *(_DWORD *)(v12 - 4);
    else
      v14 = 0;
    if ( v13 != v14 )
    {
      v15 = *(_DWORD **)(a1 + 16);
      if ( v15 )
      {
        v16 = (unsigned int)*(v15 - 1);
        if ( (_DWORD)v16 == *(v15 - 2) )
        {
          v30 = (unsigned int)(3 * v16 + 1) >> 1;
          v31 = 8 * v30 + 8;
          if ( 8 * (int)v16 + 8 >= (unsigned int)v31 || (unsigned int)v16 >= v30 )
          {
            v1 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v39, "Overflow encountered when expanding vector");
            *v1 = (char *)off_1C63128;
            sub_2333C0(v1 + 1, v39);
            sub_233E40((__int64)v39);
            __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v32 = sub_186B270(v31);
          v33 = *(_QWORD *)(a1 + 16);
          v34 = (_DWORD *)v32;
          v15 = (_DWORD *)(v32 + 8);
          if ( v33 )
          {
            v35 = *(unsigned int *)(v33 - 4);
            v36 = 0;
            v34[1] = v35;
            v37 = 8 * v35;
            if ( v37 )
            {
              do
              {
                *(_QWORD *)&v34[v36 / 4 + 2] = *(_QWORD *)(v33 + v36);
                v36 += 8LL;
              }
              while ( v37 != v36 );
            }
            sub_186B220((void *)(v33 - 8));
            v17 = &v15[2 * v34[1]];
          }
          else
          {
            *(_DWORD *)(v32 + 4) = 0;
            v17 = (_DWORD *)(v32 + 8);
          }
          *(_QWORD *)(a1 + 16) = v15;
          v12 = *(_QWORD *)(a1 + 648);
          *v34 = v30;
        }
        else
        {
          v17 = &v15[2 * v16];
        }
      }
      else
      {
        v38 = (_QWORD *)sub_186B270(0x18u);
        v15 = v38 + 1;
        *v38 = 2;
        v12 = *(_QWORD *)(a1 + 648);
        *(_QWORD *)(a1 + 16) = v15;
        v17 = v15;
      }
      *v17 = 4;
      v17[1] = v13;
      ++*(v15 - 1);
      if ( v12 )
      {
        if ( *(_DWORD *)(a1 + 640) < *(_DWORD *)(v12 - 4) )
        {
          do
          {
            v18 = *(_QWORD **)a1;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 3184LL) )
              break;
            v19 = *(__int64 (__fastcall **)(__int64))(*v18 + 424LL);
            v20 = v19 == sub_79EFD0 ? v18[18] : ((__int64 (*)(void))v19)();
            if ( !(unsigned __int8)sub_18290A0(v20) )
              break;
            v21 = *(unsigned int *)(a1 + 640);
            v22 = v21 + 1;
            v23 = *(_QWORD *)(a1 + 648) + 16 * v21;
            v24 = *(_QWORD *)(v23 + 8);
            *(_DWORD *)(a1 + 640) = v22;
            if ( v24 )
            {
              sub_7F2410((__int64 *)a1, v24);
              v25 = *(_QWORD *)(a1 + 648);
              if ( !v25 )
                return;
            }
            else
            {
              sub_7F2950((_QWORD *)a1, *(_DWORD *)v23);
              v25 = *(_QWORD *)(a1 + 648);
              if ( !v25 )
                return;
            }
          }
          while ( *(_DWORD *)(a1 + 640) < *(_DWORD *)(v25 - 4) );
        }
      }
    }
  }
}

