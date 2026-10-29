__int64 __fastcall sub_DFB0E0(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax

  result = *(_QWORD *)(a1[4] + 80LL) + 144LL * a2;
  v3 = *(_QWORD *)result;
  v4 = *(_QWORD *)result + 16LL * *(unsigned int *)(result + 8);
  if ( *(_QWORD *)result != v4 )
  {
    do
    {
      v5 = *(unsigned int *)(v4 - 16);
      v4 -= 16;
      result = sub_DFDFB0(a1[2], a1[20] + v5 - 40);
    }
    while ( v3 != v4 );
  }
  return result;
}

