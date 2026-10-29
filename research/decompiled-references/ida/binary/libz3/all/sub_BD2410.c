__int64 __fastcall sub_BD2410(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rcx
  int v7; // edi
  unsigned int v8; // edx
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rdi
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned int *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  char **exception; // rbx
  __int64 v29; // rdx
  __int64 *v30[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int *)(a2 + 1016);
  v6 = *(__int64 **)(a2 + 1008);
  v7 = *(_DWORD *)(v4 + 12);
  v8 = v5 - 1;
  v5 *= 8;
  v9 = (char *)v6 + v5;
  v10 = 8LL * (v7 & v8);
  v11 = &v6[(unsigned __int64)v10 / 8];
  if ( v10 != v5 )
  {
    for ( result = (__int64)&v6[(unsigned __int64)v10 / 8]; v9 != (char *)result; result += 8 )
    {
      v13 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v13 + 12) == v7 && v4 == v13 )
          goto LABEL_13;
      }
      else if ( !v13 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v11 != v6; ++v6 )
  {
    result = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v7 && v4 == result )
        goto LABEL_13;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_8:
  v30[0] = (__int64 *)v4;
  ++*(_DWORD *)(v4 + 8);
  sub_BB70A0((_QWORD *)(a2 + 1000), v30);
  v30[0] = (__int64 *)v4;
  sub_4A3CA0(a2 + 1008, v30);
  v14 = (__int64 *)sub_180C100(a2 + 3960, 16);
  *v14 = (__int64)off_1C4DF80;
  v14[1] = a2 + 992;
  v30[0] = v14;
  sub_BB4880((_QWORD *)(a2 + 3944), v30);
  v15 = (_QWORD *)sub_180C100(a2 + 3960, 24);
  v16 = *(_QWORD **)(a2 + 3944);
  v17 = v15;
  *v15 = off_1C4D780;
  v15[1] = a2 + 1008;
  v15[2] = v4;
  if ( v16 )
  {
    v18 = *((_DWORD *)v16 - 1);
    if ( v18 == *((_DWORD *)v16 - 2) )
    {
      v23 = (3 * v18 + 1) >> 1;
      v24 = 8 * v23 + 8;
      if ( 8 * v18 + 8 >= v24 || v18 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526((__int64 *)v30, "Overflow encountered when expanding vector", v29);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v30);
        sub_233E40((__int64)v30);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v16 - 1, v24);
      v26 = v25[1];
      v16 = v25 + 2;
      *v25 = v23;
      *(_QWORD *)(a2 + 3944) = v25 + 2;
      LODWORD(v25) = v26;
      v20 = &v16[v26];
      result = (unsigned int)((_DWORD)v25 + 1);
    }
    else
    {
      v19 = v18;
      result = v18 + 1;
      v20 = &v16[v19];
    }
  }
  else
  {
    v27 = (_QWORD *)sub_186B270(0x18u);
    *v27 = 2;
    result = 1;
    v16 = v27 + 1;
    *(_QWORD *)(a2 + 3944) = v16;
    v20 = v16;
  }
  v4 = *(_QWORD *)(a1 + 8);
  *v20 = v17;
  *((_DWORD *)v16 - 1) = result;
  if ( v4 )
  {
LABEL_13:
    v21 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      result = sub_15D7BC0(v21, v4);
  }
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}

