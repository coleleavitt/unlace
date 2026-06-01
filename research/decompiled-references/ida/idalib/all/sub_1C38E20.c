__int64 __fastcall sub_1C38E20(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r13
  int v8; // edx
  __int64 v9; // rdx
  int v10; // esi
  char v11; // dl
  __int64 v12; // [rsp+8h] [rbp-30h]

  v3 = a3 - a2;
  v5 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 3);
  result = 0x7FFFFFFFFFFFFFF8LL;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = v5;
  if ( v3 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v5 = 0x555555555555555LL;
LABEL_5:
    while ( 1 )
    {
      v7 = 24 * v5;
      result = operator new(24 * v5, (const std::nothrow_t *)&std::nothrow);
      if ( result )
        break;
      v5 >>= 1;
      if ( !v5 )
        goto LABEL_3;
    }
    v8 = *(_DWORD *)(a2 + 8);
    a1[2] = result;
    a1[1] = v5;
    *(_DWORD *)(result + 8) = v8;
    *(_QWORD *)result = *(_QWORD *)a2;
    LOBYTE(v8) = *(_BYTE *)(a2 + 12);
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)(result + 12) = v8;
    *(_QWORD *)(result + 16) = *(_QWORD *)(a2 + 16);
    v9 = result + 24;
    if ( result + v7 != result + 24 )
    {
      do
      {
        v10 = *(_DWORD *)(v9 - 16);
        *(_DWORD *)(v9 - 16) = 0;
        v9 += 24;
        *(_DWORD *)(v9 - 16) = v10;
        *(_QWORD *)(v9 - 24) = *(_QWORD *)(v9 - 48);
        *(_BYTE *)(v9 - 12) = *(_BYTE *)(v9 - 36);
        *(_QWORD *)(v9 - 8) = *(_QWORD *)(v9 - 32);
      }
      while ( result + v7 != v9 );
      result = result + v7 - 24;
      if ( *(_DWORD *)(a2 + 8) > 0x40u )
      {
        if ( *(_QWORD *)a2 )
        {
          v12 = result;
          operator delete[](*(void **)a2);
          result = v12;
        }
      }
    }
    *(_QWORD *)a2 = *(_QWORD *)result;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(result + 8);
    v11 = *(_BYTE *)(result + 12);
    *(_DWORD *)(result + 8) = 0;
    result = *(_QWORD *)(result + 16);
    *(_BYTE *)(a2 + 12) = v11;
    *(_QWORD *)(a2 + 16) = result;
  }
  else
  {
    if ( v3 > 0 )
      goto LABEL_5;
LABEL_3:
    a1[2] = 0;
    a1[1] = 0;
  }
  return result;
}
