__int64 __fastcall sub_A1F2C0(__int64 *a1, __int64 a2, __int64 a3, _WORD *a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  unsigned __int8 v9; // bp
  __int64 result; // rax
  __int64 v11; // rbp
  size_t v12; // r13
  __int64 v13; // rax
  const void *v14; // rax
  __int64 v15; // rdx
  char v16; // [rsp+7h] [rbp-51h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *a1;
  v16 = 1;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 16))(a1);
  if ( v9 )
    v9 = *(_BYTE *)(a3 + 1) ^ 1;
  result = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a3 + 1) )
      goto LABEL_10;
    result = 256;
    *(_WORD *)a3 = 256;
  }
  if ( !*(_BYTE *)(a3 + 1) )
    goto LABEL_7;
LABEL_10:
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, char *, __int64 *))(*a1 + 120))(
             a1,
             a2,
             a5,
             v9,
             &v16,
             &v17);
  if ( !(_BYTE)result )
  {
LABEL_7:
    if ( v16 )
    {
      result = (unsigned __int16)*a4;
      *(_WORD *)a3 = result;
    }
    return result;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1)
    && (v11 = sub_2254E80(a1), *(_DWORD *)(v11 + 32) == 1)
    && (v12 = j__strlen("<none>"),
        v13 = *(_QWORD *)(v11 + 80),
        v18[0] = *(_QWORD *)(v11 + 72),
        v18[1] = v13,
        v14 = (const void *)sub_A1D7F0((__int64)v18, 32),
        v12 == v15)
    && (!v12 || !memcmp(v14, "<none>", v12)) )
  {
    *(_WORD *)a3 = *a4;
  }
  else
  {
    sub_A1CD30(a1, a3);
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v17);
}

