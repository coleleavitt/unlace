__int64 __fastcall sub_1656AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  int v8; // ebp
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r12
  int v13; // eax
  char v14; // al
  _QWORD *v15; // rbp
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // rax
  int v32; // eax
  _QWORD *v33; // rdi
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(__int64); // rax
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 (__fastcall *v45)(__int64); // rax
  __int64 *i; // [rsp+8h] [rbp-120h] BYREF
  unsigned int v47; // [rsp+14h] [rbp-114h]
  __int64 v48; // [rsp+18h] [rbp-110h]
  __m128 v49; // [rsp+20h] [rbp-108h] BYREF
  __int64 v50; // [rsp+30h] [rbp-F8h]
  char v51; // [rsp+38h] [rbp-F0h]
  char v52; // [rsp+39h] [rbp-EFh]
  void *ptr; // [rsp+40h] [rbp-E8h]
  __int64 v54; // [rsp+48h] [rbp-E0h]
  _QWORD v55[27]; // [rsp+50h] [rbp-D8h] BYREF

  v6 = a2;
  v8 = a4;
  v10 = *(__int64 **)(a2 + 56);
  v11 = *(unsigned int *)(a2 + 64);
  v48 = a1;
  v47 = 1;
  for ( i = &v10[v11]; i != v10; ++v10 )
  {
    v12 = *v10;
    if ( v8 == 2 )
    {
      if ( v12 == a3 )
        return 0;
      if ( *(_BYTE *)(v6 + 104) && *(_QWORD *)(a3 + 40) == *(_QWORD *)(v12 + 40) )
      {
        v22 = (_QWORD *)(*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
          v22 = (_QWORD *)*v22;
        v23 = sub_B91570((__int64)v22, a2, a3, a4, a5, a6);
        v28 = *(_QWORD *)(a3 + 16);
        v29 = v23;
        v30 = (v28 & 4) != 0 ? *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL) : v28 & 0xFFFFFFFFFFFFFFF8LL;
        v31 = sub_B91570(v30, a2, v24, v25, v26, v27);
        if ( v29 == v31 )
          goto LABEL_6;
        a4 = *(_BYTE *)(v29 + 8) & 0x7F;
        if ( (*(_BYTE *)(v29 + 8) & 0x7F) != 0 && (_DWORD)a4 != 24 )
        {
          v32 = *(_BYTE *)(v31 + 8) & 0x7F;
          if ( v32 )
          {
            if ( v32 != 24 )
              goto LABEL_6;
          }
        }
      }
    }
    else
    {
      if ( v12 != a3 )
      {
        a2 = a3;
        v13 = sub_16562A0((_QWORD *)*v10, a3);
        if ( v13 == 1 )
          continue;
        if ( v13 == 2 )
          goto LABEL_6;
      }
      v20 = *(_BYTE *)(a5 + 56);
      if ( (v20 & 1) != 0 )
      {
        if ( (v20 & 2) != 0 )
        {
          v33 = *(_QWORD **)(a5 + 64);
        }
        else
        {
          a2 = *(_QWORD *)(a5 + 24);
          v35 = v48;
          *(_BYTE *)(a5 + 56) = v20 | 2;
          v36 = sub_169D2C0(v35, a2);
          if ( !v36 )
          {
            *(_QWORD *)(a5 + 64) = 0;
LABEL_6:
            v47 = 2;
            continue;
          }
          v37 = v36 - 64;
          v38 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v36 - 64) + 32LL);
          if ( v38 == sub_A01140 )
            v33 = (_QWORD *)sub_B70A60(v37);
          else
            v33 = (_QWORD *)v38(v37);
          *(_QWORD *)(a5 + 64) = v33;
        }
        if ( !v33 )
          goto LABEL_6;
        if ( (_QWORD *)v12 == v33 )
          return 0;
        a2 = v12;
        v34 = sub_16562A0(v33, v12);
        if ( !v34 )
          return 0;
        if ( v34 == 2 )
          goto LABEL_6;
      }
      else
      {
        if ( (*(_BYTE *)a5 & 4) == 0 )
          return 0;
        if ( !(unsigned __int8)sub_B72F20(*(_QWORD *)(a5 + 8)) )
          return 0;
        if ( (**(_BYTE **)(v48 + 232) & 0x20) != 0 )
        {
          if ( *(_DWORD *)(v6 + 16) )
          {
            v39 = **(_QWORD **)(v6 + 8);
            if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 35 <= 3 && sub_B979F0((_QWORD *)v39) )
              return 0;
          }
        }
        if ( v12 == a3 )
          return 0;
      }
    }
  }
  if ( v8 != 1
    || (*(_BYTE *)a5 & 4) == 0
    || !(unsigned __int8)sub_B72F20(*(_QWORD *)(a5 + 8))
    || (v14 = *(_BYTE *)(a5 + 56), (v14 & 1) == 0) )
  {
    v40 = sub_16558B0(v6, (__int64 (__fastcall *)(__int64))a3);
    if ( v40 == 1 )
      return v47;
    if ( !v40 )
      return 0;
    return 2;
  }
  if ( (v14 & 2) != 0 )
  {
    v15 = *(_QWORD **)(a5 + 64);
  }
  else
  {
    v41 = *(_QWORD *)(a5 + 24);
    v42 = v48;
    *(_BYTE *)(a5 + 56) = v14 | 2;
    v43 = sub_169D2C0(v42, v41);
    if ( !v43 )
    {
      *(_QWORD *)(a5 + 64) = 0;
      return 2;
    }
    v44 = v43 - 64;
    v45 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v43 - 64) + 32LL);
    if ( v45 == sub_A01140 )
      v15 = (_QWORD *)sub_B70A60(v44);
    else
      v15 = (_QWORD *)v45(v44);
    *(_QWORD *)(a5 + 64) = v15;
  }
  if ( !v15 )
    return 2;
  i = (__int64 *)v6;
  v50 = a3;
  v49 = _mm_loadh_ps((const double *)&i);
  v16 = sub_B8E180((unsigned __int64)(v15 + 8));
  if ( !v16 )
    v16 = sub_B8E180(a3 + 64);
  v51 = v16;
  v52 = 0;
  ptr = v55;
  v55[0] = v15;
  v54 = 0x1400000001LL;
  if ( (unsigned __int8)sub_1655C70((__int64)&v49, v15, 0, v17, v18, v19) )
  {
    v47 = 0;
  }
  else if ( v52 )
  {
    v47 = 2;
    if ( ptr == v55 )
      return v47;
    goto LABEL_20;
  }
  if ( ptr != v55 )
LABEL_20:
    free(ptr);
  return v47;
}
