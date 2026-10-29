__int64 __fastcall sub_1FC4E40(__int64 a1, __int64 a2)
{
  void **v4; // rdi
  __int64 v5; // rax
  void *v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // r13
  void *v16; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-60h]
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 2) >> 3);
  sub_9B9C90(*(_QWORD *)(a1 + 24), HIBYTE(*(_DWORD *)a2) & 1);
  v4 = (void **)(*(_BYTE *)(a2 + 2) >> 3);
  v5 = sub_21F8CF0(v4);
  v6 = *(void **)(a2 + 16);
  v7 = v5;
  v8 = *(unsigned int *)(a2 + 24);
  v9 = (v8 + 63) >> 6;
  if ( v9 > 1 )
  {
    v4 = &v16;
    sub_2205610(&v16, v8, v9, v6);
  }
  else
  {
    v17 = v8;
    if ( (unsigned int)v8 > 0x40 )
    {
      v8 = (unsigned __int64)v6;
      v4 = &v16;
      sub_2205470(&v16, v6, 0);
    }
    else
    {
      v16 = v6;
    }
  }
  v10 = sub_21F90D0(v4, v8, v9);
  v11 = v10;
  if ( v7 == v10 )
    sub_21FFDA0(&v18, v10, &v16);
  else
    sub_21FF7D0(&v18, v7, &v16);
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  sub_1F70320(a1 + 8, &v18, v12);
  if ( v18 == v11 )
  {
    if ( v19 )
    {
      v14 = 24LL * *(_QWORD *)(v19 - 8);
      v15 = v19 + v14;
      if ( v19 == v19 + v14 )
      {
        operator delete[]((void *)(v19 - 8), v14 + 8);
      }
      else
      {
        while ( 1 )
        {
          sub_9955A0((_QWORD *)(v15 - 24));
          if ( v19 == v15 - 24 )
            break;
          v15 -= 24;
        }
        operator delete[]((void *)(v15 - 32), 24LL * *(_QWORD *)(v15 - 32) + 8);
      }
    }
  }
  else
  {
    sub_21F9830(&v18);
  }
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 28), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 175;
  return result;
}
