__int64 __fastcall sub_EF340(__int64 a1)
{
  int v1; // r12d
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rbx

  v1 = *(_DWORD *)(a1 + 144);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(a1 + 432) + 104 * v3;
      if ( (unsigned __int8)sub_225010(a1, v4) )
      {
        v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        v6 = ((int)sub_1BFB80(v4, *(unsigned int *)(v4 + 88)) + (__int64)(v5 - 1)) & -v5;
        if ( v1 < (int)v6 )
          v1 = v6;
      }
      v3 = ++v2;
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 440) );
  }
  return (unsigned int)v1;
}
