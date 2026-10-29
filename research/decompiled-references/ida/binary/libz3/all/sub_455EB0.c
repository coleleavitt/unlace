__int64 __fastcall sub_455EB0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  char **exception; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned int i; // r13d
  __int64 v14; // r12
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  _QWORD *v19; // rsi
  __int64 result; // rax
  __int64 *v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // rsi
  unsigned int v25; // ecx
  size_t v26; // rsi
  unsigned int v27; // ebp
  unsigned int *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v32; // [rsp+28h] [rbp-60h]
  __int64 v33[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *(_QWORD *)a2;
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v32 = nullptr;
  v31 = v9;
  v10 = sub_4095A0(v8, a2, a3, a4, a5, a6);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = v10;
  for ( i = 0; v11; *((_DWORD *)v15 - 1) = v18 )
  {
    if ( i >= *(_DWORD *)(v11 - 4) )
      break;
    v14 = *(_QWORD *)(v11 + 8LL * i);
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v15 = v32;
    if ( v32 )
    {
      v16 = *((_DWORD *)v32 - 1);
      if ( v16 == *((_DWORD *)v32 - 2) )
      {
        v25 = (3 * v16 + 1) >> 1;
        v26 = 8 * v25 + 8;
        v27 = v25;
        if ( 8 * v16 + 8 >= (unsigned int)v26 || v16 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v28 = (unsigned int *)sub_186B300(v32 - 1, v26);
        v29 = v28[1];
        v15 = v28 + 2;
        *v28 = v27;
        v32 = v15;
        LODWORD(v28) = v29;
        v19 = &v15[v29];
        v11 = *(_QWORD *)(v12 + 8);
        v18 = (_DWORD)v28 + 1;
      }
      else
      {
        v17 = v16;
        v18 = v16 + 1;
        v19 = &v32[v17];
      }
    }
    else
    {
      v30 = (_QWORD *)sub_186B270(0x18u);
      v15 = v30 + 1;
      *v30 = 2;
      v18 = 1;
      v32 = v15;
      v19 = v15;
      v11 = *(_QWORD *)(v12 + 8);
    }
    *v19 = v14;
    ++i;
  }
  result = sub_40A830(
             *(_QWORD **)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 16LL),
             *(_DWORD *)(*(_QWORD *)a2 + 96LL),
             (__int64)&v31,
             v33,
             *(unsigned __int16 *)(*(_QWORD *)a2 + 106LL));
  if ( !(_BYTE)result )
  {
    sub_1872CE0("");
    sub_1873130(114, 40);
  }
  v21 = v32;
  if ( v32 )
  {
    result = *((unsigned int *)v32 - 1);
    v22 = (unsigned __int64)&v32[result];
    if ( (unsigned __int64)v32 >= v22 )
      return sub_186B220(v21 - 1);
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          if ( (*(_DWORD *)(v23 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v21 >= v22 )
          goto LABEL_18;
      }
      result = sub_15D7BC0(v31, v23);
      ++v21;
    }
    while ( (unsigned __int64)v21 < v22 );
LABEL_18:
    v21 = v32;
    if ( v32 )
      return sub_186B220(v21 - 1);
  }
  return result;
}

