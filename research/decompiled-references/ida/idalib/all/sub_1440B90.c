__int64 __fastcall sub_1440B90(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  char v8; // bp
  _BYTE *v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // edi
  __int64 v13; // rax

  v5 = sub_1440A00(a2, *a1);
  if ( v5 )
  {
    v6 = *a1;
    v7 = v5;
    v8 = *(_BYTE *)(*a1 + 544);
    *(_BYTE *)(v6 + 544) = v8 | 0x20;
    sub_14634E0(v6, a2);
    *(_BYTE *)(v6 + 544) = (32 * ((v8 & 0x20) != 0)) | *(_BYTE *)(v6 + 544) & 0xDF;
    if ( *(_WORD *)(a2 + 16) != 72 )
    {
      v9 = (_BYTE *)a1[1];
      *a3 = 1;
      v10 = 0;
      v11 = 3 - (*v9 != 0);
      return sub_FBCE00(v11, v10, v7, *(_QWORD *)(*a1 + 64), *(_QWORD *)(*a1 + 56));
    }
    sub_14634E0(*a1, a2);
    v13 = sub_1440A00(a2, *a1);
    v11 = (*(_BYTE *)a1[1] == 0) + 2;
    if ( v13 )
    {
      v10 = v7;
      v7 = v13;
      return sub_FBCE00(v11, v10, v7, *(_QWORD *)(*a1 + 64), *(_QWORD *)(*a1 + 56));
    }
  }
  return 0;
}
