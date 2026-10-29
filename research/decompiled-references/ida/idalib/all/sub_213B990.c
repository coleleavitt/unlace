char __fastcall sub_213B990(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  char result; // al
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbp
  _BYTE *v16; // rcx
  unsigned __int64 *v17; // rdx
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  _BYTE *v21; // [rsp+8h] [rbp-60h] BYREF
  __m128 v22; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v23[4]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v24; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v22 = 0u;
  v3 = sub_2153C00(v2);
  v4 = sub_2124B50(v3);
  result = sub_213B1B0(*(_QWORD *)a1, &v22, v5, v6, v7, v8);
  if ( result )
  {
    v10 = *(_QWORD *)a1;
    v24 = 259;
    v23[0] = "unexpected token in '.cv_loc' directive";
    return sub_21543E0(v10, v23, 0, 0);
  }
  if ( v22.m128_u64[1] == 12 )
  {
    if ( *(_QWORD *)v22.m128_u64[0] == 0x6575676F6C6F7270LL && *(_DWORD *)(v22.m128_u64[0] + 8) == 1684956511 )
    {
      **(_BYTE **)(a1 + 8) = 1;
      return result;
    }
    v11 = *(_QWORD *)a1;
LABEL_7:
    v23[0] = "unknown sub-directive in '.cv_loc' directive";
    v24 = 259;
    return sub_2153E90(v11, v4, v23, 0, 0);
  }
  v11 = *(_QWORD *)a1;
  if ( v22.m128_u64[1] != 7
    || *(_DWORD *)v22.m128_u64[0] != 1935635305
    || *(_WORD *)(v22.m128_u64[0] + 4) != 28020
    || *(_BYTE *)(v22.m128_u64[0] + 6) != 116 )
  {
    goto LABEL_7;
  }
  v12 = sub_2153C00(v11);
  v13 = sub_2124B50(v12);
  v14 = *(_QWORD *)a1;
  v23[0] = 0;
  v15 = v13;
  result = sub_2133530(v14, (unsigned __int64 *)&v21, (__int64)v23);
  if ( !result )
  {
    v16 = v21;
    v17 = *(unsigned __int64 **)(a1 + 16);
    v18 = *v21 == 1;
    *v17 = -1;
    if ( !v18 || (v19 = *((_QWORD *)v16 + 2), *v17 = v19, v19 > 1) )
    {
      v20 = *(_QWORD *)a1;
      v24 = 259;
      v23[0] = "is_stmt value not 0 or 1";
      return sub_2153E90(v20, v15, v23, 0, 0);
    }
  }
  return result;
}
