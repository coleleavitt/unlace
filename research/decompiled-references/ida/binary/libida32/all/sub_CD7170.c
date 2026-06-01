__int64 __fastcall sub_CD7170(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  unsigned int v5; // ebp
  __int64 v6; // rax
  char v7; // cl
  int v8; // ebp
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned __int8 **v12; // [rsp+18h] [rbp-40h] BYREF
  void *v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v6 = sub_E0E500(a1 + 384);
  v7 = v3;
  if ( (*(_BYTE *)(v6 + 47) & 0x20) != 0 )
  {
    v7 = v3 & 0x1F;
LABEL_3:
    v8 = v5 >> v7;
LABEL_4:
    *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v8;
    return 1;
  }
  if ( (unsigned int)v3 <= 0x1F )
  {
    if ( v3 <= 0x1F )
      goto LABEL_3;
LABEL_16:
    v8 = -1;
    goto LABEL_4;
  }
  v10 = sub_DFB220(*(_QWORD *)(a1 + 784));
  v14 = 64;
  v15 = 1;
  v11 = *(_QWORD *)(v10 + 8);
  v13 = (void *)v3;
  v12 = (unsigned __int8 **)sub_E0FF50(a1 + 384, v10, 2422, 0);
  if ( v12 )
  {
    sub_CD4D00(&v12, (__int64)&v13);
    if ( v12 )
    {
      sub_AC60B0(v12, v11, 8u);
      if ( v12 )
        sub_AC60B0(v12, 32, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v14 > 0x40 )
    {
      if ( v13 )
        operator delete[](v13);
    }
    goto LABEL_16;
  }
  if ( v14 > 0x40 && v13 )
  {
    operator delete[](v13);
    return 0;
  }
  return result;
}

