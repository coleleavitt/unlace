void *__fastcall sub_98580(_QWORD *a1)
{
  int v1; // r15d
  __pid_t v2; // ebx
  int *v3; // r13
  int v4; // eax
  pthread_mutex_t *v5; // r14
  pthread_mutex_t *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  pthread_mutex_t *v9; // rbx
  unsigned int v11; // [rsp+Ch] [rbp-4Ch]
  int stat_loc; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v1 = 1073741832;
  v13 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      stat_loc = 0;
      v2 = waitpid(-1, &stat_loc, v1);
      if ( v2 != -1 )
        goto LABEL_11;
      v3 = __errno_location();
      v4 = *v3;
      if ( *v3 != 10 )
        goto LABEL_4;
      v5 = (pthread_mutex_t *)a1[6];
      sub_98400(v5);
      sub_97CF0((__int64)a1);
      v2 = waitpid(-1, &stat_loc, v1 | 1);
      if ( v2 == -1 )
        break;
      sub_98450(v5);
LABEL_11:
      v6 = (pthread_mutex_t *)a1[6];
      sub_98400(v6);
      for ( ; v2 > 0; v2 = waitpid(-1, &stat_loc, v1 | 1) )
      {
        if ( !(unsigned __int8)sub_97DD0((__int64)a1, v2, stat_loc) )
        {
          v11 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(stat_loc));
          v7 = sub_96030(32);
          v7[2] = 0;
          *((_BYTE *)v7 + 24) = 0;
          *v7 = a1;
          v8 = (_QWORD *)a1[1];
          v7[1] = v8;
          *v8 = v7;
          a1[1] = v7;
          ++a1[2];
          v7[2] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(v11)).m128i_u64[0];
        }
      }
LABEL_15:
      sub_97CF0((__int64)a1);
      sub_98450(v6);
    }
    if ( *v3 == 10 )
      break;
    sub_98450(v5);
    v4 = *v3;
LABEL_4:
    if ( v4 == 4 )
    {
      v6 = (pthread_mutex_t *)a1[6];
      sub_98400(v6);
      goto LABEL_15;
    }
    if ( v4 == 22 )
    {
      if ( (v1 & 8) != 0 )
      {
        v1 &= ~8u;
      }
      else
      {
        if ( !v1 )
        {
          if ( !byte_1671A1 )
            sub_96F80(1160);
          BUG();
        }
        v1 = 8;
      }
    }
  }
  sub_98450(v5);
  v9 = (pthread_mutex_t *)a1[7];
  sub_98400(v9);
  *((_BYTE *)a1 + 200) = 0;
  sub_98450(v9);
  return nullptr;
}

