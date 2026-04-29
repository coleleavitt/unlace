__int64 __fastcall sub_191280(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _DWORD *v3; // r12
  int v5; // ebx

  v1 = (int)sub_EF340(a1);
  if ( !*(_BYTE *)(a1 + 320) )
  {
    v2 = *(_QWORD *)(a1 + 464);
    if ( v2 )
    {
      v3 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v2 - 4));
      if ( *v3 == 1 && v3[22] == 1 )
      {
        v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        if ( v1 == (((int)sub_1BFB80(v3, 1) + (__int64)(v5 - 1)) & -v5) )
          return (int)sub_1BFAC0(v3);
      }
    }
  }
  return v1;
}
