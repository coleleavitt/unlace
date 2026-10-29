__int64 __fastcall sub_1FC9DD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx
  __int64 *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r14

  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 12));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 8), *(_QWORD *)(a1 + 24));
  result = sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  v3 = *(_DWORD *)(a2 + 12);
  if ( v3 )
  {
    v4 = (__int64 *)(a2 + 24);
    result = *(unsigned int *)(a1 + 40);
    v5 = a2 + 8LL * (unsigned int)(v3 - 1) + 32;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        ++v4;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v6;
        result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = result;
        if ( (__int64 *)v5 == v4 )
          goto LABEL_6;
      }
      ++v4;
      sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v6;
      result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = result;
    }
    while ( v4 != (__int64 *)v5 );
  }
LABEL_6:
  *(_DWORD *)(a1 + 224) = 240;
  return result;
}
