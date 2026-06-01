__int64 __fastcall sub_654110(
        _QWORD *a1,
        double a2,
        double a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r12
  __int64 v9; // rdx
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r14
  __int64 result; // rax

  v8 = *a1;
  v9 = a1[364];
  v10 = *(_DWORD *)(*a1 + 712LL);
  *(_DWORD *)(*a1 + 712LL) = *((unsigned __int8 *)a1 + 40);
  if ( v9 )
  {
    v11 = *((unsigned int *)a1 + 724);
    while ( (unsigned int)v11 < *(_DWORD *)(v9 - 4) )
    {
      v12 = *(_QWORD *)(v9 + 8 * v11);
      if ( *((_BYTE *)a1 + 40) )
        v13 = sub_15DE060(*a1, *(_QWORD *)(v9 + 8 * v11), v9, a7, a8);
      else
        v13 = 0;
      v14 = a1 + 295;
      sub_631ED0(
        a1 + 82,
        v12,
        v13,
        (__int64)(a1 + 295),
        (__int64 *)(a1[365] + 8LL * *((unsigned int *)a1 + 724)),
        a2,
        a3,
        a4);
      v9 = a1[364];
      v11 = (unsigned int)(*((_DWORD *)a1 + 724) + 1);
      *((_DWORD *)a1 + 724) = v11;
      if ( !v9 )
        goto LABEL_7;
    }
  }
  v14 = a1 + 295;
LABEL_7:
  result = sub_653F80(a1, v14);
  *(_DWORD *)(v8 + 712) = v10;
  return result;
}

