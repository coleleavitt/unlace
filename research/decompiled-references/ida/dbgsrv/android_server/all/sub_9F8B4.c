/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9F8B4
// Address: 0x000000000009F8B4

//----- (000000000009F8B4) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9F8B4(pthread_mutex_t *a1, unsigned int *a2)
{
  pthread_mutex_t *v4; // x0
  pthread_mutex_t *v5; // x0
  pthread_mutex_t *v6; // x0
  pthread_mutex_t *v7; // x0
  pthread_mutex_t *v8; // x0
  pthread_mutex_t *result; // x0
  char *v10; // x8
  const char *v11; // x20
  size_t v12; // x2
  pthread_mutex_t *v13; // x0
  pthread_mutex_t *p_src; // x1
  pthread_mutex_t *v15; // x0
  pthread_mutex_t src; // [xsp+Ch] [xbp-54h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = pack_dd(&src, (unsigned __int64)&src.__align + 5, a2[5] & 0xFFFFFFF);
  sub_545E8(a1, &src, (char *)v4 - (char *)&src);
  v5 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *a2);
  sub_545E8(a1, &src, (char *)v5 - (char *)&src);
  v6 = pack_dd(&src, (unsigned __int64)&src.__align + 5, a2[1]);
  sub_545E8(a1, &src, (char *)v6 - (char *)&src);
  v7 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *((_QWORD *)a2 + 1) + 1LL);
  sub_545E8(a1, &src, (char *)v7 - (char *)&src);
  v8 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *((unsigned __int8 *)a2 + 16));
  result = sub_545E8(a1, &src, (char *)v8 - (char *)&src);
  switch ( a2[5] & 0xFFFFFFF )
  {
    case 1u:
    case 8u:
    case 0xBu:
      return sub_9F2EC(a1, (__int64)(a2 + 6));
    case 2u:
    case 4u:
      v12 = (char *)pack_dd(&src, (unsigned __int64)&src.__align + 5, a2[6]) - (char *)&src;
      goto LABEL_13;
    case 3u:
    case 9u:
    case 0xAu:
      if ( *((_QWORD *)a2 + 4) )
        v10 = *((char **)a2 + 3);
      else
        v10 = &byte_F154B;
      if ( v10 )
        v11 = v10;
      else
        v11 = "";
      v12 = strlen(v11) + 1;
      v13 = a1;
      p_src = (pthread_mutex_t *)v11;
      goto LABEL_14;
    case 5u:
      v15 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *((_QWORD *)a2 + 3) + 1LL);
      sub_545E8(a1, &src, (char *)v15 - (char *)&src);
      v12 = (char *)pack_dq(&src, (unsigned __int64)&src.__align + 10, *((_QWORD *)a2 + 4) + 1LL) - (char *)&src;
LABEL_13:
      p_src = &src;
      v13 = a1;
LABEL_14:
      result = sub_545E8(v13, p_src, v12);
      break;
    case 7u:
      result = sub_9F4C8(a1, a2 + 6);
      break;
    default:
      return result;
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
