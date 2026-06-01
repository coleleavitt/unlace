__int64 __fastcall sub_1BDA1D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  unsigned int v13; // edx
  char v14; // r11
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  char v21; // [rsp+18h] [rbp-40h]

  v13 = *(_DWORD *)(a1 + 2988);
  v14 = a9;
  if ( 4864 - v13 > 0x37 )
  {
    *(_DWORD *)(a1 + 2988) = v13 + 56;
    v15 = a1 + v13 + 2992;
    goto LABEL_3;
  }
  v18 = *(_QWORD *)(a1 + 2872);
  *(_QWORD *)(a1 + 2952) += 56LL;
  v15 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 2880) < (unsigned __int64)(v15 + 56) || !v18 )
  {
    v21 = a6;
    v20 = a5;
    v19 = a3;
    v15 = sub_986170(a1 + 2872, 56, 56, 3, a5, a6);
    a3 = v19;
    a5 = v20;
    LOBYTE(a6) = v21;
    v14 = a9;
LABEL_3:
    v16 = *(__int64 **)(a1 + 2856);
    if ( !v16 )
      goto LABEL_12;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 2872) = v15 + 56;
  v16 = *(__int64 **)(a1 + 2856);
  if ( !v16 )
  {
LABEL_12:
    *(_QWORD *)(a1 + 2856) = v15;
    goto LABEL_8;
  }
LABEL_6:
  while ( *v16 )
    v16 = (__int64 *)*v16;
  *v16 = v15;
LABEL_8:
  *(_DWORD *)(a1 + 2864) = (*(_DWORD *)(a1 + 2864) + 1) & 0x3FFFFFFF | *(_DWORD *)(a1 + 2864) & 0xC0000000;
  *(_QWORD *)(v15 + 24) = a3;
  *(_QWORD *)v15 = 0;
  *(_QWORD *)(v15 + 16) = a2;
  *(_BYTE *)(v15 + 8) = (a11 << 7) | ((a7 & 1) << 6) | (16 * (a8 & 1)) | (32 * (a6 & 1));
  *(_QWORD *)(v15 + 32) = a4;
  *(_QWORD *)(v15 + 40) = a5;
  *(_BYTE *)(v15 + 48) = v14;
  *(_BYTE *)(v15 + 49) = a10;
  result = (((*(_BYTE *)(a1 + 2867) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 48) + 28LL) & 0x7F) == 38) << 6)
         | *(_BYTE *)(a1 + 2867) & 0xBFu;
  *(_BYTE *)(a1 + 2867) = (((*(_BYTE *)(a1 + 2867) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 48) + 28LL) & 0x7F) == 38) << 6)
                        | *(_BYTE *)(a1 + 2867) & 0xBF;
  return result;
}
