/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003E700
// Address: 0x000000014003E700

//----- (000000014003E700) ----------------------------------------------------
__int64 __fastcall sub_14003E700(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 344) )
    goto LABEL_6;
  while ( 1 )
  {
    v6 = sub_14003BA20(a1, (int *)&v11);
    v7 = v11;
    v8 = v6;
    if ( v11 == -1 || v11 == 34 )
    {
      *(_WORD *)(a2 + 24) = 1;
      return 0;
    }
    if ( v11 )
      break;
    sub_14003D910(a1);
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)a1 = v8;
    *(_BYTE *)(a1 + 344) = 1;
LABEL_6:
    v9 = sub_14003C3B0(a1, a2, 0, a3);
    if ( *(_QWORD *)(a1 + 64) && !v9 )
      v9 = sub_14003A960(a1, a2);
    v11 = v9;
    if ( v9 )
    {
      v7 = v9;
      return sub_1400640B0(v7);
    }
    if ( *(_WORD *)(a2 + 24) == 1 )
      *(_BYTE *)(a1 + 344) = 0;
    if ( *(_BYTE *)(a1 + 344) )
      return 0;
  }
  return sub_1400640B0(v7);
}
