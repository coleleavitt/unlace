__int64 __fastcall sub_407650(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  char *v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  __m128i *v15; // rdi
  char *v16; // rbp
  char *v17; // rbx
  unsigned __int64 v18; // rdx
  unsigned int *v19; // r14
  unsigned int v20; // ecx
  unsigned int *v21; // rdx
  char *v22; // rax
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  char *v28; // r14
  unsigned int *v29; // r15
  unsigned int v30; // ecx
  unsigned int *v31; // rdx
  char *v32; // rax
  char *v33; // rsi
  char *v34; // rsi
  unsigned int *v35; // rdi
  unsigned int *v36; // rdx
  char *v37; // rax
  unsigned int v38; // ecx
  char *v39; // rsi
  __int64 v40; // [rsp+0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+8h] [rbp-50h]
  __int64 v42; // [rsp+10h] [rbp-48h] BYREF
  __int64 v43; // [rsp+18h] [rbp-40h]
  int v44; // [rsp+20h] [rbp-38h]
  char v45; // [rsp+28h] [rbp-30h]
  __int64 v46; // [rsp+30h] [rbp-28h]
  int v47; // [rsp+38h] [rbp-20h]
  int v48; // [rsp+40h] [rbp-18h]
  int v49; // [rsp+48h] [rbp-10h]
  __int64 v50; // [rsp+50h] [rbp-8h]

  v7 = *(_QWORD *)(a1 + 40);
  if ( !v7 || (result = *(unsigned int *)(v7 - 4), !(_DWORD)result) )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v40 = 0;
    v41 = v9;
    v10 = *(_QWORD *)(a1 + 80);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 24);
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      v40 = v11;
    }
    else
    {
      v25 = *(_QWORD *)(a1 + 16);
      if ( !v25 )
      {
        sub_1872CE0("");
        sub_1873130(114, 589);
      }
      ++*(_DWORD *)(v25 + 8);
      sub_15ECFD0(
        (unsigned int)&v42,
        (unsigned int)&v40,
        8,
        a4,
        a5,
        a6,
        v25,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      v26 = v40;
      v27 = v42;
      v42 = v40;
      v40 = v27;
      sub_3FCDF0(v26, v43);
      v11 = v40;
    }
    sub_15EEF60(v11);
    v12 = *(char **)(a1 + 40);
    if ( v12 && (v13 = *((unsigned int *)v12 - 1), (_DWORD)v13) )
    {
      v14 = 8 * v13;
      v15 = *(__m128i **)(a1 + 40);
      v16 = v12 + 8;
      v17 = &v12[8 * v13];
      _BitScanReverse64(&v18, (8 * v13) >> 3);
      sub_3FD5D0(v15, v17, 2LL * (int)v18);
      if ( v14 > 0x80 )
      {
        v28 = v12 + 128;
        do
        {
          v29 = *(unsigned int **)v16;
          v30 = **(_DWORD **)v16;
          if ( v30 < **(_DWORD **)v12 )
          {
            if ( v16 - v12 <= 8 )
            {
              if ( v16 - v12 == 8 )
                *(_QWORD *)v16 = *(_QWORD *)v12;
            }
            else
            {
              memmove(v12 + 8, v12, v16 - v12);
            }
            *(_QWORD *)v12 = v29;
          }
          else
          {
            v31 = *((unsigned int **)v16 - 1);
            v32 = v16 - 8;
            if ( v30 >= *v31 )
            {
              v33 = v16;
            }
            else
            {
              do
              {
                *((_QWORD *)v32 + 1) = v31;
                v33 = v32;
                v31 = *((unsigned int **)v32 - 1);
                v32 -= 8;
              }
              while ( v30 < *v31 );
            }
            *(_QWORD *)v33 = v29;
          }
          v16 += 8;
        }
        while ( v28 != v16 );
        do
        {
          while ( 1 )
          {
            v35 = *(unsigned int **)v28;
            v36 = *((unsigned int **)v28 - 1);
            v37 = v28 - 8;
            v38 = **(_DWORD **)v28;
            if ( v38 < *v36 )
              break;
            v34 = v28;
            v28 += 8;
            *(_QWORD *)v34 = v35;
            if ( v28 == v17 )
              return sub_3FCDF0(v40, v41);
          }
          do
          {
            *((_QWORD *)v37 + 1) = v36;
            v39 = v37;
            v36 = *((unsigned int **)v37 - 1);
            v37 -= 8;
          }
          while ( v38 < *v36 );
          v28 += 8;
          *(_QWORD *)v39 = v35;
        }
        while ( v28 != v17 );
      }
      else if ( v14 != 8 )
      {
        do
        {
          v19 = *(unsigned int **)v16;
          v20 = **(_DWORD **)v16;
          if ( v20 < **(_DWORD **)v12 )
          {
            if ( v16 - v12 <= 8 )
            {
              if ( v16 - v12 == 8 )
                *(_QWORD *)v16 = *(_QWORD *)v12;
            }
            else
            {
              memmove(v12 + 8, v12, v16 - v12);
            }
            *(_QWORD *)v12 = v19;
          }
          else
          {
            v21 = *((unsigned int **)v16 - 1);
            v22 = v16 - 8;
            if ( v20 >= *v21 )
            {
              v23 = v16;
            }
            else
            {
              do
              {
                *((_QWORD *)v22 + 1) = v21;
                v23 = v22;
                v21 = *((unsigned int **)v22 - 1);
                v22 -= 8;
              }
              while ( v20 < *v21 );
            }
            *(_QWORD *)v23 = v19;
          }
          v16 += 8;
        }
        while ( v16 != v17 );
      }
    }
    else
    {
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL);
      v42 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      sub_407600((unsigned int **)(a1 + 40), &v42);
    }
    return sub_3FCDF0(v40, v41);
  }
  return result;
}

