__int64 __fastcall sub_1FC6790(__int64 a1, _DWORD *a2)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 result; // rax

  sub_1FC2690(a1, (__int64)a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned int)a2[21]);
  v2 = a2[18];
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 40);
    v4 = (__int64 *)(a2 + 4);
    v5 = (__int64)&a2[2 * (v2 - 1) + 6];
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        ++v4;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v3) = v6;
        v3 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = v3;
        if ( (__int64 *)v5 == v4 )
          goto LABEL_6;
      }
      ++v4;
      sub_2237220(a1 + 32, a1 + 48, v3 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v6;
      v3 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v3;
    }
    while ( v4 != (__int64 *)v5 );
  }
LABEL_6:
  sub_1F6F570(*(_QWORD **)(a1 + 16), a2[19], *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), a2[20], *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 214;
  return result;
}
