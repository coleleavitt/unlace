__int64 __fastcall sub_CD8250(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  int v5; // ebp
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int8 **v10; // [rsp+18h] [rbp-40h] BYREF
  void *v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-30h]
  char v13; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(unsigned __int16 *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  if ( (*(_BYTE *)(sub_E0E500(a1 + 384) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 0xF;
LABEL_3:
    v6 = v5 >> v3;
LABEL_4:
    *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v6;
    return 1;
  }
  if ( (unsigned int)v3 <= 0xF )
  {
    if ( v3 <= 0xF )
      goto LABEL_3;
LABEL_16:
    LOWORD(v6) = -1;
    goto LABEL_4;
  }
  v8 = sub_DFB220(*(_QWORD *)(a1 + 784));
  v12 = 64;
  v13 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v11 = (void *)v3;
  v10 = (unsigned __int8 **)sub_E0FF50(a1 + 384, v8, 2422, 0);
  if ( v10 )
  {
    sub_CD4D00(&v10, (__int64)&v11);
    if ( v10 )
    {
      sub_AC60B0(v10, v9, 8u);
      if ( v10 )
        sub_AC60B0(v10, 16, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v12 > 0x40 )
    {
      if ( v11 )
        operator delete[](v11);
    }
    goto LABEL_16;
  }
  if ( v12 > 0x40 && v11 )
  {
    operator delete[](v11);
    return 0;
  }
  return result;
}

