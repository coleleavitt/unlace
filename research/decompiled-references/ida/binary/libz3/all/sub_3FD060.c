__int64 __fastcall sub_3FD060(_QWORD *a1, _QWORD *a2)
{
  __int64 (*v3)(void); // rax
  _QWORD *v4; // rbp
  __int64 (*v5)(void); // rdx
  _QWORD *v6; // r12
  __int64 (*v7)(void); // rax
  _QWORD *v8; // r14
  __int64 (*v9)(void); // rdx
  _QWORD *v10; // r15
  __int64 (*v11)(void); // rax
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi

  v3 = *(__int64 (**)(void))(*a1 + 32LL);
  if ( v3 != sub_41C670 )
  {
    result = v3();
    goto LABEL_19;
  }
  v4 = (_QWORD *)a1[12];
  v5 = *(__int64 (**)(void))(*v4 + 32LL);
  if ( v5 != v3 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))v5)(a1[12]);
    goto LABEL_16;
  }
  v6 = (_QWORD *)v4[12];
  v7 = *(__int64 (**)(void))(*v6 + 32LL);
  if ( v7 != v5 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))v7)(v4[12]);
    goto LABEL_13;
  }
  v8 = (_QWORD *)v6[12];
  v9 = *(__int64 (**)(void))(*v8 + 32LL);
  if ( v9 != v7 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))v9)(v6[12]);
    goto LABEL_10;
  }
  v10 = (_QWORD *)v8[12];
  v11 = *(__int64 (**)(void))(*v10 + 32LL);
  if ( v11 == v9 )
    result = sub_3FD060(v10[12]);
  else
    result = ((__int64 (__fastcall *)(_QWORD))v11)(v8[12]);
  if ( *a2 )
  {
    v13 = v10[7];
    if ( !v13 )
    {
LABEL_11:
      v14 = v8[7];
      if ( !v14 )
      {
LABEL_14:
        v15 = v6[7];
        if ( !v15 )
        {
LABEL_17:
          v16 = v4[7];
          if ( !v16 )
          {
LABEL_20:
            v17 = a1[7];
            if ( v17 )
              return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 32LL))(v17, a2);
            return result;
          }
          result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 32LL))(v16, a2);
LABEL_19:
          if ( !*a2 )
            return result;
          goto LABEL_20;
        }
        result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 32LL))(v15, a2);
LABEL_16:
        if ( !*a2 )
          return result;
        goto LABEL_17;
      }
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 32LL))(v14, a2);
LABEL_13:
      if ( !*a2 )
        return result;
      goto LABEL_14;
    }
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 32LL))(v13, a2);
LABEL_10:
    if ( !*a2 )
      return result;
    goto LABEL_11;
  }
  return result;
}

