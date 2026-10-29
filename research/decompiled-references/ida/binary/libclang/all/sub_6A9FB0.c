void __fastcall sub_6A9FB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax

  if ( !a2 )
    BUG();
  v4 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 - 8) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(a2 - 8) & 7LL;
  v5 = *(unsigned int *)(a3 + 8);
  if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v5 + 1) )
  {
    sub_25D6060(a3, a3 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v5) = v4;
  v6 = HIDWORD(v4);
  v7 = *(unsigned int *)(a3 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v8;
  if ( v7 < v8 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v8) = v6;
  ++*(_DWORD *)(a3 + 8);
  sub_6A0380((int *)(a2 + 8), a3);
}

