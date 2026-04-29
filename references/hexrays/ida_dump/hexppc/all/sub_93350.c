__int64 __fastcall sub_93350(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 (__fastcall *v5)(); // r15
  int v6; // r14d
  __int64 v7; // r15
  int v8; // r14d
  _BOOL4 v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v14; // [rsp+0h] [rbp-98h]
  __int64 v15; // [rsp+8h] [rbp-90h]
  __int64 (__fastcall *v16)(); // [rsp+10h] [rbp-88h]
  __int64 v17; // [rsp+20h] [rbp-78h]
  __int64 v18; // [rsp+28h] [rbp-70h]
  _DWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) != 16 || !*(_BYTE *)(a2 + 64) || (unsigned int)(*(_DWORD *)a2 - 22) > 1 )
    return 0;
  v2 = j__qalloc_or_throw(80);
  v17 = v2 + 32;
  v18 = v2 + 48;
  *(_QWORD *)(v2 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 8) = 0;
  sub_121960(v2, a2);
  v3 = j__qalloc_or_throw(80);
  *(_OWORD *)(v3 + 8) = 0;
  v4 = v3 + 64;
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 72) = 0;
  sub_121960(v3, a2);
  v15 = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)a2 == 22 )
  {
    v5 = sub_123970;
    v16 = (__int64 (__fastcall *)())sub_123F70;
  }
  else
  {
    v5 = (__int64 (__fastcall *)())sub_123F70;
    v16 = sub_123970;
  }
  v14 = *(_QWORD *)(a2 + 24);
  if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v5)(a2 + 32, v15, v14, 8)
    || !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v5)(a2 + 64, v15, v14, 8)
    || !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v16)(v3 + 32, v15, v14, 8)
    || !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v16)(v4, v15, v14, 8) )
  {
LABEL_15:
    sub_119E50(a2, v2);
    if ( v2 )
    {
      sub_119360(v2 + 64);
      sub_119360(v18);
      sub_119360(v17);
      j__qfree(v2);
    }
    if ( v3 )
    {
      sub_119360(v3 + 64);
      sub_119360(v3 + 48);
      sub_119360(v3 + 32);
      j__qfree(v3);
    }
    return 0;
  }
  v6 = *(_DWORD *)(v3 + 68);
  sub_119360(v4);
  *(_DWORD *)(v3 + 68) = v6;
  v7 = j__qalloc_or_throw(80);
  *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 72) = 0;
  *(_OWORD *)(v7 + 8) = 0;
  sub_121960(v7, a2);
  v8 = *(_DWORD *)(v7 + 68);
  sub_119360(v7 + 64);
  v9 = *(_DWORD *)v7 != 23;
  *(_DWORD *)(v7 + 68) = v8;
  v10 = *(_DWORD *)(v7 + 52);
  *(_DWORD *)v7 = v9 + 22;
  v11 = j__qalloc_or_throw(80);
  *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 72) = 0;
  sub_32C520(v11, v14);
  *(_DWORD *)v11 = 13;
  sub_118FD0(v11 + 48, v7 + 48);
  sub_11CFD0(v11 + 32, v15, 64, v10, -1, 0);
  *(_DWORD *)(v11 + 68) = v10;
  v19[0] = 4;
  v19[1] = v10;
  v20 = v11;
  sub_118FD0(v7 + 48, v19);
  v12 = j__qalloc_or_throw(80);
  *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 72) = 0;
  sub_32C520(v12, v14);
  *(_QWORD *)(v12 + 56) = v7;
  *(_DWORD *)v12 = 19;
  *(_BYTE *)(v12 + 32) = 4;
  *(_QWORD *)(v12 + 40) = v3;
  *(_BYTE *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 36) = 8;
  *(_DWORD *)(v12 + 52) = 8;
  sub_121740(v12 + 64);
  if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v16)(v12 + 64, v15, v14, 8) )
  {
    v3 = v12;
    sub_119360(v19);
    goto LABEL_15;
  }
  if ( v2 )
  {
    sub_119360(v2 + 64);
    sub_119360(v18);
    sub_119360(v17);
    j__qfree(v2);
  }
  sub_119360(v19);
  return v12;
}
