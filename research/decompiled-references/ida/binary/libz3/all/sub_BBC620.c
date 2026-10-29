__int64 __fastcall sub_BBC620(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 v6; // rax
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  unsigned int *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 *v27[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(unsigned int *)(a1 + 1016);
  v7 = *(__int64 **)(a1 + 1008);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v6 - 1;
  v6 *= 8;
  v10 = (char *)v7 + v6;
  v11 = 8LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    for ( result = (__int64)&v7[(unsigned __int64)v11 / 8]; v10 != (char *)result; result += 8 )
    {
      v14 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && v14 == a2 )
          return result;
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v7; ++v7 )
  {
    result = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v8 && result == a2 )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_8:
  ++*(_DWORD *)(a2 + 8);
  v27[0] = (__int64 *)a2;
  sub_BB70A0((_QWORD *)(a1 + 1000), v27);
  v27[0] = (__int64 *)a2;
  sub_4A3CA0(a1 + 1008, v27);
  v15 = (__int64 *)sub_180C100(a1 + 3960, 16);
  *v15 = (__int64)off_1C4DF80;
  v15[1] = a1 + 992;
  v27[0] = v15;
  sub_BB4880((_QWORD *)(a1 + 3944), v27);
  v16 = (_QWORD *)sub_180C100(a1 + 3960, 24);
  v17 = *(_QWORD **)(a1 + 3944);
  v18 = v16;
  *v16 = off_1C4D780;
  v16[1] = a1 + 1008;
  v16[2] = a2;
  if ( v17 )
  {
    v19 = *((_DWORD *)v17 - 1);
    if ( v19 == *((_DWORD *)v17 - 2) )
    {
      v22 = (3 * v19 + 1) >> 1;
      v23 = 8 * v22 + 8;
      if ( 8 * v19 + 8 >= v23 || v19 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526((__int64 *)v27, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v17 - 1, v23);
      v25 = v24[1];
      v17 = v24 + 2;
      *v24 = v22;
      *(_QWORD *)(a1 + 3944) = v24 + 2;
      LODWORD(v24) = v25;
      v21 = &v17[v25];
      result = (unsigned int)((_DWORD)v24 + 1);
    }
    else
    {
      v20 = v19;
      result = v19 + 1;
      v21 = &v17[v20];
    }
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x18u);
    *v26 = 2;
    result = 1;
    v17 = v26 + 1;
    *(_QWORD *)(a1 + 3944) = v17;
    v21 = v17;
  }
  *v21 = v18;
  *((_DWORD *)v17 - 1) = result;
  return result;
}

