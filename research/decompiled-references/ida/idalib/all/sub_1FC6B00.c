__int64 __fastcall sub_1FC6B00(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 result; // rax
  __int64 v5; // r15
  __int64 v6; // r14

  v2 = (__int64 *)(a2 + 32);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int16 *)(a2 + 4));
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 3);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) & 0x20) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) & 0x40) != 0);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 28), *(_QWORD *)(a1 + 24));
  result = *(unsigned __int16 *)(a2 + 4);
  v5 = a2 + 8 * result + 32;
  if ( v5 != a2 + 32 )
  {
    result = *(unsigned int *)(a1 + 40);
    do
    {
      while ( 1 )
      {
        v6 = *v2;
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        ++v2;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v6;
        result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = result;
        if ( v2 == (__int64 *)v5 )
          goto LABEL_6;
      }
      ++v2;
      sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v6;
      result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = result;
    }
    while ( (__int64 *)v5 != v2 );
  }
LABEL_6:
  *(_DWORD *)(a1 + 224) = 385;
  return result;
}
