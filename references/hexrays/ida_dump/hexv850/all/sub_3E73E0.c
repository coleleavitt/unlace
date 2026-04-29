__int64 __fastcall sub_3E73E0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 result; // rax
  int v5; // edx
  char v6; // al
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // ecx
  __int64 v13; // rax
  unsigned __int8 v14; // [rsp+Fh] [rbp-69h]
  __int64 v15; // [rsp+18h] [rbp-60h] BYREF
  char v16[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 4 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( (unsigned int)(*(_DWORD *)v3 - 12) > 1 )
    return 0;
  result = 0;
  if ( *(_DWORD *)(v3 + 68) == *(_DWORD *)(a1 + 84)
    && *(_BYTE *)(v3 + 32) == 4
    && **(_DWORD **)(v3 + 40) == 12
    && *(_BYTE *)(v3 + 48) == 2 )
  {
    sub_11EE80((__int64)v16, (unsigned __int8 *)(v3 + 32));
    v5 = **(_DWORD **)(a1 + 536);
    if ( *(_BYTE *)(v17 + 32) == 1 && v5 == *(_DWORD *)(v17 + 40) )
    {
      v7 = v17 + 32;
    }
    else
    {
      if ( *(_BYTE *)(v17 + 48) != 1 || v5 != *(_DWORD *)(v17 + 56) )
        goto LABEL_9;
      v7 = v17 + 48;
    }
    v8 = *(_QWORD *)(v3 + 24);
    if ( *(_DWORD *)(get_ph(v16) + 4) != 55 )
    {
      if ( !under_debugger )
        sub_37CFE0(0x291Cu, v3 + 32, a3);
      BUG();
    }
    v15 = -1;
    sub_CB3B0(0xBB9u, &v15, v8);
    v9 = v15;
    if ( v15 != -1 )
    {
      v10 = sub_325150(*(_QWORD *)(*(_QWORD *)(v3 + 56) + 16LL), *(_DWORD *)(v3 + 52), 1);
      if ( *(_DWORD *)v3 == 13 )
        v10 = -v10;
      v11 = v10 + v9;
      sub_1181E0(v7);
      *(_BYTE *)v7 = 6;
      v12 = 8 * *(_DWORD *)(a1 + 84);
      v13 = 0;
      if ( (unsigned __int64)v12 <= 0x3F )
        v13 = 1LL << v12;
      *(_QWORD *)(v7 + 8) = v11 & (v13 - 1);
      sub_117D90((char *)v7, a1);
      sub_117E50((char *)a2, v16);
      v6 = 1;
      goto LABEL_10;
    }
LABEL_9:
    v6 = 0;
LABEL_10:
    v14 = v6;
    sub_1181E0((__int64)v16);
    return v14;
  }
  return result;
}
