__int64 __fastcall sub_B1F930(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  __int64 v9; // r14
  bool v10; // r12
  _QWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  _DWORD *v19; // rax
  __int64 v20; // [rsp+10h] [rbp-48h] BYREF
  __int64 v21; // [rsp+18h] [rbp-40h] BYREF
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23[6]; // [rsp+28h] [rbp-30h] BYREF

  v9 = *a1;
  v10 = (*(_BYTE *)(a2 + 20) & 1) == 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) == 0 && *(_DWORD *)a2 == 1 )
  {
    if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
    {
      v11 = a1 + 1;
    }
    else
    {
      v10 = 0;
      v11 = a1 + 1;
      if ( *(_DWORD *)(a2 + 16) == 1 )
        goto LABEL_9;
    }
  }
  else
  {
    v11 = a1 + 1;
    v10 = (*(_BYTE *)(a2 + 20) & 1) == 0
       && *(_DWORD *)(a2 + 16) == 1
       && (v19 = *(_DWORD **)(sub_15D1F10(a3) + 24), v11 = a1 + 1, v19)
       && *v19 == 5
       && v19[1] == 1;
  }
  v12 = a1[2];
  if ( !v12 )
  {
    sub_16669E0(v11);
    v12 = a1[2];
  }
  v20 = sub_166A700(v12, a2, v10, (_DWORD)a4, a5, a6);
  v21 = a3;
  sub_B1F2C0((__int64)a1, &v20, &v21);
  a3 = sub_15E1B70(a1[1]);
LABEL_9:
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v13 = *a4;
  v23[0] = a3;
  v22 = v13;
  sub_B1F2C0((__int64)a1, &v22, v23);
  result = sub_15E1B70(a1[1]);
  v15 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v16 = *a4;
  if ( *a4 )
  {
    v17 = a4[1];
    v18 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v18 )
      result = sub_15D7BC0(v17, v16);
  }
  *a4 = v15;
  if ( a3 )
  {
    v18 = (*(_DWORD *)(a3 + 8))-- == 1;
    if ( v18 )
      return sub_15D7BC0(v9, a3);
  }
  return result;
}

