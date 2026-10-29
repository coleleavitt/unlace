__int64 *__fastcall sub_692910(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  void (***v16)(void); // rdi
  __int64 v17; // r12

  sub_6927C0(a2, a2, a3);
  v4 = *(_QWORD *)(a2 + 4760);
  if ( v4 )
  {
    *a1 = v4;
    ++*(_DWORD *)(v4 + 8);
    return a1;
  }
  v6 = *(_QWORD *)(a2 + 4408);
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  if ( *(_DWORD *)(a2 + 4456) == v7 && *(_BYTE *)(a2 + 4808) )
  {
    sub_7826B0(*(_QWORD *)(a2 + 4752), a2 + 96, a2 + 4480);
    v9 = *(_QWORD *)(a2 + 4712);
    v10 = 0x7FFFFFFF8LL;
    if ( v9 )
      v10 = 8LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
    v11 = *(_QWORD *)(v9 + v10);
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    sub_68D0B0(*(void (****)(void))(a2 + 4760));
    v12 = *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 4760) = v11;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v13 = sub_1336AB0(v12, v11);
    v14 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    sub_68D0B0(*(void (****)(void))(a2 + 4760));
    *(_QWORD *)(a2 + 4760) = v14;
    sub_68D0B0((void (***)(void))v12);
    v15 = sub_1336AB0(*(_QWORD *)(a2 + 4760), *(_QWORD *)(a2 + 4752));
    v16 = *(void (****)(void))(a2 + 4760);
    v17 = v15;
    if ( v15 )
    {
      ++*(_DWORD *)(v15 + 8);
      sub_68D0B0(v16);
      *(_QWORD *)(a2 + 4760) = v17;
      *a1 = v17;
      ++*(_DWORD *)(v17 + 8);
    }
    else
    {
      sub_68D0B0(v16);
      *(_QWORD *)(a2 + 4760) = 0;
      *a1 = 0;
    }
    return a1;
  }
  v8 = *(_QWORD *)(a2 + 56);
  *a1 = v8;
  if ( !v8 )
    return a1;
  ++*(_DWORD *)(v8 + 8);
  return a1;
}

