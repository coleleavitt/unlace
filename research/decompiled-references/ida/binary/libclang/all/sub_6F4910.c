__int64 *__fastcall sub_6F4910(const __m128i *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned int v9; // esi
  __int64 *v10; // rax
  __int64 v11; // r9
  __int64 *result; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned int v20; // esi
  __int64 *v21; // rax
  __int64 v22; // r9
  unsigned __int32 v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // edx
  __int64 v27; // r8
  int v28; // eax
  int v29; // r10d
  __int32 v30; // eax
  __int64 v31; // rsi
  __int32 v32; // edi
  unsigned int v33; // edx
  __int64 *v34; // rax
  __int64 v35; // r13
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // r10d
  __int64 *v42; // rax
  __int32 v43; // esi
  __int32 v44; // esi
  __int64 v45; // r9
  int v46; // r13d
  __int64 v47; // rdi
  __int64 *v48; // rdx
  __int64 v49; // r11
  unsigned __int64 *v50; // rax
  __int64 *v51; // rax
  int v52; // eax
  int v53; // r10d
  __int64 v54; // rax
  int v55; // eax
  int v56; // r9d
  unsigned int v57; // [rsp+0h] [rbp-58h]
  __int64 *v58; // [rsp+0h] [rbp-58h]
  __int64 v59[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( !a2 )
    return nullptr;
  v5 = sub_6A68B0(a2);
  v6 = a1[1145].m128i_u32[2];
  v7 = a1[1144].m128i_i64[1];
  v8 = v5;
  if ( (_DWORD)v6 )
  {
    v9 = (v6 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
    v10 = (__int64 *)(v7 + 16LL * v9);
    v11 = *v10;
    if ( v8 == *v10 )
    {
LABEL_4:
      if ( v10 != (__int64 *)(16 * v6 + v7) )
      {
        if ( a3 )
          *a3 = v8;
        return (__int64 *)v10[1];
      }
    }
    else
    {
      v13 = 1;
      while ( v11 != -4096 )
      {
        v41 = v13 + 1;
        v9 = (v6 - 1) & (v13 + v9);
        v10 = (__int64 *)(v7 + 16LL * v9);
        v11 = *v10;
        if ( v8 == *v10 )
          goto LABEL_4;
        v13 = v41;
      }
    }
  }
  v14 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 32LL))(v8);
  v59[0] = v14;
  v17 = v14;
  if ( !v14 )
    return nullptr;
  v18 = a1[1147].m128i_u32[0];
  v19 = a1[1146].m128i_i64[0];
  if ( (_DWORD)v18 )
  {
    v16 = (unsigned int)(v18 - 1);
    v20 = v16 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
    v21 = (__int64 *)(v19 + 16LL * v20);
    v22 = *v21;
    if ( *v21 == v17 )
    {
LABEL_14:
      if ( v21 != (__int64 *)(v19 + 16 * v18) )
      {
        if ( a3 )
          *a3 = v21[1];
        v23 = a1[1145].m128i_u32[2];
        v24 = v21[1];
        v25 = a1[1144].m128i_i64[1];
        if ( v23 )
        {
          v26 = (v23 - 1) & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
          v10 = (__int64 *)(v25 + 16LL * v26);
          v27 = *v10;
          if ( v24 == *v10 )
            return (__int64 *)v10[1];
          v28 = 1;
          while ( v27 != -4096 )
          {
            v29 = v28 + 1;
            v26 = (v23 - 1) & (v28 + v26);
            v10 = (__int64 *)(v25 + 16LL * v26);
            v27 = *v10;
            if ( v24 == *v10 )
              return (__int64 *)v10[1];
            v28 = v29;
          }
        }
        v10 = (__int64 *)(v25 + 16LL * v23);
        return (__int64 *)v10[1];
      }
    }
    else
    {
      v52 = 1;
      while ( v22 != -4096 )
      {
        v53 = v52 + 1;
        v54 = (unsigned int)v16 & (v20 + v52);
        v20 = v54;
        v21 = (__int64 *)(v19 + 16 * v54);
        v22 = *v21;
        if ( v17 == *v21 )
          goto LABEL_14;
        v52 = v53;
      }
    }
  }
  v30 = a1[1148].m128i_i32[2];
  v31 = a1[1147].m128i_i64[1];
  if ( v30 )
  {
    v32 = v30 - 1;
    v33 = (v30 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
    v34 = (__int64 *)(v31 + 16LL * v33);
    v16 = *v34;
    if ( *v34 == v17 )
    {
LABEL_25:
      v35 = v34[1];
      v36 = v17;
      if ( v35 )
      {
        while ( v8 != v36 )
        {
          if ( v35 != v36 )
          {
            v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 40LL))(v36);
            v36 = v37;
            if ( v17 != v37 )
            {
              if ( v37 )
                continue;
            }
          }
          goto LABEL_30;
        }
        goto LABEL_31;
      }
    }
    else
    {
      v55 = 1;
      while ( v16 != -4096 )
      {
        v56 = v55 + 1;
        v33 = v32 & (v55 + v33);
        v34 = (__int64 *)(v31 + 16LL * v33);
        v16 = *v34;
        if ( v17 == *v34 )
          goto LABEL_25;
        v55 = v56;
      }
    }
  }
LABEL_30:
  v35 = 0;
LABEL_31:
  v38 = v8;
  v39 = ((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4);
  v57 = ((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4);
  while ( 1 )
  {
    if ( v35 )
    {
      if ( v35 != v38 )
        goto LABEL_34;
      goto LABEL_47;
    }
    v42 = (__int64 *)sub_6B37C0((__int64)a1, v38, v39, v15, v16);
    if ( v42 )
      break;
    v43 = a1[1148].m128i_i32[2];
    if ( !v43 )
      goto LABEL_56;
    v44 = v43 - 1;
    v45 = a1[1147].m128i_i64[1];
    v46 = 1;
    LODWORD(v47) = v44 & v57;
    v48 = (__int64 *)(v45 + 16LL * (v44 & v57));
    v49 = *v48;
    if ( v17 != *v48 )
    {
      while ( v49 != -4096 )
      {
        if ( v49 == -8192 && !v42 )
          v42 = v48;
        v47 = v44 & (unsigned int)(v47 + v46);
        v48 = (__int64 *)(v45 + 16 * v47);
        v49 = *v48;
        if ( v17 == *v48 )
          goto LABEL_45;
        ++v46;
      }
      if ( !v42 )
        v42 = v48;
LABEL_56:
      v51 = sub_6F4360((__int64)&a1[1147].m128i_i64[1], v59, v42);
      *v51 = v17;
      v50 = (unsigned __int64 *)(v51 + 1);
      *v50 = 0;
      goto LABEL_46;
    }
LABEL_45:
    v50 = (unsigned __int64 *)(v48 + 1);
LABEL_46:
    *v50 = v38;
LABEL_47:
    v35 = 0;
LABEL_34:
    v40 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v38 + 40LL))(v38);
    v38 = v40;
    if ( v8 == v40 || !v40 )
    {
      if ( a3 )
        *a3 = 0;
      return nullptr;
    }
  }
  v58 = v42;
  sub_6B3CC0(a1, v38, (__int64)v42);
  result = v58;
  if ( a3 )
    *a3 = v38;
  return result;
}

