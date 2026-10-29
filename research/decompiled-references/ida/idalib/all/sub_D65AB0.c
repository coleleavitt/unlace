__int64 __fastcall sub_D65AB0(__int64 a1, __int64 a2, unsigned __int64 *a3, char *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // rcx
  char v16; // cl
  char v17; // dl
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v19; // [rsp+8h] [rbp-50h] BYREF
  void *v20; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-40h]
  char v22; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0x3Fu;
  }
  else if ( *a4 < 0 )
  {
    v18 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E33D20(a1, &v18, 2444, 0);
    v9 = (unsigned __int8)*a4;
    v22 = 0;
    v19 = v8;
    v21 = 8;
    v20 = (void *)v9;
    if ( v8 )
    {
      sub_CF8A40(&v19, (__int64)&v20);
      if ( v21 > 0x40 )
      {
        if ( v20 )
          operator delete[](v20);
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v10 )
    {
      *a4 = -*a4;
      return (unsigned int)sub_D65C30(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D65800(a1, a2, a3, a4, 0x40u);
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
          _BitScanReverse64(&v15, v13);
          v16 = v15 ^ 0x3F;
          v17 = v16;
        }
        else
        {
          v16 = 64;
          v17 = 64;
        }
        *a4 = v17;
        v14 = v13 << v16;
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
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}
