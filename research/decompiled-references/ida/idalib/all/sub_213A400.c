__int64 __fastcall sub_213A400(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _BOOL8 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rdi
  _BOOL8 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r15
  char v10; // al
  __int64 v11; // rax
  const char *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v15; // [rsp+18h] [rbp-D0h] BYREF
  unsigned int v16[8]; // [rsp+20h] [rbp-C8h] BYREF
  __int16 v17; // [rsp+40h] [rbp-A8h]
  _QWORD v18[4]; // [rsp+50h] [rbp-98h] BYREF
  __int16 v19; // [rsp+70h] [rbp-78h]
  _QWORD v20[4]; // [rsp+80h] [rbp-68h] BYREF
  __int16 v21; // [rsp+A0h] [rbp-48h]

  v15 = 0;
  v2 = sub_2153C00(a1);
  v3 = sub_2124B50(v2);
  v17 = 259;
  *(_QWORD *)v16 = "expected integer";
  if ( (unsigned __int8)sub_2154400(a1, &v15, v16) )
    return 1;
  v4 = 0;
  v18[0] = "file number less than one in '.loc' directive";
  v19 = 259;
  if ( v15 <= 0 )
    v4 = *(_WORD *)(*(_QWORD *)(a1 + 16) + 1880LL) <= 4u;
  if ( (unsigned __int8)sub_2154450(a1, v4, v3, v18) )
    return 1;
  v6 = *(_QWORD *)(a1 + 16);
  v21 = 259;
  v20[0] = "unassigned file number in '.loc' directive";
  v7 = !sub_2107640(v6, v15, 0);
  if ( (unsigned __int8)sub_2154450(a1, v7, v3, v20) )
    return 1;
  LODWORD(v8) = 0;
  LODWORD(v9) = 0;
  if ( **(_DWORD **)(a1 + 48) == 4 )
  {
    v11 = sub_2153C00(a1);
    if ( *(_DWORD *)(v11 + 32) <= 0x40u )
      v8 = *(_QWORD *)(v11 + 24);
    else
      v8 = **(_QWORD **)(v11 + 24);
    v12 = "line number less than zero in '.loc' directive";
    if ( v8 >= 0 )
    {
      sub_2132C70(a1, (__m128 *)v7);
      if ( **(_DWORD **)(a1 + 48) != 4 )
      {
        LODWORD(v9) = 0;
        goto LABEL_9;
      }
      v13 = sub_2153C00(a1);
      if ( *(_DWORD *)(v13 + 32) <= 0x40u )
        v9 = *(_QWORD *)(v13 + 24);
      else
        v9 = **(_QWORD **)(v13 + 24);
      if ( v9 >= 0 )
      {
        sub_2132C70(a1, (__m128 *)v7);
        goto LABEL_9;
      }
      v12 = "column position less than zero in '.loc' directive";
    }
    v20[0] = v12;
    v21 = 259;
    return sub_21543E0(a1, v20, 0, 0);
  }
LABEL_9:
  v10 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1770LL);
  v16[0] = 0;
  v18[0] = 0;
  v20[0] = a1;
  v14 = v10 & 1;
  v20[1] = &v14;
  v20[2] = v16;
  v20[3] = v18;
  result = sub_2154570(a1, sub_213B8E0, v20, 0);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 688LL))(
      *(_QWORD *)(a1 + 24),
      (unsigned int)v15,
      (unsigned int)v8,
      (unsigned int)v9,
      v14,
      v16[0],
      v18[0],
      0,
      0,
      0,
      0);
    return 0;
  }
  return result;
}
