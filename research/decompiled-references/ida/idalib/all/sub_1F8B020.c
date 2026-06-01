__int64 __fastcall sub_1F8B020(__int64 a1, __int64 a2)
{
  __int64 *v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rdx
  int v13; // esi
  int v14; // r9d
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r12
  int v19; // ebp
  unsigned __int64 v20; // r15
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  unsigned __int8 v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned int v27; // esi
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // edx
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 *v36; // rsi
  __int64 v37; // rdi
  int v38; // esi
  int v39; // r9d
  __int64 v40; // rdi
  int v41; // r11d
  int v42; // edi
  bool v43; // zf
  __int64 v44; // [rsp+8h] [rbp-70h]
  int v45; // [rsp+1Ch] [rbp-5Ch]
  unsigned __int64 v46; // [rsp+28h] [rbp-50h] BYREF
  __m128 v47[4]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (__int64 *)(a1 + 1184);
  v3 = a2;
  v4 = a1;
  v5 = *(unsigned int *)(a1 + 1200);
  v6 = *(_QWORD *)(a1 + 1184);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (__int64 *)(v6 + 16LL * v7);
    v9 = *v8;
    if ( v3 == *v8 )
    {
LABEL_3:
      sub_1F7A030(v47, v8, (_QWORD *)(16 * v5 + v6), (__int64)v2, 1);
      v10 = v47[0].m128_u64[0];
      goto LABEL_4;
    }
    v13 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v14 = v13 + 1;
        v7 = (v5 - 1) & (v13 + v7);
        v8 = (__int64 *)(v6 + 16LL * v7);
        v15 = *v8;
        if ( v3 == *v8 )
          goto LABEL_3;
        v13 = v14;
      }
      while ( v15 != -4096 );
    }
  }
  sub_1F7A030(v47, (_QWORD *)(v6 + 16LL * (unsigned int)v5), (_QWORD *)(v6 + 16LL * (unsigned int)v5), (__int64)v2, 1);
  v10 = v47[0].m128_u64[0];
LABEL_4:
  v11 = (_QWORD *)(*(_QWORD *)(v4 + 1184) + 16LL * *(unsigned int *)(v4 + 1200));
  sub_1F7A030(v47, v11, v11, (__int64)v2, 1);
  if ( v47[0].m128_u64[0] == v10 )
  {
    v16 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
      v16 = *(_QWORD *)(v16 + 8);
    v17 = sub_B8E970(v16);
    if ( v17 )
    {
      v44 = v3;
      v18 = v4;
      v19 = 0;
      v20 = v17;
      while ( 1 )
      {
        v23 = *(_BYTE *)(v20 + 28) & 0x7F;
        if ( v23 == 86 )
        {
          v21 = *(_QWORD *)(v20 + 40);
          if ( !v21 )
            goto LABEL_23;
          if ( (v21 & 4) != 0 )
            goto LABEL_23;
          v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v22 )
            goto LABEL_23;
          v23 = *(_BYTE *)(v22 + 28) & 0x7F;
        }
        else
        {
          v22 = v20;
        }
        if ( (unsigned int)v23 - 18 <= 0x3F && sub_1EA74C0(v22) )
          break;
LABEL_23:
        v20 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v20 )
        {
          v4 = v18;
          v3 = v44;
          goto LABEL_27;
        }
      }
      v27 = *(_DWORD *)(v18 + 1200);
      v28 = (unsigned int)(v19 + 1);
      v46 = v22;
      if ( v27 )
      {
        v29 = *(_QWORD *)(v18 + 1184);
        v30 = (v27 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
        v31 = v29 + 16LL * v30;
        v32 = *(_QWORD *)v31;
        if ( *(_QWORD *)v31 == v22 )
        {
LABEL_22:
          *(_DWORD *)(v31 + 8) = v19;
          v19 = v28;
          goto LABEL_23;
        }
        v41 = 1;
        v25 = 0;
        if ( v32 != -4096 )
        {
          while ( 1 )
          {
            if ( v32 == -8192 && !v25 )
              v25 = v31;
            v30 = (v27 - 1) & (v41 + v30);
            v31 = v29 + 16LL * v30;
            v32 = *(_QWORD *)v31;
            if ( *(_QWORD *)v31 == v22 )
              goto LABEL_22;
            if ( v32 == -4096 )
            {
              if ( v25 )
                v31 = v25;
              break;
            }
            ++v41;
          }
        }
        v42 = *(_DWORD *)(v18 + 1192);
        v47[0].m128_u64[0] = v31;
        v24 = (unsigned int)(v42 + 1);
        v26 = (unsigned int)(4 * v24);
        if ( (unsigned int)v26 < 3 * v27 )
        {
          v26 = v27 >> 3;
          if ( v27 - *(_DWORD *)(v18 + 1196) - (unsigned int)v24 > (unsigned int)v26 )
          {
LABEL_37:
            v43 = *(_QWORD *)v31 == -4096;
            *(_DWORD *)(v18 + 1192) = v24;
            if ( !v43 )
              --*(_DWORD *)(v18 + 1196);
            *(_QWORD *)v31 = v22;
            *(_DWORD *)(v31 + 8) = 0;
            goto LABEL_22;
          }
          v45 = v19 + 1;
LABEL_42:
          sub_1F8AE20(v2, v27, v24, v25, v28, v26);
          sub_1F74D20(v2, (__int64 *)&v46, v47);
          v22 = v46;
          LODWORD(v28) = v45;
          LODWORD(v24) = *(_DWORD *)(v18 + 1192) + 1;
          v31 = v47[0].m128_u64[0];
          goto LABEL_37;
        }
      }
      else
      {
        v47[0].m128_u64[0] = 0;
      }
      v45 = v19 + 1;
      v27 *= 2;
      goto LABEL_42;
    }
LABEL_27:
    v33 = *(unsigned int *)(v4 + 1200);
    v34 = *(_QWORD *)(v4 + 1184);
    if ( (_DWORD)v33 )
    {
      v35 = (v33 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
      v36 = (__int64 *)(v34 + 16LL * v35);
      v37 = *v36;
      if ( v3 == *v36 )
      {
LABEL_29:
        sub_1F7A030(v47, v36, (_QWORD *)(16 * v33 + v34), (__int64)v2, 1);
        v10 = v47[0].m128_u64[0];
        return *(unsigned int *)(v10 + 8);
      }
      v38 = 1;
      if ( v37 != -4096 )
      {
        do
        {
          v39 = v38 + 1;
          v35 = (v33 - 1) & (v38 + v35);
          v36 = (__int64 *)(v34 + 16LL * v35);
          v40 = *v36;
          if ( v3 == *v36 )
            goto LABEL_29;
          v38 = v39;
        }
        while ( v40 != -4096 );
      }
    }
    sub_1F7A030(
      v47,
      (_QWORD *)(v34 + 16LL * (unsigned int)v33),
      (_QWORD *)(v34 + 16LL * (unsigned int)v33),
      (__int64)v2,
      1);
    v10 = v47[0].m128_u64[0];
  }
  return *(unsigned int *)(v10 + 8);
}
