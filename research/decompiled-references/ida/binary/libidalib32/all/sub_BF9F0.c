__int64 __fastcall sub_BF9F0(__int64 a1, unsigned int a2, unsigned int a3, double a4, double a5)
{
  unsigned int *v6; // rdi
  unsigned int v7; // ebp
  unsigned int *v9; // rax
  __int64 v10; // r11
  unsigned int *v11; // r14
  unsigned int v12; // r13d
  bool v13; // cf
  unsigned int *v14; // rax
  __int64 v15; // r11
  unsigned int *v16; // r14
  __int64 v17; // r11
  unsigned int *v18; // r15
  unsigned int *v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // rax

  if ( a2 >= a3 )
    return 0;
  v6 = *(unsigned int **)a1;
  v7 = a2;
  v9 = sub_B8760(v6, *(_QWORD *)(a1 + 8), a2);
  v11 = v9;
  if ( v9 && *((_BYTE *)v9 + 8) )
  {
    v12 = 0;
    if ( *v9 < a2 )
    {
      if ( !(unsigned __int8)set_segm_end() )
        return (unsigned int)-1;
      v13 = *v11 < a2;
      v11[1] = a2;
      v6 = *(unsigned int **)a1;
      v10 = *(_QWORD *)(a1 + 8);
      if ( !v13 )
      {
        if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (&v6[3 * v10] - v11) - 2) >= 0 )
        {
          memmove(v11, v11 + 3, (char *)&v6[3 * v10] - (char *)v11 - 12);
          v10 = *(_QWORD *)(a1 + 8);
          v6 = *(unsigned int **)a1;
        }
        *(_QWORD *)(a1 + 8) = --v10;
      }
      v12 = 1;
    }
  }
  else
  {
    v12 = 0;
  }
  v14 = sub_B8760(v6, v10, a3);
  v16 = v14;
  if ( !v14 || !*((_BYTE *)v14 + 8) || *v14 >= a3 )
    goto LABEL_12;
  if ( !(unsigned __int8)set_segm_start() )
    return (unsigned int)-1;
  v13 = a3 < v16[1];
  *v16 = a3;
  v6 = *(unsigned int **)a1;
  v15 = *(_QWORD *)(a1 + 8);
  if ( !v13 )
  {
    if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (&v6[3 * v15] - v16) - 2) >= 0 )
    {
      memmove(v16, v16 + 3, (char *)&v6[3 * v15] - (char *)v16 - 12);
      v15 = *(_QWORD *)(a1 + 8);
      v6 = *(unsigned int **)a1;
    }
    *(_QWORD *)(a1 + 8) = --v15;
  }
  ++v12;
LABEL_12:
  while ( 1 )
  {
    v18 = sub_B87B0(v6, v15, v7, a3);
    if ( !v18 )
      break;
    v19 = &v6[3 * v17];
    if ( v18 >= v19 )
      break;
    while ( !*((_BYTE *)v18 + 8) )
    {
      v18 += 3;
      if ( v18 >= v19 )
        return v12;
    }
    v7 = v18[1];
    v20 = dword_24412C & 1;
    if ( (dword_24412C & 1) != 0 )
    {
      getseg();
      get_segm_name();
      v20 = *v18;
    }
    if ( !(unsigned __int8)del_segm() )
      return (unsigned int)-1;
    if ( (dword_24412C & 1) != 0 )
      sub_8F660((__int64)"%a: deleted segment %s, end: %a\n", 0.0, (const char *)v20, a5);
    v21 = *(_QWORD *)(a1 + 8);
    if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)a1 + 12 * v21 - (__int64)v18) >> 2) - 2) >= 0 )
    {
      memmove(v18, v18 + 3, *(_QWORD *)a1 + 12 * v21 - (_QWORD)v18 - 12);
      v21 = *(_QWORD *)(a1 + 8);
    }
    ++v12;
    *(_QWORD *)(a1 + 8) = v21 - 1;
    if ( v7 >= a3 )
      return v12;
    v6 = *(unsigned int **)a1;
    v15 = *(_QWORD *)(a1 + 8);
  }
  return v12;
}

