__int64 __fastcall sub_D3A480(__int64 a1, __int64 a2, _BYTE *a3, char *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  char v12; // cl
  unsigned int v13; // eax
  int v14; // r13d
  int v15; // edx
  int v16; // ecx
  char v17; // al
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
      return (unsigned int)sub_D3A620(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D3A190(a1, a2, a3, a4, 8u);
  if ( (_BYTE)v10 )
  {
    v12 = *a4;
    LOBYTE(v13) = *a3;
    if ( *a4 > 7 )
    {
      LOBYTE(v14) = 0;
      if ( (v13 & 0x80u) == 0 )
      {
        if ( (_BYTE)v13 )
        {
          v15 = (int)(unsigned __int8)v13 >> 4;
          if ( v15 )
            LOBYTE(v13) = v15;
          v13 = (unsigned __int8)v13;
          v16 = v15 == 0 ? 4 : 0;
          if ( (int)(unsigned __int8)v13 >> 2 )
            v13 = (int)(unsigned __int8)v13 >> 2;
          else
            LOBYTE(v16) = v16 | 2;
          if ( !(v13 >> 1) )
            LOBYTE(v16) = v16 | 1;
          v17 = v16;
        }
        else
        {
          v17 = 8;
          LOBYTE(v16) = 8;
        }
        *a4 = v17;
        v14 = (unsigned __int8)*a3 << v16;
      }
    }
    else
    {
      v14 = (char)v13 << v12;
      if ( (v13 & 0x80u) != 0 )
      {
        LOBYTE(v14) = 0;
        if ( (_BYTE)v13 != 0x80 )
          v14 = -(-(char)v13 << v12);
      }
    }
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}

