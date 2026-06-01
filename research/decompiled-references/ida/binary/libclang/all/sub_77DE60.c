char __fastcall sub_77DE60(_QWORD *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // rdx
  char result; // al
  __int64 v7; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // edx
  int v13; // edx
  __int64 v14; // r12
  _QWORD *v15; // r13
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rdi
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  _DWORD *v28; // rax
  int v29; // eax
  int v30; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+28h] [rbp-50h] BYREF
  __m128i v33; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v34; // [rsp+40h] [rbp-38h]

  v5 = a1[5] & 7LL;
  if ( (_DWORD)v5 != 6 || (unsigned int)(*(_DWORD *)(a1[5] & 0xFFFFFFFFFFFFFFF8LL) - 1) > 3 )
    return 0;
  v7 = a1[2];
  v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 4) != 0 )
    v9 = *(_QWORD *)v9;
  if ( (*(_BYTE *)(v9 + 8) & 0x7Fu) - 57 <= 2 || (*(_BYTE *)(sub_79C2A0(v9, a2, v5, a4) + 8) & 0x7F) != 0 )
    return 0;
  v10 = a1[6] & 0xFFFFFFFFFFFFFFF0LL;
  v11 = *(_QWORD *)v10;
  if ( *(_BYTE *)(*(_QWORD *)v10 + 16LL) != 26 )
    v11 = sub_B0D320(v11);
  v12 = *(_DWORD *)(v11 + 20);
  v31 = v11;
  v13 = (unsigned __int16)(v12 >> 6);
  if ( (unsigned int)(v13 - 1) > 3 || (*(_BYTE *)(v11 + 23) & 0x10) != 0 )
    return 0;
  result = 1;
  if ( v13 != 1 )
  {
    v14 = *(_QWORD *)(v11 + 56);
    v30 = 1;
    v32 = v14;
    v15 = (_QWORD *)sub_798D40(a1);
    v34 = &v31;
    v16 = v15[270];
    v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v30, (__m128i)(unsigned __int64)&v32);
    v17 = *(_BYTE *)(v16 + 97);
    if ( (v17 & 0x10) != 0 && (a1[5] & 7) == 6 && ((*(_DWORD *)(a1[5] & 0xFFFFFFFFFFFFFFF8LL) - 2) & 0xFFFFFFFD) == 0 )
    {
      v25 = sub_6CABB0(v15);
      v14 = v32;
      if ( (*(_QWORD *)&byte_8[v32 & 0xFFFFFFFFFFFFFFF0LL] | v32 & 7) == (*(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL]
                                                                        | v25 & 7) )
      {
        sub_777D40((__int64)&v33);
        if ( (*(_BYTE *)(v15[270] + 97LL) & 0x20) != 0 && (v32 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
        {
          if ( (unsigned __int8)sub_B08980(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL)) )
          {
            sub_777D40((__int64)&v33);
            if ( a2 )
            {
              v29 = v30;
              *(_BYTE *)(a2 + 4) = 1;
              *(_DWORD *)a2 = v29;
            }
          }
        }
        return (unsigned __int16)(*(_DWORD *)(v31 + 20) >> 6) == v30;
      }
      v17 = *(_BYTE *)(v15[270] + 97LL);
    }
    if ( (v17 & 0x20) != 0 )
    {
      if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
        return (unsigned __int16)(*(_DWORD *)(v31 + 20) >> 6) == v30;
      if ( (unsigned __int8)sub_B08980(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        sub_777D40((__int64)&v33);
        if ( a2 )
        {
          v24 = v30;
          *(_BYTE *)(a2 + 4) = 1;
          *(_DWORD *)a2 = v24;
        }
      }
      v14 = v32;
    }
    if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
    {
      v18 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
      v19 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned int)(v19 - 42) > 1 )
      {
LABEL_26:
        if ( (_BYTE)v19 == 46 )
        {
          while ( 1 )
          {
            v21 = sub_B10DA0(v18, a2);
            if ( !v21 )
              break;
            v22 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 80LL);
            v23 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v22 & 4) != 0 )
              v20 = v23[1];
            else
              v20 = *v23;
            v14 = v20;
            v18 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
          }
          v26 = *(_QWORD *)(sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                 & 0xFFFFFFFFFFFFFFF0LL))
                          + 40);
          if ( (v26 & 7) == 0 )
          {
            v27 = v26 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v27 )
            {
              v28 = *(_DWORD **)(v27 + 16);
              if ( *v28 == 12 && !memcmp(v28 + 4, "__hot_cold_t", 0xCu) )
                sub_777D40((__int64)&v33);
            }
          }
        }
        return (unsigned __int16)(*(_DWORD *)(v31 + 20) >> 6) == v30;
      }
      v32 = sub_B167E0(v18, a2);
      if ( ((*(_DWORD *)&byte_8[v32 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)v32) & 7) == 1 )
      {
        if ( (unsigned __int8)sub_B0E990(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          if ( a3 )
            *a3 = 1;
          sub_777D40((__int64)&v33);
        }
        v14 = v32;
        if ( (v32 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
          return (unsigned __int16)(*(_DWORD *)(v31 + 20) >> 6) == v30;
        v18 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        goto LABEL_26;
      }
      return 0;
    }
    return (unsigned __int16)(*(_DWORD *)(v31 + 20) >> 6) == v30;
  }
  return result;
}

