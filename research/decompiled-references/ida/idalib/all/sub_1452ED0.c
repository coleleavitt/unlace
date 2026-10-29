void __fastcall sub_1452ED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // r13
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int *v12; // rsi
  _BYTE v13[120]; // [rsp+0h] [rbp-78h] BYREF

  v7 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v7 | 0x20;
  sub_14634E0(a2, a4);
  v8 = 0;
  *(_BYTE *)(a2 + 544) = (32 * ((v7 & 0x20) != 0)) | *(_BYTE *)(a2 + 544) & 0xDF;
  v9 = *(_WORD *)(a4 + 16);
  v10 = 0;
  if ( (unsigned __int16)(v9 - 7) > 0xCu && v9 != 1 )
  {
    v8 = *(_QWORD *)(a4 + 8);
    if ( v8 )
    {
      v12 = *(unsigned int **)(v8 + 16);
      v10 = *v12;
      v8 = (__int64)(v12 + 4);
    }
  }
  v11 = sub_1452D80(a1, v8, v10, 0);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, a2, a3, a4);
  }
  else
  {
    sub_FC70B0((__int64)v13, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1403);
    sub_AEA040((__int64)v13);
  }
}
