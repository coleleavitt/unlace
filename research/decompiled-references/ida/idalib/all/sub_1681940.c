__int64 __fastcall sub_1681940(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __m128i a7,
        double a8,
        __int64 a9)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // al
  int v17; // eax
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // dl
  unsigned __int8 v24; // al
  __int64 v25; // rdx
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  const __m128i *v28; // rax
  const __m128i *v29; // r15
  __int64 result; // rax
  __int64 v31; // r12
  unsigned __int8 v32; // dl
  unsigned __int64 v33; // rdi
  unsigned __int8 v34; // cl
  const char *v35; // rax
  size_t v36; // rdx
  size_t v37; // r12
  const char *v38; // r13
  _QWORD v39[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int8 v41; // [rsp+1Bh] [rbp-9Dh]
  int v42; // [rsp+1Ch] [rbp-9Ch] BYREF
  __int64 v43; // [rsp+28h] [rbp-90h] BYREF
  void *v44[2]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v45[16]; // [rsp+40h] [rbp-78h] BYREF
  int *v46; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v47; // [rsp+58h] [rbp-60h]
  unsigned int *v48; // [rsp+60h] [rbp-58h]
  __int64 *v49; // [rsp+68h] [rbp-50h]
  __int64 *v50; // [rsp+70h] [rbp-48h]

  v10 = (__int64)a6;
  v11 = *a6;
  v39[0] = a3;
  v42 = a2;
  v39[1] = a4;
  v40 = a5;
  v12 = (*(__int64 (__fastcall **)(__int64 *))(v11 + 16))(a6);
  v15 = a1[29];
  if ( v12 < 0 && (*(_BYTE *)(v15 + 1) & 8) != 0 && (*(_BYTE *)(a9 + 28) & 0x7F) == 0x40 )
  {
    v35 = sub_13DC120(v12, *(_QWORD *)(a1[30] + 88LL), *(_QWORD *)(a1[30] + 56LL), a7, a8, a1[30], v13, v14);
    v37 = v36;
    v38 = v35;
    if ( j__strlen("CF_OPTIONS") == v36 )
    {
      if ( !v37 || !memcmp(v38, "CF_OPTIONS", v37) )
        return 0;
      if ( v37 != j__strlen("OBJC_OPTIONS") )
      {
        if ( j__strlen("SWIFT_OPTIONS") == v37 )
          goto LABEL_59;
LABEL_74:
        if ( j__strlen("NS_OPTIONS") != v37 )
        {
LABEL_62:
          v15 = a1[29];
          goto LABEL_2;
        }
        if ( !v37 )
          return 0;
LABEL_61:
        if ( !memcmp(v38, "NS_OPTIONS", v37) )
          return 0;
        goto LABEL_62;
      }
    }
    else
    {
      if ( j__strlen("OBJC_OPTIONS") != v37 )
      {
        if ( j__strlen("SWIFT_OPTIONS") != v37 )
          goto LABEL_74;
        if ( !v37 )
          return 0;
LABEL_59:
        if ( !memcmp(v38, "SWIFT_OPTIONS", v37) )
          return 0;
        if ( j__strlen("NS_OPTIONS") != v37 )
          goto LABEL_62;
        goto LABEL_61;
      }
      if ( !v37 )
        return 0;
    }
    if ( !memcmp(v38, "OBJC_OPTIONS", v37) )
      return 0;
    if ( v37 != j__strlen("SWIFT_OPTIONS") )
      goto LABEL_74;
    goto LABEL_59;
  }
LABEL_2:
  v16 = *(_BYTE *)(v15 + 89);
  if ( (v16 & 1) != 0 && ((v16 & 2) == 0 || v40 && *(_DWORD *)(*(_QWORD *)(a1[31] + 17448LL) + 264LL) == 39) )
    return 0;
  v17 = v42;
  if ( v42 == 2 )
  {
    v31 = a9;
    v32 = *(_BYTE *)(a9 + 28) & 0x7F;
    if ( (unsigned int)v32 - 40 <= 6 )
    {
      if ( v32 == 46 || v32 == 40 )
      {
        v33 = *(_QWORD *)(a9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a9 + 16) & 4) != 0 )
          v33 = *(_QWORD *)(v33 + 8);
        if ( v33 )
        {
          v34 = *(_BYTE *)(sub_B8EAA0(v33) + 8) & 0x7F;
          if ( v34 > 0x12u )
          {
            if ( ((v34 + 94) & 0x7Fu) <= 5 )
              goto LABEL_37;
          }
          else if ( ((1LL << v34) & 0x40182) != 0 )
          {
            goto LABEL_37;
          }
          v32 = *(_BYTE *)(v31 + 28) & 0x7F;
        }
      }
      if ( v32 != 43 )
      {
LABEL_69:
        v17 = v42;
        goto LABEL_4;
      }
LABEL_37:
      if ( (unsigned int)sub_B90D60(v31, nullptr, nullptr, 0, 0, v14) == 2 )
        return 1;
      goto LABEL_69;
    }
  }
LABEL_4:
  v47 = a1;
  v46 = &v42;
  v48 = (unsigned int *)v39;
  v18 = &v40;
  v19 = &a9;
  v49 = &v40;
  v50 = &a9;
  if ( v17 == 1 )
    goto LABEL_19;
LABEL_5:
  if ( v17 == 2 )
  {
    if ( (unsigned int)sub_B90D60(v10, nullptr, nullptr, 0, 0, v14) != 2 )
      goto LABEL_7;
    return 0;
  }
  if ( v17 != 3
    || (*(_BYTE *)(*v50 + 28) & 0x7F) != 0x12
    || (*(_BYTE *)(v10 + 28) & 0x7Fu) - 21 > 1
    || sub_BA85D0(*v50) != *(_QWORD *)(v10 + 88) )
  {
    while ( 1 )
    {
LABEL_7:
      if ( (unsigned int)sub_B90D60(v10, nullptr, nullptr, 0, 0, v14) == 3 )
        return 0;
      v23 = *(_BYTE *)(v10 + 28);
      v24 = v23 & 0x7F;
      if ( (v23 & 0x7F) == 0x12 )
      {
        if ( (*(_BYTE *)(v10 + 58) & 2) != 0 )
          goto LABEL_10;
        v43 = *(_QWORD *)(v10 + 40);
        sub_FDEB80((__int64)v44, &v43);
        if ( !sub_9B4AA0((__int64)v44, "load") )
        {
          result = 1;
          if ( v44[0] != v45 )
          {
            v41 = 1;
            operator delete(v44[0]);
            return v41;
          }
          return result;
        }
        if ( v44[0] == v45 )
        {
          v23 = *(_BYTE *)(v10 + 28);
LABEL_10:
          v24 = v23 & 0x7F;
          goto LABEL_11;
        }
        operator delete(v44[0]);
        v24 = *(_BYTE *)(v10 + 28) & 0x7F;
      }
LABEL_11:
      v25 = (unsigned int)v24 - 21;
      if ( (unsigned int)v25 <= 1 || v24 == 23 )
      {
        v26 = *(_QWORD *)(v10 + 88);
        if ( v26 )
        {
          if ( sub_167FF00(&v46, v26, v25, v20, v21, v22) )
            return 0;
        }
      }
      v27 = (_QWORD *)(*(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
        v27 = (_QWORD *)*v27;
      if ( !v27 )
        return 1;
      v10 = sub_B8C1B0((__int64)v27);
      if ( !v10 )
        return 1;
      v17 = *v46;
      if ( *v46 != 1 )
        goto LABEL_5;
LABEL_19:
      v28 = (const __m128i *)sub_167F1F0(v47[31], v10, (__int64)v18, (__int64)v19, v13, v14);
      v29 = v28;
      if ( v28 )
      {
        *(__m128i *)v44 = _mm_loadu_si128(v28 + 3);
        result = sub_A09E20((unsigned int *)v44, v48);
        if ( !(_BYTE)result && v29[8].m128i_i64[1] == *v49 )
          return result;
      }
    }
  }
  return 0;
}
