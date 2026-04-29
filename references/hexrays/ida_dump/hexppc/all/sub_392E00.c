__int64 __fastcall sub_392E00(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r13
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  const char *v10; // rcx
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v17; // rax
  const char *v18; // rax
  unsigned int v19; // [rsp+0h] [rbp-F0h]
  unsigned int v20; // [rsp+Ch] [rbp-E4h]
  _QWORD v21[2]; // [rsp+18h] [rbp-D8h] BYREF
  const char *v22; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+30h] [rbp-C0h]
  __int64 v24; // [rsp+40h] [rbp-B0h]
  __int128 v25; // [rsp+48h] [rbp-A8h]
  _OWORD v26[3]; // [rsp+58h] [rbp-98h] BYREF
  __int64 v27; // [rsp+88h] [rbp-68h]
  int v28; // [rsp+90h] [rbp-60h]
  __int64 v29; // [rsp+98h] [rbp-58h]
  char v30; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v31; // [rsp+B0h] [rbp-40h]

  v3 = a3;
  v31 = __readfsqword(0x28u);
  v30 = 0;
  v21[1] = 0;
  v22 = nullptr;
  v24 = 0;
  v27 = 1;
  v28 = -1;
  v5 = *a2;
  v21[0] = a3;
  v29 = 0;
  v23 = 0;
  v25 = 0;
  v26[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member(v21, v5, 1) != -1 )
  {
    while ( 1 )
    {
      v6 = sub_383E10((__int64)&v22, (__int64)"Please enter field name");
      if ( !(_BYTE)v6 )
        goto LABEL_24;
      if ( (unsigned __int64)v23 > 1 )
        break;
      v7 = v21[0] >> 3;
      if ( (v26[0] & 0xF) == 0xE )
        sub_67E30((__int64 *)&v22, (__int64)"bf_%llx_%d", v7, v21[0] & 7);
      else
        sub_67E30((__int64 *)&v22, (__int64)"field_%llx", v7);
      v8 = *(_QWORD *)(a1 + 32);
      v9 = v23;
      if ( v8 )
        *(_DWORD *)(v8 + 108) |= 8u;
      v10 = s1;
      if ( v9 )
        goto LABEL_21;
LABEL_9:
      v11 = 11;
      v12 = set_tinfo_property4(a2, 11, v3, v10, 0, 0);
      v14 = *(_QWORD *)(a1 + 32);
      v15 = v12;
      if ( v14 )
      {
        *(_DWORD *)(v14 + 108) &= ~8u;
        if ( (*(_BYTE *)a1 & 2) == 0 )
        {
          v11 = 0;
          v20 = v12;
          v19 = v12;
          sub_391910(a1, 0, 0.0, v14, v12, v13);
          v15 = v20;
          v12 = v19;
        }
      }
      if ( !v12 )
      {
        sub_38B4A0(a1, 1u, v14);
        goto LABEL_14;
      }
      v18 = (const char *)tinfo_errstr(v15, v11);
      sub_2B11F0((__int64)"%s failed: %s", "Renaming field", v18);
    }
    v17 = *(_QWORD *)(a1 + 32);
    if ( v17 )
      *(_DWORD *)(v17 + 108) |= 8u;
LABEL_21:
    v10 = v22;
    goto LABEL_9;
  }
LABEL_24:
  v6 = 0;
LABEL_14:
  clear_tinfo_t(v26);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v6;
}
