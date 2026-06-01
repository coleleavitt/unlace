__int64 __fastcall sub_D3AEC0(__int64 a1, __int64 a2, char *a3, __int16 *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  __int16 v12; // cx
  char v13; // al
  int v14; // r13d
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  __int16 v18; // dx
  __int64 v19; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v20; // [rsp+8h] [rbp-50h] BYREF
  void *v21; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-40h]
  char v23; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 7u;
  }
  else if ( *a4 < 0 )
  {
    v19 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E0FFE0(a1, &v19, 2444, 0);
    v9 = (unsigned __int16)*a4;
    v23 = 0;
    v20 = v8;
    v22 = 16;
    v21 = (void *)v9;
    if ( v8 )
    {
      sub_CD4D00(&v20, (__int64)&v21);
      if ( v22 > 0x40 )
      {
        if ( v21 )
          operator delete[](v21);
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v10 )
    {
      *a4 = -*a4;
      return (unsigned int)sub_D3B060(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D3ABD0(a1, a2, a3, a4, 8u);
  if ( (_BYTE)v10 )
  {
    v12 = *a4;
    v13 = *a3;
    if ( *a4 > 7 )
    {
      LOBYTE(v14) = 0;
      if ( v13 >= 0 )
      {
        if ( v13 )
        {
          v15 = (int)(unsigned __int8)v13 >> 4;
          v16 = (unsigned __int8)v15;
          if ( !v15 )
            v16 = (unsigned __int8)*a3;
          v17 = v15 == 0 ? 4 : 0;
          if ( v16 >> 2 )
            v16 >>= 2;
          else
            LOWORD(v17) = v17 | 2;
          if ( !((unsigned int)v16 >> 1) )
            LOWORD(v17) = v17 | 1;
          v18 = v17;
        }
        else
        {
          v18 = 8;
          LOBYTE(v17) = 8;
        }
        *a4 = v18;
        v14 = v13 << v17;
      }
    }
    else
    {
      v14 = v13 << v12;
      if ( v13 < 0 )
      {
        LOBYTE(v14) = 0;
        if ( v13 != (char)0x80 )
          v14 = -(-v13 << v12);
      }
    }
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}

