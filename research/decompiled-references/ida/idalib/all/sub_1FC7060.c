__int64 __fastcall sub_1FC7060(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r12

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 32));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 19) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 20) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 21) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 22) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned __int8)BYTE2(*(_QWORD *)a2) >> 7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 3) & 7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 27) & 1LL);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  result = sub_1F6F5B0(*(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 )
  {
    v5 = 0;
    v6 = 8LL * (unsigned int)(v4 - 1) + 8;
    result = *(unsigned int *)(a1 + 40);
    do
    {
      while ( 1 )
      {
        v7 = a2 + 40;
        if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
          v7 = a2 + 48;
        v8 = *(_QWORD *)(v7 + v5);
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        v5 += 8;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v8;
        result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = result;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      v5 += 8;
      sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v8;
      result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = result;
    }
    while ( v5 != v6 );
  }
LABEL_8:
  *(_DWORD *)(a1 + 224) = 245;
  return result;
}
