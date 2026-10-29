void __fastcall sub_17AE280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  unsigned __int64 i; // rax
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // dl
  int v10; // [rsp+0h] [rbp-BCh] BYREF
  _BYTE v11[184]; // [rsp+4h] [rbp-B8h] BYREF

  if ( *(_BYTE *)(a2 + 73) >> 5 == 2 )
  {
    v6 = a3;
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
    if ( *(char *)(*(_QWORD *)(a2 + 128) + 2LL) < 0 )
    {
      sub_168B9F0((__int64)v11, (__int64 *)(a1 + 8), v6, 0x1083u, 0);
      sub_15F7200(v11);
      for ( i = sub_B8E970(a2 + 64); ; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
      {
        v9 = *(_BYTE *)(i + 28) & 0x7F;
        if ( (unsigned int)v9 - 49 > 2 )
          break;
        v8 = i;
        if ( v9 == 32 )
          goto LABEL_5;
LABEL_6:
        if ( (*(_BYTE *)(v8 + 68) & 0xC) != 0xC && (*(_BYTE *)(v8 + 68) & 0xC) != 0 )
        {
          sub_168B9F0((__int64)v11, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0x1890u, 0);
          v10 = 0;
          sub_1587D10((__int64)v11, &v10);
          sub_15F7200(v11);
          return;
        }
LABEL_8:
        ;
      }
      if ( v9 != 32 )
        goto LABEL_8;
LABEL_5:
      v8 = *(_QWORD *)(*(_QWORD *)(i + 56) + 8LL * *(unsigned int *)(i + 64) - 8);
      if ( !v8 )
        goto LABEL_8;
      goto LABEL_6;
    }
  }
}
