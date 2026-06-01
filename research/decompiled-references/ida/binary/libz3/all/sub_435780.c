__int64 __fastcall sub_435780(std::ios_base *a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v7; // rax
  unsigned int v9; // r14d
  unsigned __int64 v10; // r15
  __int64 *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r15d
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // eax
  _QWORD *v23; // rsi
  char v24; // al
  __int64 v25; // rdi
  __int64 result; // rax
  __int64 v27; // rdx
  int v28; // esi
  unsigned int v29; // ecx
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  unsigned int v34; // [rsp+Ch] [rbp-5Ch]
  __int64 v35[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( *a3 && *(_DWORD *)(*a3 - 4LL) )
  {
    v7 = *((_QWORD *)a1 + 27);
    if ( v7 )
    {
      v9 = *((_DWORD *)a1 + 56);
      v10 = v7 + 8LL * *(unsigned int *)(v7 - 4);
      v11 = (__int64 *)(v7 + 8LL * v9);
      if ( (unsigned __int64)v11 >= v10 )
        goto LABEL_11;
      do
      {
        while ( 1 )
        {
          v12 = *v11;
          if ( *v11 )
          {
            v13 = *((_QWORD *)a1 + 26);
            if ( (*(_DWORD *)(v12 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v11 >= v10 )
            goto LABEL_10;
        }
        sub_15D7BC0(v13, v12);
        ++v11;
      }
      while ( (unsigned __int64)v11 < v10 );
LABEL_10:
      v7 = *((_QWORD *)a1 + 27);
      if ( v7 )
LABEL_11:
        *(_DWORD *)(v7 - 4) = v9;
    }
    sub_4334D0((__int64)a1, (__int64 *)a1 + 26, 0);
    v15 = *((_QWORD **)a1 + 27);
    if ( v15 )
      v16 = *((_DWORD *)v15 - 1);
    else
      v16 = 0;
    v17 = *(_QWORD *)(a2 + 8);
    *((_DWORD *)a1 + 56) = v16;
    if ( v17 )
    {
      v18 = 0;
      do
      {
        if ( v18 >= *(_DWORD *)(v17 - 4) )
          break;
        v19 = *(_QWORD *)(v17 + 8LL * v18);
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        if ( v15 )
        {
          v20 = *((_DWORD *)v15 - 1);
          if ( v20 == *((_DWORD *)v15 - 2) )
          {
            v29 = (3 * v20 + 1) >> 1;
            v30 = 8 * v29 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v30 || v20 >= v29 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_D0F44(v35, "Overflow encountered when expanding vector", v4);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v35);
              sub_233E40((__int64)v35);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (3 * v20 + 1) >> 1;
            v31 = (unsigned int *)sub_186B300(v15 - 1, v30);
            v15 = v31 + 2;
            *v31 = v34;
            v32 = v31[1];
            *((_QWORD *)a1 + 27) = v31 + 2;
            LODWORD(v31) = v32;
            v23 = &v15[v32];
            v17 = *(_QWORD *)(a2 + 8);
            v22 = (_DWORD)v31 + 1;
          }
          else
          {
            v21 = v20;
            v22 = v20 + 1;
            v23 = &v15[v21];
          }
        }
        else
        {
          v33 = (_QWORD *)sub_186B270(0x18u);
          v15 = v33 + 1;
          *v33 = 2;
          v22 = 1;
          *((_QWORD *)a1 + 27) = v15;
          v23 = v15;
          v17 = *(_QWORD *)(a2 + 8);
        }
        *v23 = v19;
        ++v18;
        *((_DWORD *)v15 - 1) = v22;
      }
      while ( v17 );
      v16 = *((_DWORD *)a1 + 56);
    }
    v24 = sub_4334D0((__int64)a1, (__int64 *)a1 + 26, v16);
    v25 = *((_QWORD *)a1 + 12);
    *((_BYTE *)a1 + 228) = v24;
    result = (*(__int64 (__fastcall **)(__int64, char *, _QWORD *))(*(_QWORD *)v25 + 216LL))(v25, (char *)a1 + 208, a3);
    *((_DWORD *)a1 + 13) = result;
  }
  else
  {
    v27 = *(_QWORD *)(a2 + 8);
    if ( v27 )
      v28 = *(_DWORD *)(v27 - 4);
    else
      v28 = 0;
    return sub_E60CB0(a1, v28, v27);
  }
  return result;
}

