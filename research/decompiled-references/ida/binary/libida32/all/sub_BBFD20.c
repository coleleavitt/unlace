__int64 __fastcall sub_BBFD20(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  unsigned int v6; // r13d
  _QWORD *v7; // rbp
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r14
  _QWORD *v13; // rbp

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BA1BC0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6752);
  if ( v4 != sub_BA3520 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 6768);
  if ( v5 != sub_BA3540 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 128))(a1, *(_QWORD *)(a2 + 24));
  if ( !(_BYTE)v6 )
    return 0;
  v7 = (_QWORD *)(a2 + 48);
  v8 = a2 + 48 + 8LL * *(unsigned __int16 *)(a2 + 22);
  if ( a2 + 48 != v8 )
  {
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 128))(a1, *v7) )
    {
      if ( (_QWORD *)v8 == ++v7 )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  v10 = sub_6D2DB0(a2);
  v12 = (_QWORD *)(v10 + 8 * v11);
  v13 = (_QWORD *)v10;
  if ( (_QWORD *)v10 == v12 )
  {
LABEL_14:
    if ( ((*(_BYTE *)(a2 + 19) >> 1) & 0xFu) - 6 <= 2 && *(_QWORD *)sub_BAF620(a2) )
      return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 96))(a1);
    else
      return v6;
  }
  else
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 128))(a1, *v13);
      if ( !(_BYTE)result )
        break;
      if ( v12 == ++v13 )
        goto LABEL_14;
    }
  }
  return result;
}

