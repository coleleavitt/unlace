__int64 __fastcall sub_8FF40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char *v3; // rax
  __int64 v4; // rdx
  const char *v5; // rbx
  unsigned __int64 v6; // rdx
  const char *v7; // r14
  const char *v8; // r13
  const char *v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  size_t v12; // r15
  int utf8_char; // eax
  unsigned __int8 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  __m128d v22; // xmm0
  __int64 v23; // rdx
  char v24; // cl
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 v29; // rsi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  char v34; // al
  unsigned __int8 v35; // al
  int v36; // eax
  const char *v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+10h] [rbp-178h]
  __int64 (__fastcall *v41)(__int64, _QWORD); // [rsp+18h] [rbp-170h]
  __int64 v42; // [rsp+18h] [rbp-170h]
  __int64 v43; // [rsp+20h] [rbp-168h]
  __int64 v44; // [rsp+28h] [rbp-160h]
  const char *v45; // [rsp+38h] [rbp-150h]
  _BYTE *v46; // [rsp+38h] [rbp-150h]
  _DWORD v47[32]; // [rsp+40h] [rbp-148h] BYREF
  _DWORD v48[32]; // [rsp+C0h] [rbp-C8h] BYREF
  char v49[8]; // [rsp+140h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+148h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v2 = a1;
  v3 = (char *)v47;
  do
  {
    *(_DWORD *)v3 = -1;
    v3 += 8;
    *(v3 - 4) = 0;
  }
  while ( v3 != (char *)v48 );
  do
  {
    *(_DWORD *)v3 = -1;
    v3 += 8;
    *(v3 - 4) = 0;
  }
  while ( v49 != v3 );
  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
  {
    v8 = s1;
    v7 = s1;
    v5 = s1;
    goto LABEL_7;
  }
  v5 = *(const char **)a2;
  v6 = v4 - 1;
  v7 = (const char *)(*(_QWORD *)a2 + v6);
  if ( *(_QWORD *)(a1 + 24) < v6 )
  {
    v8 = *(const char **)a2;
    *(_QWORD *)(a1 + 8) = qvector_reserve();
    if ( v7 < v5 )
      return sub_8FD80(v2);
    goto LABEL_7;
  }
  v8 = *(const char **)a2;
  if ( v7 >= v5 )
  {
LABEL_7:
    v9 = v5;
    v10 = 0;
    v40 = 0;
    while ( 1 )
    {
      if ( !*v9 )
      {
LABEL_20:
        v2 = a1;
        return sub_8FD80(v2);
      }
      v45 = v9;
      utf8_char = get_utf8_char();
      switch ( utf8_char )
      {
        case -1:
          ++v9;
          goto LABEL_12;
        case 4:
          sub_8FD80(a1);
          if ( !*(_BYTE *)(a1 + 164) )
          {
            v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1);
            *(_BYTE *)(a1 + 164) = 1;
            *(_DWORD *)(a1 + 160) = v21;
          }
          v22 = (__m128d)_mm_loadu_si128((const __m128i *)(a1 + 152));
          *(__m128d *)(a1 + 152) = _mm_shuffle_pd(v22, v22, 1);
          goto LABEL_16;
        case 1:
          v15 = *v9;
          if ( *v9 != 40 )
          {
            if ( v15 == 51 )
              goto LABEL_28;
            if ( v10 <= 0xF )
            {
              v47[2 * v10] = *(_DWORD *)(a1 + 152);
              LOBYTE(v47[2 * v10++ + 1]) = *(_BYTE *)(a1 + 156);
            }
            if ( v15 == 19 )
            {
              v41 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL);
              v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
              v36 = v41(a1, v35);
              *(_BYTE *)(a1 + 156) = 1;
              *(_DWORD *)(a1 + 152) = v36;
              v34 = *v9;
            }
            else
            {
              if ( (unsigned __int8)(v15 - 41) <= 7u )
                goto LABEL_28;
              v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v15);
              *(_BYTE *)(a1 + 156) = 1;
              *(_DWORD *)(a1 + 152) = v33;
              if ( v33 == 65793 )
              {
                if ( v40 <= 0xF )
                {
                  v48[2 * v40] = *(_DWORD *)(a1 + 160);
                  LOBYTE(v48[2 * v40++ + 1]) = *(_BYTE *)(a1 + 164);
                }
                *(_DWORD *)(a1 + 160) = -16776961;
                *(_BYTE *)(a1 + 164) = 1;
                sub_8FD80(a1);
              }
              v34 = *v9;
            }
LABEL_70:
            if ( v34 )
LABEL_28:
              ++v9;
LABEL_29:
            v16 = *(_QWORD *)(a1 + 40);
            v17 = *(_QWORD *)(a1 + 32);
            if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v16 + 1) )
            {
              v32 = qvector_reserve();
              *(_QWORD *)(a1 + 32) = v32;
              v17 = v32;
              v16 = *(_QWORD *)(a1 + 40);
            }
            v18 = v17 + 20 * v16;
            v19 = (_DWORD)v9 - (_DWORD)v8;
            *(_OWORD *)v18 = -1;
            *(_BYTE *)(v18 + 16) = 0;
            v20 = *(_DWORD *)(a1 + 188);
            ++*(_QWORD *)(a1 + 40);
            *(_DWORD *)v18 = v20;
            if ( v15 == 40 )
            {
              *(_BYTE *)(v18 + 16) = 40;
              *(_DWORD *)(v18 + 8) = v19;
              *(_DWORD *)(v18 + 4) = 0;
              *(_DWORD *)(v18 + 12) = v19;
            }
            else
            {
              *(_BYTE *)(v18 + 16) = v15;
              *(_DWORD *)(v18 + 8) = v19;
            }
            goto LABEL_16;
          }
          while ( 1 )
          {
            v37 = v9++;
            if ( v9 == v45 + 16 )
              break;
            if ( !*v9 )
              goto LABEL_29;
          }
          v34 = v37[1];
          goto LABEL_70;
      }
      if ( utf8_char != 2 )
        break;
      v23 = *(_QWORD *)(a1 + 40);
      v24 = *v9;
      if ( v23 )
      {
        v25 = *(_QWORD *)(a1 + 32) + 20 * v23 - 20;
        while ( 1 )
        {
          --v23;
          if ( *(int *)(v25 + 4) < 0 && v24 == *(_BYTE *)(v25 + 16) )
            break;
          v25 -= 20;
          if ( !v23 )
            goto LABEL_45;
        }
        if ( v25 )
        {
          v26 = 0;
          if ( v8 < v9 )
            v26 = (_DWORD)v9 - 1 - (_DWORD)v8;
          *(_DWORD *)(v25 + 4) = *(_DWORD *)(a1 + 188) - *(_DWORD *)v25;
          *(_DWORD *)(v25 + 12) = v26;
          v24 = *v9;
        }
      }
LABEL_45:
      if ( v24 != 51 )
      {
        if ( *(_BYTE *)(a1 + 156) && *(_DWORD *)(a1 + 152) == 65793 )
        {
          if ( v40 )
          {
            v38 = v48[2 * --v40];
            *(_DWORD *)(a1 + 160) = v38;
            *(_BYTE *)(a1 + 164) = v48[2 * v40 + 1];
          }
          sub_8FD80(a1);
          v24 = *v9;
        }
        else if ( v10 )
        {
          --v10;
          *(_DWORD *)(a1 + 152) = v47[2 * v10];
          *(_BYTE *)(a1 + 156) = v47[2 * v10 + 1];
          v24 = *v9;
        }
        if ( !v24 )
          goto LABEL_20;
      }
      ++v9;
LABEL_16:
      if ( v7 < v9 )
        goto LABEL_20;
    }
    if ( utf8_char == 3 )
    {
      if ( !v9[1] )
      {
        ++v9;
        goto LABEL_16;
      }
      v46 = v9 + 1;
      v31 = get_utf8_char();
      ++v9;
      if ( v31 == -1 )
        v9 = v46 + 1;
    }
LABEL_12:
    v11 = put_utf8_char();
    v12 = v11;
    if ( v11 > 0 )
    {
      v27 = *(_QWORD *)(a1 + 16);
      v28 = v11;
      if ( v27 )
      {
        --v27;
        v28 = v11 + v27;
      }
      v29 = *(_QWORD *)(a1 + 8);
      v30 = v28 + 1;
      if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v28 + 1) )
      {
        v44 = v28;
        v43 = v27;
        v42 = v28 + 1;
        v39 = qvector_reserve();
        v28 = v44;
        v27 = v43;
        *(_QWORD *)(a1 + 8) = v39;
        v30 = v42;
        v29 = v39;
      }
      *(_QWORD *)(a1 + 16) = v30;
      *(_BYTE *)(v29 + v28) = 0;
      memmove((void *)(v27 + *(_QWORD *)(a1 + 8)), v49, v12);
      if ( *(_BYTE *)(a1 + 172) != *(_BYTE *)(a1 + 156) )
        goto LABEL_14;
    }
    else if ( *(_BYTE *)(a1 + 172) != *(_BYTE *)(a1 + 156) )
    {
LABEL_14:
      sub_8FD80(a1);
LABEL_15:
      ++*(_DWORD *)(a1 + 188);
      goto LABEL_16;
    }
    if ( *(_DWORD *)(a1 + 168) == *(_DWORD *)(a1 + 152)
      && *(_BYTE *)(a1 + 180) == *(_BYTE *)(a1 + 164)
      && *(_DWORD *)(a1 + 176) == *(_DWORD *)(a1 + 160) )
    {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  return sub_8FD80(v2);
}

