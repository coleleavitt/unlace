__int64 __fastcall sub_884DB0(_QWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v11; // r14

  if ( *((_WORD *)a2 + 2)
    || (v2 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr
    || *v2 != 5
    || v2[1] != 20
    || a2[6] != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 96);
  }
  v11 = *((_QWORD *)a2 + 4);
  v3 = a1[9];
  sub_15E1A70(a1[104]);
  v4 = sub_15E1A70(a1[104]);
  v5 = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v6 = sub_7E58D0((__int64)a1, v4, v11);
  v7 = *(_QWORD *)(a1[10] + 1720LL);
  if ( v7 )
  {
    v8 = *a2;
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 - 4) )
      v7 = 0;
    else
      v7 = *(_QWORD *)(v7 + 8 * v8);
  }
  result = sub_7E5800((__int64)a1, 2 * *(_DWORD *)(v7 + 28), v6);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      return sub_15D7BC0(v3, v5);
  }
  return result;
}

