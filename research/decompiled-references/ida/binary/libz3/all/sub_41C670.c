__int64 __fastcall sub_41C670(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  __int64 (__fastcall *v3)(); // rax
  _QWORD *v4; // r12
  __int64 (__fastcall *v5)(); // rdx
  _QWORD *v6; // r13
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // r14
  __int64 (__fastcall *v9)(); // rdx
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi

  v2 = *(_QWORD **)(a1 + 96);
  v3 = *(__int64 (__fastcall **)())(*v2 + 32LL);
  if ( v3 != sub_41C670 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))v3)(*(_QWORD *)(a1 + 96));
    goto LABEL_15;
  }
  v4 = (_QWORD *)v2[12];
  v5 = *(__int64 (__fastcall **)())(*v4 + 32LL);
  if ( v5 != v3 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))v5)(v2[12]);
    goto LABEL_12;
  }
  v6 = (_QWORD *)v4[12];
  v7 = *(__int64 (__fastcall **)())(*v6 + 32LL);
  if ( v7 != v5 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))v7)(v4[12]);
    goto LABEL_9;
  }
  v8 = v6[12];
  v9 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 32LL);
  if ( v9 == v7 )
    result = sub_3FD060(*(_QWORD **)(v8 + 96), a2);
  else
    result = ((__int64 (__fastcall *)(_QWORD))v9)(v6[12]);
  if ( *a2 )
  {
    v11 = *(_QWORD *)(v8 + 56);
    if ( !v11 )
    {
LABEL_10:
      v12 = v6[7];
      if ( !v12 )
      {
LABEL_13:
        v13 = v4[7];
        if ( !v13 )
        {
LABEL_16:
          v14 = v2[7];
          if ( v14 )
            return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 32LL))(v14, a2);
          return result;
        }
        result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 32LL))(v13, a2);
LABEL_15:
        if ( !*a2 )
          return result;
        goto LABEL_16;
      }
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 32LL))(v12, a2);
LABEL_12:
      if ( !*a2 )
        return result;
      goto LABEL_13;
    }
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 32LL))(v11, a2);
LABEL_9:
    if ( !*a2 )
      return result;
    goto LABEL_10;
  }
  return result;
}

