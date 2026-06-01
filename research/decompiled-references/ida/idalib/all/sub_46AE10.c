void __fastcall sub_46AE10(int *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r14
  __int16 aflags; // ax
  char v8; // r13
  __int64 v9; // rax
  __int64 name; // rax
  int v11; // edx
  __int64 func; // rsi
  const char *v13; // rax
  const char *v14; // rbp
  size_t v15; // rax
  size_t v16; // r15
  void *v17; // rdi
  size_t v18; // rdx
  __int64 v19; // rax
  size_t v20; // [rsp+8h] [rbp-40h]

  *a1 = 0;
  *((_QWORD *)a1 + 2) = 0;
  *((_QWORD *)a1 + 5) = 0;
  v3 = a3 & 0xC000;
  if ( (a3 & 0xC000) != 0 )
  {
    aflags = get_aflags(a2);
    v8 = aflags;
    if ( (a3 & 0x4000) != 0 )
    {
      if ( (aflags & 0x4000) != 0 )
      {
        func = get_func(a2);
        if ( func )
        {
          v13 = (const char *)sub_63F640(*(_QWORD *)(qword_2CCB598 + 1672), func, a2);
          v14 = v13;
          if ( v13 && (v15 = strlen(v13), (v16 = v15) != 0) )
          {
            v17 = *((void **)a1 + 4);
            v18 = v15 + 1;
            if ( *((_QWORD *)a1 + 6) < v15 + 1 )
            {
              v20 = v15 + 1;
              v19 = qvector_reserve(a1 + 8, *((_QWORD *)a1 + 4), v18, 1);
              v18 = v20;
              *((_QWORD *)a1 + 4) = v19;
              v17 = (void *)v19;
            }
            *((_QWORD *)a1 + 5) = v18;
            memmove(v17, v14, v16);
            *(_BYTE *)(*((_QWORD *)a1 + 4) + v16) = 0;
            if ( *((_QWORD *)a1 + 5) > 1u )
              *a1 |= 0x20u;
          }
          else
          {
            *((_QWORD *)a1 + 5) = 0;
          }
        }
      }
      v9 = ea2node(a2);
      name = netnode_get_name(v9, a1 + 2);
      v11 = *a1;
      if ( name <= 0 )
      {
        if ( (v11 & 0x20) != 0 )
        {
          if ( (v11 & 3) == 0 )
            return;
        }
        else
        {
          *a1 = v11 | 2;
        }
      }
      else
      {
        *a1 = v11 | (2 * (v3 == 49152) + 1);
      }
    }
    else
    {
      *a1 |= 2u;
    }
    if ( (unsigned __int8)is_in_nlist(a2) )
      *a1 |= 4u;
    if ( (v8 & 4) != 0 )
      *a1 |= 8u;
    if ( (v8 & 8) != 0 )
      *a1 |= 0x10u;
  }
}
