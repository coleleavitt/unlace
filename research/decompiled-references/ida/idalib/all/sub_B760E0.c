char __fastcall sub_B760E0(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  int v3; // eax
  char result; // al
  unsigned __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // r13
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  char v18; // r15
  __int64 v19; // rax
  bool v20; // al
  bool v21; // r12
  _QWORD *v22; // rdx
  bool v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  _DWORD *v43; // rax
  __m128i v44; // [rsp+0h] [rbp-88h] BYREF
  int v45; // [rsp+14h] [rbp-74h] BYREF
  __int64 v46; // [rsp+18h] [rbp-70h] BYREF
  __int64 v47; // [rsp+20h] [rbp-68h] BYREF
  __int64 v48; // [rsp+28h] [rbp-60h] BYREF
  __m128i v49; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v50; // [rsp+40h] [rbp-48h]

  if ( (*(_DWORD *)(a1 + 40) & 7) != 6 )
    return 0;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v3 != 1 && v3 != 3 && v3 != 2 && v3 != 4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
  {
    v5 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(v5 + 8) & 0x7Fu) - 59 > 2 )
      goto LABEL_9;
    return 0;
  }
  if ( (*(_BYTE *)(v5 + 8) & 0x7Fu) - 59 <= 2 )
    return 0;
LABEL_9:
  if ( (*(_BYTE *)(sub_B8EAA0(v5) + 8) & 0x7F) != 0 || sub_B748A0(a1, (__int64)a2, v7, v8) )
    return 0;
  v9 = sub_B8C330(a1);
  v12 = sub_A8C0E0(v9, a1);
  if ( v12 )
  {
    v49.m128i_i64[0] = *(_QWORD *)(a1 + 40);
    v23 = sub_B72580(&v49);
    v26 = (unsigned int)v23 + 3;
    if ( a2 )
      *a2 = v23 + 3;
    if ( (unsigned int)sub_B76070(a1, a1, v24, v25) != (_DWORD)v26 )
    {
      if ( (unsigned int)sub_B76070(a1, a1, v27, v28) > (int)v26 + 1 )
        return 0;
      result = sub_F632A0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v26) + 48LL)
                                    & 0xFFFFFFFFFFFFFFF0LL));
      if ( !result )
        return 0;
      if ( a3 )
      {
        *a3 = 1;
        return result;
      }
    }
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) != 26 )
      v13 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a1, v10, v11);
    v14 = *(unsigned __int16 *)(v13 + 22);
    v46 = v13;
    if ( (unsigned int)(v14 - 1) > 3 )
      return 0;
    if ( v14 != 1 )
    {
      v15 = *(_QWORD *)(v13 + 56);
      v44.m128i_i64[0] = (__int64)&v47;
      v45 = 1;
      v47 = v15;
      v44 = (__m128i)_mm_loadh_ps((const double *)v44.m128i_i64);
      v16 = sub_B8C330(a1);
      v49 = _mm_load_si128(&v44);
      v50 = &v46;
      v18 = *(_BYTE *)(*(_QWORD *)(v16 + 2320) + 97LL);
      if ( (v18 & 0x10) != 0
        && (v19 = *(_QWORD *)(a1 + 40),
            v44.m128i_i64[0] = v16,
            v48 = v19,
            v20 = sub_B72580(&v48),
            v16 = v44.m128i_i64[0],
            v21 = v20) )
      {
        v39 = sub_A63CE0(v44.m128i_i64[0]);
        v15 = v47;
        v16 = v44.m128i_i64[0];
        v40 = *(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL];
        v22 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v39) = v40 | v39;
        v17 = v40 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)&byte_8[v47 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)v47 | (unsigned __int8)*(_QWORD *)&byte_8[v47 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (v17 | v39 & 7) )
        {
          sub_B70980((__int64)&v49);
          v16 = v44.m128i_i64[0];
          if ( (*(_BYTE *)(*(_QWORD *)(v44.m128i_i64[0] + 2320) + 97LL) & 0x20) == 0 )
            return *(unsigned __int16 *)(v46 + 22) == v45;
          v12 = v21;
          v22 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_23:
          if ( v22 )
          {
            if ( (unsigned __int8)sub_F611E0(*v22) )
            {
              sub_B70980((__int64)&v49);
              if ( a2 )
                *a2 = v45 + 1;
            }
          }
          if ( v12 )
            return *(unsigned __int16 *)(v46 + 22) == v45;
          v15 = v47;
          v22 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_35:
          if ( v22 )
          {
            v29 = *v22;
            v30 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v22 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
            if ( (unsigned int)(v30 - 43) > 1 )
            {
LABEL_44:
              if ( (_BYTE)v30 == 47 )
              {
                while ( 1 )
                {
                  v33 = sub_F6AC00(v29);
                  if ( !v33 )
                    break;
                  v37 = *(_QWORD *)(*(_QWORD *)(v33 + 32) + 80LL);
                  v38 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( (v37 & 4) != 0 )
                    v32 = v38[1];
                  else
                    v32 = *v38;
                  v15 = v32;
                  v29 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL);
                }
                v41 = *(_QWORD *)(sub_F60F10(
                                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL),
                                    &v45,
                                    v34,
                                    v35,
                                    v36)
                                + 40);
                if ( (v41 & 7) == 0 )
                {
                  v42 = v41 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v42 )
                  {
                    v43 = *(_DWORD **)(v42 + 16);
                    if ( *v43 == 12 && !memcmp(v43 + 4, "__hot_cold_t", 0xCu) )
                      sub_B70980((__int64)&v49);
                  }
                }
              }
              return *(unsigned __int16 *)(v46 + 22) == v45;
            }
            v47 = sub_F68450(v29, &v45, v30, v16, v17);
            if ( ((*(_DWORD *)&byte_8[v47 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)v47) & 7) == 1 )
            {
              if ( (unsigned __int8)sub_F632A0(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL)) )
              {
                if ( a3 )
                  *a3 = 1;
                sub_B70980((__int64)&v49);
              }
              v15 = v47;
              v31 = v47 & 0xFFFFFFFFFFFFFFF0LL;
              if ( (v47 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                return *(unsigned __int16 *)(v46 + 22) == v45;
              v29 = *(_QWORD *)v31;
              LOBYTE(v30) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
              goto LABEL_44;
            }
            return 0;
          }
          return *(unsigned __int16 *)(v46 + 22) == v45;
        }
        v18 = *(_BYTE *)(*(_QWORD *)(v44.m128i_i64[0] + 2320) + 97LL);
      }
      else
      {
        v22 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
      }
      if ( (v18 & 0x20) == 0 )
        goto LABEL_35;
      goto LABEL_23;
    }
  }
  return 1;
}
