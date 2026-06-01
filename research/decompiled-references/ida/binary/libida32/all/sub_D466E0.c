__int64 __fastcall sub_D466E0(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  void *v9; // rdx
  unsigned int v10; // r12d
  __int64 v12; // rcx
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v14; // [rsp+8h] [rbp-50h] BYREF
  void *v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-40h]
  char v17; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0xFuLL;
  }
  else if ( *a4 < 0 )
  {
    v13 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E0FFE0(a1, &v13, 2444, 0);
    v9 = (void *)*a4;
    v17 = 0;
    v14 = v8;
    v16 = 64;
    v15 = v9;
    if ( v8 )
    {
      sub_CD4D00(&v14, (__int64)&v15);
      if ( v16 > 0x40 )
      {
        if ( v15 )
          operator delete[](v15);
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v10 )
    {
      *a4 = -*a4;
      return (unsigned int)sub_D46810(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D46560(a1, a2, (__int64)a3, a4, 0x10u);
  if ( (_BYTE)v10 )
  {
    v12 = *a4;
    LOWORD(a4) = -1;
    if ( v12 <= 15 )
      LODWORD(a4) = (int)*a3 >> v12;
    *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = (_WORD)a4;
  }
  return v10;
}

