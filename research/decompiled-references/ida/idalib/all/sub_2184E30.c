__int64 *__fastcall sub_2184E30(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 (__fastcall *v7)(__int64); // rax
  __int16 v8; // ax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // esi
  _BYTE *v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+18h] [rbp-70h] BYREF
  __int64 v18[2]; // [rsp+20h] [rbp-68h] BYREF
  char v19; // [rsp+30h] [rbp-58h]
  _BYTE *v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  char v22; // [rsp+50h] [rbp-38h]

  v7 = *(__int16 (__fastcall **)(__int64))(*a2 + 552);
  if ( v7 == sub_217EE50 )
    v8 = __ROL2__(*(_WORD *)(a2[7] + 18), 8);
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
  sub_216E3E0((__int64)v18, a2 + 7, a3, a4, a5, a6);
  if ( (v19 & 1) != 0 )
  {
    v16 = v18[0];
    v18[0] = 0;
    *a1 = v16;
    goto LABEL_19;
  }
  v11 = v18[0];
  v12 = v18[0] + 40 * v18[1];
  if ( v18[0] == v12 )
    goto LABEL_26;
  v13 = v18[0] + 40;
  if ( *(_DWORD *)(v18[0] + 4) != 50331760 )
  {
    do
    {
      v11 = v13;
      if ( v13 == v12 )
        goto LABEL_26;
      v14 = *(_DWORD *)(v13 + 4);
      v13 += 40;
    }
    while ( v14 != 50331760 );
  }
  sub_2177240((__int64)&v20, v10, v11);
  if ( (v22 & 1) == 0 )
  {
    if ( *v20 != 65 || v21 == 1 )
    {
      *a1 = 0;
      goto LABEL_16;
    }
    (*(void (__fastcall **)(__int64 *, __int64, _BYTE *, __int64, _QWORD))(*(_QWORD *)a3 + 16LL))(&v17, a3, v20, v21, 0);
    if ( v17 )
    {
      *a1 = v17;
      goto LABEL_16;
    }
    sub_111E010((__int64 *)&v20);
LABEL_26:
    *a1 = 0;
    goto LABEL_19;
  }
  v15 = v20;
  v20 = nullptr;
  *a1 = (__int64)v15;
LABEL_16:
  sub_111E010((__int64 *)&v20);
LABEL_19:
  sub_216F680(v18);
  return a1;
}
