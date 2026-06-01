void __fastcall sub_1FCC5D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // [rsp-10h] [rbp-38h]

  sub_1FC2690(a1, a2);
  v3 = 0;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 && *(_DWORD *)(a2 + 28) )
    v3 = *(unsigned int *)(a2 + 28);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v3);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  v4 = *(_QWORD *)(a2 + 32);
  sub_1F92A90(*(_QWORD *)(a1 + 16), v4, *(_QWORD *)(a1 + 24));
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    v9 = *(unsigned int *)(a2 + 28);
    if ( (_DWORD)v9 )
    {
      v10 = a2 + 40;
      v11 = v10 + 24 * v9;
      do
      {
        v12 = *(_QWORD *)(v10 + 16);
        v10 += 24;
        sub_1F992F0((__int64 *)(a1 + 8), v4, v5, v6, v7, v8, *(_QWORD *)(v10 - 24), *(void **)(v10 - 16), v12);
      }
      while ( v11 != v10 );
    }
  }
  else
  {
    sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 28));
  }
  *(_DWORD *)(a1 + 224) = 285;
}
