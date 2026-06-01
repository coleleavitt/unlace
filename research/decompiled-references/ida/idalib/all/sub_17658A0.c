__int64 __fastcall sub_17658A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // ecx
  unsigned __int64 v11; // [rsp+8h] [rbp-20h] BYREF

  v3 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v3 == 1 )
    return 1;
  v5 = v3;
  v6 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( v6 == 1 )
    return 1;
  v7 = *a1;
  v8 = v6 & 0xFFFFFFFFFFFFFFFELL;
  v9 = v5 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(a2 + 16) == v9 && *(_QWORD *)(a2 + 24) == v8 )
    return a2;
  v10 = *(_DWORD *)(a2 + 32);
  v11 = v8;
  return sub_1930830(v7, 0, v9, 0, (unsigned int)&v11, 1, v10);
}
