__int64 __fastcall sub_D17760(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int8 **v10; // rax
  void *v11; // rdx
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // rax
  void *v16; // rdx
  __int64 v17; // r12
  unsigned int v18; // ecx
  signed int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v22; // [rsp+18h] [rbp-40h] BYREF
  void *v23; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-30h]
  char v25; // [rsp+2Ch] [rbp-2Ch]

  v8 = sub_E0E500(a1);
  v9 = *a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    v9 = *a4 & 0x1F;
    *a4 = (unsigned int)v9;
  }
  else if ( v9 < 0 )
  {
    v21 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v10 = (unsigned __int8 **)sub_E0FFE0(a1, &v21, 2444, 0);
    v11 = (void *)*a4;
    v25 = 0;
    v22 = v10;
    v24 = 64;
    v23 = v11;
    if ( v10 )
    {
      sub_CD4D00(&v22, (__int64)&v23);
      if ( v24 > 0x40 )
      {
        if ( v23 )
          operator delete[](v23);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_D17550(a1, a2, a3, a4, a5);
    }
    return result;
  }
  if ( (unsigned int)v9 <= 0x1F )
    goto LABEL_11;
  v15 = sub_DFB220(*(_QWORD *)(a1 + 400));
  v16 = (void *)*a4;
  v24 = 64;
  v23 = v16;
  v25 = 0;
  v17 = *(_QWORD *)(v15 + 8);
  v22 = (unsigned __int8 **)sub_E0FF50(a1, v15, 2422, 0);
  if ( v22 )
  {
    sub_CD4D00(&v22, (__int64)&v23);
    if ( v22 )
    {
      sub_AC60B0(v22, v17, 8u);
      if ( v22 )
        sub_AC60B0(v22, 32, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
    v9 = *a4;
LABEL_11:
    v13 = *a3;
    v14 = *a3 << v9;
    if ( v9 > 31 )
    {
      if ( v13 )
      {
        _BitScanReverse(&v18, v13);
        v19 = v18 ^ 0x1F;
        v20 = v19;
      }
      else
      {
        v20 = 32;
        LOBYTE(v19) = 32;
      }
      *a4 = v20;
      v14 = v13 << v19;
    }
    *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v14;
    return 1;
  }
  if ( v24 > 0x40 && v23 )
  {
    operator delete[](v23);
    return 0;
  }
  return result;
}

