/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140019860
// Address: 0x0000000140019860

//----- (0000000140019860) ----------------------------------------------------
char __fastcall sub_140019860(__int64 a1, __int64 a2, char a3, char a4)
{
  int v5; // esi
  __int16 v9; // ax
  __int16 v10; // cx
  __int16 v11; // ax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  char result; // al
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-48h] BYREF
  char Buf1[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = 0;
  *(_BYTE *)(a1 + 596) = 0;
  v19 = 0;
  sub_140063BF0(a2, 0, 0);
  if ( sub_140063BD0(a2, (void *)(a1 + 32), 28) != 28 )
    return 0;
  v9 = *(_WORD *)(a1 + 32);
  if ( v9 == 17744 )
    goto LABEL_24;
  if ( v9 != 23126 )
  {
    if ( v9 == 23117 || v9 == 19802 )
    {
      if ( sub_140063BD0(a2, Buf1, 8) == 8 && !strcmp(Buf1, "UniLink") )
        *(_BYTE *)(a1 + 596) = 1;
      sub_140063BF0(a2, 60, 0);
      if ( sub_140063BD0(a2, &v19, 4) != 4 )
        return 0;
    }
LABEL_24:
    v16 = (int)v19;
    *(_DWORD *)(a1 + 592) = v19;
    sub_140063BF0(a2, v16, 0);
    memset((void *)(a1 + 320), 0, 0x108u);
    sub_140063BF0(a2, *(int *)(a1 + 592), 0);
    if ( sub_140063BD0(a2, (void *)(a1 + 320), 264) - 93 <= 0xAB )
    {
      v17 = *(_DWORD *)(a1 + 320);
      if ( v17 == 17744 || v17 == 4542530 || v17 == 19536 )
      {
        if ( (unsigned __int8)sub_1400183D0(a1 + 72, a1 + 320, a3, a4) )
        {
          result = 1;
          if ( *(_WORD *)(a1 + 96) == 523 )
            v18 = *(_QWORD *)(a1 + 120);
          else
            v18 = *(unsigned int *)(a1 + 124);
          *(_QWORD *)(a1 + 584) = v18;
          return result;
        }
      }
    }
    return 0;
  }
  sub_140063BF0(a2, v19, 0);
  if ( sub_140063BD0(a2, (void *)(a1 + 32), 40) != 40 )
    return 0;
  memset((void *)(a1 + 76), 0, 0xF4u);
  *(_DWORD *)(a1 + 72) = *(unsigned __int16 *)(a1 + 32);
  v10 = *(_WORD *)(a1 + 34);
  *(_WORD *)(a1 + 76) = v10;
  *(_WORD *)(a1 + 78) = *(unsigned __int8 *)(a1 + 36);
  if ( v10 == -31132 || v10 == 512 || v10 == -21916 )
    v5 = 1;
  v11 = 267;
  if ( v5 )
    v11 = 523;
  *(_WORD *)(a1 + 96) = v11;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 44) - *(unsigned __int16 *)(a1 + 38) + 40;
  if ( (_BYTE)v5 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 120) = v12;
    v13 = HIDWORD(v12);
  }
  else
  {
    LODWORD(v13) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 124) = v13;
  }
  *(_WORD *)(a1 + 164) = *(unsigned __int8 *)(a1 + 37);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 128) = 1;
  *(_DWORD *)(a1 + 132) = 1;
  if ( v5 << 8 == 256 )
    v14 = *(_QWORD *)(a1 + 120);
  else
    v14 = (unsigned int)v13;
  *(_QWORD *)(a1 + 584) = v14;
  *(_DWORD *)(a1 + 592) = v19;
  return 1;
}
