int __fastcall ClpNetworkBasis::print(ClpNetworkBasis *this)
{
  int result; // eax
  __int64 v2; // rbx
  int v3; // r12d
  double v4; // xmm0_8
  int v5; // ecx
  int v6; // edx
  int v7; // r9d
  int v8; // r8d
  int v9; // esi
  int v10; // [rsp-10h] [rbp-38h]
  int v11; // [rsp-10h] [rbp-38h]

  result = puts("       parent descendant     left    right   sign    depth");
  if ( *(int *)this >= 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = *(double *)(*((_QWORD *)this + 7) + 2 * v2);
      v5 = *(_DWORD *)(*((_QWORD *)this + 3) + v2);
      v6 = *(_DWORD *)(*((_QWORD *)this + 2) + v2);
      v10 = *(_DWORD *)(*((_QWORD *)this + 12) + v2);
      v7 = *(_DWORD *)(*((_QWORD *)this + 5) + v2);
      v8 = *(_DWORD *)(*((_QWORD *)this + 6) + v2);
      v9 = v3++;
      v2 += 4;
      printf("%4d  %7d   %8d  %7d  %7d  %5g  %7d\n", v9, v6, v5, v8, v7, v4, v10);
      result = v11;
    }
    while ( *(_DWORD *)this >= v3 );
  }
  return result;
}

