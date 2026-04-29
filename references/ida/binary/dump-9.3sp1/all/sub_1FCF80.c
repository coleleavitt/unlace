__int64 __fastcall sub_1FCF80(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  bool v15; // zf
  __int64 v16; // r12
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __int32 v19; // eax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdx
  int v22; // r12d
  __int64 v23; // r14
  _BYTE *v24; // rsi
  __int64 *v25; // r12
  __int64 v26; // rdx
  __int64 *v27; // rdi
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r9d
  __m128i v35; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+18h] [rbp-A0h]
  __int64 v37[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v38; // [rsp+30h] [rbp-88h] BYREF
  __m128i v39; // [rsp+38h] [rbp-80h]
  __int64 v40[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v41; // [rsp+60h] [rbp-58h] BYREF
  __m128i v42; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v36 = a2;
  v43 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 16) = a2;
  v4 = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 104) = v4;
  v5 = *(unsigned __int64 **)(a1 + 56);
  if ( v5 )
  {
    v6 = *v5;
    if ( !*(_QWORD *)(a1 + 64) )
    {
      *v5 = *v5 & 3 | (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL;
      v7 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(v7 + 8) = v7;
      *(_QWORD *)(v7 + 16) = v7;
      **(_QWORD **)(a1 + 56) &= ~1uLL;
      **(_QWORD **)(a1 + 56) |= 2uLL;
      v8 = *(_QWORD *)(a1 + 16);
      goto LABEL_4;
    }
    v25 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v26 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v26 & 2) != 0 )
      goto LABEL_36;
    v27 = (__int64 *)v25[1];
    if ( (*(_BYTE *)v27 & 2) != 0 )
    {
      v28 = (__int64 *)v25[2];
      if ( (*(_BYTE *)v28 & 2) != 0 )
        goto LABEL_52;
    }
    else
    {
      sub_1FB8D0(v27);
      v28 = (__int64 *)v25[2];
      if ( (*(_BYTE *)v28 & 2) != 0 )
        goto LABEL_32;
    }
    sub_1FB8D0(v28);
LABEL_32:
    v26 = *v25;
    if ( (*v25 & 2) != 0 )
    {
LABEL_33:
      if ( v6 > 3 )
        qfree(v6 & 0xFFFFFFFFFFFFFFFCLL);
      v5 = *(unsigned __int64 **)(a1 + 56);
      v6 = *v5;
LABEL_36:
      *v5 = v6 & 3 | (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL;
      v29 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(v29 + 8) = v29;
      *(_QWORD *)(v29 + 16) = v29;
      **(_QWORD **)(a1 + 56) &= ~1uLL;
      **(_QWORD **)(a1 + 56) |= 2uLL;
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 64) = 0;
      goto LABEL_4;
    }
LABEL_52:
    *v25 = v26 | 2;
    goto LABEL_33;
  }
  *(_QWORD *)(a1 + 64) = 0;
  v8 = a2;
LABEL_4:
  v9 = *(_QWORD **)(a1 + 96);
  v10 = *(int *)(v8 + 72);
  if ( v10 >= v9[1] )
    sub_1FB150();
  v11 = (__int64 *)(*v9 + 80 * v10);
  v12 = sub_1F1F00(v11);
  if ( !v12 )
    return 0;
  while ( *(char *)(v12 + 4) < 0 )
  {
LABEL_41:
    v12 = *(_QWORD *)(v11[1] + 8);
    v11[1] = v12;
    if ( !v12 )
      return 0;
  }
  *(_QWORD *)(a1 + 24) = v12;
  v39 = 0;
  v15 = *(_BYTE *)(v12 + 32) == 2;
  v37[0] = 0;
  v37[1] = 0;
  v38 = 0;
  if ( !v15 )
  {
    if ( *(_BYTE *)(v12 + 48) != 2 )
      goto LABEL_9;
LABEL_46:
    v35.m128i_i64[0] = (__int64)v37;
    if ( sub_125B60((unsigned __int8 *)(v12 + 32), v12 + 64, 0) )
      goto LABEL_13;
    goto LABEL_9;
  }
  v35.m128i_i64[0] = (__int64)v37;
  if ( sub_125B60((unsigned __int8 *)(v12 + 48), v12 + 64, 0) )
    goto LABEL_13;
  if ( *(_BYTE *)(v12 + 48) == 2 )
    goto LABEL_46;
LABEL_9:
  v35.m128i_i64[0] = (__int64)v37;
  sub_127A20((__int64)v40, v36, v12, 129, v13, v14);
  v35.m128i_i64[0] = (__int64)v37;
  sub_648D0(v37, v40);
  v16 = v41;
  v41 = 0;
  v17 = _mm_loadu_si128(&v42);
  v42 = 0;
  if ( v38 )
  {
    v35 = v17;
    v39.m128i_i64[0] = 0;
    qfree(v38);
    v18 = _mm_load_si128(&v35);
    v38 = v16;
    v39 = v18;
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree(v41);
    }
  }
  else
  {
    v38 = v16;
    v39 = v17;
  }
  qfree(v40[0]);
LABEL_13:
  *(_BYTE *)(a1 + 108) = 0;
  v35.m128i_i64[0] = (__int64)v37;
  v19 = sub_11E900((_BYTE *)v12, a1);
  if ( !v19 )
  {
    v35.m128i_i64[0] = (__int64)v37;
    if ( !(unsigned __int8)sub_64880(v37) || v39.m128i_i64[0] )
    {
      v20 = *(int *)(a1 + 104);
      v21 = *(_QWORD **)(a1 + 48);
      v22 = *(_DWORD *)(a1 + 104);
      if ( v20 < v21[1] )
      {
        do
        {
          v23 = *v21 + 104 * v20;
          if ( (*(_BYTE *)(v23 + 25) & 0x10) == 0 )
          {
            v24 = *(_BYTE **)(a1 + 8);
            if ( (*v24 & 1) == 0 || *(_QWORD *)(v23 + 16) != *(_QWORD *)(v12 + 24) + 1LL )
            {
              v42 = 0;
              v40[0] = 0;
              v40[1] = 0;
              v41 = 0;
              sub_1C3380(v23, (__int64)v24, (__int64)v40, 0);
              if ( (unsigned __int8)sub_64820(v40, v35.m128i_i64[0]) && (unsigned __int8)sub_317F40(&v38, &v41) )
                *(_DWORD *)(v23 + 24) |= 0x1000u;
              if ( v41 )
              {
                v42.m128i_i64[0] = 0;
                qfree(v41);
              }
              qfree(v40[0]);
              v21 = *(_QWORD **)(a1 + 48);
            }
          }
          v20 = ++v22;
        }
        while ( (unsigned __int64)v22 < v21[1] );
      }
    }
    *(_BYTE *)(a1 + 108) = 1;
    v19 = sub_11E900((_BYTE *)v12, a1);
    if ( !v19 )
    {
      sub_1F2060(v11, v12, v30, v31, v32, v33);
      if ( v38 )
      {
        v39.m128i_i64[0] = 0;
        qfree(v38);
      }
      qfree(v37[0]);
      goto LABEL_41;
    }
  }
  if ( v38 )
  {
    v35.m128i_i32[0] = v19;
    v39.m128i_i64[0] = 0;
    qfree(v38);
    v19 = v35.m128i_i32[0];
  }
  v35.m128i_i32[0] = v19;
  qfree(v37[0]);
  return v35.m128i_u32[0];
}
