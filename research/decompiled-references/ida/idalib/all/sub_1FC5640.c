__int64 __fastcall sub_1FC5640(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = a2 + 2;
  sub_9B9C90(*(_QWORD *)(a1 + 24), *((unsigned int *)a2 + 1));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_WORD *)a2 & 0x200) != 0);
  v3 = (__int64)&a2[*((unsigned int *)a2 + 1) + 2];
  if ( a2 + 2 != (__int64 *)v3 )
  {
    v4 = *(unsigned int *)(a1 + 40);
    do
    {
      v5 = *v2;
      if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, v4 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v5;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v4) = v5;
      }
      ++v2;
      v4 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v4;
    }
    while ( (__int64 *)v3 != v2 );
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    sub_9B9C90(
      *(_QWORD *)(a1 + 24),
      HIDWORD(a2[*((unsigned int *)a2 + 1) + 2]) | ((unsigned __int64)LODWORD(a2[*((unsigned int *)a2 + 1) + 2]) << 32));
    v6 = *(_QWORD *)(a1 + 24);
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), *((_DWORD *)a2 + 2), v6);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *((_DWORD *)a2 + 3), *(_QWORD *)(a1 + 24));
  result = *a2;
  if ( (*a2 & 0x200) == 0 )
  {
    result = *(unsigned int *)(*(_QWORD *)a1 + 3584LL);
    *(_DWORD *)(a1 + 228) = result;
  }
  *(_DWORD *)(a1 + 224) = 151;
  return result;
}
