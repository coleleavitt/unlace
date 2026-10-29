__int64 __fastcall sub_B6E0D0(_QWORD *a1, unsigned int *a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  unsigned int *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi

  v6 = a1[1082];
  if ( v6 && (v7 = *a2, (unsigned int)v7 < *(_DWORD *)(v6 - 4)) )
  {
    v8 = *(_QWORD *)(v6 + 8 * v7);
    v9 = *((_QWORD *)a2 + 2);
    result = *(_QWORD *)(v9 + 24);
    if ( v8 )
    {
      if ( result )
      {
        result = *(unsigned int *)result;
        if ( (_DWORD)result != -1 )
        {
          v11 = a1[1084];
          if ( v11 )
          {
            if ( (unsigned int)result < *(_DWORD *)(v11 - 4) )
            {
              v12 = *(_QWORD *)(v11 + 8 * result);
              if ( v12 )
              {
                LODWORD(result) = sub_B39350(v8, *(_DWORD *)(v12 + 8));
                if ( (_DWORD)result == -1 )
                  return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 32LL))(v12, a2);
                result = (unsigned int)result;
                if ( *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * (unsigned int)result) != v8 )
                  return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 32LL))(v12, a2);
              }
            }
          }
        }
      }
      return result;
    }
  }
  else
  {
    v9 = *((_QWORD *)a2 + 2);
    result = *(_QWORD *)(v9 + 24);
  }
  if ( !*((_WORD *)a2 + 2) )
  {
    if ( !result )
      goto LABEL_33;
    v14 = *(unsigned int *)result;
    if ( (_DWORD)v14 )
      goto LABEL_16;
    if ( *(_DWORD *)(result + 4) != 4 )
      goto LABEL_17;
    if ( !(unsigned __int8)sub_15D2CB0(a1[13], a2) )
      return sub_B6DEA0(a1, (__int64)a2, a3, a4, a5);
    v9 = *((_QWORD *)a2 + 2);
  }
  v13 = *(unsigned int **)(v9 + 24);
  if ( !v13 )
  {
LABEL_33:
    sub_B6D040(a1, (__int64)a2, a3, a4, a5);
    goto LABEL_21;
  }
  v14 = *v13;
LABEL_16:
  if ( (_DWORD)v14 == -1 )
    goto LABEL_33;
LABEL_17:
  v15 = a1[1084];
  if ( !v15 )
    goto LABEL_33;
  if ( (unsigned int)v14 >= *(_DWORD *)(v15 - 4) )
    goto LABEL_33;
  v16 = *(_QWORD *)(v15 + 8 * v14);
  if ( !v16 || !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 32LL))(v16, a2) )
    goto LABEL_33;
LABEL_21:
  v17 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
  result = *(_QWORD *)(v17 + 24);
  if ( result )
  {
    result = *(unsigned int *)result;
    if ( (_DWORD)result != -1 )
    {
      v18 = a1[1084];
      if ( v18 )
      {
        if ( (unsigned int)result < *(_DWORD *)(v18 - 4) )
        {
          v19 = *(_QWORD *)(v18 + 8 * result);
          if ( v19 )
          {
            result = *(_QWORD *)(*(_QWORD *)v19 + 40LL);
            if ( (void (*)())result != nullsub_523 )
              return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))result)(
                       v19,
                       *(_QWORD *)(a1[1082] + 8LL * *a2),
                       v17);
          }
        }
      }
    }
  }
  return result;
}

