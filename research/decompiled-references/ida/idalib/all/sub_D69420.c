__int64 __fastcall sub_D69420(__int64 a1, __int64 a2, __int16 *a3, __int64 *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  void *v9; // rdx
  unsigned int v10; // r12d
  __int64 v12; // rcx
  __int16 v13; // ax
  int v14; // r13d
  int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v19; // [rsp+8h] [rbp-50h] BYREF
  void *v20; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-40h]
  char v22; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0xFuLL;
  }
  else if ( *a4 < 0 )
  {
    v18 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E33D20(a1, &v18, 2444, 0);
    v9 = (void *)*a4;
    v22 = 0;
    v19 = v8;
    v21 = 64;
    v20 = v9;
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
      return (unsigned int)sub_D692F0(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D62720(a1, a2, a3, a4, 0x10u);
  if ( (_BYTE)v10 )
  {
    v12 = *a4;
    v13 = *a3;
    if ( *a4 > 15 )
    {
      LOWORD(v14) = 0;
      if ( v13 >= 0 )
      {
        if ( v13 )
        {
          v15 = HIBYTE(v13);
          if ( !HIBYTE(v13) )
            v15 = (unsigned __int16)*a3;
          v16 = HIBYTE(v13) == 0 ? 8 : 0;
          if ( v15 >> 4 )
            v15 >>= 4;
          else
            v16 |= 4u;
          if ( v15 >> 2 )
            v15 >>= 2;
          else
            v16 |= 2u;
          if ( !((unsigned int)v15 >> 1) )
            v16 |= 1u;
          v17 = v16;
        }
        else
        {
          v17 = 16;
          LOBYTE(v16) = 16;
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
        LOWORD(v14) = 0;
        if ( v13 != (__int16)0x8000 )
          v14 = -(-v13 << v12);
      }
    }
    *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}
