__int64 *__fastcall sub_2185820(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 (__fastcall *v7)(__int64); // rax
  __int16 v8; // ax
  _QWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  _BYTE *v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+18h] [rbp-70h] BYREF
  __int64 v20[2]; // [rsp+20h] [rbp-68h] BYREF
  char v21; // [rsp+30h] [rbp-58h]
  _BYTE *v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h]
  char v24; // [rsp+50h] [rbp-38h]

  v7 = *(__int16 (__fastcall **)(__int64))(*a2 + 552LL);
  if ( v7 == sub_217EE80 )
    v8 = __ROL2__(*(_WORD *)(a2[7] + 18LL), 8);
  else
    v8 = v7((__int64)a2);
  if ( v8 != 164 )
  {
    if ( (unsigned __int16)v8 <= 0xA4u )
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
  v10 = a2 + 7;
  sub_216EAB0((__int64)v20, a2 + 7, a3, a4, a5, a6);
  if ( (v21 & 1) != 0 )
  {
    v18 = v20[0];
    v20[0] = 0;
    *a1 = v18;
    goto LABEL_19;
  }
  v13 = v20[0];
  v14 = v20[0] + (v20[1] << 6);
  if ( v20[0] == v14 )
    goto LABEL_26;
  v15 = v20[0] + 64;
  if ( *(_DWORD *)(v20[0] + 4) != 50331760 )
  {
    do
    {
      v13 = v15;
      if ( v15 == v14 )
        goto LABEL_26;
      v16 = *(_DWORD *)(v15 + 4);
      v15 += 64;
    }
    while ( v16 != 50331760 );
  }
  sub_217D690((__int64)&v22, v10, v13, v14, v11, v12);
  if ( (v24 & 1) == 0 )
  {
    if ( *v22 != 65 || v23 == 1 )
    {
      *a1 = 0;
      goto LABEL_16;
    }
    (*(void (__fastcall **)(__int64 *, __int64, _BYTE *, __int64, _QWORD))(*(_QWORD *)a3 + 16LL))(&v19, a3, v22, v23, 0);
    if ( v19 )
    {
      *a1 = v19;
      goto LABEL_16;
    }
    sub_111E010((__int64 *)&v22);
LABEL_26:
    *a1 = 0;
    goto LABEL_19;
  }
  v17 = v22;
  v22 = nullptr;
  *a1 = (__int64)v17;
LABEL_16:
  sub_111E010((__int64 *)&v22);
LABEL_19:
  sub_216F970(v20);
  return a1;
}
