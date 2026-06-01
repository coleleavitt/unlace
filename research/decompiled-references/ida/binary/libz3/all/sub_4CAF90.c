__int64 __fastcall sub_4CAF90(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r13
  void *v5; // rbx
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // rax
  unsigned int i; // ebp
  __int64 v9; // rdi
  __int64 v10; // rbp

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  v4 = *(_QWORD **)(a1 + 8);
  v5 = (void *)v3;
  v6 = *(__int64 (__fastcall **)())(*v4 + 16LL);
  if ( v6 == sub_4CBDD0 )
  {
    v7 = v4[1];
    for ( i = 0; v7; ++i )
    {
      if ( i >= *(_DWORD *)(v7 - 4) )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v5 + 24LL))(v5) )
        break;
      v9 = *(_QWORD *)(v4[1] + 8LL * i);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 16LL))(v9, v5);
      v7 = v4[1];
    }
  }
  else
  {
    ((void (__fastcall *)(_QWORD, void *))v6)(*(_QWORD *)(a1 + 8), v5);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), v5);
  if ( v5 )
    sub_4D63B0(v5);
  return v10;
}

