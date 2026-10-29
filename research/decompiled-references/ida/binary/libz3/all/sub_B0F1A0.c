__int64 __fastcall sub_B0F1A0(__int64 a1, __int64 a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // ecx
  _QWORD *v9; // rdx
  __int64 v10; // r13
  _DWORD *v11; // r14
  unsigned __int64 v12; // r12
  _QWORD *v13; // rax
  _DWORD *v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // r8d
  size_t v17; // rsi
  unsigned int v18; // ebp
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 *v22; // [rsp+8h] [rbp-70h]
  unsigned int v23; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v24[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 704);
  v23 = a3;
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v22 = (__int64 *)(a2 + 704);
  LODWORD(v24[0]) = *(_DWORD *)a1 ^ 1;
  sub_B0E290((unsigned int **)(a2 + 704), (unsigned int *)v24);
  sub_B0E5E0((unsigned int **)(a2 + 704), &v23);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v8 = *(_DWORD *)(a1 + 16);
    if ( v8 < v7 )
    {
      v9 = *(_QWORD **)(a2 + 704);
      v10 = 4LL * v8;
      v11 = (_DWORD *)(v10 + v6);
      v12 = 4 * (v8 + (unsigned __int64)(v7 - v8 - 1));
      if ( v9 )
        goto LABEL_9;
      v13 = (_QWORD *)sub_186B270(0x10u);
      v9 = v13 + 1;
      *v13 = 2;
      *(_QWORD *)(a2 + 704) = v13 + 1;
      v14 = v13 + 1;
      while ( 1 )
      {
        *v14 = *v11;
        ++*((_DWORD *)v9 - 1);
        if ( v10 == v12 )
          break;
        while ( 1 )
        {
          v10 += 4;
          v11 = (_DWORD *)(v10 + *(_QWORD *)(a1 + 8));
LABEL_9:
          v15 = *((unsigned int *)v9 - 1);
          v14 = (_DWORD *)v9 + v15;
          if ( (_DWORD)v15 != *((_DWORD *)v9 - 2) )
            break;
          v16 = (unsigned int)(3 * v15 + 1) >> 1;
          v17 = 4 * v16 + 8;
          v18 = v16;
          if ( 4 * (int)v15 + 8 >= (unsigned int)v17 || (unsigned int)v15 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0(v24, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v24);
            sub_233E40((__int64)v24);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (unsigned int *)sub_186B300(v9 - 1, v17);
          *v19 = v18;
          v9 = v19 + 2;
          v20 = v19[1];
          *(_QWORD *)(a2 + 704) = v9;
          *((_DWORD *)v9 + v20) = *v11;
          ++*((_DWORD *)v9 - 1);
          if ( v10 == v12 )
            return sub_B0F0F0(a2, (_DWORD *)a1, v22);
        }
      }
    }
  }
  return sub_B0F0F0(a2, (_DWORD *)a1, v22);
}

