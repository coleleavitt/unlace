__int64 __fastcall sub_3AACB0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rbp
  char *v11; // r15
  __int64 v13; // rax

  v6 = *a1;
  v7 = *(_QWORD *)(qword_2CA1698 + 1384);
  memmove(a1, a1 + 1, *(_QWORD *)v7 + 8LL * *(_QWORD *)(v7 + 8) - (_QWORD)a1 - 8);
  --*(_QWORD *)(v7 + 8);
  *(_QWORD *)(v6 + 32) = *(_QWORD *)a3;
  *(_DWORD *)(v6 + 40) = *(_DWORD *)(a3 + 8);
  v8 = sub_3AAB40(v6);
  v9 = *(_QWORD *)(v7 + 8);
  v10 = v8;
  v11 = (char *)v8 - *(_QWORD *)v7;
  if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
  {
    v13 = qvector_reserve(v7, *(_QWORD *)v7, v9 + 1, 8);
    v9 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)v7 = v13;
    v10 = (__int64 *)&v11[v13];
  }
  memmove(v10 + 1, v10, 8 * v9 - (_QWORD)v11);
  *v10 = v6;
  ++*(_QWORD *)(v7 + 8);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)qword_2C57988 + 16LL))(
           qword_2C57988,
           2,
           v6,
           a2,
           (2 * a4) | (unsigned int)*(unsigned __int8 *)(v7 + 308));
}

