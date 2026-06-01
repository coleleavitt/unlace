__int64 *__fastcall sub_21852E0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v7)(__int64); // rax
  unsigned __int16 v8; // ax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE *v16; // rax
  __int64 v17; // [rsp+18h] [rbp-70h] BYREF
  __int64 v18[2]; // [rsp+20h] [rbp-68h] BYREF
  char v19; // [rsp+30h] [rbp-58h]
  _BYTE *v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  char v22; // [rsp+50h] [rbp-38h]

  v7 = *(__int64 (__fastcall **)(__int64))(*a2 + 552LL);
  if ( v7 == sub_217EE00 )
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
  sub_216E690((__int64)v18, a2 + 7, a3, a4, a5, a6);
  if ( (v19 & 1) != 0 )
  {
    v15 = v18[0];
    v18[0] = 0;
    *a1 = v15;
  }
  else
  {
    v13 = v18[0];
    v14 = v18[0] + (v18[1] << 6);
    if ( v18[0] != v14 )
    {
      while ( *(_DWORD *)(v13 + 4) != 1879048195 )
      {
        v13 += 64;
        if ( v13 == v14 )
          goto LABEL_13;
      }
      sub_217A400((__int64)&v20, a2 + 7, v13, v10, v11, v12);
      if ( (v22 & 1) != 0 )
      {
        v16 = v20;
        v20 = nullptr;
        *a1 = (__int64)v16;
LABEL_19:
        sub_111E010((__int64 *)&v20);
        goto LABEL_16;
      }
      if ( *v20 != 65 || v21 == 1 )
      {
        *a1 = 0;
        goto LABEL_19;
      }
      (*(void (__fastcall **)(__int64 *, __int64, _BYTE *, __int64, __int64))(*(_QWORD *)a3 + 16LL))(
        &v17,
        a3,
        v20,
        v21,
        1);
      if ( v17 )
      {
        *a1 = v17;
        goto LABEL_19;
      }
      sub_111E010((__int64 *)&v20);
    }
LABEL_13:
    *a1 = 0;
  }
LABEL_16:
  sub_20EAA70(v18);
  return a1;
}
