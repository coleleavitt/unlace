/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A0E4
// Address: 0x000000000009A0E4

//----- (000000000009A0E4) ----------------------------------------------------
__int64 __fastcall sub_9A0E4(__int64 a1, pthread_mutex_t *a2, __int64 a3)
{
  int v6; // w0
  double v7; // d0
  __int64 v8; // x8
  __int64 v9; // x23
  const char *v10; // x3
  pthread_mutex_t *v11; // x22
  __int64 v12; // x0
  double v13; // d0
  double v14; // d1
  double v15; // d2
  int v16; // w8
  pthread_mutex_t *v17; // x21
  unsigned int v18; // w8
  int v19; // w8
  char *v20; // x8
  pthread_mutex_t *v21; // x9
  int v22; // w10
  int v23; // w0

  v6 = sub_9DA64();
  v8 = *(unsigned int *)(a1 + 20);
  if ( v6 == 8 )
    v9 = -1;
  else
    v9 = 0xFFFFFFFFLL;
  if ( ((unsigned int)v8 & 0xFFFFFFF) > 0xE )
    v10 = "???";
  else
    v10 = off_15E520[v8 << 36 >> 36];
  v11 = (pthread_mutex_t *)((char *)a2 + a3);
  v12 = qsnprintf(a2, a3, "%s ea=%a", v10, v7);
  v16 = *(_DWORD *)(a1 + 20);
  v17 = (pthread_mutex_t *)((char *)a2 + (int)v12);
  switch ( v16 & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      if ( (v16 & 0xFFFFFFFu) <= 0xB
        && ((1 << v16) & 0x902) != 0
        && (v16 & 0xFFFFFFFu) <= 0xB
        && ((1 << v16) & 0x902) != 0
        && (v16 & 0xFFFFFFFu) <= 0xB
        && ((1 << v16) & 0x902) != 0 )
      {
        v18 = v16 & 0xFFFFFFF;
        if ( v18 <= 0xB && ((1 << v18) & 0x902) != 0 )
        {
          v23 = qsnprintf(
                  (pthread_mutex_t *)((char *)a2 + (int)v12),
                  (char *)v11 - (char *)v17,
                  " base=%a size=%a rebase=%a name=%s",
                  v13,
                  v14,
                  v15,
                  (const char *)(*(_QWORD *)(a1 + 48) & v9));
          goto LABEL_33;
        }
      }
      if ( under_debugger )
        goto LABEL_43;
      v12 = (__int64)interr(3295);
      goto LABEL_37;
    case 2:
    case 4:
      v23 = qsnprintf(
              (pthread_mutex_t *)((char *)a2 + (int)v12),
              (char *)v11 - (char *)v17,
              " exit_code=%d",
              *(_DWORD *)(a1 + 24));
      goto LABEL_33;
    case 3:
    case 9:
    case 0xA:
      if ( v17 >= v11 )
      {
LABEL_37:
        if ( under_debugger )
          goto LABEL_43;
        v12 = (__int64)interr(518);
      }
      else
      {
        v17->__size[0] = 32;
        v17 = (pthread_mutex_t *)((char *)v17 + 1);
        if ( v17 >= v11 )
        {
          v11[-1].__size[39] = 0;
          v17 = (pthread_mutex_t *)((char *)v11 - 1);
        }
        if ( v17 >= v11 )
          goto LABEL_41;
        v19 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)(v19 - 9) < 2 || v19 == 3 )
        {
          if ( *(_QWORD *)(a1 + 32) )
            v20 = *(char **)(a1 + 24);
          else
            v20 = &byte_F154B;
          v21 = (pthread_mutex_t *)((char *)v11 - 1);
          if ( v17 == (pthread_mutex_t *)((char *)&v11[-1].__align + 39) )
          {
LABEL_30:
            v21->__size[0] = 0;
            v17 = (pthread_mutex_t *)((char *)v11 - 1);
          }
          else
          {
            while ( 1 )
            {
              v22 = (unsigned __int8)*v20;
              v17->__size[0] = v22;
              if ( !v22 )
                break;
              v17 = (pthread_mutex_t *)((char *)v17 + 1);
              ++v20;
              if ( v21 == v17 )
                goto LABEL_30;
            }
          }
LABEL_34:
          qsnprintf(
            v17,
            (char *)v11 - (char *)v17,
            " pid=%d tid=%d handled=%d",
            *(_DWORD *)a1,
            *(_DWORD *)(a1 + 4),
            *(unsigned __int8 *)(a1 + 16));
          return (__int64)a2;
        }
      }
      if ( under_debugger )
        goto LABEL_43;
      v12 = (__int64)interr(3297);
LABEL_41:
      if ( !under_debugger )
        v12 = (__int64)interr(520);
LABEL_43:
      __break(1u);
      return sub_9A3E8(v12);
    case 5:
      v23 = qsnprintf((pthread_mutex_t *)((char *)a2 + (int)v12), (char *)v11 - (char *)v17, " hea=%a kea=%a", v13, v14);
      goto LABEL_33;
    case 7:
      v23 = qsnprintf(
              (pthread_mutex_t *)((char *)a2 + (int)v12),
              (char *)v11 - (char *)v17,
              " code=%x can_cont=%d ea=%a info=%s",
              *(_DWORD *)(a1 + 24),
              *(unsigned __int8 *)(a1 + 28),
              v13,
              (const char *)(*(_QWORD *)(a1 + 32) & v9));
LABEL_33:
      v17 = (pthread_mutex_t *)((char *)v17 + v23);
      goto LABEL_34;
    default:
      goto LABEL_34;
  }
}
// 9A154: variable 'v7' is possibly undefined
// 9A2E8: variable 'v13' is possibly undefined
// 9A2E8: variable 'v14' is possibly undefined
// 9A2E8: variable 'v15' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 15E520: using guessed type char *off_15E520[15];
// 168DF0: using guessed type char under_debugger;
