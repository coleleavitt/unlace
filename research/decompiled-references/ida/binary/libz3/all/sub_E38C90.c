void __fastcall sub_E38C90(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  void (__fastcall *v7)(__int64, const char *); // rax
  unsigned __int64 v8; // rsi
  void *v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  char *v12; // rsi
  void *v13; // r13
  unsigned __int64 v14; // rax
  _BYTE *v15; // rbp
  unsigned __int64 v16; // rsi
  void *v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rbp
  _DWORD *v20; // rsi
  void *v21; // r12
  unsigned __int64 v22; // rax
  _DWORD *v23; // rbp
  size_t v24; // rax
  char *v25; // r14
  size_t v26; // r12
  size_t v27; // rax
  __int64 v28; // r15
  unsigned __int64 v29; // rdi
  void *v30; // rdi
  __int64 v31; // r13
  unsigned __int64 v32; // rdi
  _DWORD *v33; // rax
  void *v34; // rdi
  __int64 v35; // r12
  unsigned __int64 v36; // rdi
  _BYTE *v37; // rax
  void *v38; // rdi
  char *v39; // rsi
  unsigned __int64 v40; // rdi
  __int64 v41; // r13
  __int64 v42; // rax
  void *v43; // rdi
  unsigned __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // rax
  void *v47; // rdi
  void *v48[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v49[9]; // [rsp+10h] [rbp-48h] BYREF

  v49[4] = v4;
  v49[3] = v3;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
      (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 48LL))(v48, a1);
      if ( !v48[1] )
      {
        if ( v48[0] != v49 )
          operator delete(v48[0], v49[0] + 1LL);
        v7 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL);
        if ( v7 != sub_DF1620 )
        {
          v39 = (char *)a3;
          goto LABEL_68;
        }
        v24 = strlen(a3);
        v25 = *(char **)(a1 + 128);
        v26 = v24;
        if ( v25 == (char *)(a1 + 144) )
        {
          if ( v24 <= 0xF )
            goto LABEL_35;
          if ( v24 > 0x1D )
          {
            v28 = v24;
            v25 = (char *)operator new(v24 + 1);
          }
          else
          {
            v28 = 30;
            v25 = (char *)operator new(0x1Fu);
          }
        }
        else
        {
          v27 = *(_QWORD *)(a1 + 144);
          if ( v27 >= v26 )
          {
LABEL_35:
            if ( a3 >= v25 && &v25[*(_QWORD *)(a1 + 136)] >= a3 )
            {
              std::string::_M_replace_cold();
              v25 = *(char **)(a1 + 128);
            }
            else if ( v26 )
            {
              if ( v26 == 1 )
                *v25 = *a3;
              else
                memcpy(*(void **)(a1 + 128), a3, v26);
              v25 = *(char **)(a1 + 128);
            }
LABEL_41:
            *(_QWORD *)(a1 + 136) = v26;
            v25[v26] = 0;
            return;
          }
          v28 = 2 * v27;
          if ( v26 < 2 * v27 )
          {
            v29 = v28 + 1;
            if ( (v27 & 0x4000000000000000LL) != 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v29 = v26 + 1;
            v28 = v26;
          }
          v25 = (char *)operator new(v29);
          if ( v26 == 1 )
          {
            *v25 = *a3;
            goto LABEL_54;
          }
        }
        memcpy(v25, a3, v26);
LABEL_54:
        v30 = *(void **)(a1 + 128);
        if ( (void *)(a1 + 144) != v30 )
          operator delete(v30, *(_QWORD *)(a1 + 144) + 1LL);
        *(_QWORD *)(a1 + 128) = v25;
        *(_QWORD *)(a1 + 144) = v28;
        goto LABEL_41;
      }
      if ( v48[0] != v49 )
        operator delete(v48[0], v49[0] + 1LL);
      return;
    case 1:
      v7 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL);
      if ( v7 != sub_DF1620 )
      {
        v39 = "interrupted from keyboard";
        goto LABEL_68;
      }
      v16 = *(_QWORD *)(a1 + 128);
      v17 = (void *)(a1 + 144);
      if ( v16 == a1 + 144 )
      {
        v44 = 31;
        v45 = 30;
      }
      else
      {
        v18 = *(_QWORD *)(a1 + 144);
        if ( v18 > 0x18 )
        {
          if ( (unsigned __int64)"interrupted from keyboard" < v16
            || v16 + *(_QWORD *)(a1 + 136) < (unsigned __int64)"interrupted from keyboard" )
          {
            *(__m128i *)v16 = _mm_load_si128((const __m128i *)&xmmword_18B6AC0);
            *(__m128i *)(v16 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6AD0);
            v19 = *(_QWORD *)(a1 + 128);
          }
          else
          {
            std::string::_M_replace_cold();
            v19 = *(_QWORD *)(a1 + 128);
          }
          goto LABEL_19;
        }
        v45 = 2 * v18;
        v44 = 2 * v18 + 1;
        if ( 2 * v18 <= 0x19 )
        {
          v45 = 25;
          v44 = 26;
        }
      }
      v46 = operator new(v44);
      v47 = *(void **)(a1 + 128);
      v19 = v46;
      *(__m128i *)v46 = _mm_load_si128((const __m128i *)&xmmword_18B6AC0);
      *(__m128i *)(v46 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6AD0);
      if ( v17 != v47 )
        operator delete(v47, *(_QWORD *)(a1 + 144) + 1LL);
      *(_QWORD *)(a1 + 128) = v19;
      *(_QWORD *)(a1 + 144) = v45;
LABEL_19:
      *(_QWORD *)(a1 + 136) = 25;
      *(_BYTE *)(v19 + 25) = 0;
      return;
    case 2:
      v7 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL);
      if ( v7 != sub_DF1620 )
      {
        v39 = "timeout";
        goto LABEL_68;
      }
      v20 = *(_DWORD **)(a1 + 128);
      v21 = (void *)(a1 + 144);
      if ( v20 == (_DWORD *)(a1 + 144) || (v22 = *(_QWORD *)(a1 + 144), v22 > 6) )
      {
        if ( "timeout" < (char *)v20 || (char *)v20 + *(_QWORD *)(a1 + 136) < "timeout" )
        {
          *v20 = 1701669236;
          *(_DWORD *)((char *)v20 + 3) = 1953853285;
          v23 = *(_DWORD **)(a1 + 128);
        }
        else
        {
          std::string::_M_replace_cold();
          v23 = *(_DWORD **)(a1 + 128);
        }
      }
      else
      {
        v31 = 2 * v22;
        v32 = 2 * v22 + 1;
        if ( 2 * v22 <= 7 )
        {
          v31 = 7;
          v32 = 8;
        }
        v33 = (_DWORD *)operator new(v32);
        v34 = *(void **)(a1 + 128);
        *v33 = 1701669236;
        v23 = v33;
        *(_DWORD *)((char *)v33 + 3) = 1953853285;
        if ( v21 != v34 )
          operator delete(v34, *(_QWORD *)(a1 + 144) + 1LL);
        *(_QWORD *)(a1 + 128) = v23;
        *(_QWORD *)(a1 + 144) = v31;
      }
      *(_QWORD *)(a1 + 136) = 7;
      *((_BYTE *)v23 + 7) = 0;
      return;
    case 3:
      v7 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL);
      if ( v7 != sub_DF1620 )
      {
        v39 = "max. resource limit exceeded";
        goto LABEL_68;
      }
      v8 = *(_QWORD *)(a1 + 128);
      v9 = (void *)(a1 + 144);
      if ( v8 == a1 + 144 )
      {
        v40 = 31;
        v41 = 30;
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 144);
        if ( v10 > 0x1B )
        {
          if ( (unsigned __int64)"max. resource limit exceeded" < v8
            || v8 + *(_QWORD *)(a1 + 136) < (unsigned __int64)"max. resource limit exceeded" )
          {
            *(__m128i *)v8 = _mm_load_si128((const __m128i *)&xmmword_18B6AE0);
            *(__m128i *)(v8 + 12) = _mm_load_si128((const __m128i *)&xmmword_18B6AF0);
            v11 = *(_QWORD *)(a1 + 128);
          }
          else
          {
            std::string::_M_replace_cold();
            v11 = *(_QWORD *)(a1 + 128);
          }
LABEL_7:
          *(_QWORD *)(a1 + 136) = 28;
          *(_BYTE *)(v11 + 28) = 0;
          return;
        }
        v41 = 2 * v10;
        v40 = 2 * v10 + 1;
        if ( 2 * v10 <= 0x1C )
        {
          v41 = 28;
          v40 = 29;
        }
      }
      v42 = operator new(v40);
      v43 = *(void **)(a1 + 128);
      v11 = v42;
      *(__m128i *)v42 = _mm_load_si128((const __m128i *)&xmmword_18B6AE0);
      *(__m128i *)(v42 + 12) = _mm_load_si128((const __m128i *)&xmmword_18B6AF0);
      if ( v9 != v43 )
        operator delete(v43, *(_QWORD *)(a1 + 144) + 1LL);
      *(_QWORD *)(a1 + 128) = v11;
      *(_QWORD *)(a1 + 144) = v41;
      goto LABEL_7;
    case 4:
      v7 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL);
      if ( v7 == sub_DF1620 )
      {
        v12 = *(char **)(a1 + 128);
        v13 = (void *)(a1 + 144);
        if ( v12 == (char *)(a1 + 144) || (v14 = *(_QWORD *)(a1 + 144), v14 > 0xA) )
        {
          if ( "interrupted" < v12 || &v12[*(_QWORD *)(a1 + 136)] < "interrupted" )
          {
            qmemcpy(v12, "interrupted", 11);
            v15 = *(_BYTE **)(a1 + 128);
          }
          else
          {
            std::string::_M_replace_cold();
            v15 = *(_BYTE **)(a1 + 128);
          }
        }
        else
        {
          v35 = 2 * v14;
          v36 = 2 * v14 + 1;
          if ( 2 * v14 <= 0xB )
          {
            v35 = 11;
            v36 = 12;
          }
          v37 = (_BYTE *)operator new(v36);
          v38 = *(void **)(a1 + 128);
          v15 = v37;
          qmemcpy(v37, "interrupted", 11);
          if ( v13 != v38 )
            operator delete(v38, *(_QWORD *)(a1 + 144) + 1LL);
          *(_QWORD *)(a1 + 128) = v15;
          *(_QWORD *)(a1 + 144) = v35;
        }
        *(_QWORD *)(a1 + 136) = 11;
        v15[11] = 0;
      }
      else
      {
        v39 = "interrupted";
LABEL_68:
        v7(a1, v39);
      }
      return;
    default:
      return;
  }
}

