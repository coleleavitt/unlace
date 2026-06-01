__int64 __fastcall sub_88BF70(__int64 a1, double a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 280);
  if ( !v2 )
    return 1;
  v3 = &v2[*((unsigned int *)v2 - 1)];
  if ( v3 == v2 )
    return 1;
  while ( 1 )
  {
    result = sub_88A8B0((_QWORD *)a1, *v2, a2);
    if ( !(_BYTE)result )
      break;
    if ( v3 == ++v2 )
      return 1;
  }
  ++*(_DWORD *)(a1 + 456);
  return result;
}

