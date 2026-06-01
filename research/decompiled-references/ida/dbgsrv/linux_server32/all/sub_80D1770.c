/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D1770
// Address: 0x080D1770

//----- (080D1770) --------------------------------------------------------
int __cdecl sub_80D1770(int a1)
{
  int *v1; // ecx
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  int v6; // [esp-14h] [ebp-54h]
  int v7; // [esp-10h] [ebp-50h]
  int v8; // [esp-Ch] [ebp-4Ch]
  int options; // [esp+0h] [ebp-40h]
  pthread_mutex_t *v10; // [esp+4h] [ebp-3Ch]
  int *v11; // [esp+8h] [ebp-38h]
  unsigned int v12; // [esp+8h] [ebp-38h]
  pthread_mutex_t *mutex; // [esp+Ch] [ebp-34h]
  pthread_mutex_t *v14; // [esp+14h] [ebp-2Ch]
  pthread_mutex_t *v15; // [esp+14h] [ebp-2Ch]
  unsigned int v16; // [esp+20h] [ebp-20h] BYREF
  unsigned int v17; // [esp+24h] [ebp-1Ch]

  v17 = __readgsdword(0x14u);
  options = 1073741832;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = 0;
      v14 = (pthread_mutex_t *)waitpid(-1, (int *)&v16, options);
      if ( v14 != (pthread_mutex_t *)-1 )
        goto LABEL_11;
      v1 = __errno_location();
      v2 = *v1;
      if ( *v1 != 10 )
        goto LABEL_4;
      v11 = v1;
      mutex = *(pthread_mutex_t **)(a1 + 24);
      sub_80D15A0(mutex);
      sub_80D0E30(a1);
      v14 = (pthread_mutex_t *)waitpid(-1, (int *)&v16, options | 1);
      if ( v14 == (pthread_mutex_t *)-1 )
        break;
      sub_80D1600(mutex);
LABEL_11:
      v10 = *(pthread_mutex_t **)(a1 + 24);
      sub_80D15A0(v10);
      for ( ; (int)v14 > 0; v14 = (pthread_mutex_t *)waitpid(-1, (int *)&v16, options | 1) )
      {
        if ( !sub_80D0F20(a1, (int)v14, v16) )
        {
          v12 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(v16));
          v3 = sub_80CF8B0(0x14u);
          *v3 = a1;
          v3[2] = 0;
          v3[3] = 0;
          *((_BYTE *)v3 + 16) = 0;
          v4 = *(_DWORD **)(a1 + 4);
          v3[1] = v4;
          *v4 = v3;
          *(_DWORD *)(a1 + 4) = v3;
          ++*(_DWORD *)(a1 + 8);
          *((_QWORD *)v3 + 1) = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v14), _mm_cvtsi32_si128(v12)).m128i_u64[0];
        }
      }
LABEL_15:
      sub_80D0E30(a1);
      sub_80D1600(v10);
    }
    if ( *v11 == 10 )
      break;
    sub_80D1600(mutex);
    v2 = *v11;
LABEL_4:
    if ( v2 == 4 )
    {
      v10 = *(pthread_mutex_t **)(a1 + 24);
      sub_80D15A0(v10);
      goto LABEL_15;
    }
    if ( v2 == 22 )
    {
      if ( (options & 8) != 0 )
      {
        options &= ~8u;
      }
      else
      {
        if ( !options )
        {
          if ( !byte_811F8A1 )
          {
            if ( v17 == __readgsdword(0x14u) )
              sub_80CFF40(1160, v6, v7, v8);
            sub_80D7AB0();
          }
          BUG();
        }
        options = 8;
      }
    }
  }
  sub_80D1600(mutex);
  v15 = *(pthread_mutex_t **)(a1 + 28);
  sub_80D15A0(v15);
  *(_BYTE *)(a1 + 164) = 0;
  sub_80D1600(v15);
  if ( v17 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80D19DE: variable 'v6' is possibly undefined
// 80D19DE: variable 'v7' is possibly undefined
// 80D19DE: variable 'v8' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
