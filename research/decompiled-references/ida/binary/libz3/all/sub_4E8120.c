__int64 __fastcall sub_4E8120(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rdi
  int v8; // r12d
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v15; // [rsp+8h] [rbp-38h] BYREF
  __int64 v16; // [rsp+10h] [rbp-30h] BYREF
  char v17; // [rsp+18h] [rbp-28h]

  v7 = *(_QWORD *)(a1 + 24);
  v15 = a2;
  v8 = sub_4D6490(v7);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(*(_QWORD *)(a1 + 40));
  v16 = a3;
  v17 = 1;
  v10 = sub_15D2D10(v8, v9, 7, 1, (unsigned int)&v16, 1, (__int64)&v15, 0);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v11 = *a4;
  if ( *a4 )
  {
    v12 = a4[1];
    if ( (*(_DWORD *)(v11 + 8))-- == 1 )
      sub_15D7BC0(v12, v11);
  }
  *a4 = v10;
  return sub_15D0DF0(&v16);
}

