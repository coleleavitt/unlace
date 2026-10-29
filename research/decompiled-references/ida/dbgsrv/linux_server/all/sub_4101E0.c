/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4101E0
// Address: 0x00000000004101E0

//----- (00000000004101E0) ----------------------------------------------------
__int64 __fastcall sub_4101E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  signed int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  unsigned int v9; // ecx

  v2 = *(_QWORD *)(a2 + 1224);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = a2 + 1216;
    do
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v2 + 16);
        v6 = *(_QWORD *)(v2 + 24);
        if ( v3 > *(_DWORD *)(v2 + 32) )
          break;
        v4 = v2;
        v2 = *(_QWORD *)(v2 + 16);
        if ( !v5 )
          goto LABEL_6;
      }
      v2 = *(_QWORD *)(v2 + 24);
    }
    while ( v6 );
LABEL_6:
    if ( a2 + 1216 != v4 && v3 >= *(_DWORD *)(v4 + 32) )
    {
      if ( *(_BYTE *)(v4 + 65) && !*(_BYTE *)(a2 + 1349) && (*(_BYTE *)(a1 + 12) & 0x7F) != 0 )
      {
        if ( !byte_4C94E1 )
          sub_481AC0(30185);
        BUG();
      }
      if ( *(_BYTE *)(v4 + 64) && *(_WORD *)(a1 + 12) == 4991 )
      {
        *(_BYTE *)(v4 + 64) = 0;
        *(_DWORD *)(v4 + 60) = 1;
      }
      else
      {
        *(_BYTE *)(v4 + 65) = 1;
        *(_DWORD *)(v4 + 68) = *(_DWORD *)(a1 + 12);
        ++*(_DWORD *)(a2 + 1408);
      }
      return 1;
    }
  }
  v7 = *(_DWORD **)(a2 + 1256);
  v8 = &v7[*(_QWORD *)(a2 + 1264)];
  if ( v7 != v8 )
  {
    while ( v3 != *v7 )
    {
      if ( v8 == ++v7 )
        return 0;
    }
    v9 = 0;
    if ( v7 == v8 )
      return v9;
    ptrace(PTRACE_CONT, (unsigned int)v3, 0, 0);
    return 1;
  }
  return 0;
}
// 4C94E1: using guessed type char byte_4C94E1;
