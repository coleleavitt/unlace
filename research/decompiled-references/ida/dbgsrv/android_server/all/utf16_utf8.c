/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf16_utf8
// Address: 0x00000000000B1CD8

//----- (00000000000B1CD8) ----------------------------------------------------
__int64 __fastcall utf16_utf8(void **a1, unsigned __int16 *a2, int a3)
{
  __int64 result; // x0
  unsigned __int16 *v5; // x21
  unsigned __int64 v6; // x8
  int v7; // w9
  int i; // w23
  unsigned int v10; // w26
  char *v11; // x1
  char *v12; // x8
  char *v13; // x28
  char *v14; // x8
  char *v15; // x1
  char *v16; // x8
  unsigned __int64 v17; // x9
  unsigned int v18; // w28
  char *v19; // x1
  char *v20; // x8
  char *v21; // x27
  char *v22; // x27
  char *v23; // x1
  char *v24; // x8
  int v25; // w27
  char *v26; // x1
  char *v27; // x9
  unsigned int v28; // w28
  char *v29; // x29
  char *v30; // x1
  char *v31; // x8
  char *v32; // x29
  char *v33; // x1
  char *v34; // x8
  unsigned int v35; // w29
  char *v36; // x28
  char *v37; // x1
  char *v38; // x8

  result = 0;
  if ( a1 )
  {
    v5 = a2;
    if ( a2 )
    {
      v6 = (unsigned __int64)a1[2];
      if ( a3 <= 0 )
        v7 = 16;
      else
        v7 = a3;
      a1[1] = nullptr;
      if ( v6 < v7 )
        *a1 = qvector_reserve((pthread_mutex_t *)a1, *a1, v7, 1u);
      if ( a3 )
      {
        for ( i = 0; a3 < 0 || i < a3; ++i )
        {
          v10 = *v5;
          if ( a3 < 0 && !*v5 )
            return 1;
          if ( v10 > 0x7F )
          {
            if ( v10 <= 0x7FF )
            {
              v15 = (char *)*a1;
              v16 = (char *)a1[1];
              v17 = (unsigned __int64)a1[2];
              v18 = (v10 >> 6) & 0x1F | 0xFFFFFFC0;
LABEL_29:
              if ( v16 )
                v22 = v16 - 1;
              else
                v22 = nullptr;
              if ( v17 < (unsigned __int64)(v22 + 2) )
              {
                v15 = (char *)qvector_reserve((pthread_mutex_t *)a1, v15, (unsigned __int64)(v22 + 2), 1u);
                *a1 = v15;
              }
              a1[1] = v22 + 2;
              v22[(_QWORD)v15] = v18;
              v22[(_QWORD)*a1 + 1] = 0;
              v23 = (char *)*a1;
              v24 = (char *)a1[1];
              if ( v24 )
                v13 = v24 - 1;
              else
                v13 = nullptr;
              if ( a1[2] < v13 + 2 )
              {
                v23 = (char *)qvector_reserve((pthread_mutex_t *)a1, v23, (unsigned __int64)(v13 + 2), 1u);
                *a1 = v23;
              }
              a1[1] = v13 + 2;
              v14 = &v13[(_QWORD)v23];
              LOBYTE(v10) = v10 & 0x3F | 0x80;
              ++v5;
              goto LABEL_65;
            }
            if ( (v10 & 0xFC00) != 0xD800 )
            {
              if ( (v10 & 0xFC00) == 0xDC00 )
                return 0;
              v19 = (char *)*a1;
              v20 = (char *)a1[1];
              if ( v20 )
                v21 = v20 - 1;
              else
                v21 = nullptr;
              if ( a1[2] < v21 + 2 )
              {
                v19 = (char *)qvector_reserve((pthread_mutex_t *)a1, v19, (unsigned __int64)(v21 + 2), 1u);
                *a1 = v19;
              }
              a1[1] = v21 + 2;
              v21[(_QWORD)v19] = (v10 >> 12) | 0xE0;
              v18 = (v10 >> 6) & 0x3F | 0xFFFFFF80;
              v21[(_QWORD)*a1 + 1] = 0;
              v15 = (char *)*a1;
              v16 = (char *)a1[1];
              v17 = (unsigned __int64)a1[2];
              goto LABEL_29;
            }
            ++i;
            if ( (a3 & 0x80000000) == 0 && i >= a3 )
              return 0;
            v25 = v5[1];
            result = 0;
            if ( (v25 & 0xFC00) != 0xDC00 || a3 < 0 && v25 == 0 )
              return result;
            v26 = (char *)*a1;
            v27 = (char *)a1[1];
            v28 = ((v10 & 0x3FF) << 10) + 0x10000;
            if ( v27 )
              v29 = v27 - 1;
            else
              v29 = nullptr;
            if ( a1[2] < v29 + 2 )
            {
              v26 = (char *)qvector_reserve((pthread_mutex_t *)a1, v26, (unsigned __int64)(v29 + 2), 1u);
              *a1 = v26;
            }
            a1[1] = v29 + 2;
            v29[(_QWORD)v26] = (v28 >> 18) | 0xF0;
            v29[(_QWORD)*a1 + 1] = 0;
            v30 = (char *)*a1;
            v31 = (char *)a1[1];
            if ( v31 )
              v32 = v31 - 1;
            else
              v32 = nullptr;
            if ( a1[2] < v32 + 2 )
            {
              v30 = (char *)qvector_reserve((pthread_mutex_t *)a1, v30, (unsigned __int64)(v32 + 2), 1u);
              *a1 = v30;
            }
            a1[1] = v32 + 2;
            v32[(_QWORD)v30] = (v28 >> 12) & 0x3F | 0x80;
            v32[(_QWORD)*a1 + 1] = 0;
            v33 = (char *)*a1;
            v34 = (char *)a1[1];
            v35 = ((v28 | v25 & 0x3C0) >> 6) & 0x3F | 0xFFFFFF80;
            if ( v34 )
              v36 = v34 - 1;
            else
              v36 = nullptr;
            if ( a1[2] < v36 + 2 )
            {
              v33 = (char *)qvector_reserve((pthread_mutex_t *)a1, v33, (unsigned __int64)(v36 + 2), 1u);
              *a1 = v33;
            }
            a1[1] = v36 + 2;
            v36[(_QWORD)v33] = v35;
            v5 += 2;
            v36[(_QWORD)*a1 + 1] = 0;
            v37 = (char *)*a1;
            v38 = (char *)a1[1];
            LOBYTE(v10) = v25 & 0x3F | 0x80;
            if ( v38 )
              v13 = v38 - 1;
            else
              v13 = nullptr;
            if ( a1[2] < v13 + 2 )
            {
              v37 = (char *)qvector_reserve((pthread_mutex_t *)a1, v37, (unsigned __int64)(v13 + 2), 1u);
              *a1 = v37;
            }
            v14 = &v13[(_QWORD)v37];
            a1[1] = v13 + 2;
          }
          else
          {
            v11 = (char *)*a1;
            v12 = (char *)a1[1];
            if ( v12 )
              v13 = v12 - 1;
            else
              v13 = nullptr;
            if ( a1[2] < v13 + 2 )
            {
              v11 = (char *)qvector_reserve((pthread_mutex_t *)a1, v11, (unsigned __int64)(v13 + 2), 1u);
              *a1 = v11;
            }
            a1[1] = v13 + 2;
            v14 = &v13[(_QWORD)v11];
            ++v5;
          }
LABEL_65:
          *v14 = v10;
          v13[(_QWORD)*a1 + 1] = 0;
        }
      }
      return 1;
    }
  }
  return result;
}
