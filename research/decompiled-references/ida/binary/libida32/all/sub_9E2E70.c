__int64 (__fastcall ***__fastcall sub_9E2E70(__int64 (__fastcall ***a1)(), _QWORD *a2, __int64 a3))()
{
  __int64 *v3; // r15
  __int64 i; // rax
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  _QWORD *v11; // r15
  int v12; // r10d
  __int64 v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 j; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // dl
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // r9
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // r9
  char v30; // dl
  __int64 *v31; // rdi
  __int64 v32; // rdx
  _DWORD *v33; // rax
  _DWORD *v34; // rdx
  __int64 *v35; // rdi
  __int64 v36; // rcx
  _DWORD *v37; // rax
  _DWORD *v38; // rdx
  __int64 v39; // [rsp+8h] [rbp-590h]
  int v40; // [rsp+8h] [rbp-590h]
  int v41; // [rsp+8h] [rbp-590h]
  char v42; // [rsp+8h] [rbp-590h]
  __int64 v43; // [rsp+10h] [rbp-588h]
  _QWORD *v44; // [rsp+10h] [rbp-588h]
  int v45; // [rsp+18h] [rbp-580h]
  _QWORD *v46; // [rsp+18h] [rbp-580h]
  __int64 v47; // [rsp+28h] [rbp-570h] BYREF
  _QWORD v48[4]; // [rsp+30h] [rbp-568h] BYREF
  char v49; // [rsp+50h] [rbp-548h]
  _BYTE v50[32]; // [rsp+60h] [rbp-538h] BYREF
  __int16 v51; // [rsp+80h] [rbp-518h]
  _QWORD v52[6]; // [rsp+90h] [rbp-508h] BYREF
  __int64 (__fastcall **v53)(); // [rsp+C0h] [rbp-4D8h] BYREF
  int v54; // [rsp+C8h] [rbp-4D0h]
  __int128 v55; // [rsp+D0h] [rbp-4C8h]
  __int64 v56; // [rsp+E0h] [rbp-4B8h]
  char v57; // [rsp+E8h] [rbp-4B0h]
  int v58; // [rsp+ECh] [rbp-4ACh]
  void **p_ptr; // [rsp+F0h] [rbp-4A8h]
  _QWORD v60[8]; // [rsp+100h] [rbp-498h] BYREF
  void *ptr; // [rsp+140h] [rbp-458h] BYREF
  __m128i si128; // [rsp+148h] [rbp-450h]
  _BYTE v63[1088]; // [rsp+158h] [rbp-440h] BYREF

  v3 = (__int64 *)a3;
  for ( i = *(_QWORD *)(a3 + 8); i; i = *(_QWORD *)(v8 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v8 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      break;
    v3 = (__int64 *)v8;
  }
  v39 = *v3;
  sub_220FAE0(v52);
  v9 = (_QWORD *)*a2;
  v52[4] = v3 + 4;
  v52[2] = "Loading API notes from ";
  v52[0] = &off_2B16D10;
  v52[3] = 23;
  v52[5] = v39;
  v10 = sub_1003310(v9, a3, 0);
  v11 = (_QWORD *)*a2;
  LOBYTE(ptr) = 0;
  v12 = v10;
  if ( (unsigned int)(v10 + 1) <= 1 )
    goto LABEL_29;
  if ( v10 < 0 )
  {
    v24 = (unsigned int)(-2 - v10);
    v25 = *(_QWORD *)(v11[40] + 8LL * ((unsigned int)(-2 - v10) >> 6));
    if ( _bittest64(&v25, v24) )
    {
      v26 = (_QWORD *)(v11[34] + 8 * ((unsigned __int64)(int)v24 >> 5));
      if ( *v26 )
      {
        v13 = *v26 + 24 * (v24 & 0x1F);
        goto LABEL_8;
      }
      v31 = (__int64 *)(v11[36] & 0xFFFFFFFFFFFFFFF8LL);
      v32 = *v31;
      v31[10] += 768;
      v33 = (_DWORD *)((v32 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v31[1] >= (unsigned __int64)(v33 + 192) && v32 )
      {
        *v31 = (__int64)(v33 + 192);
      }
      else
      {
        v45 = v12;
        v44 = v26;
        v42 = -2 - v12;
        v33 = (_DWORD *)sub_962430((__int64)v31, 768, 768, 3, v24, (__int64)v26);
        v12 = v45;
        v26 = v44;
        LOBYTE(v24) = v42;
      }
      *v26 = v33;
      v34 = v33 + 192;
      do
      {
        *v33 = 0;
        v33 += 6;
        *((_OWORD *)v33 - 1) = 0;
        *((_QWORD *)v33 - 1) = 0;
      }
      while ( v34 != v33 );
      v22 = (char)ptr;
      v13 = *v26 + 24 * (v24 & 0x1F);
    }
    else
    {
      v41 = v12;
      v13 = sub_FFBBF0(v11, (unsigned int)v24, &ptr);
      v22 = (char)ptr;
      v12 = v41;
    }
    if ( v22 )
    {
LABEL_29:
      *a1 = nullptr;
      goto LABEL_30;
    }
  }
  else
  {
    v13 = v11[23] + 24LL * (unsigned int)v10;
  }
LABEL_8:
  v40 = v12;
  if ( !v13 )
    goto LABEL_29;
  if ( *(char *)(v13 + 3) < 0 )
    goto LABEL_29;
  sub_FF9C60(v48, *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL, v11[1], v11[2], 0);
  if ( !v49 )
    goto LABEL_29;
  v14 = (_QWORD *)*a2;
  ptr = v63;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CF0);
  sub_10035A0((unsigned int)v60, (_DWORD)v14, v14[1], 2, 124, 100, a3);
  v54 = 2;
  v57 = 0;
  v53 = &off_2BC1F40;
  v58 = 1;
  v56 = 0;
  v55 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v53, 0, 0, 0);
  v50[0] = 0;
  v15 = (_QWORD *)*a2;
  if ( v40 < 0 )
  {
    v27 = (unsigned int)(-2 - v40);
    v28 = *(_QWORD *)(v15[40] + 8LL * ((unsigned int)(-2 - v40) >> 6));
    if ( _bittest64(&v28, v27) )
    {
      v29 = (_QWORD *)(v15[34] + 8 * ((unsigned __int64)(int)v27 >> 5));
      if ( *v29 )
      {
        v16 = *v29 + 24LL * ((-2 - (_BYTE)v40) & 0x1F);
        goto LABEL_13;
      }
      v35 = (__int64 *)(v15[36] & 0xFFFFFFFFFFFFFFF8LL);
      v36 = *v35;
      v35[10] += 768;
      v37 = (_DWORD *)((v36 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v35[1] >= (unsigned __int64)(v37 + 192) && v36 )
      {
        *v35 = (__int64)(v37 + 192);
      }
      else
      {
        v46 = v29;
        v37 = (_DWORD *)sub_962430((__int64)v35, 768, 768, 3, v27, (__int64)v29);
        v29 = v46;
        LOBYTE(v27) = -2 - v40;
      }
      *v29 = v37;
      v38 = v37 + 192;
      do
      {
        *v37 = 0;
        v37 += 6;
        *((_OWORD *)v37 - 1) = 0;
        *((_QWORD *)v37 - 1) = 0;
      }
      while ( v38 != v37 );
      v30 = v50[0];
      v16 = *v29 + 24 * (v27 & 0x1F);
    }
    else
    {
      v16 = sub_FFBBF0(v15, (unsigned int)v27, v50);
      v30 = v50[0];
    }
    if ( v30 )
      goto LABEL_20;
    goto LABEL_13;
  }
  v16 = v15[23] + 24LL * (unsigned int)v40;
LABEL_13:
  if ( v16 )
  {
    if ( *(char *)(v16 + 3) >= 0 )
    {
      v17 = *(_QWORD *)((*(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( v17 )
      {
        for ( j = *(_QWORD *)(v17 + 8); j; j = *(_QWORD *)(v19 + 8) )
        {
          v19 = j & 0xFFFFFFFFFFFFFFF8LL;
          if ( (j & 4) == 0 || !v19 )
            goto LABEL_21;
        }
      }
    }
  }
LABEL_20:
  v19 = 0;
LABEL_21:
  if ( (unsigned __int8)sub_A2AFC0(v48[0], v48[1], v19, &v53, sub_1005380, v60) )
  {
    *a1 = nullptr;
    v53 = (__int64 (__fastcall **)())&unk_2C4C288;
    sub_2257A60(&v53);
    sub_10035F0(v60);
  }
  else
  {
    v51 = 257;
    sub_220CA80(&v47, ptr, si128.m128i_i64[0], v50);
    v43 = v47;
    v53 = (__int64 (__fastcall **)())&unk_2C4C288;
    sub_2257A60(&v53);
    sub_10035F0(v60);
    v20 = *(_QWORD *)((char *)a2 + 12);
    v21 = *(_QWORD *)((char *)a2 + 20);
    v60[0] = v43;
    sub_9EDEA0(&v53, v60, v20, v21);
    if ( v60[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v60[0] + 8LL))(v60[0]);
    *a1 = v53;
  }
  if ( ptr != v63 )
    free(ptr);
LABEL_30:
  v52[0] = &off_2B16D10;
  sub_220FB60(v52);
  return a1;
}

