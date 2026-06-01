__int64 __fastcall sub_BC0CE0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rbp
  _QWORD *v15; // rbx
  _QWORD *v16; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v16 = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v16;
    v3 = *v16;
  }
  v5 = *(__int64 (**)())(v3 + 1136);
  if ( v5 != sub_BA1CF0 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
    return 0;
  v6 = sub_ED15E0(*(_QWORD *)(a2 + 40));
  v7 = *(_QWORD *)(a2 + 40);
  v8 = (_QWORD *)(v6 + 8LL * *(unsigned int *)(v7 + 4));
  v9 = (_QWORD *)sub_ED15E0(v7);
  if ( v8 == v9 )
  {
LABEL_8:
    if ( !sub_B6A370(a2) || (v11 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(&v16, v11) )
    {
      v12 = sub_9A4B10(a2);
      v14 = v13;
      v15 = (_QWORD *)v12;
      if ( (_QWORD *)v12 == v13 )
        return 1;
      while ( 1 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v16 + 32LL))(v16, *v15);
        if ( !(_BYTE)result )
          break;
        if ( v14 == ++v15 )
          return 1;
      }
      return result;
    }
    return 0;
  }
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v16 + 96LL))(v16, *v9);
    if ( !(_BYTE)result )
      return result;
    if ( v8 == ++v9 )
      goto LABEL_8;
  }
}

