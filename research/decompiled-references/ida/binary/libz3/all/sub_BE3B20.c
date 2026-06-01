__int64 __fastcall sub_BE3B20(__int64 a1, int **a2, int **a3)
{
  char **exception; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // edi
  unsigned int v10; // ecx
  _QWORD *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int ***v15; // rdx
  unsigned int v16; // r13d
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // r15
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // r14
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( (*((_BYTE *)a3 + 44) & 8) != 0 )
  {
    v10 = -1;
  }
  else
  {
    v6 = (*a3)[6];
    if ( v6 <= 1 )
    {
      v8 = 1;
    }
    else
    {
      v7 = 1;
      while ( 1 )
      {
        v8 = v7;
        if ( *((_QWORD *)a2[v7 + 14] + 1) != *((_QWORD *)a3[v7 + 14] + 1) )
          break;
        if ( v6 == ++v7 )
        {
          if ( v6 == v8 + 1 )
            return 0;
          goto LABEL_15;
        }
      }
    }
    if ( v6 == v8 )
      return 0;
LABEL_15:
    v10 = v6 - 1;
  }
  if ( !sub_B70A50((__int64 *)(*(_QWORD *)(a1 + 16) + 8440LL), (__int64)a2, **a2, v10, (_QWORD **)a3 + 15, 0) )
    return 0;
  v11 = *(_QWORD **)(a1 + 80);
  if ( v11 )
  {
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 == *((_DWORD *)v11 - 2) )
    {
      v16 = (3 * v12 + 1) >> 1;
      v17 = 16 * v16 + 8;
      if ( 16 * v12 + 8 >= v17 || v12 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v25, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = sub_186B270(v17);
      v19 = *(_QWORD *)(a1 + 80);
      v20 = (_DWORD *)v18;
      v11 = (_QWORD *)(v18 + 8);
      if ( v19 )
      {
        v21 = *(unsigned int *)(v19 - 4);
        *(_DWORD *)(v18 + 4) = v21;
        v22 = 0;
        v23 = 16 * v21;
        if ( v23 )
        {
          do
          {
            *(__m128i *)&v20[v22 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v19 + v22));
            v22 += 16LL;
          }
          while ( v23 != v22 );
        }
        sub_186B220((void *)(v19 - 8));
        v15 = (int ***)&v11[2 * (unsigned int)v20[1]];
        v14 = v20[1] + 1;
      }
      else
      {
        *(_DWORD *)(v18 + 4) = 0;
        v15 = (int ***)(v18 + 8);
        v14 = 1;
      }
      *(_QWORD *)(a1 + 80) = v11;
      *v20 = v16;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = (int ***)&v11[2 * v13];
    }
  }
  else
  {
    v24 = (_QWORD *)sub_186B270(0x28u);
    *v24 = 2;
    v14 = 1;
    v11 = v24 + 1;
    *(_QWORD *)(a1 + 80) = v11;
    v15 = (int ***)v11;
  }
  *v15 = a2;
  v15[1] = a3;
  *((_DWORD *)v11 - 1) = v14;
  return 1;
}

