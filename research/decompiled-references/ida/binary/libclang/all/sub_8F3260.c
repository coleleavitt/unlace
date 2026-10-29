__int64 __fastcall sub_8F3260(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  __int64 (*v5)(void); // rax
  _QWORD *v6; // rdi
  __int64 (*v7)(void); // rdx
  _QWORD **v8; // rdi
  char v9; // dl
  __int64 v10; // rbp
  __int64 v11; // rax

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a2;
  v4 = *(_QWORD **)(a1 + 408);
  v5 = *(__int64 (**)(void))(*v4 + 24LL);
  if ( (char *)v5 != (char *)sub_8D7F10 )
  {
LABEL_10:
    v9 = v5();
    goto LABEL_7;
  }
  v6 = (_QWORD *)v4[3];
  v7 = *(__int64 (**)(void))(*v6 + 24LL);
  if ( v7 == v5 )
  {
    v8 = (_QWORD **)v6[3];
    v5 = (__int64 (*)(void))(*v8)[3];
    if ( v5 == v7 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v8[3] + 24LL))(v8[3]);
      goto LABEL_7;
    }
    goto LABEL_10;
  }
  v9 = v7();
LABEL_7:
  result = 0;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a1 + 584) + 96LL;
    v11 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
    sub_A1BFE0(v11, v10);
    return 1;
  }
  return result;
}

