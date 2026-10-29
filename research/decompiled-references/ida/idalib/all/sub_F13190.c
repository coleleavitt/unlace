__int64 __fastcall sub_F13190(__int64 a1, __int64 a2)
{
  void **v4; // rdi
  __int64 v5; // rax
  void *v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // rbp
  __int64 result; // rax
  int v17; // ebx
  __int64 v18; // rsi
  __int64 v19; // r13
  void *v20; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __int64 v23; // [rsp+18h] [rbp-50h]

  sub_F15AA0();
  v4 = (void **)(*(_BYTE *)(a2 + 2) >> 3);
  v5 = sub_21F8CF0(v4);
  v6 = *(void **)(a2 + 16);
  v7 = v5;
  v8 = *(unsigned int *)(a2 + 24);
  v9 = (v8 + 63) >> 6;
  if ( v9 > 1 )
  {
    v4 = &v20;
    sub_2205610(&v20, v8, v9, v6);
  }
  else
  {
    v21 = v8;
    if ( (unsigned int)v8 > 0x40 )
    {
      v8 = (unsigned __int64)v6;
      v4 = &v20;
      sub_2205470(&v20, v6, 0);
    }
    else
    {
      v20 = v6;
    }
  }
  v10 = sub_21F90D0(v4, v8, v9);
  v11 = v10;
  if ( v7 == v10 )
    sub_21FFDA0(&v22, v10, &v20);
  else
    sub_21FF7D0(&v22, v7, &v20);
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  sub_2202B40(&v22, *(_QWORD *)(a1 + 8));
  if ( v22 == v11 )
  {
    if ( v23 )
    {
      v18 = 24LL * *(_QWORD *)(v23 - 8);
      v19 = v23 + v18;
      if ( v23 == v23 + v18 )
      {
        operator delete[]((void *)(v23 - 8), v18 + 8);
      }
      else
      {
        while ( 1 )
        {
          sub_9955A0((_QWORD *)(v19 - 24));
          if ( v23 == v19 - 24 )
            break;
          v19 -= 24;
        }
        operator delete[]((void *)(v19 - 32), 24LL * *(_QWORD *)(v19 - 32) + 8);
      }
    }
  }
  else
  {
    sub_21F9830(&v22);
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(unsigned int *)(v12 + 8);
  v14 = HIBYTE(*(_DWORD *)a2) & 1;
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v12 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 8), v12 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(v12 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v12 + 4 * v13) = v14;
  ++*(_DWORD *)(v12 + 8);
  v15 = *(_QWORD *)(a1 + 8);
  result = *(unsigned int *)(v15 + 8);
  v17 = (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 18LL) >> 3)
      & 0x1FF;
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v15 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 8), v15 + 16, result + 1, 4);
    result = *(unsigned int *)(v15 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v15 + 4 * result) = v17;
  ++*(_DWORD *)(v15 + 8);
  return result;
}
