__int64 __fastcall sub_D614F0(__int64 a1, __int64 a2, _WORD *a3, __int16 *a4, __int64 a5)
{
  unsigned __int8 **v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  __int16 v12; // cx
  int v13; // eax
  int v14; // r13d
  int v15; // edx
  int v16; // ecx
  __int16 v17; // ax
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v19; // [rsp+8h] [rbp-50h] BYREF
  void *v20; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-40h]
  char v22; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0xFu;
  }
  else if ( *a4 < 0 )
  {
    v18 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v8 = (unsigned __int8 **)sub_E33D20(a1, &v18, 2444, 0);
    v9 = (unsigned __int16)*a4;
    v22 = 0;
    v19 = v8;
    v21 = 16;
    v20 = (void *)v9;
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
      return (unsigned int)sub_D616B0(a1, a2, a3, a4, a5);
    }
    return v10;
  }
  v10 = sub_D611E0(a1, a2, a3, a4, 0x10u);
  if ( (_BYTE)v10 )
  {
    v12 = *a4;
    LOWORD(v13) = *a3;
    if ( *a4 > 15 )
    {
      LOWORD(v14) = 0;
      if ( (v13 & 0x8000u) == 0 )
      {
        if ( (_WORD)v13 )
        {
          v15 = BYTE1(v13);
          if ( BYTE1(v13) )
            LOWORD(v13) = BYTE1(v13);
          v13 = (unsigned __int16)v13;
          v16 = v15 == 0 ? 8 : 0;
          if ( (int)(unsigned __int16)v13 >> 4 )
            v13 = (int)(unsigned __int16)v13 >> 4;
          else
            LOWORD(v16) = v16 | 4;
          if ( v13 >> 2 )
            v13 >>= 2;
          else
            LOWORD(v16) = v16 | 2;
          if ( !((unsigned int)v13 >> 1) )
            LOWORD(v16) = v16 | 1;
          v17 = v16;
        }
        else
        {
          v17 = 16;
          LOBYTE(v16) = 16;
        }
        *a4 = v17;
        v14 = (unsigned __int16)*a3 << v16;
      }
    }
    else
    {
      v14 = (__int16)v13 << v12;
      if ( (v13 & 0x8000u) != 0 )
      {
        LOWORD(v14) = 0;
        if ( (_WORD)v13 != 0x8000 )
          v14 = -(-(__int16)v13 << v12);
      }
    }
    *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  return v10;
}
