unsigned __int64 __fastcall sub_1C39C90(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rax
  int v12; // esi
  int v13; // edi
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // [rsp+0h] [rbp-B0h] BYREF
  int v20; // [rsp+4h] [rbp-ACh] BYREF
  _BYTE v21[168]; // [rsp+8h] [rbp-A8h] BYREF

  v6 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v6 )
    BUG();
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6 - 8);
  v10 = *(unsigned int *)(v9 + 64);
  if ( (_DWORD)v10 )
  {
    if ( a3 == 1 || a5 == 1 )
    {
      *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8 * v10 - 8) |= 4uLL;
      return 1;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL) & 4) != 0 )
    {
      v11 = *(__int64 **)(a1 + 608);
      if ( v11 )
      {
        v12 = *((_DWORD *)v11 + 2);
        if ( (v12 & 0x10000000) != 0 )
        {
LABEL_17:
          sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a2, 0xB39u, 0);
          v19 = 0;
          v18 = sub_1587D10((__int64)v21, &v19);
          v20 = 1;
          sub_1587D10(v18, &v20);
          sub_15F7200(v21);
          return 1;
        }
        if ( (v12 & 0x1DE1) == 0 )
        {
          do
          {
            v11 = (__int64 *)*v11;
            if ( !v11 )
              break;
            v13 = *((_DWORD *)v11 + 2);
            if ( (v13 & 0x10000000) != 0 )
              goto LABEL_17;
          }
          while ( (v13 & 0x1DE1) == 0 );
        }
      }
    }
    result = sub_EEF440(*(_QWORD **)(a1 + 248), a3 & 0xFFFFFFFFFFFFFFFELL, a5 & 0xFFFFFFFFFFFFFFFELL, a2, a4, a6);
    v15 = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)v15 )
      BUG();
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v15 - 8);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 56) + 8LL * *(unsigned int *)(v16 + 64) - 8) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(result + 16) = *(_QWORD *)(v17 + 8);
    *(_QWORD *)(v17 + 8) = result;
  }
  else
  {
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a2, 0xD57u, 0);
    sub_15F7200(v21);
    return 1;
  }
  return result;
}
