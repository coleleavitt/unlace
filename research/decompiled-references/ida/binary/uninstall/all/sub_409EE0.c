void __fastcall sub_409EE0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebx
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // [rsp+4h] [rbp-34h] BYREF

  v4 = 1;
  while ( v4 < a3 )
  {
    if ( *(int *)(*(_QWORD *)(a4 + 8) + 4LL * v4) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 1000) + 72LL))(
             *(_QWORD *)(a1 + 1000),
             *(_QWORD *)(a2 + 8LL * v4),
             &v9);
      if ( v9 )
      {
        v8 = sub_40FB00(16);
        *(_DWORD *)(v8 + 8) = v4++;
        *(_QWORD *)v8 = a4;
        *(_DWORD *)(v8 + 12) = 1;
        *(_QWORD *)(v7 + 24) = v8;
        continue;
      }
      ++*(_DWORD *)(*(_QWORD *)(v7 + 24) + 12LL);
    }
    ++v4;
  }
}

