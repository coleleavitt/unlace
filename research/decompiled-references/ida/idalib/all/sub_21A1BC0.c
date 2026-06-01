__int64 __fastcall sub_21A1BC0(
        __int64 a1,
        int a2,
        __int32 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbp
  const char *v10; // [rsp+0h] [rbp-48h] BYREF
  __int16 v11; // [rsp+20h] [rbp-28h]

  if ( *((_QWORD *)&a7 + 1) <= 3u )
    goto LABEL_2;
  switch ( *(_DWORD *)a7 )
  {
    case 0xCEFAEDFE:
      sub_21A1A10(a1, 0, 0, a2, a3, a4, a7, a8);
      return a1;
    case 0xFEEDFACE:
      sub_21A1A10(a1, 1, 0, a2, a3, a4, a7, a8);
      return a1;
    case 0xCFFAEDFE:
      sub_21A1A10(a1, 0, 1, a2, a3, a4, a7, a8);
      return a1;
    case 0xFEEDFACF:
      sub_21A1A10(a1, 1, 1, a2, a3, a4, a7, a8);
      return a1;
    default:
LABEL_2:
      v10 = "Unrecognized MachO magic number";
      v11 = 259;
      v8 = operator new(0x38u);
      sub_2195A00(v8, (__int64)&v10, 2);
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v8;
      return a1;
  }
}
