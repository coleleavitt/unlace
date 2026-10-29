__int64 __fastcall sub_1FCAF90(__int64 a1, __int64 a2)
{
  __int64 *v3; // r14
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  bool v10; // si
  __int64 result; // rax

  v3 = (__int64 *)(a2 + 48);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 16));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 20));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 28), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 32), *(_QWORD *)(a1 + 24));
  v4 = a2 + 48 + 8LL * *(unsigned int *)(a2 + 16);
  if ( v4 != a2 + 48 )
  {
    v5 = *(unsigned int *)(a1 + 40);
    do
    {
      v6 = *v3;
      if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, v5 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v6;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v5) = v6;
      }
      ++v3;
      v5 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v5;
    }
    while ( (__int64 *)v4 != v3 );
  }
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    v9 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v10 = (v7 & 0xFFFFFFFFFFFFFFFCLL) != 0;
    if ( (v7 & 2) != 0 )
    {
      result = sub_9B9C90(v8, v10);
      if ( v9 )
      {
        sub_9B9C90(*(_QWORD *)(a1 + 24), 0);
        result = sub_1F92A90(*(_QWORD *)(a1 + 16), v9, *(_QWORD *)(a1 + 24));
      }
    }
    else
    {
      result = sub_9B9C90(v8, v10);
      if ( v9 )
      {
        sub_9B9C90(*(_QWORD *)(a1 + 24), v10);
        result = sub_183F100(a1 + 32, v9);
      }
    }
  }
  else
  {
    result = sub_9B9C90(v8, 0);
  }
  *(_DWORD *)(a1 + 224) = 258;
  return result;
}
