__int64 __fastcall sub_D46810(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  void *v9; // rdx
  unsigned int v10; // r12d
  int v12; // edx
  int v13; // eax
  int v14; // r13d
  int v15; // esi
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v19; // [rsp+8h] [rbp-50h] BYREF
  void *v20; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-40h]
  char v22; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0xFuLL;
  }
  else if ( *a4 < 0 )
  {
    v18 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E0FFE0(a1, &v18, 2444, 0);
    v9 = (void *)*a4;
    v22 = 0;
    v19 = v8;
    v21 = 64;
    v20 = v9;
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
      return (unsigned int)sub_D466E0(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D3F540(a1, a2, (__int64)a3, a4, 0x10u);
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
        if ( v12 >> 8 )
        {
          v15 = 0;
          v13 = v12 >> 8;
        }
        if ( v13 >> 4 )
          v13 >>= 4;
        else
          v15 |= 4u;
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
        v17 = 16;
        LOBYTE(v16) = 16;
      }
      *a4 = v17;
      LOWORD(v14) = v12 << v16;
    }
    *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}

