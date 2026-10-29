void __fastcall sub_C0FF90(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rbx
  __int64 v4; // r13
  _DWORD *v5; // rdx
  __int64 v6; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 936);
  if ( v3 )
  {
    v4 = v3 + 24LL * *(unsigned int *)(v3 - 4);
    if ( v4 != v3 )
    {
      v5 = (_DWORD *)*a2;
      v6 = *(_QWORD *)(v3 + 8);
      if ( *a2 )
        goto LABEL_9;
      v3 += 24;
      v8 = sub_186B270(0x18u);
      v5 = (_DWORD *)(v8 + 8);
      *(_QWORD *)v8 = 2;
      *a2 = v8 + 8;
      *(_QWORD *)(v8 + 8) = v6;
      for ( *(_DWORD *)(v8 + 4) = 1; v3 != v4; *(v5 - 1) = v10 )
      {
        v6 = *(_QWORD *)(v3 + 8);
LABEL_9:
        v12 = *(v5 - 1);
        if ( v12 == *(v5 - 2) )
        {
          v13 = (3 * v12 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v14 || v12 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C0E620(v17, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v17);
            sub_233E40((__int64)v17);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v5 - 2, v14);
          v16 = v15[1];
          v5 = v15 + 2;
          *v15 = v13;
          *a2 = v15 + 2;
          LODWORD(v15) = v16;
          v11 = &v5[2 * v16];
          v10 = (_DWORD)v15 + 1;
        }
        else
        {
          v9 = v12;
          v10 = v12 + 1;
          v11 = &v5[2 * v9];
        }
        v3 += 24;
        *v11 = v6;
      }
    }
  }
}

