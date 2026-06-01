__int64 __fastcall sub_8F3820(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbp
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rdx
  _QWORD **v10; // rdi
  char v11; // al
  __int64 v12; // r12
  __int64 v13; // rax

  v2 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v2;
  v4 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a2;
  v6 = *(_QWORD **)(a1 + 408);
  v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 24LL);
  if ( v7 == sub_8D7F10 )
  {
    v8 = (_QWORD *)v6[3];
    v9 = *(__int64 (**)(void))(*v8 + 24LL);
    if ( (char *)v9 != (char *)v7 )
    {
      v11 = v9();
LABEL_7:
      if ( v11 )
        return 0;
      goto LABEL_8;
    }
    v10 = (_QWORD **)v8[3];
    v7 = (__int64 (__fastcall *)(__int64))(*v10)[3];
    if ( (char *)v7 == (char *)v9 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
      goto LABEL_7;
    }
  }
  if ( ((unsigned __int8 (*)(void))v7)() )
    return 0;
LABEL_8:
  v12 = *(_QWORD *)(a1 + 584) + 40LL;
  v2 = sub_9D9870(a1 + 384, v4, v12);
  if ( (_BYTE)v2 )
  {
    v13 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
    sub_A1BFE0(v13, v12);
    return v2;
  }
  return 0;
}

