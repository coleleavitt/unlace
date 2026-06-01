__int64 __fastcall sub_C0120(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  unsigned __int64 *v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 *v9; // rax
  __int64 v10; // r11
  unsigned __int64 *v11; // r14
  unsigned int v12; // r13d
  bool v13; // cf
  unsigned __int64 *v14; // rax
  __int64 v15; // r11
  unsigned __int64 *v16; // r14
  __int64 v17; // r11
  unsigned __int64 *v18; // r15
  unsigned __int64 *v19; // rax
  const char *v20; // r14
  __int64 v21; // rax

  if ( a2 >= a3 )
    return 0;
  v6 = *(unsigned __int64 **)a1;
  v7 = a2;
  v9 = sub_B8CA0(v6, *(_QWORD *)(a1 + 8), a2);
  v11 = v9;
  if ( v9 && *((_BYTE *)v9 + 16) )
  {
    v12 = 0;
    if ( *v9 < a2 )
    {
      if ( !(unsigned __int8)set_segm_end() )
        return (unsigned int)-1;
      v13 = *v11 < a2;
      v11[1] = a2;
      v6 = *(unsigned __int64 **)a1;
      v10 = *(_QWORD *)(a1 + 8);
      if ( !v13 )
      {
        if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (&v6[3 * v10] - v11) - 2) >= 0 )
        {
          memmove(v11, v11 + 3, (char *)&v6[3 * v10] - (char *)v11 - 24);
          v10 = *(_QWORD *)(a1 + 8);
          v6 = *(unsigned __int64 **)a1;
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
  v14 = sub_B8CA0(v6, v10, a3);
  v16 = v14;
  if ( !v14 || !*((_BYTE *)v14 + 16) || *v14 >= a3 )
    goto LABEL_12;
  if ( !(unsigned __int8)set_segm_start() )
    return (unsigned int)-1;
  v13 = a3 < v16[1];
  *v16 = a3;
  v6 = *(unsigned __int64 **)a1;
  v15 = *(_QWORD *)(a1 + 8);
  if ( !v13 )
  {
    if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (&v6[3 * v15] - v16) - 2) >= 0 )
    {
      memmove(v16, v16 + 3, (char *)&v6[3 * v15] - (char *)v16 - 24);
      v15 = *(_QWORD *)(a1 + 8);
      v6 = *(unsigned __int64 **)a1;
    }
    *(_QWORD *)(a1 + 8) = --v15;
  }
  ++v12;
LABEL_12:
  while ( 1 )
  {
    v18 = sub_B8CF0(v6, v15, v7, a3);
    if ( !v18 )
      break;
    v19 = &v6[3 * v17];
    if ( v18 >= v19 )
      break;
    while ( !*((_BYTE *)v18 + 16) )
    {
      v18 += 3;
      if ( v18 >= v19 )
        return v12;
    }
    v7 = v18[1];
    if ( (dword_245190 & 1) != 0 )
    {
      getseg();
      get_segm_name();
      v20 = (const char *)*v18;
    }
    else
    {
      v20 = nullptr;
    }
    if ( !(unsigned __int8)del_segm() )
      return (unsigned int)-1;
    if ( (dword_245190 & 1) != 0 )
      sub_8F740((__int64)"%a: deleted segment %s, end: %a\n", 0.0, v20, a5);
    v21 = *(_QWORD *)(a1 + 8);
    if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)a1 + 24 * v21 - (__int64)v18) >> 3) - 2) >= 0 )
    {
      memmove(v18, v18 + 3, *(_QWORD *)a1 + 24 * v21 - (_QWORD)v18 - 24);
      v21 = *(_QWORD *)(a1 + 8);
    }
    ++v12;
    *(_QWORD *)(a1 + 8) = v21 - 1;
    if ( v7 >= a3 )
      return v12;
    v6 = *(unsigned __int64 **)a1;
    v15 = *(_QWORD *)(a1 + 8);
  }
  return v12;
}

