__int64 __fastcall sub_6DDA70(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax

  v3 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
  v7 = *(_QWORD *)(v3 + 8) | a3 & 7;
  v8 = 1;
  if ( v6 != v7 )
  {
    v9 = sub_6DD7D0(a1, a3, v6, 1u);
    v12 = sub_6DD7D0(a1, a2, v10, v11);
    v8 = v12 & 0xFFFFFFF0;
    LOBYTE(v8) = (*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] | v12 & 7) == (*(_QWORD *)&byte_8[v9
                                                                                                 & 0xFFFFFFFFFFFFFFF0LL]
                                                                              | v9 & 7);
  }
  return v8;
}

