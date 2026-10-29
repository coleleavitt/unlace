unsigned __int64 __fastcall sub_6C9A10(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-30h]

  v4 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v5 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 48LL;
  v6 = a2 & 7 | v4;
  v7 = (v5 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v7 + 48 && v5 )
  {
    *(_QWORD *)(a1 + 2192) = v7 + 48;
    v8 = (v5 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v12 = v6;
    v11 = sub_6A76A0(a1 + 2192, 48, 4);
    v6 = v12;
    v8 = v11;
    v7 = v11;
  }
  sub_B0D200(v8, a1, a2, v6, a3);
  v9 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v9 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v9 + 1, 8);
    v9 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v9) = v7;
  ++*(_DWORD *)(a1 + 16);
  return v8 & 0xFFFFFFFFFFFFFFF0LL;
}

