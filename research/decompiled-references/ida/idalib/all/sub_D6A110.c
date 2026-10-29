__int64 __fastcall sub_D6A110(__int64 a1, __int64 a2, unsigned __int16 *a3, int *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  int v12; // eax
  int v13; // edx
  int v14; // r13d
  int v15; // ecx
  int v16; // esi
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v18; // [rsp+8h] [rbp-50h] BYREF
  void *v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-40h]
  char v21; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0xFu;
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
      return (unsigned int)sub_D69FE0(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D63100(a1, a2, (__int64)a3, a4, 0x10u);
  if ( (_BYTE)v10 )
  {
    v12 = *a3;
    v13 = v12;
    v14 = v12 << *a4;
    if ( *a4 > 15 )
    {
      v15 = 16;
      if ( (_WORD)v12 )
      {
        v16 = 8;
        if ( v12 >> 8 )
        {
          v16 = 0;
          v12 >>= 8;
        }
        if ( v12 >> 4 )
          v12 = (unsigned __int16)(v12 >> 4);
        else
          v16 |= 4u;
        if ( v12 >> 2 )
          v12 >>= 2;
        else
          v16 |= 2u;
        v15 = v16 | 1;
        if ( (unsigned int)v12 >> 1 )
          v15 = v16;
      }
      *a4 = v15;
      LOWORD(v14) = v13 << v15;
    }
    *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}
