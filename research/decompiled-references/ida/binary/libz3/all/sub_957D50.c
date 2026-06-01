__int64 __fastcall sub_957D50(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned int v6; // [rsp+Ch] [rbp-1Ch]

  v1 = a1[1];
  v2 = sub_15E1B70(v1);
  v3 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  sub_B6F780(*a1);
  result = sub_B645B0(*a1, v3);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
    {
      v6 = result;
      sub_15D7BC0(v1, v3);
      return v6;
    }
  }
  return result;
}

