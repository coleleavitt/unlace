__int64 __fastcall sub_5C8E50(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rdi
  int v12; // [rsp+14h] [rbp-54h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF
  int v16; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  int v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF
  int v20; // [rsp+50h] [rbp-18h]

  v3 = a1 + 16;
  v5 = *(_QWORD *)(v3 - 16);
  v19 = a2;
  v13 = 0;
  v14 = v5;
  v12 = 0;
  v20 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  sub_FA4800(v3, 1, (unsigned int)&v12, (unsigned int)&v19, (unsigned int)&v17, (unsigned int)&v15, (__int64)&v13);
  v6 = v13;
  if ( !v13 )
  {
    v7 = *a3;
    result = (__int64)a3;
    if ( !*a3 || (v9 = a3[1], v10 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), !v10) )
    {
      *a3 = 0;
      return result;
    }
LABEL_10:
    result = sub_15D7BC0(v9, v7);
    *a3 = v6;
    v6 = v13;
    if ( !v13 )
      return result;
    goto LABEL_5;
  }
  v7 = *a3;
  ++*(_DWORD *)(v13 + 8);
  result = (__int64)a3;
  if ( v7 )
  {
    v9 = a3[1];
    v10 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v10 )
      goto LABEL_10;
  }
  *a3 = v6;
LABEL_5:
  v11 = v14;
  v10 = (*(_DWORD *)(v6 + 8))-- == 1;
  if ( v10 )
    return sub_15D7BC0(v11, v6);
  return result;
}

