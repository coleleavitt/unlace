__int64 __fastcall sub_17D5AA0(_QWORD *a1, __int64 *a2, unsigned __int8 a3, unsigned __int16 *a4, double a5)
{
  __int64 v7; // r9
  __int64 *v8; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  _BYTE *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v18; // [rsp-10h] [rbp-38h]
  __int64 v19; // [rsp-8h] [rbp-30h]

  v7 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  v8 = (__int64 *)(a2[7] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a2[7] & 4) != 0 )
    v8 = (__int64 *)v8[4];
  v9 = sub_17CA050((__int64)a1, (__int64)a2, a2[5], a2[6], v8, v7, a5, a3, a4);
  v12 = v18;
  v13 = v19;
  if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    a2[6] = v9;
    v14 = (_BYTE *)a1[29];
    if ( (v14[107] & 4) != 0 )
    {
      if ( (unsigned __int8)sub_189F360(a1[92], a2) )
        sub_B88650((__int64)a2, 1);
      v14 = (_BYTE *)a1[29];
    }
    if ( (v14[47] & 0x20) != 0 )
    {
      sub_17A40B0((__int64)a1, (__int64)a2);
      v14 = (_BYTE *)a1[29];
    }
    if ( (v14[89] & 1) != 0 )
      sub_19F7030(a1[85], a2, v12);
    v15 = a2[9];
    if ( (((unsigned __int8)v15 | (unsigned __int8)(v15 >> 1)) & 1) == 0 )
    {
      v16 = sub_705340(a2 + 9, (__int64)a2, v15, v13, v10, v11);
      if ( v16 )
        sub_17D5630((__int64)a1, (__int64)a2, (__int64)v16, 0);
    }
    sub_17CB060((__int64)a1, (char *)a2, a5);
    return *((_BYTE *)a2 + 28) >> 7;
  }
  else
  {
    sub_B88650((__int64)a2, 1);
    return 1;
  }
}
