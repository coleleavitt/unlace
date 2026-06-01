__int64 *__fastcall sub_21849B0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v7)(__int64); // rax
  unsigned __int16 v8; // ax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // [rsp+18h] [rbp-70h] BYREF
  __int64 v16[2]; // [rsp+20h] [rbp-68h] BYREF
  char v17; // [rsp+30h] [rbp-58h]
  _BYTE *v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]
  char v20; // [rsp+50h] [rbp-38h]

  v7 = *(__int64 (__fastcall **)(__int64))(*a2 + 552LL);
  if ( v7 == sub_217EDD0 )
    v8 = *(_WORD *)(a2[7] + 18LL);
  else
    v8 = v7((__int64)a2);
  if ( v8 != 164 )
  {
    if ( v8 <= 0xA4u )
    {
      if ( v8 != 40 )
      {
LABEL_7:
        *a1 = 0;
        return a1;
      }
    }
    else if ( v8 != 183 && v8 != 243 )
    {
      goto LABEL_7;
    }
  }
  sub_216E130((__int64)v16, a2 + 7, a3, a4, a5, a6);
  if ( (v17 & 1) != 0 )
  {
    v13 = v16[0];
    v16[0] = 0;
    *a1 = v13;
  }
  else
  {
    v11 = v16[0];
    v12 = v16[0] + 40 * v16[1];
    if ( v16[0] != v12 )
    {
      while ( *(_DWORD *)(v11 + 4) != 1879048195 )
      {
        v11 += 40;
        if ( v11 == v12 )
          goto LABEL_13;
      }
      sub_2174090((__int64)&v18, a2 + 7, v11, v10);
      if ( (v20 & 1) != 0 )
      {
        v14 = v18;
        v18 = nullptr;
        *a1 = (__int64)v14;
LABEL_19:
        sub_111E010((__int64 *)&v18);
        goto LABEL_16;
      }
      if ( *v18 != 65 || v19 == 1 )
      {
        *a1 = 0;
        goto LABEL_19;
      }
      (*(void (__fastcall **)(__int64 *, __int64, _BYTE *, __int64, __int64))(*(_QWORD *)a3 + 16LL))(
        &v15,
        a3,
        v18,
        v19,
        1);
      if ( v15 )
      {
        *a1 = v15;
        goto LABEL_19;
      }
      sub_111E010((__int64 *)&v18);
    }
LABEL_13:
    *a1 = 0;
  }
LABEL_16:
  sub_216EEA0(v16);
  return a1;
}
