void *__fastcall sub_842E60(_QWORD *a1)
{
  int v1; // r15d
  __pid_t v2; // ebx
  int *v3; // r13
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rbx
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
      v5 = a1[6];
      qmutex_lock(v5);
      sub_8425D0((__int64)a1);
      v2 = waitpid(-1, &stat_loc, v1 | 1);
      if ( v2 == -1 )
        break;
      qmutex_unlock(v5);
LABEL_11:
      v6 = a1[6];
      qmutex_lock(v6);
      for ( ; v2 > 0; v2 = waitpid(-1, &stat_loc, v1 | 1) )
      {
        if ( !(unsigned __int8)sub_8426B0((__int64)a1, v2, stat_loc) )
        {
          v11 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(stat_loc));
          v7 = qalloc_or_throw(32);
          *(_QWORD *)(v7 + 16) = 0;
          *(_BYTE *)(v7 + 24) = 0;
          *(_QWORD *)v7 = a1;
          v8 = (__int64 *)a1[1];
          *(_QWORD *)(v7 + 8) = v8;
          *v8 = v7;
          a1[1] = v7;
          ++a1[2];
          *(_QWORD *)(v7 + 16) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(v11)).m128i_u64[0];
        }
      }
LABEL_15:
      sub_8425D0((__int64)a1);
      qmutex_unlock(v6);
    }
    if ( *v3 == 10 )
      break;
    qmutex_unlock(v5);
    v4 = *v3;
LABEL_4:
    if ( v4 == 4 )
    {
      v6 = a1[6];
      qmutex_lock(v6);
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
          if ( !under_debugger )
            interr(1160);
          BUG();
        }
        v1 = 8;
      }
    }
  }
  qmutex_unlock(v5);
  v9 = a1[7];
  qmutex_lock(v9);
  *((_BYTE *)a1 + 200) = 0;
  qmutex_unlock(v9);
  return nullptr;
}
