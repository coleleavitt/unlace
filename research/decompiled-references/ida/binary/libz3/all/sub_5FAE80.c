__int64 __fastcall sub_5FAE80(__int64 *a1, __int64 a2, unsigned __int8 a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+18h] [rbp-40h] BYREF
  int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  int v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+38h] [rbp-20h] BYREF
  int v19; // [rsp+40h] [rbp-18h]

  v5 = *a1;
  v14 = a2;
  v15 = a3 ^ 1;
  v13 = v5;
  v12 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  sub_FA4800(
    (_DWORD)a1 + 448,
    2,
    (_DWORD)a1 + 644,
    (unsigned int)&v14,
    (unsigned int)&v16,
    (unsigned int)&v18,
    (__int64)&v12);
  v6 = v12;
  if ( !v12 )
  {
    v7 = *a4;
    result = (__int64)a4;
    if ( !*a4 || (v9 = a4[1], v10 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), !v10) )
    {
      *a4 = 0;
      return result;
    }
LABEL_10:
    result = sub_15D7BC0(v9, v7);
    *a4 = v6;
    v6 = v12;
    if ( !v12 )
      return result;
    goto LABEL_5;
  }
  v7 = *a4;
  ++*(_DWORD *)(v12 + 8);
  result = (__int64)a4;
  if ( v7 )
  {
    v9 = a4[1];
    v10 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v10 )
      goto LABEL_10;
  }
  *a4 = v6;
LABEL_5:
  v11 = v13;
  v10 = (*(_DWORD *)(v6 + 8))-- == 1;
  if ( v10 )
    return sub_15D7BC0(v11, v6);
  return result;
}

