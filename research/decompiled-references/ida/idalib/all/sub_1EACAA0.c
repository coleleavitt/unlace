__int64 *__fastcall sub_1EACAA0(__int64 *a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // [rsp+8h] [rbp-30h]

  v2 = 0;
  v3 = *(unsigned int *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v3 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v3);
  *a1 = (__int64)(a1 + 2);
  a1[1] = 0x600000000LL;
  v5 = v4;
  if ( (_DWORD)v4 )
  {
    do
    {
      v6 = sub_1F6A0A0(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      v7 = *((unsigned int *)a1 + 2);
      if ( v7 + 1 > (unsigned __int64)*((unsigned int *)a1 + 3) )
      {
        v10 = v6;
        sub_2237220(a1, a1 + 2, v7 + 1, 8);
        v7 = *((unsigned int *)a1 + 2);
        v8 = *a1;
        v6 = v10;
      }
      else
      {
        v8 = *a1;
      }
      ++v2;
      *(_QWORD *)(v8 + 8 * v7) = v6;
      ++*((_DWORD *)a1 + 2);
    }
    while ( v5 != v2 );
  }
  return a1;
}
