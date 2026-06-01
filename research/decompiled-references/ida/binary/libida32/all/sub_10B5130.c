_QWORD *__fastcall sub_10B5130(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax

  v2 = a1;
  v3 = (a2 - (__int64)a1) >> 5;
  v4 = (a2 - (__int64)a1) >> 3;
  if ( v3 <= 0 )
  {
LABEL_16:
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
      {
        if ( v4 != 1 )
          return (_QWORD *)a2;
        goto LABEL_24;
      }
      if ( (unsigned __int8)sub_10B52E0(*v2) )
        return v2;
      ++v2;
    }
    if ( (unsigned __int8)sub_10B52E0(*v2) )
      return v2;
    ++v2;
LABEL_24:
    if ( !(unsigned __int8)sub_10B52E0(*v2) )
      return (_QWORD *)a2;
    return v2;
  }
  v5 = *a1;
  if ( (unsigned int)(*(_DWORD *)(*a1 + 8LL) - 7) > 2 )
  {
    v7 = a1;
    v8 = &a1[4 * v3];
    while ( 1 )
    {
      v9 = *(_QWORD *)(v5 + 16);
      v10 = *(unsigned int *)(v5 + 24);
      if ( v9 + 8 * v10 != sub_10B5130(v9, v9 + 8 * v10, sub_10B52E0) )
        break;
      v11 = v7[1];
      ++v2;
      if ( (unsigned int)(*(_DWORD *)(v11 + 8) - 7) <= 2 )
        break;
      v12 = *(_QWORD *)(v11 + 16);
      v13 = *(unsigned int *)(v11 + 24);
      if ( v12 + 8 * v13 != sub_10B5130(v12, v12 + 8 * v13, sub_10B52E0) )
        break;
      v14 = v7[2];
      v2 = v7 + 2;
      if ( (unsigned int)(*(_DWORD *)(v14 + 8) - 7) <= 2 )
        break;
      v15 = *(_QWORD *)(v14 + 16);
      v16 = *(unsigned int *)(v14 + 24);
      if ( v15 + 8 * v16 != sub_10B5130(v15, v15 + 8 * v16, sub_10B52E0) )
        break;
      v17 = v7[3];
      v2 = v7 + 3;
      if ( (unsigned int)(*(_DWORD *)(v17 + 8) - 7) <= 2 )
        break;
      v18 = *(_QWORD *)(v17 + 16);
      v19 = *(unsigned int *)(v17 + 24);
      if ( v18 + 8 * v19 != sub_10B5130(v18, v18 + 8 * v19, sub_10B52E0) )
        break;
      v2 = v7 + 4;
      if ( v8 == v7 + 4 )
      {
        v4 = (a2 - (__int64)v2) >> 3;
        goto LABEL_16;
      }
      v5 = v7[4];
      if ( (unsigned int)(*(_DWORD *)(v5 + 8) - 7) <= 2 )
        return v2;
      v7 += 4;
    }
  }
  return v2;
}

