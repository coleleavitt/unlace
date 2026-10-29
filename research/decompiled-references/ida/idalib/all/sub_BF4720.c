__int64 __fastcall sub_BF4720(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  __int64 result; // rax
  unsigned int *v11; // rbx
  __int64 v12; // r12
  __int64 *v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rbp
  _QWORD *v18; // rbx
  _QWORD v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a1;
  v19[0] = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = (__int64 *)v19[0];
    v3 = *(_QWORD *)v19[0];
  }
  v5 = *(__int64 (**)())(v3 + 1152);
  if ( v5 != sub_BC5A50 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
    return 0;
  v6 = sub_EF5320(*(_QWORD *)(a2 + 40));
  v7 = *(_QWORD *)(a2 + 40);
  v8 = (_QWORD *)(v6 + 8LL * *(unsigned int *)(v7 + 4));
  v9 = (_QWORD *)sub_EF5320(v7);
  if ( v8 == v9 )
  {
LABEL_8:
    v11 = *(unsigned int **)(a2 + 40);
    v12 = (__int64)&v11[2 * *v11 + 4];
    v13 = (__int64 *)(v11 + 4);
    if ( (__int64 *)v12 == v13 )
    {
LABEL_17:
      if ( !sub_B8E0B0(a2) || (v14 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v19, v14) )
      {
        v15 = sub_9C8850(a2);
        v17 = v16;
        v18 = (_QWORD *)v15;
        if ( (_QWORD *)v15 == v16 )
          return 1;
        while ( 1 )
        {
          result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19[0] + 32LL))(v19[0], *v18);
          if ( !(_BYTE)result )
            break;
          if ( v17 == ++v18 )
            return 1;
        }
        return result;
      }
    }
    else
    {
      while ( (unsigned __int8)sub_BEC930(v19, *v13) )
      {
        if ( (__int64 *)v12 == ++v13 )
          goto LABEL_17;
      }
    }
    return 0;
  }
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19[0] + 96LL))(v19[0], *v9);
    if ( !(_BYTE)result )
      return result;
    if ( v8 == ++v9 )
      goto LABEL_8;
  }
}
