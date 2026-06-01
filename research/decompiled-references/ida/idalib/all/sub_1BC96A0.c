__int64 **__fastcall sub_1BC96A0(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v7; // rbx
  __int64 v8; // rax
  __int64 **v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 **v12; // rbp
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 **v17; // rbp
  __int64 *v18; // rax
  __int64 **result; // rax
  __int64 v20; // rbp
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax

  v7 = *(__int64 ***)a1;
  v8 = 8LL * *(unsigned int *)(a1 + 8);
  v9 = (__int64 **)(*(_QWORD *)a1 + v8);
  v10 = v8 >> 3;
  v11 = v8 >> 5;
  if ( !v11 )
  {
LABEL_31:
    if ( v10 != 2 )
    {
      if ( v10 != 3 )
      {
        if ( v10 != 1 )
          goto LABEL_34;
        goto LABEL_43;
      }
      v21 = *v7;
      if ( ((*v7)[13] & 1) != 0 && *v21 && (unsigned int)sub_178F000(*(_QWORD *)(a2 + 664), *a3, *v21, a4, a5, a6) == 1 )
        goto LABEL_16;
      ++v7;
    }
    v22 = *v7;
    if ( ((*v7)[13] & 1) != 0 && *v22 && (unsigned int)sub_178F000(*(_QWORD *)(a2 + 664), *a3, *v22, a4, a5, a6) == 1 )
      goto LABEL_16;
    ++v7;
LABEL_43:
    v23 = *v7;
    if ( ((*v7)[13] & 1) != 0 && *v23 && (unsigned int)sub_178F000(*(_QWORD *)(a2 + 664), *a3, *v23, a4, a5, a6) == 1 )
      goto LABEL_16;
LABEL_34:
    v7 = v9;
    goto LABEL_24;
  }
  v12 = &v7[4 * v11];
  while ( 1 )
  {
    v16 = *v7;
    if ( ((*v7)[13] & 1) != 0 && *v16 && (unsigned int)sub_178F000(*(_QWORD *)(a2 + 664), *a3, *v16, a4, a5, a6) == 1 )
      goto LABEL_16;
    v13 = v7[1];
    if ( (v13[13] & 1) != 0 && *v13 && (unsigned int)sub_178F000(*(_QWORD *)(a2 + 664), *a3, *v13, a4, a5, a6) == 1 )
    {
      ++v7;
      goto LABEL_16;
    }
    v14 = v7[2];
    if ( (v14[13] & 1) != 0 && *v14 && (unsigned int)sub_178F000(*(_QWORD *)(a2 + 664), *a3, *v14, a4, a5, a6) == 1 )
      break;
    v15 = v7[3];
    if ( (v15[13] & 1) != 0 && *v15 && (unsigned int)sub_178F000(*(_QWORD *)(a2 + 664), *a3, *v15, a4, a5, a6) == 1 )
    {
      v7 += 3;
      goto LABEL_16;
    }
    v7 += 4;
    if ( v12 == v7 )
    {
      v10 = v9 - v7;
      goto LABEL_31;
    }
  }
  v7 += 2;
LABEL_16:
  if ( v9 != v7 )
  {
    v17 = v7 + 1;
    if ( v9 != v7 + 1 )
    {
      while ( 1 )
      {
        v18 = *v17;
        if ( ((*v17)[13] & 1) == 0 || !*v18 )
          goto LABEL_22;
        if ( (unsigned int)sub_178F000(*(_QWORD *)(a2 + 664), *a3, *v18, a4, a5, a6) != 1 )
          break;
LABEL_23:
        if ( v9 == ++v17 )
          goto LABEL_24;
      }
      v18 = *v17;
LABEL_22:
      *v7++ = v18;
      goto LABEL_23;
    }
  }
LABEL_24:
  result = *(__int64 ***)a1;
  v20 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8) - (_QWORD)v9;
  if ( v9 != (__int64 **)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)) )
  {
    memmove(v7, v9, *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8) - (_QWORD)v9);
    result = *(__int64 ***)a1;
  }
  *(_DWORD *)(a1 + 8) = ((char *)v7 + v20 - (char *)result) >> 3;
  return result;
}
