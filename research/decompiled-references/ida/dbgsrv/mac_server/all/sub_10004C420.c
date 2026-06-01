/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004C420
// Address: 0x000000010004C420

//----- (000000010004C420) ----------------------------------------------------
__int64 __fastcall sub_10004C420(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v4; // al
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v12; // [rsp+Ch] [rbp-34h] BYREF

  v4 = *(_BYTE *)(a1 + 320);
  while ( (v4 & 1) != 0 )
  {
LABEL_9:
    v10 = sub_100048770(a1, a2, 0, a3);
    if ( *(_QWORD *)(a1 + 64) != 0 && v10 == 0 )
      v10 = sub_100049580(a1, a2);
    if ( v10 )
      return set_qerrno();
    if ( *(_WORD *)(a2 + 24) == 1 )
    {
      *(_BYTE *)(a1 + 320) = 0;
      v4 = 0;
    }
    else
    {
      v4 = *(_BYTE *)(a1 + 320);
      if ( (v4 & 1) != 0 )
        return 0;
    }
  }
  v5 = sub_1000464F0(a1, &v12);
  if ( !v12 )
  {
    v6 = v5;
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( !v7 )
        break;
      v8 = *(_QWORD *)(a1 + 56);
      v9 = 56 * v7;
      *(_QWORD *)a1 = *(_QWORD *)(v8 + v9 - 32);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v8 + v9 - 24);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(v8 + v9 - 8);
      sub_100044BA0((__int64 *)(a1 + 56));
    }
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = v6;
    *(_BYTE *)(a1 + 320) = 1;
    goto LABEL_9;
  }
  if ( v12 == 34 || v12 == -1 )
  {
    *(_WORD *)(a2 + 24) = 1;
    return 0;
  }
  return set_qerrno();
}
