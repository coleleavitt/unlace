void __fastcall sub_AB44E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 *v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned int v23; // ecx
  __int64 *v24; // rsi
  __int64 v25; // r8
  unsigned int v26; // r9d
  __int64 v27; // r8
  int v28; // r10d
  __int64 *v29; // r11
  __int64 v30; // r9
  __int64 v31; // r8
  int v32; // esi
  int v33; // r10d
  __int64 v34; // r8
  unsigned int v35; // r9d
  int i; // r11d
  __int64 *v37; // r15
  int j; // r11d
  __int64 *v39; // [rsp+8h] [rbp-70h]
  __int64 *v40; // [rsp+8h] [rbp-70h]
  __m128 v41; // [rsp+10h] [rbp-68h] BYREF
  __m128 v42; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v43; // [rsp+30h] [rbp-48h]

  v3 = a1 + 1752;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v5 = *(unsigned int *)(a1 + 1768);
  v6 = *(_QWORD *)(a1 + 1752);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
    v8 = (__int64 *)(v6 + 16LL * v7);
    v9 = *v8;
    if ( v4 == *v8 )
    {
LABEL_3:
      sub_A85010(&v42, v8, (_QWORD *)(16 * v5 + v6), v3, 1);
      v10 = v42.m128_u64[0];
      goto LABEL_4;
    }
    v32 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v33 = v32 + 1;
        v7 = (v5 - 1) & (v32 + v7);
        v8 = (__int64 *)(v6 + 16LL * v7);
        v34 = *v8;
        if ( v4 == *v8 )
          goto LABEL_3;
        v32 = v33;
      }
      while ( v34 != -4096 );
    }
  }
  sub_A85010(&v42, (_QWORD *)(v6 + 16LL * (unsigned int)v5), (_QWORD *)(v6 + 16LL * (unsigned int)v5), v3, 1);
  v10 = v42.m128_u64[0];
LABEL_4:
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 1752) + 16LL * *(unsigned int *)(a1 + 1768));
  sub_A85010(&v42, v11, v11, v3, 1);
  if ( v10 == v42.m128_u64[0] )
    return;
  v42 = 0u;
  v16 = (char *)(v10 + 8);
  v43 = 0;
  v17 = *(_QWORD *)(v10 + 8);
  if ( (v17 & 4) != 0 )
  {
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    v19 = *(__int64 **)v18;
    v20 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
    goto LABEL_7;
  }
  if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v20 = v10 + 16;
    v19 = (__int64 *)v16;
LABEL_7:
    if ( (__int64 *)v20 != v19 )
    {
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        if ( !(_DWORD)v21 )
          goto LABEL_13;
        v12 = *v19;
        v23 = (v21 - 1) & (((unsigned int)*v19 >> 9) ^ ((unsigned int)*v19 >> 4));
        v24 = (__int64 *)(v22 + 8LL * v23);
        v25 = *v24;
        if ( *v19 == *v24 )
        {
LABEL_10:
          sub_A8BB00(&v41, v24, (_QWORD *)(v22 + 8 * v21), (__int64)&v42, 1);
          *v19++ = 0;
          if ( v19 == (__int64 *)v20 )
            break;
          goto LABEL_11;
        }
        v28 = 1;
        v29 = nullptr;
        if ( v25 != -4096 )
        {
          while ( 1 )
          {
            if ( v25 == -8192 && !v29 )
              v29 = v24;
            v23 = (v21 - 1) & (v28 + v23);
            v24 = (__int64 *)(v22 + 8LL * v23);
            v25 = *v24;
            if ( v12 == *v24 )
              goto LABEL_10;
            if ( v25 == -4096 )
              break;
            ++v28;
          }
          if ( v29 )
            v24 = v29;
        }
        v14 = (unsigned int)(3 * v21);
        v13 = (unsigned int)(v42.m128_i32[2] + 1);
        v15 = (unsigned int)(4 * v13);
        if ( (unsigned int)v15 < (unsigned int)v14 )
        {
          v30 = (unsigned int)(v21 - (v13 + v42.m128_i32[3]));
          v31 = (unsigned int)v21 >> 3;
          if ( (unsigned int)v30 > (unsigned int)v31 )
          {
LABEL_25:
            v27 = *v24;
            goto LABEL_15;
          }
          sub_AB4280((__int64)&v42, v21, v12, v13, v31, v30);
          v21 = v43;
          if ( !v43 )
          {
LABEL_62:
            ++v42.m128_i32[2];
            BUG();
          }
          v12 = *v19;
          v22 = v42.m128_u64[0];
          v35 = (v43 - 1) & (((unsigned int)*v19 >> 9) ^ ((unsigned int)*v19 >> 4));
          v24 = (__int64 *)(v42.m128_u64[0] + 8LL * v35);
          v27 = *v24;
          LODWORD(v13) = v42.m128_i32[2] + 1;
          if ( *v24 == *v19 )
          {
            v27 = *v19;
            goto LABEL_15;
          }
          if ( v27 == -4096 )
          {
LABEL_34:
            v42.m128_i32[2] = v13;
            goto LABEL_17;
          }
          v39 = nullptr;
          for ( i = 1; ; ++i )
          {
            if ( v27 != -8192 || v39 )
              v24 = v39;
            v35 = (v43 - 1) & (i + v35);
            v37 = (__int64 *)(v42.m128_u64[0] + 8LL * v35);
            v27 = *v37;
            if ( v12 == *v37 )
              break;
            if ( v27 == -4096 )
            {
LABEL_55:
              if ( v24 )
                goto LABEL_25;
              v24 = v37;
              goto LABEL_34;
            }
            v39 = v24;
            v24 = (__int64 *)(v42.m128_u64[0] + 8LL * v35);
          }
        }
        else
        {
LABEL_13:
          sub_AB4280((__int64)&v42, 2 * v21, v12, v13, v14, v15);
          v21 = v43;
          if ( !v43 )
            goto LABEL_62;
          v12 = *v19;
          v22 = v42.m128_u64[0];
          v26 = (v43 - 1) & (((unsigned int)*v19 >> 9) ^ ((unsigned int)*v19 >> 4));
          v24 = (__int64 *)(v42.m128_u64[0] + 8LL * v26);
          v27 = *v24;
          LODWORD(v13) = v42.m128_i32[2] + 1;
          if ( *v24 == *v19 )
            goto LABEL_15;
          if ( v27 == -4096 )
            goto LABEL_34;
          v40 = nullptr;
          for ( j = 1; ; ++j )
          {
            if ( v40 || v27 != -8192 )
              v24 = v40;
            v26 = (v43 - 1) & (j + v26);
            v37 = (__int64 *)(v42.m128_u64[0] + 8LL * v26);
            v27 = *v37;
            if ( v12 == *v37 )
              break;
            if ( v27 == -4096 )
              goto LABEL_55;
            v40 = v24;
            v24 = (__int64 *)(v42.m128_u64[0] + 8LL * v26);
          }
        }
        v24 = v37;
LABEL_15:
        v42.m128_i32[2] = v13;
        if ( v27 != -4096 )
          --v42.m128_i32[3];
LABEL_17:
        *v24 = v12;
        ++v19;
        sub_A8BB00(&v41, v24, (_QWORD *)(v22 + 8 * v21), (__int64)&v42, 1);
        if ( v19 == (__int64 *)v20 )
          break;
LABEL_11:
        v22 = v42.m128_u64[0];
        v21 = v43;
      }
    }
  }
  sub_A6A4F0(v16);
  operator delete(v42.m128_u64[0], 8LL * v43, 8);
}
