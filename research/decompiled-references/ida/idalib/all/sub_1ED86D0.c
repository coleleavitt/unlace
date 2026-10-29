unsigned __int64 __fastcall sub_1ED86D0(__int64 a1, char *a2, __int64 a3)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  char v8; // r10
  __int64 v9; // r9
  unsigned int v10; // edi
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 *v21; // rbx
  __int64 *v22; // r14
  __int64 v23; // rsi
  unsigned __int64 result; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rbx
  unsigned __int8 v29; // al
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  __int64 v35; // rbx
  unsigned __int8 v36; // al
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rsi
  int v45; // eax
  __m128 v46[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( (a3 & 7) != 0 )
    goto LABEL_15;
  v6 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_15;
  v7 = a1 + 9456;
  v8 = *(_BYTE *)(a1 + 9456) & 1;
  if ( v8 )
  {
    v15 = 256;
    v9 = a1 + 9464;
    v13 = ((unsigned __int8)((unsigned int)v6 >> 9) ^ (unsigned __int8)((unsigned int)v6 >> 4)) & 0xF;
    v14 = (__int64 *)(a1
                    + 9464
                    + 16LL
                    * (((unsigned __int8)((unsigned int)v6 >> 9) ^ (unsigned __int8)((unsigned int)v6 >> 4)) & 0xF));
    v43 = *v14;
    if ( *v14 == v6 )
      goto LABEL_7;
    v44 = 256;
    v12 = 15;
    if ( v43 != -4096 )
    {
LABEL_69:
      v45 = 1;
      do
      {
        v13 = v12 & (v45 + v13);
        v14 = (__int64 *)(v9 + 16LL * v13);
        if ( v6 == *v14 )
        {
          if ( !v8 )
          {
            v11 = *(_DWORD *)(a1 + 9472);
            goto LABEL_6;
          }
          v15 = 256;
          goto LABEL_7;
        }
        ++v45;
      }
      while ( *v14 != -4096 );
      if ( !v8 )
      {
        v10 = *(_DWORD *)(a1 + 9472);
        goto LABEL_74;
      }
      v44 = 256;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 9464);
    v10 = *(_DWORD *)(a1 + 9472);
    v11 = v10;
    if ( v10 )
    {
      v12 = v10 - 1;
      v13 = (v10 - 1) & (((unsigned int)v6 >> 4) ^ ((unsigned int)v6 >> 9));
      v14 = (__int64 *)(v9 + 16LL * v13);
      if ( v6 == *v14 )
      {
LABEL_6:
        v15 = 16LL * v11;
LABEL_7:
        sub_1ED8660(v46, v14, (_QWORD *)(v9 + v15), v7, 1);
        v16 = v46[0].m128_u64[0];
        goto LABEL_8;
      }
      if ( *v14 != -4096 )
        goto LABEL_69;
    }
LABEL_74:
    v44 = 16LL * v10;
  }
  sub_1ED8660(v46, (_QWORD *)(v9 + v44), (_QWORD *)(v9 + v44), v7, 1);
  v16 = v46[0].m128_u64[0];
LABEL_8:
  if ( (*(_BYTE *)(a1 + 9456) & 1) != 0 )
  {
    v17 = a1 + 9464;
    v18 = 256;
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 9464);
    v18 = 16LL * *(unsigned int *)(a1 + 9472);
  }
  sub_1ED8660(v46, (_QWORD *)(v17 + v18), (_QWORD *)(v17 + v18), v7, 1);
  if ( v46[0].m128_u64[0] != v16 )
  {
    v19 = *(_QWORD *)(a1 + 9720);
    v20 = v19 + 40LL * *(unsigned int *)(v16 + 8);
    if ( v20 != v19 + 40LL * *(unsigned int *)(a1 + 9728) )
    {
      v21 = *(__int64 **)(v20 + 8);
      v22 = &v21[*(unsigned int *)(v20 + 16)];
      while ( v22 != v21 )
      {
        v23 = *v21++;
        sub_15C14A0(*(_QWORD *)(a1 + 128) + 2608LL, v23);
      }
      *(_DWORD *)(v20 + 16) = 0;
    }
  }
LABEL_15:
  result = sub_15C1C30(*(_QWORD *)(a1 + 128) + 2608LL, a2, a3);
  if ( !(_BYTE)result )
  {
    v25 = *(_QWORD *)(a1 + 128);
    if ( !*(_QWORD *)(v25 + 192) )
      return result;
    result = sub_15C15D0(v25 + 2608, a3);
    v27 = v26;
    v46[0].m128_u64[0] = result;
    if ( v26 == result )
      return result;
    while ( 1 )
    {
      if ( (result & 1) != 0 )
      {
        if ( *(char **)(result & 0xFFFFFFFFFFFFFFFELL) == a2 )
          goto LABEL_20;
        sub_15C20B0((__int64 *)v46);
        result = v46[0].m128_u64[0];
      }
      else
      {
        if ( a2 == (char *)result )
        {
LABEL_20:
          v28 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 192LL);
          v29 = a2[28] & 0x7F;
          if ( (unsigned int)v29 - 40 <= 6 && v29 != 43 )
          {
            v30 = sub_1703870(v28 + 432, (__int64)a2);
            v31 = *(_BYTE *)(v28 + 452) ? *(unsigned int *)(v28 + 444) : *(unsigned int *)(v28 + 440);
            v32 = *(_QWORD *)(v28 + 432) + 8 * v31;
            if ( v30 != (_QWORD *)v32 && (*v30 == -2 || *v30 == -1) )
            {
              do
                ++v30;
              while ( (_QWORD *)v32 != v30 && *v30 >= 0xFFFFFFFFFFFFFFFELL );
            }
          }
          result = (unsigned __int64)sub_1703870(v28 + 80, (__int64)a2);
          if ( *(_BYTE *)(v28 + 100) )
            v33 = *(_QWORD *)(v28 + 80) + 8LL * *(unsigned int *)(v28 + 92);
          else
            v33 = *(_QWORD *)(v28 + 80) + 8LL * *(unsigned int *)(v28 + 88);
          if ( result != v33 && *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL )
          {
            result += 8LL;
            do
            {
              v34 = (_QWORD *)result;
              if ( v33 == result )
                break;
              result += 8LL;
            }
            while ( *v34 >= 0xFFFFFFFFFFFFFFFELL );
          }
          return result;
        }
        v46[0].m128_u64[0] = 0;
        result = 0;
      }
      if ( v27 == result )
        return result;
    }
  }
  result = *(_QWORD *)(a1 + 128);
  v35 = *(_QWORD *)(result + 192);
  if ( v35 )
  {
    v36 = a2[28] & 0x7F;
    if ( (unsigned int)v36 - 40 <= 6 && v36 != 43 )
    {
      v37 = sub_1703870(v35 + 432, (__int64)a2);
      v38 = *(_BYTE *)(v35 + 452)
          ? *(_QWORD *)(v35 + 432) + 8LL * *(unsigned int *)(v35 + 444)
          : *(_QWORD *)(v35 + 432) + 8LL * *(unsigned int *)(v35 + 440);
      if ( v37 != (_QWORD *)v38 && *v37 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v39 = v37 + 1;
        do
        {
          v40 = v39;
          if ( (_QWORD *)v38 == v39 )
            break;
          ++v39;
        }
        while ( *v40 >= 0xFFFFFFFFFFFFFFFELL );
      }
    }
    result = (unsigned __int64)sub_1703870(v35 + 80, (__int64)a2);
    if ( *(_BYTE *)(v35 + 100) )
      v41 = *(_QWORD *)(v35 + 80) + 8LL * *(unsigned int *)(v35 + 92);
    else
      v41 = *(_QWORD *)(v35 + 80) + 8LL * *(unsigned int *)(v35 + 88);
    if ( result != v41 && *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL )
    {
      result += 8LL;
      do
      {
        v42 = (_QWORD *)result;
        if ( v41 == result )
          break;
        result += 8LL;
      }
      while ( *v42 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  return result;
}
