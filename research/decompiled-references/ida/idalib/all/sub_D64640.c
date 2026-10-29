__int64 __fastcall sub_D64640(__int64 a1, __int64 a2, unsigned int *a3, int *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  int v12; // ecx
  int v13; // eax
  int v14; // r14d
  int v15; // eax
  char v16; // cl
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v18; // [rsp+8h] [rbp-50h] BYREF
  void *v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-40h]
  char v21; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0x1Fu;
  }
  else if ( *a4 < 0 )
  {
    v17 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E33D20(a1, &v17, 2444, 0);
    v9 = (unsigned int)*a4;
    v21 = 0;
    v18 = v8;
    v20 = 32;
    v19 = (void *)v9;
    if ( v8 )
    {
      sub_CF8A40(&v18, (__int64)&v19);
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
      return (unsigned int)sub_D647C0(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D64390(a1, a2, a3, a4, 0x20u);
  if ( (_BYTE)v10 )
  {
    v12 = *a4;
    v13 = *a3;
    if ( *a4 > 31 )
    {
      v14 = 0;
      if ( v13 >= 0 )
      {
        if ( v13 )
        {
          _BitScanReverse((unsigned int *)&v13, v13);
          v15 = v13 ^ 0x1F;
          v16 = v15;
        }
        else
        {
          v16 = 32;
          v15 = 32;
        }
        *a4 = v15;
        v14 = *a3 << v16;
      }
    }
    else
    {
      v14 = v13 << v12;
      if ( v13 < 0 )
      {
        v14 = v13 << v12;
        if ( v13 == 0x80000000 )
          v14 = 0;
      }
    }
    *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}
