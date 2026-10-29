__int64 __fastcall sub_BEA0B0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 v6; // rcx
  __int64 (*v7)(); // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rbp
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v20 = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v20;
    v3 = *v20;
  }
  v5 = *(__int64 (**)())(v3 + 1792);
  if ( v5 != sub_BC5F50 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v20;
    v3 = *v20;
  }
  v6 = *(_QWORD *)(a2 + 40);
  if ( !v6 )
  {
    v7 = nullptr;
    goto LABEL_15;
  }
  v5 = (__int64 (*)())(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v6 = *(_QWORD *)(a2 + 40) & 4LL;
  v7 = v5;
  if ( !(_DWORD)v6 || !v5 )
  {
LABEL_15:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 (*)(), __int64 (*)(), __int64))(v3 + 56))(a1, v7, v5, v6) )
      goto LABEL_16;
    return 0;
  }
  v8 = *(_QWORD *)v5;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD *, __int64))(v3 + 136))(
          a1,
          *(_QWORD *)v5,
          (_QWORD *)v5 + 1,
          v6) )
    return 0;
  v10 = *(_QWORD *)(a2 + 40);
  if ( !v10 || (v10 & 4) == 0 )
    BUG();
  v11 = *(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 24
    || (v19 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v19 + 16) == 24)
    && (v11 = sub_F63050(v11, v8, v19, v9)) != 0 )
  {
    v12 = 0;
    if ( (*(_BYTE *)(v11 + 19) & 8) != 0 )
      v12 = *(_QWORD *)(v11 + 48);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v20 + 56LL))(v20, v12) )
      return 0;
  }
LABEL_16:
  if ( sub_B8E0B0(a2) )
  {
    v14 = sub_B8D340(a2);
    if ( v14 )
    {
      if ( !(unsigned __int8)sub_BCF900(&v20, v14) )
        return 0;
    }
  }
  v15 = sub_9C8850(a2);
  v17 = v16;
  v18 = (_QWORD *)v15;
  if ( (_QWORD *)v15 == v16 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v20 + 32LL))(v20, *v18);
    if ( !(_BYTE)result )
      break;
    if ( v17 == ++v18 )
      return 1;
  }
  return result;
}
