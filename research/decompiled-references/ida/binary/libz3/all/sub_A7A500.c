__int64 __fastcall sub_A7A500(_QWORD *a1, unsigned int *a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v9; // [rsp+Ch] [rbp-1Ch]

  v3 = a1[1];
  if ( a2 )
    ++a2[2];
  v4 = *(_QWORD *)(*a1 + 16LL);
  v5 = *(_QWORD *)(v4 + 8656);
  if ( !v5 || (v6 = *a2, (unsigned int)v6 >= *(_DWORD *)(v5 - 4)) || !*(_QWORD *)(v5 + 8 * v6) )
  {
    sub_B6F780(v4);
    v4 = *(_QWORD *)(*a1 + 16LL);
  }
  result = sub_B645B0(v4, a2);
  if ( a2[2]-- == 1 )
  {
    v9 = result;
    sub_15D7BC0(v3, a2);
    return v9;
  }
  return result;
}

