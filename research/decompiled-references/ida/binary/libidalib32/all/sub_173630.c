__int64 __fastcall sub_173630(__int64 a1, __int64 *a2)
{
  __int64 *license_manager; // rdi
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, _DWORD **, _QWORD, __int64, int *, _QWORD, __int64 *); // rax
  char v8; // al
  _DWORD *v9; // rdi
  unsigned __int64 v10; // r13
  char *v11; // rcx
  signed __int64 v12; // rdx
  char *v13; // rax
  char *v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r12
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 i; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rsi
  __m128i si128; // xmm0
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int v29; // [rsp+4h] [rbp-7Ch]
  __int64 v30; // [rsp+8h] [rbp-78h]
  _DWORD *v31; // [rsp+10h] [rbp-70h] BYREF
  __int128 v32; // [rsp+18h] [rbp-68h]
  int v33; // [rsp+30h] [rbp-50h] BYREF
  __int16 v34; // [rsp+34h] [rbp-4Ch]
  __int64 v35; // [rsp+38h] [rbp-48h]
  __int64 v36; // [rsp+40h] [rbp-40h]
  unsigned __int64 v37; // [rsp+48h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v29 = 0;
  if ( *(_BYTE *)(a1 + 32) )
    return v29;
  v31 = nullptr;
  v32 = 0;
  license_manager = (__int64 *)get_license_manager();
  v6 = *license_manager;
  v34 = 0;
  v35 = 0x100000001LL;
  v7 = *(__int64 (__fastcall **)(__int64 *, _DWORD **, _QWORD, __int64, int *, _QWORD, __int64 *))(v6 + 64);
  v33 = 0;
  v36 = 0;
  v8 = v7(license_manager, &v31, 0, a1, &v33, 0, a2);
  v9 = v31;
  if ( v8 )
  {
    v10 = v32;
    v11 = (char *)&v31[38 * v32];
    v12 = 0x86BCA1AF286BCA1BLL * ((152 * (__int64)v32) >> 3);
    if ( v12 >> 2 > 0 )
    {
      v13 = (char *)v31;
      v14 = (char *)&v31[152 * (v12 >> 2)];
      while ( *((_DWORD *)v13 + 2) != 3 )
      {
        if ( *((_DWORD *)v13 + 40) == 3 )
        {
          v13 += 152;
          break;
        }
        if ( *((_DWORD *)v13 + 78) == 3 )
        {
          v13 += 304;
          break;
        }
        if ( *((_DWORD *)v13 + 116) == 3 )
        {
          v13 += 456;
          break;
        }
        v13 += 608;
        if ( v13 == v14 )
        {
          v12 = 0x86BCA1AF286BCA1BLL * ((v11 - v13) >> 3);
          goto LABEL_33;
        }
      }
LABEL_11:
      if ( v11 != v13 )
      {
        sub_94360(a2);
        v29 = 2;
        v9 = v31;
        goto LABEL_14;
      }
      goto LABEL_37;
    }
    v13 = (char *)v31;
LABEL_33:
    if ( v12 != 2 )
    {
      if ( v12 != 3 )
      {
        if ( v12 != 1 )
          goto LABEL_37;
        goto LABEL_36;
      }
      if ( *((_DWORD *)v13 + 2) == 3 )
        goto LABEL_11;
      v13 += 152;
    }
    if ( *((_DWORD *)v13 + 2) == 3 )
      goto LABEL_11;
    v13 += 152;
LABEL_36:
    if ( *((_DWORD *)v13 + 2) == 3 )
      goto LABEL_11;
LABEL_37:
    if ( (_QWORD)v32 != 1 )
    {
      sub_94360(a2);
      if ( v10 <= 1 )
      {
        sub_96570(a2);
        v29 = 12;
        v9 = v31;
      }
      else
      {
        v22 = a2[1];
        if ( v22 )
        {
          v23 = v22 + 43;
          v24 = v22 + 44;
          --v22;
        }
        else
        {
          v24 = 45;
          v23 = 44;
        }
        v25 = *a2;
        if ( a2[2] < v24 )
        {
          v28 = qvector_reserve();
          *a2 = v28;
          v25 = v28;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D2D10);
        a2[1] = v24;
        *(_BYTE *)(v25 + v23) = 0;
        v27 = *a2 + v22;
        *(__m128i *)v27 = si128;
        v9 = v31;
        v29 = 12;
        *(__m128i *)(v27 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2D20);
        *(__m128i *)(v27 + 28) = _mm_load_si128((const __m128i *)&xmmword_1D2D30);
      }
      goto LABEL_14;
    }
  }
  v29 = 0;
LABEL_14:
  if ( v9 )
  {
    v15 = v32;
    if ( (_QWORD)v32 )
    {
      v30 = 0;
      v16 = 0;
      do
      {
        v17 = &v9[v16];
        if ( *(_QWORD *)&v9[v16 + 32] )
        {
          v17[17] = 0;
          qfree();
        }
        v18 = v17[10];
        if ( v18 )
        {
          v19 = v17[11];
          if ( v19 )
          {
            for ( i = 0; i != v19; ++i )
            {
              v21 = (_QWORD *)(v18 + 24 * i);
              if ( *v21 )
              {
                v21[1] = 0;
                qfree();
                v18 = v17[10];
              }
            }
          }
          v17[11] = 0;
          qfree();
        }
        if ( v17[7] )
        {
          v17[8] = 0;
          qfree();
        }
        if ( v17[4] )
        {
          v17[5] = 0;
          qfree();
        }
        ++v30;
        v16 += 38;
        v9 = v31;
      }
      while ( v15 != v30 );
    }
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  return v29;
}

