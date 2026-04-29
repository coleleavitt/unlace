__int64 __fastcall sub_2501C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // r13d
  int v4; // edx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax

  if ( a1 == (__int64 *)a2 )
  {
    if ( !under_debugger )
      sub_37CFE0(50061);
    BUG();
  }
  *((_DWORD *)a1 + 2) = 70;
  v2 = *a1;
  a1[3] = 0;
  v3 = *((_DWORD *)a1 + 3);
  *a1 = *(_QWORD *)a2;
  v4 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = v2;
  v5 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v4;
  v6 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = v5;
  v7 = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 3) = v6;
  v8 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 12) = v7;
  result = a1[3];
  a1[3] = v8;
  *(_QWORD *)(a2 + 24) = result;
  if ( a2 )
  {
    sub_24FC90(a2);
    result = j__qfree(a2);
  }
  if ( *a1 == -1 )
    *a1 = v2;
  if ( *((_DWORD *)a1 + 3) == -1 )
    *((_DWORD *)a1 + 3) = v3;
  return result;
}
