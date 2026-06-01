__int64 __fastcall sub_15B7680(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // r15
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  _DWORD *v32; // rax
  __int64 v33; // rdi
  int v34; // edx
  __int64 *v35; // [rsp+10h] [rbp-68h] BYREF
  __int64 v36; // [rsp+18h] [rbp-60h] BYREF
  __m128 v37; // [rsp+20h] [rbp-58h] BYREF
  __int64 v38; // [rsp+30h] [rbp-48h]

  v36 = a3;
  v6 = sub_15B7A90(a2, a3);
  if ( !v6 )
    goto LABEL_35;
  v11 = v6;
  v12 = *(_BYTE *)(v6 + 28) & 0x7F;
  if ( v12 != 62 )
  {
    if ( (unsigned int)v12 - 59 <= 2 )
    {
      v20 = *(_QWORD *)(v11 + 128);
      if ( v20 )
      {
LABEL_16:
        v21 = *(_QWORD *)(v20 + 88);
        v35 = &v36;
        v38 = a2;
        v37 = _mm_loadh_ps((const double *)&v35);
        sub_15B7190(a1, a2, v21, a4, (unsigned __int8 (__fastcall *)(_QWORD))sub_15B6A10, (__int64)&v37);
        return a1;
      }
      v23 = *(_QWORD *)(v11 + 104);
      v24 = *(_QWORD *)(v23 + 96);
      v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v24 & 1) == 0 )
      {
        v26 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v24 & 2) == 0 )
            goto LABEL_35;
          v27 = v26[2295];
          v28 = v23 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v27 )
          {
            v29 = v26[294];
            v26[304] += 24LL;
            v30 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v26[295] >= v30 + 24 && v29 )
            {
              v26[294] = v30 + 24;
              v31 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v31 = sub_986170((__int64)(v26 + 294), 24, 24, 3, v9, v10);
              v30 = v31 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v31 = v27;
            v28 = v30 | 4;
            *(_DWORD *)(v31 + 8) = 0;
            *(_QWORD *)(v31 + 16) = v23;
          }
          v25 = v28 & 0xFFFFFFFFFFFFFFFELL;
          v24 = v25 | 1;
          *(_QWORD *)(v23 + 96) = v25 | 1;
        }
      }
      if ( v25 )
      {
        if ( (v25 & 4) != 0 )
        {
          v32 = (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v32 )
          {
            v33 = *(_QWORD *)v32;
            v34 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
            if ( v32[2] != v34 )
            {
              v32[2] = v34;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 152LL))(v33, v23);
            }
          }
        }
      }
      v20 = *(_QWORD *)(v11 + 128);
      if ( v20 )
        goto LABEL_16;
    }
LABEL_35:
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    return a1;
  }
  v13 = sub_B94670(v11 + 64, a4, v7, v8, v9, v10);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v14 = v13;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v13 )
  {
    v15 = v13;
    v16 = 0;
    do
    {
      ++v16;
      if ( (v15 & 4) == 0 )
        break;
      v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v17 )
        break;
      v15 = *(_QWORD *)(v17 + 8);
    }
    while ( v15 );
    if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v18 = operator new(8 * v16);
    *(_QWORD *)a1 = v18;
    *(_QWORD *)(a1 + 16) = v18 + 8 * v16;
    while ( 1 )
    {
      v18 += 8;
      v19 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v14 & 4) == 0 )
      {
        *(_QWORD *)(v18 - 8) = v19;
        *(_QWORD *)(a1 + 8) = v18;
        return a1;
      }
      if ( !v19 )
        break;
      *(_QWORD *)(v18 - 8) = *v19;
      v14 = v19[1];
      if ( !v14 )
        goto LABEL_13;
    }
    *(_QWORD *)(v18 - 8) = 0;
  }
  else
  {
    v18 = 0;
  }
LABEL_13:
  *(_QWORD *)(a1 + 8) = v18;
  return a1;
}
