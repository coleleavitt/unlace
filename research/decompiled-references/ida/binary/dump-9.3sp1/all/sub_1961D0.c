__int64 __fastcall sub_1961D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r13d
  __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v1 + 64) != 8 )
    return 0;
  v3 = *(_QWORD *)(v1 + 72);
  if ( *(_DWORD *)(v3 + 284) != 23 )
    return 0;
  v4 = *(_QWORD *)(v3 + 24);
  if ( *(_BYTE *)v4 == 10 )
    v4 = *(_QWORD *)(v4 + 8);
  v5 = sub_195FF0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v4);
  *(_QWORD *)(a1 + 40) = v5;
  if ( v5 != -1 && v5 == *(_QWORD *)(a1 + 48) )
  {
    v8 = *(_DWORD *)(a1 + 56);
    v9 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)v4 = 9;
    v10 = *(_DWORD *)(v4 + 4);
    v11 = j__qalloc_or_throw(24, v4, v6, v7);
    *(_QWORD *)v11 = v9;
    *(_QWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 16) = v8;
    *(_QWORD *)(v4 + 8) = v11;
    *(_DWORD *)(v4 + 4) = v10;
  }
  return 1;
}
