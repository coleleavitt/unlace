__int64 __fastcall sub_D46B20(__int64 a1, __int64 a2, int *a3, __int16 *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  __int16 v12; // cx
  int v13; // ebx
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v15; // [rsp+8h] [rbp-50h] BYREF
  void *v16; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-40h]
  char v18; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0x1Fu;
  }
  else if ( *a4 < 0 )
  {
    v14 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E0FFE0(a1, &v14, 2444, 0);
    v9 = (unsigned __int16)*a4;
    v18 = 0;
    v15 = v8;
    v17 = 16;
    v16 = (void *)v9;
    if ( v8 )
    {
      sub_CD4D00(&v15, (__int64)&v16);
      if ( v17 > 0x40 )
      {
        if ( v16 )
          operator delete[](v16);
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v10 )
    {
      *a4 = -*a4;
      return (unsigned int)sub_D46C50(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D469A0(a1, a2, (__int64)a3, a4, 0x20u);
  if ( (_BYTE)v10 )
  {
    v12 = *a4;
    v13 = -1;
    if ( v12 <= 31 )
      v13 = *a3 >> v12;
    *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v13;
  }
  return v10;
}

