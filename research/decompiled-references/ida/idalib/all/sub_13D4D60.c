__int64 __fastcall sub_13D4D60(int a1, int a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // r15
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  const char *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // esi
  int v21; // eax
  const char *v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // r14
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // r12
  __int8 v30; // dl
  __int8 v31; // dl
  __int64 *v32; // rdi
  __int64 v33; // rcx
  _DWORD *v34; // rax
  _DWORD *v35; // rdx
  __int64 *v36; // rdi
  __int64 v37; // rcx
  _DWORD *v38; // rax
  _DWORD *v39; // rdx
  int v41; // [rsp+10h] [rbp-98h]
  int v42; // [rsp+10h] [rbp-98h]
  unsigned int v44; // [rsp+1Ch] [rbp-8Ch]
  _OWORD v45[2]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v46; // [rsp+40h] [rbp-68h] BYREF
  __m128i v47; // [rsp+50h] [rbp-58h] BYREF
  char v48; // [rsp+60h] [rbp-48h]

  v8 = *(_QWORD *)(a5 + 88);
  v9 = a1 & 0x7FFFFFFF;
  if ( (a1 & 0x7FFFFFFFu) >= *(_DWORD *)(v8 + 476) && v9 < *(_DWORD *)(v8 + 480) )
  {
    v11 = *(unsigned int *)(v8 + 472);
    v46.m128i_i8[0] = 0;
    v12 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v12 <= 1 )
      goto LABEL_18;
  }
  else
  {
    v10 = sub_101D590(v8, v9);
    v46.m128i_i8[0] = 0;
    v11 = v10;
    v12 = v10 + 1;
    if ( (unsigned int)v12 <= 1 )
      goto LABEL_18;
  }
  if ( (int)v11 < 0 )
  {
    v24 = (unsigned int)(-2 - v11);
    v25 = *(_QWORD *)(*(_QWORD *)(v8 + 320) + 8LL * ((unsigned int)(-2 - v11) >> 6));
    if ( _bittest64(&v25, v24) )
    {
      v26 = (_QWORD *)(*(_QWORD *)(v8 + 272) + 8 * ((unsigned __int64)(int)v24 >> 5));
      if ( *v26 )
      {
        v13 = *v26 + 24LL * ((-2 - (_BYTE)v11) & 0x1F);
        goto LABEL_6;
      }
      v32 = (__int64 *)(*(_QWORD *)(v8 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v33 = *v32;
      v32[10] += 768;
      v34 = (_DWORD *)((v33 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v32[1] >= (unsigned __int64)(v34 + 192) && v33 )
      {
        *v32 = (__int64)(v34 + 192);
      }
      else
      {
        v42 = v12;
        v34 = (_DWORD *)sub_986170((__int64)v32, 768, 768, 3, v24, v12);
        LOBYTE(v24) = -2 - v11;
        LODWORD(v12) = v42;
      }
      *v26 = v34;
      v35 = v34 + 192;
      do
      {
        *v34 = 0;
        v34 += 6;
        *((_OWORD *)v34 - 1) = 0;
        *((_QWORD *)v34 - 1) = 0;
      }
      while ( v34 != v35 );
      v30 = v46.m128i_i8[0];
      v13 = *v26 + 24 * (v24 & 0x1F);
    }
    else
    {
      v41 = v12;
      v13 = sub_101F930(v8, v24, &v46);
      v30 = v46.m128i_i8[0];
      LODWORD(v12) = v41;
    }
    if ( v30 )
      goto LABEL_18;
    goto LABEL_6;
  }
  v13 = *(_QWORD *)(v8 + 184) + 24LL * (unsigned int)v11;
LABEL_6:
  if ( v13 && *(char *)(v13 + 3) >= 0 )
  {
    sub_101D9A0(
      &v46,
      (__int64 *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL),
      *(_QWORD *)(v8 + 8),
      *(_QWORD *)(v8 + 16),
      0);
    if ( v48 )
    {
      v45[0] = _mm_load_si128(&v46);
      v45[1] = _mm_load_si128(&v47);
      v14 = operator new(0xD0u);
    }
    else
    {
      sub_101D1C0((__int64)v45, v8);
      v14 = operator new(0xD0u);
    }
    v15 = v14;
    sub_13D4AD0(v14, v11, (__int64 *)v45, a5, 1);
    v16 = sub_1021A70(v8, a1, nullptr);
    *(_QWORD *)(v15 + 152) = v16;
    *(_QWORD *)(v15 + 120) = &v16[a4];
    v46.m128i_i8[0] = 0;
    goto LABEL_11;
  }
LABEL_18:
  v44 = v12;
  sub_101D1C0((__int64)v45, v8);
  v15 = operator new(0xD0u);
  sub_13D4AD0(v15, v11, (__int64 *)v45, a5, 1);
  v23 = sub_1021A70(v8, a1, nullptr);
  v18 = v44;
  v46.m128i_i8[0] = 0;
  *(_QWORD *)(v15 + 152) = v23;
  *(_QWORD *)(v15 + 120) = &v23[a4];
  if ( v44 <= 1 )
  {
LABEL_19:
    v20 = 0;
    goto LABEL_16;
  }
LABEL_11:
  if ( (int)v11 < 0 )
  {
    v27 = (unsigned int)(-2 - v11);
    v28 = *(_QWORD *)(*(_QWORD *)(v8 + 320) + 8LL * ((unsigned int)v27 >> 6));
    if ( _bittest64(&v28, v27) )
    {
      v29 = (_QWORD *)(*(_QWORD *)(v8 + 272) + 8 * ((unsigned __int64)(int)v27 >> 5));
      if ( *v29 )
      {
        v19 = *v29 + 24 * (v27 & 0x1F);
        goto LABEL_13;
      }
      v36 = (__int64 *)(*(_QWORD *)(v8 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v37 = *v36;
      v36[10] += 768;
      v38 = (_DWORD *)((v37 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v36[1] >= (unsigned __int64)(v38 + 192) && v37 )
        *v36 = (__int64)(v38 + 192);
      else
        v38 = (_DWORD *)sub_986170((__int64)v36, 768, 768, 3, v17, v18);
      *v29 = v38;
      v39 = v38 + 192;
      do
      {
        *v38 = 0;
        v38 += 6;
        *((_OWORD *)v38 - 1) = 0;
        *((_QWORD *)v38 - 1) = 0;
      }
      while ( v38 != v39 );
      v31 = v46.m128i_i8[0];
      v19 = *v29 + 24 * (v27 & 0x1F);
    }
    else
    {
      v19 = sub_101F930(v8, v27, &v46);
      v31 = v46.m128i_i8[0];
    }
    if ( v31 )
    {
      v20 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v19 = *(_QWORD *)(v8 + 184) + 24 * v11;
  }
LABEL_13:
  if ( !v19 || *(char *)(v19 + 3) < 0 )
    goto LABEL_19;
  v20 = *(_DWORD *)v19 & 0x7FFFFFFF;
LABEL_16:
  v21 = sub_10209A0(v8, v20, a2, a3, a4, 1, 0, 0);
  *(_BYTE *)(v15 + 24) = 1;
  *(_DWORD *)(v15 + 128) = v21;
  *(_BYTE *)(v15 + 145) = 1;
  return v15;
}
