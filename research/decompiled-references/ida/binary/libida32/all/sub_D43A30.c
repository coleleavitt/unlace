__int64 __fastcall sub_D43A30(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  void *v9; // rdx
  unsigned int v10; // r12d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v18; // [rsp+8h] [rbp-50h] BYREF
  void *v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-40h]
  char v21; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0x3FuLL;
  }
  else if ( *a4 < 0 )
  {
    v17 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E0FFE0(a1, &v17, 2444, 0);
    v9 = (void *)*a4;
    v21 = 0;
    v18 = v8;
    v20 = 64;
    v19 = v9;
    if ( v8 )
    {
      sub_CD4D00(&v18, (__int64)&v19);
      if ( v20 > 0x40 )
      {
        if ( v19 )
          operator delete[](v19);
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v10 )
    {
      *a4 = -*a4;
      return (unsigned int)sub_D43BB0(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D43780(a1, a2, a3, a4, 0x40u);
  if ( (_BYTE)v10 )
  {
    v12 = *a4;
    v13 = *a3;
    if ( *a4 > 63 )
    {
      v14 = 0;
      if ( v13 >= 0 )
      {
        if ( v13 )
        {
          _BitScanReverse64((unsigned __int64 *)&v13, v13);
          LODWORD(v16) = v13 ^ 0x3F;
          v15 = v16;
          v16 = (int)v16;
        }
        else
        {
          v16 = 64;
          v15 = 64;
        }
        *a4 = v16;
        v14 = *a3 << v15;
      }
    }
    else
    {
      v14 = v13 << v12;
      if ( v13 < 0 )
      {
        v14 = v13 << v12;
        if ( v13 == 0x8000000000000000LL )
          v14 = 0;
      }
    }
    *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}

