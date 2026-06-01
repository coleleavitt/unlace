__int64 __fastcall sub_BC9420(__int64 **a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 *v13; // rax

  v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 4) == 0 )
  {
LABEL_2:
    v5 = 0;
    v6 = 0;
    goto LABEL_3;
  }
  if ( *(_DWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
  {
    v11 = 0;
    do
    {
      v12 = v11++;
      sub_BC92E0(a1, *(_QWORD *)(*(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 24) + 8 * v12));
      v4 = *(_QWORD *)(a2 + 56);
      if ( (v4 & 4) == 0 )
        goto LABEL_2;
    }
    while ( *(_DWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 16) > v11 );
  }
  v13 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  v6 = *v13;
  v5 = v13[1];
LABEL_3:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 88))(*a1, v6, v5) )
    return 0;
  v7 = (_QWORD *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v7 = (_QWORD *)v7[4];
  v8 = *a1;
  v9 = **a1;
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(v9 + 136))(v8, *v7, v7 + 1);
  else
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 128))(v8, *(_QWORD *)(a2 + 48));
}
