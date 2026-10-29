__int64 __fastcall sub_15062D0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int *v6; // rbp
  int v8; // ecx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  _BYTE v11[104]; // [rsp-68h] [rbp-68h] BYREF

  result = 0;
  if ( a2 == 22 && *(_DWORD *)(a4 + 64) > 0x32u && *(_WORD *)(a1 + 32) == 5 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    if ( *(_DWORD *)v5 == 14 )
    {
      if ( *(_QWORD *)(v5 + 16) != 0x5F6C6C615F706D6FLL
        || *(_DWORD *)(v5 + 24) != 1869440365
        || *(_WORD *)(v5 + 28) != 31090 )
      {
        return 0;
      }
      v6 = (int *)(a1 + 16);
      v8 = *(_DWORD *)(a3 + 96);
      if ( (unsigned int)(v8 - 8) <= 1 )
      {
        v10 = 2177;
      }
      else
      {
        if ( (unsigned int)(v8 - 1) <= 1 )
        {
          *(_DWORD *)(a3 + 96) = (v8 != 1) + 8;
LABEL_13:
          v9 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v9, v6);
          return 1;
        }
        v10 = 1817;
      }
      sub_1564840(v11, a1, v6, v10);
      sub_AEA040((__int64)v11);
      goto LABEL_13;
    }
  }
  return result;
}
