__int64 __fastcall sub_8794E0(__int64 a1, __int64 a2, int a3, double *a4)
{
  __int64 v4; // r10
  char v6; // al
  __int64 v8; // r9
  int v9; // r12d
  int v10; // r11d
  unsigned __int8 v11; // cl
  int v12; // esi
  __int64 v13; // rax
  _WORD *v14; // rdx
  int v15; // eax
  __int64 v16; // r14
  int v17; // r10d
  __int16 *v18; // r15
  unsigned __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __m128 *v23; // rax
  __m128 *v24; // rax
  char *v26; // rax
  __int16 *v27; // r12
  __int16 v28; // ax
  int v29; // [rsp+Ch] [rbp-4Ch]
  int v30; // [rsp+Ch] [rbp-4Ch]
  _WORD v31[4]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v6 = dword_2CD6FCC;
  v32 = __readfsqword(0x28u);
  if ( !dword_2CD6FCC )
  {
    sub_866DC0();
    v6 = dword_2CD6FCC;
  }
  if ( (v6 & 0x20) == 0 )
    return 0;
  v8 = 0;
  v9 = 0;
  v10 = -a3;
  do
  {
    v11 = v10 ^ *(_BYTE *)(v4 + v8);
    if ( *(_BYTE *)(v4 + v8) != (_BYTE)v10 )
    {
      v12 = 8 * v8;
      if ( (v11 & 1) != 0 )
      {
LABEL_7:
        if ( (v12 & 0x20) != 0 )
          goto LABEL_14;
LABEL_8:
        if ( v9 > 2 )
          return 0;
LABEL_9:
        v13 = v9++;
        v31[v13] = v12;
      }
      while ( 1 )
      {
        ++v12;
        v11 >>= 1;
        if ( !v11 )
          break;
        while ( 1 )
        {
          if ( (v11 & 1) != 0 )
            goto LABEL_7;
          do
          {
            v11 >>= 1;
            ++v12;
          }
          while ( (v11 & 1) == 0 );
          if ( (v12 & 0x20) == 0 )
            goto LABEL_8;
LABEL_14:
          if ( v9 <= 0 )
            break;
          v14 = v31;
          v15 = 0;
          while ( (unsigned __int16)*v14 != v12 - 32 )
          {
            ++v15;
            ++v14;
            if ( v15 == v9 )
              goto LABEL_8;
          }
          v31[v15] = *v14 | 0x120;
          if ( v9 == v15 )
            goto LABEL_8;
          ++v12;
          v11 >>= 1;
          if ( !v11 )
            goto LABEL_20;
        }
        if ( !v9 )
          goto LABEL_9;
      }
    }
LABEL_20:
    ++v8;
  }
  while ( v8 != 32 );
  if ( !v9 )
    return 0;
  if ( v31[0] )
  {
    sub_86B8E0((unsigned int *)a1, 32, 4, 0, 127, 0);
    if ( v9 > 0 )
    {
      v16 = 0;
      goto LABEL_25;
    }
  }
  else
  {
    if ( !*(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 144) = 0;
      v26 = sub_867CC0(a1, 0x11u, 127, 0, 1, 0);
      if ( v26 )
        v26[1] |= 0x38u;
    }
    sub_870770(a1, 32, 4, 0);
    v16 = 1;
    if ( v9 > 1 )
    {
LABEL_25:
      v17 = 0;
      v18 = v31;
      do
      {
        v19 = v31[v16];
        if ( (v19 & 0x100) != 0 )
        {
          ++v17;
        }
        else
        {
          if ( !*(_DWORD *)a1 )
          {
            *(_DWORD *)(a1 + 144) = 0;
            v29 = v17;
            sub_868840((unsigned int *)a1, 1, 0, 127, v19);
            v17 = v29;
          }
          v30 = v17;
          sub_86B2A0((unsigned int *)a1, 0, 4, 1, 0, 4);
          v17 = v30;
        }
        ++v16;
      }
      while ( v9 > (int)v16 );
      if ( v17 )
      {
        if ( !*(_DWORD *)a1 )
        {
          *(_DWORD *)(a1 + 144) = 0;
          sub_86D220((unsigned int *)a1, 0xD0B0908u, 1, 0, 1, 0, 127, 32);
        }
        v27 = &v31[v9];
        do
        {
          v28 = *v18;
          if ( (*v18 & 0x100) != 0 )
          {
            if ( !*(_DWORD *)a1 )
            {
              *(_DWORD *)(a1 + 144) = 0;
              sub_868840((unsigned int *)a1, 1, 0, 127, (unsigned __int8)v28);
            }
            sub_86B2A0((unsigned int *)a1, 0, 4, 1, 0, 4);
          }
          ++v18;
        }
        while ( v27 != v18 );
      }
    }
  }
  sub_86E080((unsigned int *)a1, a3, 4, 0, 127, 0);
  if ( !*(_DWORD *)a1 )
  {
    v20 = *(_QWORD *)(a1 + 80);
    v21 = *(_QWORD *)(v20 + 8);
    v22 = v21 + 16;
    if ( (unsigned __int64)(v21 + 16) <= 0xFF0 )
    {
      v24 = (__m128 *)(v20 + v21 + 16);
      *(_QWORD *)(v20 + 8) = v22;
      if ( v24 )
      {
LABEL_34:
        *v24 = _mm_loadh_ps(a4);
        *(_QWORD *)a4 = v24;
      }
    }
    else
    {
      v23 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 56))(
                        4096,
                        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
      if ( v23 )
      {
        v23->m128_u64[0] = *(_QWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 80) = v23;
        v24 = v23 + 1;
        v24[-1].m128_u64[1] = 16;
        goto LABEL_34;
      }
      *(_DWORD *)a1 = 2;
    }
  }
  return 1;
}
