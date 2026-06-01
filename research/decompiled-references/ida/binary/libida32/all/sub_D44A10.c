__int64 __fastcall sub_D44A10(__int64 a1, __int64 a2, unsigned __int8 *a3, char *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  int v12; // eax
  int v13; // esi
  int v14; // r13d
  char v15; // dl
  char v16; // cl
  char v17; // dl
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v19; // [rsp+8h] [rbp-50h] BYREF
  void *v20; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-40h]
  char v22; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 7u;
  }
  else if ( *a4 < 0 )
  {
    v18 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E0FFE0(a1, &v18, 2444, 0);
    v9 = (unsigned __int8)*a4;
    v22 = 0;
    v19 = v8;
    v21 = 8;
    v20 = (void *)v9;
    if ( v8 )
    {
      sub_CD4D00(&v19, (__int64)&v20);
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
      return (unsigned int)sub_D448E0(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D3CAC0(a1, a2, (__int64)a3, a4, 8u);
  if ( (_BYTE)v10 )
  {
    v12 = *a3;
    v13 = v12;
    v14 = v12 << *a4;
    if ( *a4 > 7 )
    {
      if ( (_BYTE)v12 )
      {
        v15 = 4;
        if ( v12 >> 4 )
        {
          v15 = 0;
          v13 = v12 >> 4;
        }
        if ( v13 >> 2 )
          v13 >>= 2;
        else
          v15 |= 2u;
        v16 = v15 | 1;
        if ( (unsigned int)v13 >> 1 )
          v16 = v15;
        v17 = v16;
      }
      else
      {
        v17 = 8;
        v16 = 8;
      }
      *a4 = v17;
      LOBYTE(v14) = v12 << v16;
    }
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}

