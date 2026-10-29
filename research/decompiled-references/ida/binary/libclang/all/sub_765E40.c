__int64 __fastcall sub_765E40(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // esi
  unsigned int v22; // esi
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned __int64 v26; // r12
  void *v27; // rdi
  const void *v28; // rsi
  size_t v29; // rdx
  unsigned int v30; // ecx
  unsigned int v31; // esi
  unsigned int v32; // edx
  unsigned int v33; // eax

  result = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)result
    || (*(_DWORD *)(a1 + 60) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 64) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 68) & 0x7FFFFFFF) != 0
    || *(_DWORD *)(a1 + 72)
    || (*(_DWORD *)(a1 + 76) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 80) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 84) & 0x7FFFFFFF) != 0
    || *(_DWORD *)(a1 + 88)
    || (*(_DWORD *)(a1 + 92) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 96) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a1 + 100) & 0x7FFFFFFF) != 0
    || *(_BYTE *)(a1 + 104)
    || *(_BYTE *)(a1 + 105)
    || *(_BYTE *)(a1 + 106)
    || *(_DWORD *)(a2 + 56)
    || (*(_DWORD *)(a2 + 60) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a2 + 64) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a2 + 68) & 0x7FFFFFFF) != 0
    || *(_DWORD *)(a2 + 72)
    || (*(_DWORD *)(a2 + 76) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a2 + 80) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a2 + 84) & 0x7FFFFFFF) != 0
    || *(_DWORD *)(a2 + 88)
    || (*(_DWORD *)(a2 + 92) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a2 + 96) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a2 + 100) & 0x7FFFFFFF) != 0
    || *(_BYTE *)(a2 + 104)
    || *(_BYTE *)(a2 + 105)
    || *(_BYTE *)(a2 + 106) )
  {
    if ( *(_QWORD *)(a1 + 8) || a1 == a2 || (v26 = *(_QWORD *)(a2 + 8)) == 0 )
    {
LABEL_3:
      *(_BYTE *)(a1 + 106) |= *(_BYTE *)(a2 + 106);
      *(_BYTE *)(a1 + 105) |= *(_BYTE *)(a2 + 105);
      *(_BYTE *)(a1 + 104) |= *(_BYTE *)(a2 + 104);
      if ( (unsigned int)result < *(_DWORD *)(a2 + 56)
        || (_DWORD)result == *(_DWORD *)(a2 + 56)
        && ((v13 = *(_DWORD *)(a2 + 60) & 0x7FFFFFFF, v14 = *(_DWORD *)(a1 + 60) & 0x7FFFFFFF, v14 < v13)
         || v13 == v14
         && ((v15 = *(_DWORD *)(a2 + 64) & 0x7FFFFFFF, v16 = *(_DWORD *)(a1 + 64) & 0x7FFFFFFF, v16 < v15)
          || v15 == v16 && (*(_DWORD *)(a1 + 68) & 0x7FFFFFFFu) < (*(_DWORD *)(a2 + 68) & 0x7FFFFFFFu))) )
      {
        *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
      }
      v5 = *(_DWORD *)(a1 + 72);
      v6 = *(_DWORD *)(a2 + 72);
      if ( v5 )
      {
        if ( !v6 )
        {
          if ( (*(_DWORD *)(a2 + 76) & 0x7FFFFFFF) != 0
            || (*(_DWORD *)(a2 + 80) & 0x7FFFFFFF) != 0
            || (*(_DWORD *)(a2 + 84) & 0x7FFFFFFF) != 0 )
          {
            goto LABEL_8;
          }
LABEL_9:
          result = *(unsigned int *)(a1 + 88);
          v7 = *(_DWORD *)(a2 + 88);
          if ( (_DWORD)result )
          {
            if ( v7 )
            {
              if ( v7 < (unsigned int)result )
                goto LABEL_19;
              if ( (_DWORD)result != v7 )
                return result;
              v8 = *(_DWORD *)(a1 + 92);
              v9 = *(_DWORD *)(a2 + 92);
              goto LABEL_14;
            }
            v9 = *(_DWORD *)(a2 + 92);
            if ( (v9 & 0x7FFFFFFF) != 0 )
              goto LABEL_19;
          }
          else
          {
            v8 = *(_DWORD *)(a1 + 92);
            if ( (v8 & 0x7FFFFFFF) != 0 )
            {
              if ( v7 )
                return result;
              v9 = *(_DWORD *)(a2 + 92);
              if ( (v9 & 0x7FFFFFFF) != 0 || (*(_DWORD *)(a2 + 96) & 0x7FFFFFFF) != 0 )
                goto LABEL_14;
LABEL_31:
              if ( (*(_DWORD *)(a2 + 100) & 0x7FFFFFFF) == 0 )
              {
                if ( (_DWORD)result )
                  return result;
                v8 = *(_DWORD *)(a1 + 92);
LABEL_34:
                v17 = v9 & 0x7FFFFFFF;
                v18 = v8 & 0x7FFFFFFF;
                if ( v18 >= v17 )
                {
                  if ( v17 != v18 )
                    return result;
                  v19 = *(_DWORD *)(a2 + 96) & 0x7FFFFFFF;
                  result = *(_DWORD *)(a1 + 96) & 0x7FFFFFFF;
                  if ( (unsigned int)result >= v19 )
                  {
                    if ( v19 != (_DWORD)result )
                      return result;
                    result = *(_DWORD *)(a2 + 100) & 0x7FFFFFFF;
                    if ( (*(_DWORD *)(a1 + 100) & 0x7FFFFFFFu) >= (unsigned int)result )
                      return result;
                  }
                }
LABEL_19:
                *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
                return result;
              }
LABEL_113:
              if ( (_DWORD)result )
                goto LABEL_19;
              v8 = *(_DWORD *)(a1 + 92);
              goto LABEL_14;
            }
            if ( (*(_DWORD *)(a1 + 96) & 0x7FFFFFFF) == 0 && (*(_DWORD *)(a1 + 100) & 0x7FFFFFFF) == 0 )
            {
              if ( v7 )
                goto LABEL_19;
              v9 = *(_DWORD *)(a2 + 92);
              goto LABEL_34;
            }
            if ( v7 )
              return result;
            v9 = *(_DWORD *)(a2 + 92);
            if ( (v9 & 0x7FFFFFFF) != 0 )
            {
LABEL_14:
              v10 = v8 & 0x7FFFFFFF;
              v11 = v9 & 0x7FFFFFFF;
              if ( v11 >= v10 )
              {
                if ( v10 != v11 )
                  return result;
                v12 = *(_DWORD *)(a1 + 96) & 0x7FFFFFFF;
                result = *(_DWORD *)(a2 + 96) & 0x7FFFFFFF;
                if ( (unsigned int)result >= v12 )
                {
                  if ( v12 != (_DWORD)result )
                    return result;
                  result = *(_DWORD *)(a1 + 100) & 0x7FFFFFFF;
                  if ( (*(_DWORD *)(a2 + 100) & 0x7FFFFFFFu) >= (unsigned int)result )
                    return result;
                }
              }
              goto LABEL_19;
            }
          }
          if ( (*(_DWORD *)(a2 + 96) & 0x7FFFFFFF) != 0 )
            goto LABEL_113;
          goto LABEL_31;
        }
        if ( v6 >= v5 )
          goto LABEL_92;
LABEL_8:
        *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
        goto LABEL_9;
      }
      v20 = *(_DWORD *)(a1 + 76);
      if ( (v20 & 0x7FFFFFFF) != 0
        || (*(_DWORD *)(a1 + 80) & 0x7FFFFFFF) != 0
        || (*(_DWORD *)(a1 + 84) & 0x7FFFFFFF) != 0 )
      {
        if ( v6 )
          goto LABEL_9;
        v21 = *(_DWORD *)(a2 + 76);
        if ( (v21 & 0x7FFFFFFF) != 0 || (*(_DWORD *)(a2 + 80) & 0x7FFFFFFF) != 0 )
        {
LABEL_94:
          v30 = v20 & 0x7FFFFFFF;
          v31 = v21 & 0x7FFFFFFF;
          if ( v31 < v30 )
            goto LABEL_8;
          if ( v30 == v31 )
          {
            v32 = *(_DWORD *)(a1 + 80) & 0x7FFFFFFF;
            v33 = *(_DWORD *)(a2 + 80) & 0x7FFFFFFF;
            if ( v33 < v32 || v32 == v33 && (*(_DWORD *)(a2 + 84) & 0x7FFFFFFFu) < (*(_DWORD *)(a1 + 84) & 0x7FFFFFFFu) )
              goto LABEL_8;
          }
          goto LABEL_9;
        }
        if ( (*(_DWORD *)(a2 + 84) & 0x7FFFFFFF) != 0 )
        {
LABEL_92:
          if ( v5 != v6 )
            goto LABEL_9;
          v20 = *(_DWORD *)(a1 + 76);
          v21 = *(_DWORD *)(a2 + 76);
          goto LABEL_94;
        }
      }
      else
      {
        if ( v6 )
          goto LABEL_8;
        v21 = *(_DWORD *)(a2 + 76);
      }
      v22 = v21 & 0x7FFFFFFF;
      v23 = v20 & 0x7FFFFFFF;
      if ( v23 < v22 )
        goto LABEL_8;
      if ( v22 == v23 )
      {
        v24 = *(_DWORD *)(a2 + 80) & 0x7FFFFFFF;
        v25 = *(_DWORD *)(a1 + 80) & 0x7FFFFFFF;
        if ( v25 < v24 || v24 == v25 && (*(_DWORD *)(a1 + 84) & 0x7FFFFFFFu) < (*(_DWORD *)(a2 + 84) & 0x7FFFFFFFu) )
          goto LABEL_8;
      }
      goto LABEL_9;
    }
    if ( *(_QWORD *)(a1 + 16) < v26 )
    {
      sub_25D6230(a1, a1 + 24, *(_QWORD *)(a2 + 8), 1);
      v29 = *(_QWORD *)(a2 + 8);
      if ( !v29 )
        goto LABEL_90;
      v27 = *(void **)a1;
      v28 = *(const void **)a2;
    }
    else
    {
      v27 = *(void **)a1;
      v28 = *(const void **)a2;
      v29 = *(_QWORD *)(a2 + 8);
    }
    memcpy(v27, v28, v29);
LABEL_90:
    *(_QWORD *)(a1 + 8) = v26;
    LODWORD(result) = *(_DWORD *)(a1 + 56);
    goto LABEL_3;
  }
  return result;
}

