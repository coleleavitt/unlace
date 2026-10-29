void __fastcall sub_E7F010(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r14
  int v8; // r14d
  __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 16, v9);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v4 )
  {
    v5 = v2;
    do
    {
      v6 = *(_DWORD *)(v3 + 8);
      v3 += 16;
      v5 += 16;
      *(_DWORD *)(v5 - 8) = v6;
      *(_QWORD *)(v5 - 16) = *(_QWORD *)(v3 - 16);
      *(_DWORD *)(v3 - 8) = 0;
    }
    while ( v4 != v3 );
    v7 = *(_QWORD *)a1;
    v4 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v4 )
    {
      do
      {
        v4 -= 16;
        if ( *(_DWORD *)(v4 + 8) > 0x40u && *(_QWORD *)v4 )
          operator delete[](*(void **)v4);
      }
      while ( v7 != v4 );
      v4 = *(_QWORD *)a1;
    }
  }
  v8 = v9[0];
  if ( a1 + 16 != v4 )
    free((void *)v4);
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 12) = v8;
}
