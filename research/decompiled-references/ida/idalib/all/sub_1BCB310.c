__int64 **__fastcall sub_1BCB310(__int64 **a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 **v10; // rbx
  __int64 **v11; // rbp
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rax

  v8 = (a2 - (__int64)a1) >> 5;
  v9 = (a2 - (__int64)a1) >> 3;
  if ( v8 <= 0 )
  {
    v10 = a1;
LABEL_21:
    if ( v9 != 2 )
    {
      if ( v9 != 3 )
      {
        if ( v9 != 1 )
          return (__int64 **)a2;
LABEL_33:
        v19 = *v10;
        if ( ((*v10)[13] & 1) != 0
          && *v19
          && (unsigned int)sub_178F000(*(_QWORD *)(a3 + 664), *a4, *v19, (unsigned __int64)a4, a5, a6) == 3 )
        {
          return v10;
        }
        return (__int64 **)a2;
      }
      v17 = *v10;
      if ( ((*v10)[13] & 1) != 0
        && *v17
        && (unsigned int)sub_178F000(*(_QWORD *)(a3 + 664), *a4, *v17, (unsigned __int64)a4, a5, a6) == 3 )
      {
        return v10;
      }
      ++v10;
    }
    v18 = *v10;
    if ( ((*v10)[13] & 1) != 0
      && *v18
      && (unsigned int)sub_178F000(*(_QWORD *)(a3 + 664), *a4, *v18, (unsigned __int64)a4, a5, a6) == 3 )
    {
      return v10;
    }
    ++v10;
    goto LABEL_33;
  }
  v10 = a1;
  v11 = &a1[4 * v8];
  while ( 1 )
  {
    v15 = *v10;
    if ( ((*v10)[13] & 1) != 0
      && *v15
      && (unsigned int)sub_178F000(*(_QWORD *)(a3 + 664), *a4, *v15, (unsigned __int64)a4, a5, a6) == 3 )
    {
      return v10;
    }
    v12 = v10[1];
    if ( (v12[13] & 1) != 0
      && *v12
      && (unsigned int)sub_178F000(*(_QWORD *)(a3 + 664), *a4, *v12, (unsigned __int64)a4, a5, a6) == 3 )
    {
      return v10 + 1;
    }
    v13 = v10[2];
    if ( (v13[13] & 1) != 0
      && *v13
      && (unsigned int)sub_178F000(*(_QWORD *)(a3 + 664), *a4, *v13, (unsigned __int64)a4, a5, a6) == 3 )
    {
      return v10 + 2;
    }
    v14 = v10[3];
    if ( (v14[13] & 1) != 0
      && *v14
      && (unsigned int)sub_178F000(*(_QWORD *)(a3 + 664), *a4, *v14, (unsigned __int64)a4, a5, a6) == 3 )
    {
      v10 += 3;
      return v10;
    }
    v10 += 4;
    if ( v11 == v10 )
    {
      v9 = (a2 - (__int64)v10) >> 3;
      goto LABEL_21;
    }
  }
}
