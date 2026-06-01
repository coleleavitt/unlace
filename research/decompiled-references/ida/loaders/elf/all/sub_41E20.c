__int64 __fastcall sub_41E20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int8 v12; // al
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *first_seg; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // r13
  __int64 v20; // r14
  unsigned __int8 v22; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 32) != -1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4LL) == 20 && *(_QWORD *)(a2 + 512) <= 0xFFFFFFu )
      *(_QWORD *)(a2 + 512) = 0x1000000;
    v8 = getinf(9, a2, a3, a4, a5, a6);
    v9 = *(_QWORD *)(a2 + 512);
    v22 = v8;
    v10 = *(_DWORD *)(a1 + 12) * (unsigned int)v8;
    v11 = (v9 + v8 - 1) & -v8;
    if ( v11 >= v9 )
    {
      if ( *(_DWORD *)(a3 + 464) == 8 )
      {
        if ( v10 < -1LL - v11 )
          goto LABEL_6;
      }
      else if ( v10 < 0x100000000LL - v11 )
      {
LABEL_6:
        v12 = sub_40B90(v22, a7);
        v13 = (__int64 *)sub_41120(a2, a3, *(_BYTE *)(a1 + 10), *(const char **)a1, v10, v12, a7, a8, 0);
        v14 = *v13;
        *(_QWORD *)(a1 + 16) = *v13;
        v15 = v13[1];
        *(_QWORD *)(a1 + 32) = v14;
        *(_QWORD *)(a1 + 24) = v15;
        return 1;
      }
    }
    first_seg = (_QWORD *)get_first_seg();
    v18 = 0;
    if ( first_seg )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        if ( v18 < *first_seg - v19 )
        {
          v18 = *first_seg - v19;
          v20 = v19;
        }
        v19 = first_seg[1];
        first_seg = (_QWORD *)get_next_seg(*first_seg);
      }
      while ( first_seg );
    }
    else
    {
      v20 = 0;
    }
    if ( v18 >= v10 )
    {
      *(_QWORD *)(a2 + 512) = v20;
      goto LABEL_6;
    }
    sub_15250((__int64)"Could not find a free address space for the extern segment of size %a.", a7);
    *(_QWORD *)(a1 + 32) = -1;
  }
  return 0;
}

