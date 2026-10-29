__int64 __fastcall sub_3D4C80(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rax
  _DWORD *v7; // rax
  __int64 v9; // r14
  __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  _DWORD v11[22]; // [rsp+10h] [rbp-58h] BYREF

  v1 = *a1;
  sub_16669D0(&v10, *a1);
  sub_16744A0(v11, v1);
  v2 = a1[4];
  if ( !v2 )
    return 1;
  v3 = *(unsigned int *)(v2 - 4);
  if ( !(_DWORD)v3 )
    return 1;
  v4 = 8 * v3;
  v5 = 0;
  while ( 1 )
  {
    v6 = a1[1] + 24LL * (unsigned int)(*(_DWORD *)(v2 + v5) + *((_DWORD *)a1 + 5) * *(_DWORD *)(v2 + v5 + 4));
    if ( *(_DWORD *)(v6 + 16) != *((_DWORD *)a1 + 6) )
    {
      sub_1872CE0("");
      sub_1873130(114, 157);
    }
    v9 = *(_QWORD *)v6;
    if ( *(_WORD *)(v9 + 4) )
      break;
    v7 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( !v7 || v11[0] != *v7 && *v7 != 5 )
      break;
    if ( v7[1] )
      break;
    v5 += 8;
    if ( v4 == v5 )
      return 1;
    v2 = a1[4];
  }
  return 0;
}

