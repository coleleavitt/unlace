__int64 __fastcall sub_13A1B50(std::_V2 *a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // ebp
  __int64 (__fastcall *v7)(std::_V2 *); // rax
  std::_V2 *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(std::_V2 *); // rax
  __int64 (__fastcall *v12)(std::_V2 *); // rax
  unsigned int v13; // esi
  __int64 (__fastcall *v14)(std::_V2 *); // r10
  unsigned int v15; // esi
  __int64 (__fastcall *v16)(std::_V2 *); // rcx
  __m128 v17; // xmm1
  __int64 (__fastcall *v18)(std::_V2 *); // r9
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(std::_V2 *); // r9
  __m128 v22; // xmm1
  __int64 (__fastcall *v23)(std::_V2 *); // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+1Ch] [rbp-12Ch] BYREF
  __int64 v26; // [rsp+20h] [rbp-128h] BYREF
  __int64 v27; // [rsp+28h] [rbp-120h]
  __int64 v28; // [rsp+30h] [rbp-118h] BYREF
  char v29; // [rsp+38h] [rbp-110h]
  __m128 v30; // [rsp+40h] [rbp-108h] BYREF
  __m128 v31; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD *v32[4]; // [rsp+60h] [rbp-E8h] BYREF
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+88h] [rbp-C0h]
  _BYTE v35[184]; // [rsp+90h] [rbp-B8h] BYREF

  sub_202A150(&v31, a2, 9, 0);
  v4 = (_QWORD *)v31.m128_u64[0];
  if ( v31.m128_u64[0] )
  {
    v31.m128_u64[0] = 0;
    v32[0] = v4;
    sub_A05760(&ptr, v32);
    if ( v32[0] )
      (*(void (__fastcall **)(_QWORD *))(*v32[0] + 8LL))(v32[0]);
    if ( !qword_2CD8AA0 )
      sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
    v5 = 8;
    if ( v31.m128_u64[0] )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v31.m128_u64[0] + 8LL))(v31.m128_u64[0]);
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 16LL);
    if ( v7 == sub_139FCF0 || (v9 = v7(a1)) == 0 )
    {
      ptr = v35;
      v34 = 0x1000000000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = (std::_V2 *)v32;
          v25 = 0;
          sub_13A0390((unsigned __int64)v32, a2, &v25);
          if ( LODWORD(v32[0]) == 2 )
          {
            v11 = *(__int64 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 24LL);
            if ( v11 == sub_139FD10 || (v8 = a1, (v13 = v11(a1)) == 0) )
            {
              v5 = 0;
              std::_V2::system_category(v8);
            }
            else
            {
LABEL_34:
              v5 = v13;
            }
            goto LABEL_26;
          }
          if ( LODWORD(v32[0]) != 3 )
            break;
          if ( v25 == 9 )
          {
            v13 = sub_13A1B50(a1, a2);
            if ( v13 )
              goto LABEL_34;
          }
          else
          {
            sub_A0BAF0(&v28, a2);
            v10 = v28;
            if ( v28 )
            {
              v28 = 0;
              v30.m128_u64[0] = v10;
              sub_A05760(&v31, &v30);
              if ( v30.m128_u64[0] )
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v30.m128_u64[0] + 8LL))(v30.m128_u64[0]);
              if ( !qword_2CD8AA0 )
                sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
              v5 = 5;
              if ( v28 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
              goto LABEL_26;
            }
          }
        }
        LODWORD(v34) = 0;
        v26 = 0;
        v27 = 0;
        sub_2027F10(&v28, a2, v25, &ptr, &v26);
        if ( (v29 & 1) != 0 )
          break;
        if ( (unsigned int)(v28 - 1) <= 6 )
        {
          switch ( (int)v28 )
          {
            case 2:
              if ( (_DWORD)v34 != 8 )
                goto LABEL_64;
              v18 = *(__int64 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 48LL);
              v19 = *((_QWORD *)ptr + 6);
              v20 = *((_QWORD *)ptr + 5);
              v31 = _mm_shuffle_ps(
                      (__m128)_mm_loadu_si128((const __m128i *)((char *)ptr + 8)),
                      (__m128)_mm_loadu_si128((const __m128i *)((char *)ptr + 24)),
                      136);
              if ( v18 == sub_139FD70 )
                break;
              v15 = ((__int64 (__fastcall *)(std::_V2 *, _QWORD, __m128 *, __int64, __int64))v18)(
                      a1,
                      *(_QWORD *)ptr,
                      &v31,
                      v20,
                      v19);
              if ( !v15 )
                break;
              goto LABEL_38;
            case 3:
              if ( (_DWORD)v34 != 8 )
                goto LABEL_64;
              v16 = *(__int64 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 72LL);
              v17 = (__m128)_mm_loadu_si128((const __m128i *)ptr + 1);
              v31 = _mm_shuffle_ps(
                      (__m128)_mm_loadu_si128((const __m128i *)ptr + 2),
                      (__m128)_mm_loadu_si128((const __m128i *)ptr + 3),
                      136);
              v30 = _mm_shuffle_ps((__m128)_mm_loadu_si128((const __m128i *)ptr), v17, 136);
              if ( v16 == sub_139FDD0 )
                break;
              v15 = ((__int64 (__fastcall *)(std::_V2 *, __m128 *, __m128 *))v16)(a1, &v30, &v31);
              if ( !v15 )
                break;
              goto LABEL_38;
            case 4:
              if ( (_DWORD)v34 != 2 )
                goto LABEL_64;
              v12 = *(__int64 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 40LL);
              if ( v12 == sub_139FD50 )
                break;
              goto LABEL_42;
            case 5:
              if ( (_DWORD)v34 != 2 )
                goto LABEL_64;
              v12 = *(__int64 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 32LL);
              if ( v12 == sub_139FD30 )
                break;
LABEL_42:
              v15 = ((__int64 (__fastcall *)(std::_V2 *, _QWORD, __int64, __int64))v12)(a1, *(_QWORD *)ptr, v26, v27);
              if ( !v15 )
                break;
              goto LABEL_38;
            case 6:
              if ( (_DWORD)v34 != 4 )
                goto LABEL_64;
              v14 = *(__int64 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 56LL);
              if ( v14 != sub_139FD90 )
              {
                v15 = ((__int64 (__fastcall *)(std::_V2 *, _QWORD, _QWORD, _QWORD, __int64, __int64))v14)(
                        a1,
                        *(_QWORD *)ptr,
                        *((_QWORD *)ptr + 1),
                        *((_QWORD *)ptr + 2),
                        v26,
                        v27);
                if ( v15 )
                  goto LABEL_38;
              }
              break;
            case 7:
              if ( (_DWORD)v34 != 9 )
                goto LABEL_64;
              v21 = *(__int64 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 64LL);
              v22 = (__m128)_mm_loadu_si128((const __m128i *)ptr + 1);
              v31 = _mm_shuffle_ps(
                      (__m128)_mm_loadu_si128((const __m128i *)ptr + 2),
                      (__m128)_mm_loadu_si128((const __m128i *)ptr + 3),
                      136);
              v30 = _mm_shuffle_ps((__m128)_mm_loadu_si128((const __m128i *)ptr), v22, 136);
              if ( v21 == sub_139FDB0 )
                break;
              v15 = ((__int64 (__fastcall *)(std::_V2 *, __m128 *, __m128 *, __int64, __int64))v21)(
                      a1,
                      &v30,
                      &v31,
                      v26,
                      v27);
              if ( !v15 )
                break;
              goto LABEL_38;
            default:
              if ( (_DWORD)v34 != 1 )
              {
LABEL_64:
                v5 = 9;
                sub_139FE70();
                goto LABEL_39;
              }
              v23 = *(__int64 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 80LL);
              if ( v23 != sub_1396BF0 )
              {
                v15 = ((__int64 (__fastcall *)(std::_V2 *, _QWORD))v23)(a1, *(_QWORD *)ptr);
                if ( v15 )
                {
LABEL_38:
                  v5 = v15;
                  goto LABEL_39;
                }
              }
              break;
          }
        }
        sub_A0AE90(&v28);
      }
      v24 = v28;
      v28 = 0;
      v31.m128_u64[0] = v24;
      v5 = sub_2220DB0(&v31);
      if ( v31.m128_u64[0] )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v31.m128_u64[0] + 8LL))(v31.m128_u64[0]);
LABEL_39:
      sub_A0AE90(&v28);
LABEL_26:
      if ( ptr != v35 )
        free(ptr);
    }
    else
    {
      return v9;
    }
  }
  return v5;
}
