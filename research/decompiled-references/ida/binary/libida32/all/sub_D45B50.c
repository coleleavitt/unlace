__int64 __fastcall sub_D45B50(__int64 a1, __int64 a2, unsigned __int16 *a3, char *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  int v12; // edx
  int v13; // eax
  int v14; // r13d
  char v15; // cl
  char v16; // al
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v18; // [rsp+8h] [rbp-50h] BYREF
  void *v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-40h]
  char v21; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0xFu;
  }
  else if ( *a4 < 0 )
  {
    v17 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E0FFE0(a1, &v17, 2444, 0);
    v9 = (unsigned __int8)*a4;
    v21 = 0;
    v18 = v8;
    v20 = 8;
    v19 = (void *)v9;
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
      return (unsigned int)sub_D45A20(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D3F0C0(a1, a2, (__int64)a3, a4, 0x10u);
  if ( (_BYTE)v10 )
  {
    v12 = *a3;
    v13 = v12;
    v14 = v12 << *a4;
    if ( *a4 > 15 )
    {
      if ( (_WORD)v12 )
      {
        v15 = 8;
        if ( (int)*a3 >> 8 )
        {
          v15 = 0;
          v13 = (int)*a3 >> 8;
        }
        if ( v13 >> 4 )
          v13 >>= 4;
        else
          v15 |= 4u;
        if ( v13 >> 2 )
          v13 >>= 2;
        else
          v15 |= 2u;
        if ( !((unsigned int)v13 >> 1) )
          v15 |= 1u;
        v16 = v15;
      }
      else
      {
        v15 = 16;
        v16 = 16;
      }
      *a4 = v16;
      LOWORD(v14) = v12 << v15;
    }
    *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}

