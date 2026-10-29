__int64 __fastcall sub_1A3B130(_QWORD *a1, __int64 a2)
{
  __int16 v2; // ax
  __int16 v3; // r13
  _QWORD *v5; // r12
  __m128 *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 *v13; // rsi
  __int64 v14; // r10
  __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 *v18; // r15
  __int64 *v20; // r14
  __int64 v21; // rbp
  unsigned __int8 v22; // r15
  __int64 v23; // rax
  char v24; // cl
  unsigned __int8 v25; // dl
  unsigned int v26; // r8d
  __int64 v28; // rax
  int v29; // esi
  int v30; // r10d
  __int64 v31; // [rsp+8h] [rbp-70h]
  _QWORD *v32; // [rsp+10h] [rbp-68h]
  __int16 v34; // [rsp+22h] [rbp-56h]
  int v35; // [rsp+24h] [rbp-54h]
  __m128 *v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_WORD *)(a2 + 30);
  v32 = (_QWORD *)*a1;
  v3 = v2 & 0x3FFF;
  if ( a1 != (_QWORD *)*a1 )
  {
    v5 = a1;
    v34 = v2 & 0x68;
    v6 = (__m128 *)&v37;
    while ( 1 )
    {
      v7 = v5[1];
      v8 = *(_QWORD *)(a2 + 40);
      v9 = *(unsigned int *)(v7 + 32);
      v10 = v7 + 16;
      v11 = *(_QWORD *)(v7 + 16);
      if ( (_DWORD)v9 )
      {
        v12 = (v9 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
        v13 = (__int64 *)(v11 + 16LL * v12);
        v14 = *v13;
        if ( v8 == *v13 )
          goto LABEL_5;
        v29 = 1;
        if ( v14 != -1 )
          break;
      }
LABEL_42:
      sub_1A3B0D0(v6, (__int64 *)(v11 + 16LL * (unsigned int)v9), (__int64 *)(v11 + 16LL * (unsigned int)v9), v10, 1);
      v15 = v37;
LABEL_6:
      v16 = v5[1];
      sub_1A3B0D0(
        v6,
        (__int64 *)(*(_QWORD *)(v16 + 16) + 16LL * *(unsigned int *)(v16 + 32)),
        (__int64 *)(*(_QWORD *)(v16 + 16) + 16LL * *(unsigned int *)(v16 + 32)),
        v16 + 16,
        1);
      if ( v15 == v37 )
        goto LABEL_9;
      v17 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v15 + 8) & 4) != 0 )
      {
        v18 = *(__int64 **)v17;
        v31 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
      }
      else
      {
        v18 = (__int64 *)(v15 + 8);
        if ( !v17 )
          goto LABEL_9;
        v31 = v15 + 16;
      }
      if ( (__int64 *)v31 != v18 )
      {
        v36 = v6;
        v20 = v18;
        while ( 1 )
        {
          while ( 1 )
          {
            v21 = *v20;
            if ( (*(_WORD *)(*v20 + 30) & 0x3EFF) != 6 || !v34 )
              break;
            if ( (__int64 *)v31 == ++v20 )
            {
LABEL_33:
              v6 = v36;
              goto LABEL_9;
            }
          }
          if ( ((*(_BYTE *)(*v20 + 30) | (unsigned __int8)v3) & 0x40) == 0 || v3 == (*(_WORD *)(*v20 + 30) & 0x3FFF) )
          {
            v22 = *(_BYTE *)(v21 + 28) & 0x7F;
            if ( (unsigned int)v22 - 53 > 1 && ((v22 + 52) & 0x7Fu) > 1 )
            {
              v24 = *(_BYTE *)(v21 + 28) & 0x7F;
              v23 = *v20;
            }
            else
            {
              v23 = sub_B72ED0(*v20);
              v24 = *(_BYTE *)(v23 + 28) & 0x7F;
            }
            v25 = *(_BYTE *)(a2 + 28) & 0x7F;
            v26 = v25 - 53;
            if ( ((v24 + 94) & 0x7Fu) > 5 && (*(_BYTE *)(v23 + 28) & 0x7F) != 0x47 )
            {
LABEL_22:
              if ( v22 != 81 || v26 > 1 || v21 != sub_B9A040(a2) )
                return v21;
              goto LABEL_32;
            }
            if ( ((v25 + 52) & 0x7Fu) <= 1 || (v28 = a2, v26 <= 1) )
            {
              v35 = v25 - 53;
              v28 = sub_B72ED0(a2);
              v26 = v35;
              v25 = *(_BYTE *)(v28 + 28) & 0x7F;
            }
            if ( ((v25 + 94) & 0x7Fu) > 5 )
            {
              if ( (*(_BYTE *)(v28 + 28) & 0x7F) != 0x47 || v5 != a1 )
                goto LABEL_22;
            }
            else if ( v5 != a1 )
            {
              goto LABEL_22;
            }
          }
LABEL_32:
          if ( (__int64 *)v31 == ++v20 )
            goto LABEL_33;
        }
      }
LABEL_9:
      v5 = (_QWORD *)v5[1];
      if ( v32 == v5 )
        return 0;
    }
    while ( 1 )
    {
      v30 = v29 + 1;
      v12 = (v9 - 1) & (v12 + v29);
      v13 = (__int64 *)(v11 + 16LL * v12);
      if ( v8 == *v13 )
        break;
      if ( *v13 == -1 )
        goto LABEL_42;
      v29 = v30;
    }
LABEL_5:
    sub_1A3B0D0(v6, v13, (__int64 *)(16 * v9 + v11), v10, 1);
    v15 = v37;
    goto LABEL_6;
  }
  return 0;
}
