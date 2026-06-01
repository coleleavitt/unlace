bool __fastcall sub_17A1CC0(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  bool result; // al
  int v9; // eax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v1 = 0;
  v10 = *(_QWORD *)(a1 + 48);
  v11 = *(unsigned int *)(a1 + 40);
  v2 = sub_2246FB0(&v10, asc_22E1692, 6, 0);
  v3 = v11;
  if ( v2 < v11 )
  {
    v3 = v2;
    v1 = v11 - v2;
  }
  v13 = v1;
  v12 = v10 + v3;
  v4 = sub_2247130(&v12, asc_22E1692, 6, -1);
  v5 = v13;
  v6 = v4 + 1;
  if ( v6 > v13 )
    v6 = v13;
  v7 = v13 - v1 + v6;
  if ( v7 <= v13 )
    v5 = v7;
  result = 0;
  if ( v5 == 7 )
  {
    if ( *(_DWORD *)v12 != 1634100580 || *(_WORD *)(v12 + 4) != 27765 || (v9 = 0, *(_BYTE *)(v12 + 6) != 116) )
      v9 = 1;
    return v9 == 0;
  }
  return result;
}
