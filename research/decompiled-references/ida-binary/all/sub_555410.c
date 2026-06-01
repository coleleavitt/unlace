__int64 __fastcall sub_555410(__int64 a1, __int64 *a2)
{
  __int64 *license_manager; // rdi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, _DWORD **, _QWORD, __int64, int *, _QWORD, __int64 *); // rax
  const char *v9; // rsi
  char v10; // al
  _DWORD *v11; // rdi
  unsigned __int64 v12; // r13
  char *v13; // rcx
  signed __int64 v14; // rdx
  char *v15; // rax
  char *v16; // rdx
  const char *v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r12
  _QWORD *v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 i; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  const char *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // r14
  unsigned __int64 v32; // r13
  __m128i si128; // xmm0
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned int v36; // [rsp+4h] [rbp-7Ch]
  __int64 v37; // [rsp+8h] [rbp-78h]
  _DWORD *v38; // [rsp+10h] [rbp-70h] BYREF
  __int128 v39; // [rsp+18h] [rbp-68h]
  int v40; // [rsp+30h] [rbp-50h] BYREF
  __int16 v41; // [rsp+34h] [rbp-4Ch]
  __int64 v42; // [rsp+38h] [rbp-48h]
  __int64 v43; // [rsp+40h] [rbp-40h]
  unsigned __int64 v44; // [rsp+48h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  v36 = 0;
  if ( *(_BYTE *)(a1 + 32) )
    return v36;
  v38 = nullptr;
  v39 = 0;
  license_manager = (__int64 *)get_license_manager();
  v7 = *license_manager;
  v41 = 0;
  v42 = 0x100000001LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, _DWORD **, _QWORD, __int64, int *, _QWORD, __int64 *))(v7 + 64);
  v40 = 0;
  v9 = (const char *)&v38;
  v43 = 0;
  v10 = v8(license_manager, &v38, 0, a1, &v40, 0, a2);
  v11 = v38;
  if ( v10 )
  {
    v12 = v39;
    v13 = (char *)&v38[38 * v39];
    v14 = 0x86BCA1AF286BCA1BLL * ((152 * (__int64)v39) >> 3);
    if ( v14 >> 2 > 0 )
    {
      v15 = (char *)v38;
      v16 = (char *)&v38[152 * (v14 >> 2)];
      while ( *((_DWORD *)v15 + 2) != 3 )
      {
        if ( *((_DWORD *)v15 + 40) == 3 )
        {
          v15 += 152;
          break;
        }
        if ( *((_DWORD *)v15 + 78) == 3 )
        {
          v15 += 304;
          break;
        }
        if ( *((_DWORD *)v15 + 116) == 3 )
        {
          v15 += 456;
          break;
        }
        v15 += 608;
        if ( v15 == v16 )
        {
          v9 = (const char *)0x86BCA1AF286BCA1BLL;
          v14 = 0x86BCA1AF286BCA1BLL * ((v13 - v15) >> 3);
          goto LABEL_35;
        }
      }
LABEL_11:
      if ( v13 != v15 )
      {
        v17 = &s1;
        if ( *(_QWORD *)(a1 + 48) )
          v17 = *(const char **)(a1 + 40);
        v9 = "\"%s\" contains a floating license.\n"
             "It should not be used directly with IDA.\n"
             "Please use it with the license server (hexlicsrv) instead.";
        sub_169A50(
          a2,
          (__int64)"\"%s\" contains a floating license.\n"
                   "It should not be used directly with IDA.\n"
                   "Please use it with the license server (hexlicsrv) instead.",
          v17);
        v36 = 2;
        v11 = v38;
        goto LABEL_16;
      }
      goto LABEL_39;
    }
    v15 = (char *)v38;
LABEL_35:
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
          goto LABEL_39;
        goto LABEL_38;
      }
      if ( *((_DWORD *)v15 + 2) == 3 )
        goto LABEL_11;
      v15 += 152;
    }
    if ( *((_DWORD *)v15 + 2) == 3 )
      goto LABEL_11;
    v15 += 152;
LABEL_38:
    if ( *((_DWORD *)v15 + 2) == 3 )
      goto LABEL_11;
LABEL_39:
    if ( (_QWORD)v39 != 1 )
    {
      v29 = &s1;
      if ( *(_QWORD *)(a1 + 48) )
        v29 = *(const char **)(a1 + 40);
      sub_169A50(a2, (__int64)"The file \"%s\" ", v29);
      if ( v12 <= 1 )
      {
        v9 = "does not appear to contain valid %s licenses.";
        sub_16FAA0(a2, (__int64)"does not appear to contain valid %s licenses.", off_8A5028[0]);
        v36 = 12;
        v11 = v38;
      }
      else
      {
        v30 = a2[1];
        if ( v30 )
        {
          v31 = v30 + 43;
          v32 = v30 + 44;
          --v30;
        }
        else
        {
          v32 = 45;
          v31 = 44;
        }
        v9 = (const char *)*a2;
        if ( a2[2] < v32 )
        {
          v35 = qvector_reserve(a2, v9, v32, 1);
          *a2 = v35;
          v9 = (const char *)v35;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DDF30);
        a2[1] = v32;
        v9[v31] = 0;
        v34 = *a2 + v30;
        *(__m128i *)v34 = si128;
        v11 = v38;
        v36 = 12;
        *(__m128i *)(v34 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DDF40);
        *(__m128i *)(v34 + 28) = _mm_load_si128((const __m128i *)&xmmword_5DDF50);
      }
      goto LABEL_16;
    }
  }
  v36 = 0;
LABEL_16:
  if ( v11 )
  {
    v18 = v39;
    if ( (_QWORD)v39 )
    {
      v37 = 0;
      v19 = 0;
      do
      {
        v20 = &v11[v19];
        v21 = *(_QWORD *)&v11[v19 + 32];
        if ( v21 )
        {
          v20[17] = 0;
          qfree(v21, v9);
        }
        v22 = v20[10];
        if ( v22 )
        {
          v23 = v20[11];
          if ( v23 )
          {
            for ( i = 0; i != v23; ++i )
            {
              v25 = (__int64 *)(v22 + 24 * i);
              v26 = *v25;
              if ( *v25 )
              {
                v25[1] = 0;
                qfree(v26, v9);
                v22 = v20[10];
              }
            }
          }
          v20[11] = 0;
          qfree(v22, v9);
        }
        v27 = v20[7];
        if ( v27 )
        {
          v20[8] = 0;
          qfree(v27, v9);
        }
        v28 = v20[4];
        if ( v28 )
        {
          v20[5] = 0;
          qfree(v28, v9);
        }
        ++v37;
        v19 += 38;
        v11 = v38;
      }
      while ( v18 != v37 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v11, v9);
  }
  return v36;
}
