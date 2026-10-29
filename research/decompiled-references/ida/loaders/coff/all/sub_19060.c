unsigned __int64 __fastcall sub_19060(_BYTE *a1, int a2, char a3)
{
  int v3; // r14d
  _BYTE *v4; // r12
  __m128i v5; // xmm0
  int i; // r9d
  _BYTE *j; // rax
  int v8; // r13d
  __int64 v10; // rax
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r13
  __int64 v14; // r15
  int v15; // edx
  char *v16; // rax
  char *v17; // rdx
  bool v18; // zf
  __int64 (__fastcall *v19)(__int64, __int64, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __int64, __int64, __int64, __int64, char); // r13
  int v20; // r10d
  int v21; // ecx
  char *v22; // r9
  char *v23; // rax
  char v24; // dl
  char v25; // al
  void *v26; // rsi
  int v27; // eax
  char v28; // r9
  char *v29; // rsi
  char v30; // cl
  char v31; // cl
  int v32; // [rsp+0h] [rbp-5BCh]
  int v33; // [rsp+0h] [rbp-5BCh]
  int v34; // [rsp+0h] [rbp-5BCh]
  int v35; // [rsp+0h] [rbp-5BCh]
  char v36; // [rsp+Fh] [rbp-5ADh]
  char v37; // [rsp+10h] [rbp-5ACh] BYREF
  void *v38; // [rsp+14h] [rbp-5A8h] BYREF
  __int128 v39; // [rsp+1Ch] [rbp-5A0h]
  _OWORD v40[20]; // [rsp+34h] [rbp-588h] BYREF
  _BYTE v41[1023]; // [rsp+174h] [rbp-448h] BYREF
  char v42; // [rsp+573h] [rbp-49h] BYREF
  char v43; // [rsp+574h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+57Ch] [rbp-40h]

  v3 = a2 - 1;
  v4 = a1;
  v37 = a3;
  v44 = __readfsqword(0x28u);
  v36 = 0;
  a1[a2 - 1] = 0;
  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"export:", (__m128i)(unsigned __int64)&v37);
  if ( a2 - 1 > 2 && *a1 == 0xEF && a1[1] == 0xBB && a1[2] == 0xBF )
  {
    v3 = a2 - 4;
    if ( a2 == 4 )
      return v44 - __readfsqword(0x28u);
    v36 = 1;
    v4 = a1 + 3;
  }
  memset(v40, 0, sizeof(v40));
  *((_QWORD *)&v40[0] + 1) = sub_19040;
  *(_QWORD *)&v40[0] = 19;
  *((_QWORD *)&v40[2] + 1) = sub_18FC0;
  *(_QWORD *)&v40[3] = "alternatename:";
  v40[1] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)off_22BE8),
             (__m128i)(unsigned __int64)"manifest dependency:");
  *(_QWORD *)&v40[2] = 14;
  *(_QWORD *)&v40[4] = 13;
  v40[5] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_22BF0), (__m128i)(unsigned __int64)"nodefaultlib");
  *((_QWORD *)&v40[4] + 1) = sub_19020;
  *((_QWORD *)&v40[14] + 1) = sub_18F60;
  v40[7] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_22BF8), (__m128i)(unsigned __int64)"disallowlib");
  *(_QWORD *)&v40[6] = 12;
  *((_QWORD *)&v40[6] + 1) = sub_19020;
  v40[9] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_22C00), (__m128i)(unsigned __int64)"includelib");
  *(_QWORD *)&v40[8] = 11;
  *((_QWORD *)&v40[8] + 1) = sub_19020;
  v40[11] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_22C08),
              (__m128i)(unsigned __int64)"EXESTR           :");
  *(_QWORD *)&v40[10] = 8;
  *((_QWORD *)&v40[10] + 1) = sub_19020;
  *(_QWORD *)&v40[12] = 8;
  *((_QWORD *)&v40[12] + 1) = sub_19040;
  *(_QWORD *)&v40[14] = 7;
  *(_QWORD *)&v40[16] = 6;
  v40[13] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_22C10), (__m128i)(unsigned __int64)"must resolve:");
  *((_QWORD *)&v40[16] + 1) = sub_18E30;
  *(_QWORD *)&v40[17] = "entry:";
  v40[15] = v5;
  if ( v3 > 0 )
  {
    for ( i = 0; ; i = v33 )
    {
      while ( 1 )
      {
        if ( v3 <= i )
          return v44 - __readfsqword(0x28u);
LABEL_6:
        for ( j = &v4[i]; *j == 32; ++j )
        {
          if ( v3 == ++i )
            return v44 - __readfsqword(0x28u);
        }
        if ( (*j & 0xFD) != 0x2D )
          return v44 - __readfsqword(0x28u);
        v8 = i + 1;
        if ( v3 <= i + 1 )
          return v44 - __readfsqword(0x28u);
        if ( v4[v8] == 63 )
        {
          v8 = i + 2;
          if ( v3 <= i + 2 )
            return v44 - __readfsqword(0x28u);
        }
        v10 = v8;
        v32 = v8;
        v11 = v40;
        v12 = 19;
        v13 = v3 - v8;
        v14 = v10;
        while ( v12 >= v13 || (unsigned int)memicmp(v11[2], &v4[v14], v12) )
        {
          v12 = v11[4];
          v11 += 4;
          if ( !v12 )
          {
            if ( v3 > v32 )
            {
              v20 = 0;
              v21 = 0;
              v22 = &v4[v32];
              v23 = v22;
              while ( 1 )
              {
                v24 = *v23;
                if ( (unsigned __int8)*v23 <= 0x1Fu )
                  return v44 - __readfsqword(0x28u);
                if ( (_BYTE)v21 )
                {
                  if ( (_BYTE)v20 )
                  {
                    v21 = v20;
                    v20 = 0;
                  }
                  else if ( v24 == 92 )
                  {
                    v20 = v21;
                  }
                  else
                  {
                    LOBYTE(v21) = v24 != 34;
                  }
                }
                else if ( v24 == 34 )
                {
                  v21 = 1;
                }
                else if ( v24 == 32 )
                {
                  i = v32 - (_DWORD)v22 + (_DWORD)v23;
                  if ( v3 <= i )
                    return v44 - __readfsqword(0x28u);
                  goto LABEL_6;
                }
                if ( ++v23 == &v22[v3 - v32] )
                  return v44 - __readfsqword(0x28u);
              }
            }
            return v44 - __readfsqword(0x28u);
          }
        }
        v15 = v32 + v12;
        i = v32 + v12;
        v16 = &v4[v32 + (int)v12];
        if ( *v16 != 34 )
          break;
        v27 = v15 + 1;
        if ( v3 > v15 + 1 )
        {
          v28 = 0;
          v29 = &v4[v27];
          v17 = v41;
          while ( 1 )
          {
            v30 = *v29;
            if ( (unsigned __int8)*v29 <= 0x1Fu )
              return v44 - __readfsqword(0x28u);
            if ( v28 )
            {
              v28 = 0;
            }
            else if ( v30 == 92 )
            {
              v28 = 1;
            }
            else if ( v30 == 34 )
            {
              goto LABEL_69;
            }
            ++v27;
            if ( v17 >= &v43 )
              break;
            *v17++ = v30;
            if ( v17 >= &v43 )
            {
              v42 = 0;
              v17 = &v42;
            }
            ++v29;
            if ( v3 <= v27 )
            {
              v31 = v4[v27];
              goto LABEL_68;
            }
          }
LABEL_78:
          if ( !under_debugger )
          {
            interr(518);
LABEL_80:
            if ( !under_debugger )
              interr(519);
          }
          BUG();
        }
        v31 = v4[v27];
        v17 = v41;
LABEL_68:
        if ( v31 != 34 )
          return v44 - __readfsqword(0x28u);
LABEL_69:
        i = v27 + 1;
LABEL_25:
        if ( v17 >= &v43 )
          goto LABEL_80;
        v18 = v37 == 0;
        v19 = (__int64 (__fastcall *)(__int64, __int64, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __int64, __int64, __int64, __int64, char))v11[1];
        *v17 = 0;
        if ( v18 )
        {
LABEL_46:
          if ( !v36 && (v19 == sub_19040 || v19 == sub_19020) )
          {
            v34 = i;
            v38 = nullptr;
            v39 = 0;
            v25 = idb_utf8(&v38, v41, 0xFFFFFFFFLL, 0);
            i = v34;
            if ( v25 )
            {
              v26 = &unk_1E0EC;
              if ( (_QWORD)v39 )
                v26 = v38;
              qstrncpy(v41, v26);
              i = v34;
            }
            if ( v38 )
            {
              v35 = i;
              *(_QWORD *)&v39 = 0;
              qfree(v38);
              i = v35;
            }
          }
          goto LABEL_28;
        }
        if ( (char *)v19 == (char *)sub_18F60 )
          goto LABEL_28;
      }
      if ( v3 > i )
      {
        v17 = v41;
        do
        {
          if ( *v16 == 32 )
            break;
          ++i;
          if ( v17 >= &v43 )
            goto LABEL_78;
          *v17++ = *v16;
          if ( v17 >= &v43 )
          {
            v42 = 0;
            v17 = &v42;
          }
          ++v16;
        }
        while ( v3 > i );
        goto LABEL_25;
      }
      v41[0] = 0;
      v19 = (__int64 (__fastcall *)(__int64, __int64, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __int64, __int64, __int64, __int64, char))v11[1];
      if ( !v37 )
        goto LABEL_46;
      if ( (char *)v19 != (char *)sub_18F60 )
        return v44 - __readfsqword(0x28u);
LABEL_28:
      v33 = i;
      ((void (__fastcall *)(_BYTE *, _QWORD))v19)(v41, v11[3]);
    }
  }
  return v44 - __readfsqword(0x28u);
}

