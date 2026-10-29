__int64 __fastcall sub_62A1F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax

  v6 = *(unsigned int *)(a2 + 56);
  v7 = sub_17E9C90(*a1 + 40LL, (unsigned int)(8 * v6 + 80));
  *(_OWORD *)v7 = 0;
  sub_6299B0((_QWORD *)(v7 + 16));
  sub_6299B0((_QWORD *)(v7 + 24));
  *(_DWORD *)(v7 + 68) = 0;
  *(_QWORD *)(v7 + 60) = 0;
  *(_BYTE *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 72) = 0;
  v8 = *a4;
  *(_DWORD *)(v7 + 56) = v6;
  *(_QWORD *)(v7 + 72) = v8;
  v9 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v7 + 40) = a3;
  *(_QWORD *)(v7 + 64) = v9;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  if ( (_DWORD)v6 )
  {
    v10 = 80;
    do
    {
      v11 = *(_QWORD *)(a2 + v10);
      *(_QWORD *)(v7 + v10) = v11;
      if ( v11 > 7 )
        ++*(_DWORD *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      v10 += 8;
    }
    while ( v10 != 8 * v6 + 80 );
  }
  return v7;
}

