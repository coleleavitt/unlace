__int64 __fastcall sub_BBB090(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // r9d
  char *v10; // rsi
  __int64 v11; // r9
  __int64 *v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  _QWORD *v16; // rdi
  _QWORD *v17; // r14
  __int64 v18; // r15
  __int64 v19; // rbp
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( *(_WORD *)(a2 + 4)
    || (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *(_DWORD *)(a1 + 1744) != *v3
    || v3[1] != 12
    || *(_DWORD *)(a2 + 24) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 1533);
  }
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(unsigned int *)(a1 + 1104);
  v7 = *(__int64 **)(a1 + 1096);
  v8 = *(_DWORD *)(v5 + 12);
  v9 = v6 - 1;
  v6 *= 8;
  v10 = (char *)v7 + v6;
  v11 = 8LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  result = (__int64)&v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    do
    {
      v14 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && v5 == v14 )
          return result;
      }
      else if ( !v14 )
      {
        goto LABEL_13;
      }
      result += 8;
    }
    while ( v10 != (char *)result );
  }
  for ( ; v12 != v7; ++v7 )
  {
    result = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v8 && v5 == result )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_13:
  ++*(_DWORD *)(a2 + 8);
  v15 = a1 + 1096;
  v16 = (_QWORD *)(a1 + 1128);
  v22[0] = (__int64 *)a2;
  v17 = (_QWORD *)(a1 + 3944);
  v18 = a1 + 1120;
  v19 = a1 + 3960;
  sub_BB70A0(v16, v22);
  v22[0] = (__int64 *)v5;
  sub_4A3CA0(v15, v22);
  v20 = (__int64 *)sub_180C100(v19, 16);
  *v20 = (__int64)off_1C4DF80;
  v20[1] = v18;
  v22[0] = v20;
  sub_BB4880(v17, v22);
  v21 = (__int64 *)sub_180C100(v19, 24);
  *v21 = (__int64)off_1C4D780;
  v21[1] = v15;
  v21[2] = v5;
  v22[0] = v21;
  return sub_BB4880(v17, v22);
}

