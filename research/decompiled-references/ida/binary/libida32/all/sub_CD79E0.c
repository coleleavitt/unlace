__int64 __fastcall sub_CD79E0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  void *v3; // rbp
  __int64 v4; // r13
  unsigned int v5; // r12d
  char v6; // cl
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // ecx
  unsigned __int8 **v11; // [rsp+18h] [rbp-40h] BYREF
  void *v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-30h]
  char v14; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = (void *)*(unsigned __int8 *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  if ( (*(_BYTE *)(sub_E0E500(a1 + 384) + 47) & 0x20) != 0 )
  {
    v6 = (unsigned __int8)v3 & 0x1F;
LABEL_3:
    *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v5 << v6;
    return 1;
  }
  if ( (unsigned __int8)v3 <= 0x1Fu )
  {
    v6 = (char)v3;
    goto LABEL_3;
  }
  v8 = sub_DFB220(*(_QWORD *)(a1 + 784));
  v13 = 8;
  v12 = v3;
  v14 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v11 = (unsigned __int8 **)sub_E0FF50(a1 + 384, v8, 2422, 0);
  if ( v11 )
  {
    sub_CD4D00(&v11, (__int64)&v12);
    if ( v11 )
    {
      sub_AC60B0(v11, v9, 8u);
      if ( v11 )
        sub_AC60B0(v11, 32, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v13 > 0x40 && v12 )
      operator delete[](v12);
    v6 = 32;
    if ( v5 )
    {
      _BitScanReverse(&v10, v5);
      v6 = v10 ^ 0x1F;
    }
    goto LABEL_3;
  }
  if ( v13 > 0x40 && v12 )
  {
    operator delete[](v12);
    return 0;
  }
  return result;
}

