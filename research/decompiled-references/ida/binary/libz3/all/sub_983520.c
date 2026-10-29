__int64 __fastcall sub_983520(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // eax
  __int64 *v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 *i; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v25; // rax
  unsigned int v26; // r13d
  unsigned int v27; // ecx
  unsigned int v28; // r13d
  unsigned int v29; // ecx
  unsigned int *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
  v8 = (*(_DWORD *)(*(_QWORD *)a3 + 12LL) - v7) ^ (v7 << 8);
  v9 = (v7 - v8) << 10;
  v10 = v8 ^ ((v7 - v8) << 16);
  v11 = v8 - v7;
  v12 = *(__int64 **)(a1 + 224);
  v13 = (v10 + v11) ^ v9;
  v14 = *(unsigned int *)(a1 + 232);
  v15 = v14 - 1;
  v14 *= 32;
  v16 = (__int64 *)((char *)v12 + v14);
  v17 = 32LL * (v13 & v15);
  v18 = &v12[(unsigned __int64)v17 / 8];
  if ( v17 != v14 )
  {
    for ( i = &v12[(unsigned __int64)v17 / 8]; v16 != i; i += 4 )
    {
      v20 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v13 && a2 == v20 && a3 == i[1] )
          return i[2];
      }
      else if ( !v20 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v18 != v12; v12 += 4 )
  {
    v25 = *v12;
    if ( (unsigned __int64)*v12 > 1 )
    {
      if ( *((_DWORD *)v12 + 6) == v13 && a2 == v25 && a3 == v12[1] )
      {
        i = v12;
        return i[2];
      }
    }
    else if ( !v25 )
    {
      break;
    }
  }
LABEL_8:
  v21 = *(_QWORD **)(a1 + 192);
  if ( v21 )
  {
    v22 = *((unsigned int *)v21 - 1);
    if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
    {
      v26 = 3 * v22 + 1;
      v27 = v26 & 0xFFFFFFFE;
      v28 = v26 >> 1;
      v29 = 8 * (v28 + v27) + 8;
      if ( 24 * (int)v22 + 8 >= v29 || (unsigned int)v22 >= v28 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v33, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v21 - 1, v29);
      v21 = v30 + 2;
      *v30 = v28;
      v31 = v30[1];
      *(_QWORD *)(a1 + 192) = v21;
      v23 = &v21[3 * v31];
    }
    else
    {
      v23 = &v21[3 * v22];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x38u);
    *v32 = 2;
    v21 = v32 + 1;
    *(_QWORD *)(a1 + 192) = v32 + 1;
    v23 = v32 + 1;
  }
  *(_DWORD *)v23 = 1;
  v23[1] = a2;
  v23[2] = a3;
  ++*((_DWORD *)v21 - 1);
  return 0;
}

