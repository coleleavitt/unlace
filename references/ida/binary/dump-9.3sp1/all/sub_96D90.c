__int64 __fastcall sub_96D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 (__fastcall *v9)(); // r15
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // r14d
  _BOOL4 v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v24; // [rsp+0h] [rbp-98h]
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int64 (__fastcall *v26)(); // [rsp+10h] [rbp-88h]
  __int64 v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+28h] [rbp-70h]
  _DWORD v29[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+48h] [rbp-50h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) != 16 || !*(_BYTE *)(a2 + 64) || (unsigned int)(*(_DWORD *)a2 - 22) > 1 )
    return 0;
  v4 = j__qalloc_or_throw(80, a2, a3, a4);
  v27 = v4 + 32;
  v28 = v4 + 48;
  *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 72) = 0;
  *(_OWORD *)(v4 + 8) = 0;
  sub_1253A0(v4, a2);
  v7 = j__qalloc_or_throw(80, a2, v5, v6);
  *(_OWORD *)(v7 + 8) = 0;
  v8 = v7 + 64;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 72) = 0;
  sub_1253A0(v7, a2);
  v25 = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)a2 == 22 )
  {
    v9 = sub_1273B0;
    v26 = (__int64 (__fastcall *)())sub_1279B0;
  }
  else
  {
    v9 = (__int64 (__fastcall *)())sub_1279B0;
    v26 = sub_1273B0;
  }
  v24 = *(_QWORD *)(a2 + 24);
  if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v9)(a2 + 32, v25, v24, 8)
    || !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v9)(a2 + 64, v25, v24, 8)
    || !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v26)(v7 + 32, v25, v24, 8)
    || !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v26)(v8, v25, v24, 8) )
  {
LABEL_15:
    sub_11D890(a2, v4);
    if ( v4 )
    {
      sub_11CDA0(v4 + 64);
      sub_11CDA0(v28);
      sub_11CDA0(v27);
      j__qfree(v4);
    }
    if ( v7 )
    {
      sub_11CDA0(v7 + 64);
      sub_11CDA0(v7 + 48);
      sub_11CDA0(v7 + 32);
      j__qfree(v7);
    }
    return 0;
  }
  v10 = *(_DWORD *)(v7 + 68);
  sub_11CDA0(v8);
  *(_DWORD *)(v7 + 68) = v10;
  v13 = j__qalloc_or_throw(80, v25, v11, v12);
  *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 72) = 0;
  *(_OWORD *)(v13 + 8) = 0;
  sub_1253A0(v13, a2);
  v14 = *(_DWORD *)(v13 + 68);
  sub_11CDA0(v13 + 64);
  v15 = *(_DWORD *)v13 != 23;
  *(_DWORD *)(v13 + 68) = v14;
  v16 = *(_DWORD *)(v13 + 52);
  *(_DWORD *)v13 = v15 + 22;
  v19 = j__qalloc_or_throw(80, a2, v17, v18);
  *(_QWORD *)(v19 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v19 + 40) = 0;
  *(_QWORD *)(v19 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v19 + 56) = 0;
  *(_QWORD *)(v19 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v19 + 72) = 0;
  sub_330970(v19, v24);
  *(_DWORD *)v19 = 13;
  sub_11CA10(v19 + 48, v13 + 48);
  sub_120A10(v19 + 32, v25, 64, v16, -1, 0);
  *(_DWORD *)(v19 + 68) = v16;
  v29[0] = 4;
  v29[1] = v16;
  v30 = v19;
  sub_11CA10(v13 + 48, v29);
  v22 = j__qalloc_or_throw(80, (__int64)v29, v20, v21);
  *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v22 + 40) = 0;
  *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v22 + 56) = 0;
  *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v22 + 72) = 0;
  sub_330970(v22, v24);
  *(_QWORD *)(v22 + 56) = v13;
  *(_DWORD *)v22 = 19;
  *(_BYTE *)(v22 + 32) = 4;
  *(_QWORD *)(v22 + 40) = v7;
  *(_BYTE *)(v22 + 48) = 4;
  *(_DWORD *)(v22 + 36) = 8;
  *(_DWORD *)(v22 + 52) = 8;
  sub_125180(v22 + 64);
  if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v26)(v22 + 64, v25, v24, 8) )
  {
    v7 = v22;
    sub_11CDA0(v29);
    goto LABEL_15;
  }
  if ( v4 )
  {
    sub_11CDA0(v4 + 64);
    sub_11CDA0(v28);
    sub_11CDA0(v27);
    j__qfree(v4);
  }
  sub_11CDA0(v29);
  return v22;
}
