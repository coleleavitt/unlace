__int64 __fastcall sub_BC61D0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 v6; // rcx
  __int64 (*v7)(); // rsi
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rbp
  _QWORD *v19; // rbx
  _QWORD *v20; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a1;
  v20 = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v20;
    v3 = *v20;
  }
  v5 = *(__int64 (**)())(v3 + 1784);
  if ( v5 != sub_BA2200 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v20;
    v3 = *v20;
  }
  v6 = *(_QWORD *)(a2 + 48);
  if ( !v6 )
  {
    v7 = nullptr;
    goto LABEL_10;
  }
  v5 = (__int64 (*)())(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v6 = *(_QWORD *)(a2 + 48) & 4LL;
  v7 = v5;
  if ( !(_DWORD)v6 || !v5 )
  {
LABEL_10:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 (*)(), __int64 (*)(), __int64))(v3 + 56))(a1, v7, v5, v6) )
      return 0;
    goto LABEL_11;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD *, __int64))(v3 + 136))(
          a1,
          *(_QWORD *)v5,
          (_QWORD *)v5 + 1,
          v6) )
    return 0;
LABEL_11:
  v9 = *(_DWORD *)(a2 + 36);
  if ( v9 )
  {
    v10 = 0;
    v11 = 8LL * (unsigned int)(v9 - 1) + 8;
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v10);
      v13 = (_QWORD *)(v12 + 24);
      v14 = v12 + 8LL * (*(_DWORD *)(v12 + 20) & 0x1FFFFFFF) + 24;
      if ( v12 + 24 != v14 )
        break;
LABEL_18:
      v10 += 8;
      if ( v11 == v10 )
        goto LABEL_19;
    }
    while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v20 + 56LL))(v20, *v13) )
    {
      if ( (_QWORD *)v14 == ++v13 )
        goto LABEL_18;
    }
    return 0;
  }
LABEL_19:
  if ( sub_B6A370(a2) )
  {
    v15 = sub_B69600(a2);
    if ( v15 )
    {
      if ( !(unsigned __int8)sub_BABBC0(&v20, v15) )
        return 0;
    }
  }
  v16 = sub_9A4B10(a2);
  v18 = v17;
  v19 = (_QWORD *)v16;
  if ( (_QWORD *)v16 == v17 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v20 + 32LL))(v20, *v19);
    if ( !(_BYTE)result )
      break;
    if ( v18 == ++v19 )
      return 1;
  }
  return result;
}

