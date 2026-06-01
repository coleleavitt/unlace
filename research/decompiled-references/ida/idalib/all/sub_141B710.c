__int64 __fastcall sub_141B710(__int64 a1, __int64 a2, int a3, _BYTE *a4, __m128i a5, double a6)
{
  char v9; // bp
  __int64 result; // rax
  __int64 v11; // rdi
  void (*v12)(); // rax
  __int64 v13; // rax
  char v14; // bp
  unsigned int v15[18]; // [rsp+0h] [rbp-48h] BYREF

  v9 = *(_BYTE *)(a1 + 544);
  *(_BYTE *)(a1 + 544) = v9 | 0x20;
  sub_14634E0(a1, a2);
  *(_BYTE *)(a1 + 544) = (32 * ((v9 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
  if ( *(_WORD *)(a2 + 16) == 3 )
  {
    v11 = *(_QWORD *)(a1 + 752);
    if ( v11 )
    {
      v12 = *(void (**)())(*(_QWORD *)v11 + 32LL);
      if ( v12 != nullsub_674 )
        ((void (__fastcall *)(__int64, bool))v12)(v11, a3 == 1);
    }
    v13 = *(_QWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 968) = 1;
    *(_BYTE *)(v13 + 6) = 1;
    v14 = *(_BYTE *)(a1 + 544);
    *(_BYTE *)(a1 + 544) = v14 | 0x20;
    sub_14634E0(a1, a2);
    *(_BYTE *)(a1 + 544) = (32 * ((v14 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
  }
  result = sub_141B320((_QWORD *)a1, a2, a3, a4, a5, a6);
  if ( (_BYTE)result )
  {
    if ( *(_WORD *)(a2 + 16) != 2 )
    {
      *(_WORD *)(a2 + 16) = 2;
      return sub_141A820(a1, v15);
    }
  }
  return result;
}
