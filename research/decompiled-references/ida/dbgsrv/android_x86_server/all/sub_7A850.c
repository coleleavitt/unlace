/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A850
// Address: 0x0007A850

//----- (0007A850) --------------------------------------------------------
char __cdecl sub_7A850(int a1, int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  __int16 v9; // ax
  char v10; // cl
  int v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int v17; // [esp+Ch] [ebp-20h] BYREF
  __int64 dest; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v19; // [esp+18h] [ebp-14h]

  LODWORD(v4) = a2;
  v19 = __readgsdword(0x14u);
  v17 = 0;
  *(_BYTE *)(a1 + 576) = 0;
  qlseek(a2, 0, 0);
  HIDWORD(v4) = a1 + 16;
  v5 = qlread(v4, 0x1Cu);
  v6 = 0;
  if ( v5 == 28 )
  {
    v7 = (unsigned __int16)*(_WORD *)HIDWORD(v4);
    if ( v7 == 19802 || (unsigned __int16)v7 == 23117 )
    {
      if ( qlread(__SPAIR64__(&dest, a2), 8u) == 8 && dest == 0x6B6E694C696E55LL )
        *(_BYTE *)(a1 + 576) = 1;
      qlseek(a2, 60, 0);
      if ( qlread(__SPAIR64__(&v17, a2), 4u) != 4 )
      {
LABEL_22:
        LOBYTE(v6) = 0;
        return v6;
      }
      v6 = v17;
    }
    else if ( (unsigned __int16)v7 == 23126 )
    {
      qlseek(v4, 0, 0);
      if ( qlread(v4, 0x28u) == 40 )
      {
        memset((void *)(a1 + 56), 0, 0xF8u);
        *(_DWORD *)(a1 + 56) = *(unsigned __int16 *)(a1 + 16);
        v8 = *(unsigned __int16 *)(a1 + 18);
        *(_WORD *)(a1 + 60) = v8;
        *(_WORD *)(a1 + 62) = *(unsigned __int8 *)(a1 + 20);
        if ( v8 == 34404 || (unsigned __int16)v8 == 512 || (unsigned __int16)v8 == 43620 )
        {
          v9 = 523;
          v10 = 1;
        }
        else
        {
          v9 = 267;
          v10 = 0;
        }
        *(_WORD *)(a1 + 80) = v9;
        v13 = *(_DWORD *)(a1 + 28);
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 100) = v13;
        *(_DWORD *)(a1 + 140) = v13 + 40 - *(unsigned __int16 *)(a1 + 22);
        v14 = *(_DWORD *)(a1 + 32);
        if ( v10 )
        {
          v15 = *(_DWORD *)(a1 + 36);
          *(_DWORD *)(a1 + 104) = v14;
          *(_DWORD *)(a1 + 108) = v15;
        }
        else
        {
          *(_DWORD *)(a1 + 108) = v14;
          v15 = v14;
        }
        *(_WORD *)(a1 + 148) = *(unsigned __int8 *)(a1 + 21);
        *(_OWORD *)(a1 + 216) = *(_OWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 112) = 1;
        *(_DWORD *)(a1 + 116) = 1;
        if ( v9 == 523 )
          v15 = *(_DWORD *)(a1 + 104);
        *(_DWORD *)(a1 + 568) = v15;
        *(_DWORD *)(a1 + 572) = 0;
        goto LABEL_32;
      }
      goto LABEL_22;
    }
    *(_DWORD *)(a1 + 572) = v6;
    qlseek(a2, v6, 0);
    HIDWORD(v4) = a1 + 304;
    memset((void *)(a1 + 304), 0, 0x108u);
    qlseek(a2, *(int *)(a1 + 572), 0);
    if ( (unsigned int)(qlread(v4, 0x108u) - 93) <= 0xAB )
    {
      v11 = *(_DWORD *)HIDWORD(v4);
      if ( *(_DWORD *)HIDWORD(v4) == 17744 || v11 == 4542530 || v11 == 19536 )
      {
        if ( (unsigned __int8)sub_85CC0(a4, (unsigned int *)(a1 + 56), (__int16 *)HIDWORD(v4), a3, a4) )
        {
          if ( *(_WORD *)(a1 + 80) == 523 )
            v12 = *(_DWORD *)(a1 + 104);
          else
            v12 = *(_DWORD *)(a1 + 108);
          *(_DWORD *)(a1 + 568) = v12;
LABEL_32:
          LOBYTE(v6) = 1;
          return v6;
        }
      }
    }
    goto LABEL_22;
  }
  return v6;
}
