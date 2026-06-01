__int64 __fastcall sub_9045E0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdx
  unsigned int v4; // r13d
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 result; // rax
  int v14; // edx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ebp
  __int64 v18; // rax
  unsigned int v19; // r12d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  char **exception; // rbx
  __int64 v26; // [rsp+8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+10h] [rbp-48h] BYREF
  __int64 v28; // [rsp+18h] [rbp-40h]

  v3 = (_QWORD *)a1[11];
  v4 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    v5 = *((_DWORD *)v3 - 1);
    if ( v5 == *((_DWORD *)v3 - 2) )
    {
      v19 = (3 * v5 + 1) >> 1;
      v20 = 8 * v19 + 8;
      if ( 8 * v5 + 8 >= (unsigned int)v20 || v5 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(&v27, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v27);
        sub_233E40((__int64)&v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v3 - 1, v20);
      v22 = v21[1];
      v3 = v21 + 2;
      *v21 = v19;
      a1[11] = v21 + 2;
      LODWORD(v21) = v22;
      v8 = &v3[v22];
      v7 = (_DWORD)v21 + 1;
    }
    else
    {
      v6 = v5;
      v7 = v5 + 1;
      v8 = &v3[v6];
    }
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x18u);
    v3 = v23 + 1;
    *v23 = 2;
    v7 = 1;
    a1[11] = v3;
    v8 = v3;
  }
  *v8 = 0;
  *((_DWORD *)v3 - 1) = v7;
  v9 = a1[20];
  if ( v9 && (v10 = *(_DWORD *)(v9 - 4), v4 < v10) && (v11 = v10 - v4 - 1, (v12 = *(_QWORD *)(v9 + 8 * v11)) != 0) )
  {
    if ( !*(_WORD *)(v12 + 4) && (*(_BYTE *)(v12 + 30) & 1) != 0 || (v15 = *(_DWORD *)(a1[66] + 4 * v11), v15 == v10) )
    {
      v27 = v12;
      ++*(_DWORD *)(v12 + 8);
      sub_8F15F0(a1 + 7, &v27);
    }
    else
    {
      v16 = v10 - v15;
      v17 = v16;
      v18 = sub_1680FB0(a1[4], v12, v16);
      if ( v18 )
      {
        v27 = v18;
        ++*(_DWORD *)(v18 + 8);
        sub_8F15F0(a1 + 7, &v27);
      }
      else
      {
        v24 = a1[1];
        v27 = 0;
        v28 = v24;
        sub_1585D20(a1 + 21, v12, 0, v17, 0, &v27);
        v26 = v27;
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        sub_8F15F0(a1 + 7, &v26);
        sub_1584390(a1, v12, v17, v27);
        sub_8E4E90(v27, v28);
      }
    }
    result = a1[5];
    if ( result )
    {
      v14 = *(_DWORD *)(result - 4);
      if ( v14 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v14 - 1) + 8) |= 2u;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    v27 = a2;
    return sub_8F15F0(a1 + 7, &v27);
  }
  return result;
}

