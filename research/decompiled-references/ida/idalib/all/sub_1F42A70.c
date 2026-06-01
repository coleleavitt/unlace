__int64 __fastcall sub_1F42A70(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // edi
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // r10d
  int v25; // ebx
  __int64 v26; // r8
  int v27; // edi
  bool v28; // zf
  int v29; // esi
  _QWORD *v30; // [rsp+10h] [rbp-48h] BYREF
  int v31; // [rsp+18h] [rbp-40h]
  __m128 v32[3]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD **)(a2 + 128);
  if ( !v2 )
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
    v6 = v5 == sub_A01140 ? sub_B70A60(a2) : v5(a2);
    v2 = *(_QWORD **)(v6 + 128);
    if ( !v2 )
    {
      v9 = *(_QWORD **)(a1 + 144);
      v10 = v9[294];
      v9[304] += 104LL;
      v11 = (_QWORD *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v9[295] >= (unsigned __int64)(v11 + 13) && v10 )
        v9[294] = v11 + 13;
      else
        v11 = (_QWORD *)sub_986170((__int64)(v9 + 294), 104, 104, 3, v7, v8);
      sub_B96900(v11, a2);
      v12 = *(_QWORD *)a2;
      *(_BYTE *)(a2 + 74) |= 1u;
      *(_QWORD *)(a2 + 128) = v11;
      v13 = *(__int64 (__fastcall **)(__int64))(v12 + 32);
      if ( v13 == sub_A01140 )
        v14 = sub_B70A60(a2);
      else
        v14 = v13(a2);
      *(_QWORD *)(v14 + 128) = v11;
      v18 = *(_DWORD *)(a1 + 3240);
      v19 = a1 + 3224;
      v30 = v11;
      v31 = 1;
      if ( v18 )
      {
        v17 = v18 - 1;
        v20 = *(_QWORD *)(a1 + 3224);
        v21 = v17 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
        v22 = v20 + 16LL * v21;
        v23 = *(_QWORD *)v22;
        if ( v11 == *(_QWORD **)v22 )
        {
LABEL_13:
          sub_1F21DC0(v32, (__int64 *)v22, (__int64 *)(v20 + 16LL * v18), v19, 1);
LABEL_14:
          v2 = v11;
          return v2[11];
        }
        v24 = 1;
        if ( v23 != -4096 )
        {
          while ( 1 )
          {
            if ( v23 == -8192 && !v2 )
              v2 = (_QWORD *)v22;
            v21 = v17 & (v24 + v21);
            v22 = v20 + 16LL * v21;
            v23 = *(_QWORD *)v22;
            if ( v11 == *(_QWORD **)v22 )
              goto LABEL_13;
            if ( v23 == -4096 )
            {
              if ( v2 )
                v22 = (unsigned __int64)v2;
              break;
            }
            ++v24;
          }
        }
        v25 = *(_DWORD *)(a1 + 3232);
        v32[0].m128_u64[0] = v22;
        v15 = (unsigned int)(v25 + 1);
        v16 = (unsigned int)(4 * v15);
        if ( (unsigned int)v16 < 3 * v18 )
        {
          v16 = v18 >> 3;
          if ( v18 - *(_DWORD *)(a1 + 3236) - (unsigned int)v15 > (unsigned int)v16 )
          {
            v26 = (__int64)v11;
            v27 = 1;
LABEL_22:
            v28 = *(_QWORD *)v22 == -4096;
            *(_DWORD *)(a1 + 3232) = v15;
            if ( !v28 )
              --*(_DWORD *)(a1 + 3236);
            *(_QWORD *)v22 = v26;
            *(_DWORD *)(v22 + 8) = v27;
            sub_1F21DC0(v32, (__int64 *)v22, (__int64 *)(*(_QWORD *)(a1 + 3224) + 16LL * v18), v19, 1);
            goto LABEL_14;
          }
          v29 = v18;
LABEL_27:
          sub_1F3BB70((__int64 *)(a1 + 3224), v29, v15, v19, v16, v17);
          sub_1F33360((__int64 *)(a1 + 3224), (__int64 *)&v30, v32);
          v26 = (__int64)v30;
          v27 = v31;
          v18 = *(_DWORD *)(a1 + 3240);
          LODWORD(v15) = *(_DWORD *)(a1 + 3232) + 1;
          v22 = v32[0].m128_u64[0];
          v19 = a1 + 3224;
          goto LABEL_22;
        }
      }
      else
      {
        v32[0].m128_u64[0] = 0;
      }
      v29 = 2 * v18;
      goto LABEL_27;
    }
  }
  return v2[11];
}
