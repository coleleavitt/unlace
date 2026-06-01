__int64 __fastcall sub_CD7830(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  __int64 v4; // r13
  unsigned int v5; // r12d
  unsigned int v6; // r12d
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // cl
  unsigned int v11; // ecx
  unsigned __int8 **v12; // [rsp+18h] [rbp-40h] BYREF
  void *v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  if ( (*(_BYTE *)(sub_E0E500(a1 + 384) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 0x1F;
LABEL_3:
    v6 = v5 << v3;
LABEL_4:
    *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v6;
    return 1;
  }
  if ( v3 <= 0x1F )
    goto LABEL_3;
  v8 = sub_DFB220(*(_QWORD *)(a1 + 784));
  v13 = (void *)v3;
  v14 = 32;
  v15 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v12 = (unsigned __int8 **)sub_E0FF50(a1 + 384, v8, 2422, 0);
  if ( v12 )
  {
    sub_CD4D00(&v12, (__int64)&v13);
    if ( v12 )
    {
      sub_AC60B0(v12, v9, 8u);
      if ( v12 )
        sub_AC60B0(v12, 32, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v14 > 0x40 && v13 )
      operator delete[](v13);
    v10 = 32;
    if ( v5 )
    {
      _BitScanReverse(&v11, v5);
      v10 = v11 ^ 0x1F;
    }
    v6 = v5 << v10;
    goto LABEL_4;
  }
  if ( v14 > 0x40 && v13 )
  {
    operator delete[](v13);
    return 0;
  }
  return result;
}

