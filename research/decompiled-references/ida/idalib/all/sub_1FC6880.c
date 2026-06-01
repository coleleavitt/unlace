__int64 __fastcall sub_1FC6880(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v4; // r15
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 16));
  if ( *(_DWORD *)(a2 + 16) )
  {
    v2 = *(unsigned int *)(a1 + 40);
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(a2 + 8LL * v3 + 40);
        if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        ++v3;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = v4;
        v2 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = v2;
        if ( v3 >= *(_DWORD *)(a2 + 16) )
          goto LABEL_6;
      }
      ++v3;
      sub_2237220(a1 + 32, a1 + 48, v2 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v4;
      v2 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v2;
    }
    while ( *(_DWORD *)(a2 + 16) > v3 );
  }
LABEL_6:
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 24));
  result = sub_1F6F5B0(*(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 218;
  return result;
}
