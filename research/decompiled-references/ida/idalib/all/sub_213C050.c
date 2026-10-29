__int64 __fastcall sub_213C050(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // r14
  __int64 result; // rax
  char v7; // cl
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int8 v10; // [rsp+Fh] [rbp-79h]
  __m128 v11; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v12[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v13; // [rsp+40h] [rbp-48h]

  v11 = 0u;
  if ( (unsigned __int8)sub_2154640(a1, 9) )
  {
    v8 = 0;
    v9 = 0;
  }
  else
  {
    v5 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_213B1B0(a1, &v11, v1, v2, v3, v4) )
      {
        v13 = 259;
        v12[0] = "expected .eh_frame or .debug_frame";
        return sub_21543E0(a1, v12, 0, 0);
      }
      if ( v11.m128_u64[1] == 9 )
      {
        if ( *(_QWORD *)v11.m128_u64[0] == 0x6D6172665F68652ELL && *(_BYTE *)(v11.m128_u64[0] + 8) == 101 )
          v5 = 1;
      }
      else if ( v11.m128_u64[1] == 12 && *(_QWORD *)v11.m128_u64[0] == 0x665F67756265642ELL )
      {
        v7 = v10;
        if ( *(_DWORD *)(v11.m128_u64[0] + 8) == 1701667186 )
          v7 = 1;
        v10 = v7;
      }
      if ( (unsigned __int8)sub_2154640(a1, 9) )
        break;
      v12[0] = "expected comma";
      v13 = 259;
      result = sub_2154510(a1, 26, v12);
      if ( (_BYTE)result )
        return result;
    }
    v9 = v10;
    v8 = v5;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 24) + 848LL))(*(_QWORD *)(a1 + 24), v8, v9);
  return 0;
}
