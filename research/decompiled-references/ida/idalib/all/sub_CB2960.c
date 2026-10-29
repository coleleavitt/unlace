__int64 __fastcall sub_CB2960(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  void **v6; // rdi
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // r12
  void *v17; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h]

  v2 = *(unsigned __int8 *)(a1 + 584);
  if ( !(_BYTE)v2 )
  {
    v6 = (void **)(*(_BYTE *)(a2 + 2) >> 3);
    v7 = sub_21F8CF0(v6);
    v8 = *(void **)(a2 + 16);
    v9 = v7;
    v10 = *(unsigned int *)(a2 + 24);
    v11 = (v10 + 63) >> 6;
    if ( v11 > 1 )
    {
      v6 = &v17;
      sub_2205610(&v17, v10, v11, v8);
    }
    else
    {
      v18 = v10;
      if ( (unsigned int)v10 > 0x40 )
      {
        v10 = (unsigned __int64)v8;
        v6 = &v17;
        sub_2205470(&v17, v8, 0);
      }
      else
      {
        v17 = v8;
      }
    }
    v12 = sub_21F90D0(v6, v10, v11);
    v13 = v12;
    if ( v9 == v12 )
      sub_21FFDA0(&v19, v12, &v17);
    else
      sub_21FF7D0(&v19, v9, &v17);
    if ( v18 > 0x40 && v17 )
      operator delete[](v17);
    v2 = sub_CB2770(a1, &v19, a2);
    if ( v19 == v13 )
    {
      v14 = v20;
      if ( v20 )
      {
        v15 = 24LL * *(_QWORD *)(v20 - 8);
        v16 = v20 + v15;
        if ( v20 != v20 + v15 )
        {
          while ( 1 )
          {
            v14 = v16 - 24;
            sub_9955A0((_QWORD *)(v16 - 24));
            if ( v20 == v16 - 24 )
              break;
            v16 -= 24;
          }
          v15 = 24LL * *(_QWORD *)(v16 - 32);
        }
        operator delete[]((void *)(v14 - 8), v15 + 8);
      }
    }
    else
    {
      sub_21F9830(&v19);
    }
  }
  return v2;
}
