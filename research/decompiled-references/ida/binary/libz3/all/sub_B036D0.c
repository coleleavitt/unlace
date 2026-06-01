__int64 __fastcall sub_B036D0(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v7; // [rsp+Ch] [rbp-1Ch]

  v1 = a1[1];
  v2 = sub_1691BE0();
  v3 = *a1;
  v4 = v2;
  if ( !v2 )
    return 2 * (unsigned int)sub_B67520(v3, 0);
  ++*(_DWORD *)(v2 + 8);
  result = 2 * (unsigned int)sub_B67520(v3, v2);
  if ( (*(_DWORD *)(v4 + 8))-- == 1 )
  {
    v7 = result;
    sub_15D7BC0(v1, v4);
    return v7;
  }
  return result;
}

