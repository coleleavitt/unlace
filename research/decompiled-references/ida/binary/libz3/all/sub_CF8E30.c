__int64 __fastcall sub_CF8E30(_QWORD *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 result; // rax
  int v11; // edx
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  unsigned int v16; // r12d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // ebp
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+10h] [rbp-38h] BYREF
  __int64 v28; // [rsp+18h] [rbp-30h]

  v5 = a1[20];
  if ( v5
    && (v6 = *(_DWORD *)(a2 + 16), v7 = *(_DWORD *)(v5 - 4), v6 < v7)
    && (v8 = v7 - v6 - 1, (v9 = *(_QWORD *)(v5 + 8 * v8)) != 0) )
  {
    if ( !*(_WORD *)(v9 + 4) && (*(_BYTE *)(v9 + 30) & 1) != 0 || (v20 = *(_DWORD *)(a1[66] + 4 * v8), v20 == v7) )
    {
      v27 = v9;
      ++*(_DWORD *)(v9 + 8);
      sub_CF8D70(a1 + 7, &v27);
    }
    else
    {
      v21 = v7 - v20;
      v22 = v21;
      v23 = sub_1680FB0(a1[4], v9, v21);
      if ( v23 )
      {
        v27 = v23;
        ++*(_DWORD *)(v23 + 8);
        sub_CF8D70(a1 + 7, &v27);
      }
      else
      {
        v25 = a1[1];
        v27 = 0;
        v28 = v25;
        sub_1585D20(a1 + 21, v9, 0, v22, 0, &v27);
        v26 = v27;
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        sub_CF8D70(a1 + 7, &v26);
        sub_1584390(a1, v9, v22, v27);
        sub_CF71F0(v27, v28);
      }
    }
    result = a1[5];
    if ( result )
    {
      v11 = *(_DWORD *)(result - 4);
      if ( v11 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v11 - 1) + 8) |= 2u;
    }
  }
  else
  {
    v12 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v12 )
    {
      v13 = *((_DWORD *)v12 - 1);
      if ( v13 == *((_DWORD *)v12 - 2) )
      {
        v16 = (3 * v13 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v17 || v13 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_CF7210(&v27, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v27);
          sub_233E40((__int64)&v27);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v12 - 1, v17);
        v19 = v18[1];
        v12 = v18 + 2;
        *v18 = v16;
        a1[7] = v18 + 2;
        LODWORD(v18) = v19;
        v15 = &v12[v19];
        result = (unsigned int)((_DWORD)v18 + 1);
      }
      else
      {
        v14 = v13;
        result = v13 + 1;
        v15 = &v12[v14];
      }
    }
    else
    {
      v24 = (_QWORD *)sub_186B270(0x18u);
      v12 = v24 + 1;
      *v24 = 2;
      result = 1;
      a1[7] = v12;
      v15 = v12;
    }
    *v15 = a2;
    *((_DWORD *)v12 - 1) = result;
  }
  return result;
}

