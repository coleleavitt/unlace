__int64 __fastcall sub_E682A0(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v3; // rax
  unsigned int v5; // r14d
  _BYTE *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v11; // r13
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE *v15; // rax
  char *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v20; // rbx
  __int64 v21; // rsi
  bool v22; // zf
  char v23; // cl
  __int16 v24; // dx
  bool v25; // al
  _DWORD *v26; // rdx
  __int64 v27; // rdi
  unsigned int v28; // esi
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rax
  _BYTE *v33; // rax
  char *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r11
  __int64 v41; // [rsp+18h] [rbp-E0h]
  _BYTE v42[4]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v43[4]; // [rsp+24h] [rbp-D4h] BYREF
  __int64 v44; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h]
  __int64 v46; // [rsp+38h] [rbp-C0h]
  _BYTE v47[184]; // [rsp+40h] [rbp-B8h] BYREF

  if ( *(_WORD *)(a3 + 4) )
    return 0;
  v3 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v3 )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 48) == *v3 && v3[1] == 37 )
    {
      v6 = v47;
      v46 = 0x1000000000LL;
      v7 = *(unsigned int *)(a3 + 24);
      ptr = v47;
      if ( (_DWORD)v7 )
      {
        v8 = a3;
        v9 = a3 + 8 * v7;
        LODWORD(v11) = 16;
        v12 = 0;
        while ( 1 )
        {
          v13 = *(_QWORD *)(v8 + 32);
          v14 = v12;
          v8 += 8;
          ++v12;
          *(_QWORD *)&v6[8 * v14] = v13;
          LODWORD(v46) = v12;
          if ( v9 == v8 )
            break;
          if ( v12 >= (unsigned int)v11 )
          {
            v11 = (unsigned int)(2 * v11);
            v15 = (_BYTE *)sub_186B270(8 * v11);
            v12 = v46;
            v16 = (char *)ptr;
            v6 = v15;
            if ( (_DWORD)v46 )
            {
              if ( (unsigned int)(v46 - 1) <= 2 || v15 == (char *)ptr + 8 )
              {
                v37 = 0;
                v38 = 8LL * (unsigned int)v46;
                do
                {
                  *(_QWORD *)&v6[v37] = *(_QWORD *)&v16[v37];
                  v37 += 8;
                }
                while ( v38 != v37 );
              }
              else
              {
                v17 = 0;
                v18 = 16LL * ((unsigned int)v46 >> 1);
                do
                {
                  *(__m128i *)&v6[v17] = _mm_loadu_si128((const __m128i *)&v16[v17]);
                  v17 += 16;
                }
                while ( v17 != v18 );
                if ( (v12 & 1) != 0 )
                  *(_QWORD *)&v6[8 * (v12 & 0xFFFFFFFE)] = *(_QWORD *)&v16[8 * (v12 & 0xFFFFFFFE)];
              }
            }
            if ( v16 != v47 )
            {
              if ( v16 )
              {
                sub_186B220(v16);
                v12 = v46;
              }
            }
            ptr = v6;
            HIDWORD(v46) = v11;
          }
        }
        if ( v12 )
        {
          v20 = 0;
          v5 = 0;
          do
          {
            v21 = *(_QWORD *)&v6[8 * v20];
            v22 = *(_WORD *)(v21 + 4) == 0;
            v44 = v21;
            if ( v22 && (*(_BYTE *)(v21 + 30) & 1) != 0 )
            {
              v5 = *(_BYTE *)(v21 + 30) & 1;
            }
            else
            {
              v23 = sub_1674350(a1 + 48, v21, v42, v43, &v44);
              v24 = *(_WORD *)(v44 + 4);
              if ( v23 && v24 == 1 )
              {
                if ( a2 != *(_DWORD *)(v44 + 16) )
                  goto LABEL_29;
                v6 = ptr;
                v12 = v46;
              }
              else
              {
                if ( v24
                  || (v26 = *(_DWORD **)(*(_QWORD *)(v44 + 16) + 24LL)) == nullptr
                  || *(_DWORD *)(a1 + 48) != *v26
                  || v26[1] != 37 )
                {
LABEL_29:
                  v6 = ptr;
                  goto LABEL_30;
                }
                v27 = *(unsigned int *)(v44 + 24);
                v12 = v46;
                v6 = ptr;
                if ( (_DWORD)v27 )
                {
                  v28 = HIDWORD(v46);
                  v29 = v44;
                  v30 = v44 + 8 * v27;
                  do
                  {
                    if ( v12 < v28 )
                    {
                      v6 = ptr;
                    }
                    else
                    {
                      v41 = v29;
                      v33 = (_BYTE *)sub_186B270(16LL * v28);
                      v12 = v46;
                      v34 = (char *)ptr;
                      v6 = v33;
                      v28 *= 2;
                      v29 = v41;
                      if ( (_DWORD)v46 )
                      {
                        if ( (unsigned int)(v46 - 1) <= 2 || v33 == (char *)ptr + 8 )
                        {
                          v39 = 0;
                          v40 = 8LL * (unsigned int)v46;
                          do
                          {
                            *(_QWORD *)&v6[v39] = *(_QWORD *)&v34[v39];
                            v39 += 8;
                          }
                          while ( v40 != v39 );
                        }
                        else
                        {
                          v35 = 0;
                          v36 = 16LL * ((unsigned int)v46 >> 1);
                          do
                          {
                            *(__m128i *)&v6[v35] = _mm_loadu_si128((const __m128i *)&v34[v35]);
                            v35 += 16;
                          }
                          while ( v36 != v35 );
                          if ( (v12 & 1) != 0 )
                            *(_QWORD *)&v6[8 * (v12 & 0xFFFFFFFE)] = *(_QWORD *)&v34[8 * (v12 & 0xFFFFFFFE)];
                        }
                      }
                      if ( v34 != v47 && v34 )
                      {
                        sub_186B220(v34);
                        v12 = v46;
                        v29 = v41;
                      }
                      ptr = v6;
                      HIDWORD(v46) = v28;
                    }
                    v31 = *(_QWORD *)(v29 + 32);
                    v32 = v12;
                    v29 += 8;
                    ++v12;
                    *(_QWORD *)&v6[8 * v32] = v31;
                    LODWORD(v46) = v12;
                  }
                  while ( v30 != v29 );
                }
              }
            }
            ++v20;
          }
          while ( (unsigned int)v20 < v12 );
          v25 = v6 == v47 || v6 == nullptr;
        }
        else
        {
LABEL_30:
          v5 = 0;
          v25 = v6 == v47 || v6 == nullptr;
        }
        if ( !v25 )
          sub_186B220(v6);
      }
    }
  }
  return v5;
}

