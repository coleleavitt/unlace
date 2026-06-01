__int64 __fastcall sub_14B7C30(__int64 *a1, char *a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // rbx

  v6 = *((unsigned int *)a1 + 2);
  v7 = *a1;
  v8 = *((unsigned int *)a1 + 3);
  v9 = 8 * v6;
  LODWORD(v10) = v6;
  v11 = v6 + 1;
  v12 = (_QWORD *)(v7 + v9);
  if ( a2 == (char *)(v7 + v9) )
  {
    v16 = *a3;
    if ( v11 > v8 )
    {
      sub_2237220(a1, a1 + 2, v11, 8);
      v7 = *a1;
    }
    *(_QWORD *)(v7 + 8LL * *((unsigned int *)a1 + 2)) = v16;
    v17 = *a1;
    v18 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
    *((_DWORD *)a1 + 2) = v18;
    return v17 + 8 * v18 - 8;
  }
  else
  {
    v13 = v7;
    if ( v11 > v8 )
    {
      v19 = &a2[-v7];
      sub_2237220(a1, a1 + 2, v11, 8);
      v10 = *((unsigned int *)a1 + 2);
      v9 = 8 * v10;
      a2 = &v19[*a1];
      v13 = *a1;
      v12 = (_QWORD *)(*a1 + 8 * v10);
    }
    *v12 = *(_QWORD *)(v13 + v9 - 8);
    if ( (char *)(*a1 + v9 - 8) != a2 )
    {
      memmove(&a2[*a1 + 8 - *a1], a2, *a1 + v9 - 8 - (_QWORD)a2);
      LODWORD(v10) = *((_DWORD *)a1 + 2);
    }
    v14 = *a3;
    *((_DWORD *)a1 + 2) = v10 + 1;
    *(_QWORD *)a2 = v14;
    return (__int64)a2;
  }
}
