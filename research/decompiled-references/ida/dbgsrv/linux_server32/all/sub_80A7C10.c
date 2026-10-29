/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A7C10
// Address: 0x080A7C10

//----- (080A7C10) --------------------------------------------------------
int __cdecl sub_80A7C10(int a1, int a2, char a3, char a4)
{
  __int16 v4; // ax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int result; // eax
  int v9; // ecx
  __int16 v10; // si
  __int64 v11; // xmm0_8
  int v12; // edx
  __int16 v13; // ax
  int v14; // ecx
  int v15; // edi
  __int64 v16; // xmm0_8
  unsigned int v17; // eax
  __int64 v18; // xmm0_8
  int v19; // [esp+4h] [ebp-34h]
  unsigned int v20; // [esp+Ch] [ebp-2Ch] BYREF
  __int64 v21; // [esp+10h] [ebp-28h] BYREF
  unsigned int v22; // [esp+18h] [ebp-20h]

  v22 = __readgsdword(0x14u);
  v20 = 0;
  *(_BYTE *)(a1 + 576) = 0;
  sub_80CD730(a2, 0, 0);
  if ( sub_80CD690(a2, (void *)(a1 + 16), 28) != 28 )
    goto LABEL_15;
  v4 = *(_WORD *)(a1 + 16);
  if ( v4 == 17744 )
    goto LABEL_6;
  if ( v4 != 23126 )
  {
    if ( v4 == 23117 || v4 == 19802 )
    {
      if ( sub_80CD690(a2, &v21, 8) == 8 && v21 == 0x6B6E694C696E55LL )
        *(_BYTE *)(a1 + 576) = 1;
      sub_80CD730(a2, 60, 0);
      if ( sub_80CD690(a2, &v20, 4) != 4 )
        goto LABEL_15;
    }
LABEL_6:
    v5 = (int)v20;
    *(_DWORD *)(a1 + 572) = v20;
    sub_80CD730(a2, v5, 0);
    *(_DWORD *)(a1 + 304) = 0;
    *(_DWORD *)(a1 + 564) = 0;
    memset((void *)((a1 + 308) & 0xFFFFFFFC), 0, 4 * ((a1 + 304 - ((a1 + 308) & 0xFFFFFFFC) + 264) >> 2));
    sub_80CD730(a2, *(int *)(a1 + 572), 0);
    if ( sub_80CD690(a2, (void *)(a1 + 304), 264) - 93 <= 0xAB )
    {
      v6 = *(_DWORD *)(a1 + 304);
      if ( v6 == 4542530 || v6 == 17744 || v6 == 19536 )
      {
        if ( (unsigned __int8)sub_80A7810((__m128i *)(a1 + 56), (const __m128i *)(a1 + 304), a3, a4) )
        {
          if ( *(_WORD *)(a1 + 80) == 523 )
            v7 = *(_DWORD *)(a1 + 104);
          else
            v7 = *(_DWORD *)(a1 + 108);
          *(_DWORD *)(a1 + 568) = v7;
LABEL_13:
          result = 1;
          goto LABEL_16;
        }
      }
    }
    goto LABEL_15;
  }
  sub_80CD730(a2, v20, 0);
  if ( sub_80CD690(a2, (void *)(a1 + 16), 40) == 40 )
  {
    *(_DWORD *)(a1 + 300) = 0;
    memset((void *)((a1 + 60) & 0xFFFFFFFC), 0, 4 * ((a1 + 56 - ((a1 + 60) & 0xFFFFFFFC) + 248) >> 2));
    v9 = *(unsigned __int16 *)(a1 + 18);
    v10 = *(unsigned __int8 *)(a1 + 21);
    v11 = *(_QWORD *)(a1 + 24);
    v12 = v9 | (*(unsigned __int8 *)(a1 + 20) << 16);
    *(_DWORD *)(a1 + 56) = *(unsigned __int16 *)(a1 + 16);
    v13 = v9;
    v14 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 60) = v12;
    v19 = *(_DWORD *)(a1 + 36);
    v15 = *(_DWORD *)(a1 + 28) + 40 - *(unsigned __int16 *)(a1 + 22);
    if ( v13 == -31132 || v13 == 512 || v13 == -21916 )
    {
      *(_DWORD *)(a1 + 140) = v15;
      *(_WORD *)(a1 + 80) = 523;
      *(_DWORD *)(a1 + 104) = v14;
      *(_DWORD *)(a1 + 108) = v19;
      *(_QWORD *)(a1 + 96) = v11;
    }
    else
    {
      *(_DWORD *)(a1 + 140) = v15;
      *(_WORD *)(a1 + 80) = 267;
      *(_DWORD *)(a1 + 108) = v14;
      *(_QWORD *)(a1 + 96) = v11;
    }
    v16 = *(_QWORD *)(a1 + 40);
    *(_WORD *)(a1 + 148) = v10;
    *(_DWORD *)(a1 + 112) = 1;
    *(_DWORD *)(a1 + 116) = 1;
    v17 = v20;
    *(_QWORD *)(a1 + 216) = v16;
    v18 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 568) = v14;
    *(_DWORD *)(a1 + 572) = v17;
    *(_QWORD *)(a1 + 224) = v18;
    goto LABEL_13;
  }
LABEL_15:
  result = 0;
LABEL_16:
  if ( v22 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
