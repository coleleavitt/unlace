__int64 __fastcall sub_5CE9E0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 result; // rax
  int v10; // edx
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  unsigned int v15; // r12d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // ebp
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  char **exception; // rbx
  __int64 v29; // [rsp+8h] [rbp-40h] BYREF
  __int64 v30; // [rsp+10h] [rbp-38h] BYREF
  __int64 v31; // [rsp+18h] [rbp-30h]

  v4 = a1[20];
  if ( v4
    && (v5 = *(_DWORD *)(a2 + 16), v6 = *(_DWORD *)(v4 - 4), v5 < v6)
    && (v7 = v6 - v5 - 1, (v8 = *(_QWORD *)(v4 + 8 * v7)) != 0) )
  {
    if ( !*(_WORD *)(v8 + 4) && (*(_BYTE *)(v8 + 30) & 1) != 0 || (v19 = *(_DWORD *)(a1[66] + 4 * v7), v19 == v6) )
    {
      v30 = v8;
      ++*(_DWORD *)(v8 + 8);
      sub_5C94A0(a1 + 7, &v30);
    }
    else
    {
      v20 = v6 - v19;
      v21 = v20;
      v22 = sub_1680FB0(a1[4], v8, v20);
      if ( v22 )
      {
        v30 = v22;
        ++*(_DWORD *)(v22 + 8);
        sub_5C94A0(a1 + 7, &v30);
      }
      else
      {
        v24 = a1[1];
        v30 = 0;
        v31 = v24;
        sub_1585D20(a1 + 21, v8, 0, v21, 0, &v30);
        v29 = v30;
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        sub_5C94A0(a1 + 7, &v29);
        sub_1584390(a1, v8, v21, v30);
        v25 = v30;
        if ( v30 )
        {
          v26 = v31;
          if ( (*(_DWORD *)(v30 + 8))-- == 1 )
            sub_15D7BC0(v26, v25);
        }
      }
    }
    result = a1[5];
    if ( result )
    {
      v10 = *(_DWORD *)(result - 4);
      if ( v10 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v10 - 1) + 8) |= 2u;
    }
  }
  else
  {
    v11 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v11 )
    {
      v12 = *((_DWORD *)v11 - 1);
      if ( v12 == *((_DWORD *)v11 - 2) )
      {
        v15 = (3 * v12 + 1) >> 1;
        v16 = 8 * v15 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v16 || v12 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v30, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v30);
          sub_233E40((__int64)&v30);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v11 - 1, v16);
        v18 = v17[1];
        v11 = v17 + 2;
        *v17 = v15;
        a1[7] = v17 + 2;
        LODWORD(v17) = v18;
        v14 = &v11[v18];
        result = (unsigned int)((_DWORD)v17 + 1);
      }
      else
      {
        v13 = v12;
        result = v12 + 1;
        v14 = &v11[v13];
      }
    }
    else
    {
      v23 = (_QWORD *)sub_186B270(0x18u);
      v11 = v23 + 1;
      *v23 = 2;
      result = 1;
      a1[7] = v11;
      v14 = v11;
    }
    *v14 = a2;
    *((_DWORD *)v11 - 1) = result;
  }
  return result;
}

