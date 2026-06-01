/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38460
// Address: 0x0000000000038460

//----- (0000000000038460) ----------------------------------------------------
__int64 __fastcall sub_38460(__int64 a1, __int64 *p_align)
{
  __pid_t v4; // w24
  int v5; // w0
  unsigned int v6; // w0
  __int64 v7; // x0
  size_t v8; // x28
  void *align; // x8
  int v10; // w0
  const char *v11; // x8
  const char *v12; // x28
  __int64 v13; // x0
  size_t v14; // x29
  struct __pthread_internal_list *next; // x1
  FILE *v16; // x0
  FILE *v17; // x29
  int v18; // w0
  int v19; // w28
  int v20; // w21
  __int64 v21; // x0
  struct __pthread_internal_list *v22; // x1
  size_t v23; // x29
  unsigned __int64 v24; // x22
  unsigned __int64 v25; // x20
  unsigned __int64 v26; // x23
  size_t v27; // x29
  struct __pthread_internal_list *v28; // x1
  unsigned __int64 v29; // x22
  unsigned __int64 v30; // x23
  int v31; // w23
  __int64 v32; // x0
  struct __pthread_internal_list *v33; // x1
  size_t v34; // x28
  unsigned __int64 v35; // x19
  unsigned __int64 v36; // x20
  unsigned __int64 v37; // x23
  size_t v38; // x28
  struct __pthread_internal_list *v39; // x1
  unsigned __int64 v40; // x19
  unsigned __int64 v41; // x23
  __int64 v42; // x19
  __int64 v44; // [xsp+10h] [xbp-5510h]
  pthread_mutex_t *v45; // [xsp+18h] [xbp-5508h]
  unsigned int v46; // [xsp+20h] [xbp-5500h] BYREF
  pthread_mutex_t dest; // [xsp+28h] [xbp-54F8h] BYREF
  unsigned __int64 v48; // [xsp+50h] [xbp-54D0h]
  unsigned __int64 v49; // [xsp+58h] [xbp-54C8h]
  void *ptr; // [xsp+60h] [xbp-54C0h] BYREF
  __int64 v51; // [xsp+68h] [xbp-54B8h]
  __int64 v52; // [xsp+70h] [xbp-54B0h]
  _BYTE src[1024]; // [xsp+78h] [xbp-54A8h] BYREF
  _BYTE v54[4]; // [xsp+478h] [xbp-50A8h] BYREF
  char v55[8228]; // [xsp+47Ch] [xbp-50A4h] BYREF
  __int64 v56; // [xsp+24A0h] [xbp-3080h]
  int v57; // [xsp+24ACh] [xbp-3074h]
  pthread_mutex_t v58[102]; // [xsp+44B8h] [xbp-1068h] BYREF
  __int64 v59; // [xsp+54B8h] [xbp-68h]

  v59 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = getpid();
  if ( *p_align )
  {
    sub_39980(p_align, 0);
    qfree((void *)*p_align);
    *p_align = 0;
    p_align[2] = 0;
  }
  v56 = 0;
  v57 = 0;
  v5 = qfindfirst((__int64)"/proc/*", (__int64)v54, 0x4000);
  v44 = a1;
  v45 = (pthread_mutex_t *)p_align;
  while ( !v5 )
  {
    if ( (v55[0] & 0x80000000) == 0 && (unsigned int)(unsigned __int8)v55[0] - 48 <= 9 )
    {
      memset(&dest, 0, 24);
      dest.__list.__next = nullptr;
      v48 = 0;
      v49 = 0;
      v6 = atoi(v55);
      v46 = v6;
      if ( v6 != v4 )
      {
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64))(*(_QWORD *)a1 + 656LL))(a1, v6, src, 1024)
            & 1) != 0 )
        {
          v7 = __strlen_chk(src, 1024);
          v8 = v7;
          if ( v7 )
          {
            align = (void *)dest.__align;
            if ( *(&dest.__align + 2) < (unsigned __int64)(v7 + 1) )
            {
              align = qvector_reserve(&dest, (void *)dest.__align, v7 + 1, 1u);
              dest.__align = (__int64)align;
            }
            *(&dest.__align + 1) = v8 + 1;
            memmove(align, src, v8);
            *(_BYTE *)(dest.__align + v8) = 0;
          }
          else
          {
            *(&dest.__align + 1) = 0;
          }
          v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 664LL))(a1, v46);
          v11 = "[x]";
          if ( v10 == 4 )
            v11 = "[32]";
          if ( v10 == 8 )
            v12 = "[64]";
          else
            v12 = v11;
          *((_DWORD *)&dest.__align + 6) = v10;
          v13 = __strlen_chk(v12, 5);
          v14 = v13;
          if ( v13 )
          {
            next = dest.__list.__next;
            if ( v49 < v13 + 1 )
            {
              next = (struct __pthread_internal_list *)qvector_reserve(
                                                         (pthread_mutex_t *)(&dest.__align + 4),
                                                         dest.__list.__next,
                                                         v13 + 1,
                                                         1u);
              dest.__list.__next = next;
            }
            v48 = v14 + 1;
            memmove(next, v12, v14);
            *((_BYTE *)&dest.__list.__next->__prev + v14) = 0;
          }
          else
          {
            v48 = 0;
          }
          qsnprintf(v58, 4096, "/proc/%u/cmdline", v46);
          v16 = qfopen((const char *)v58, "r");
          v17 = v16;
          if ( v16 && (v18 = qfread(v16, v58, 0x1000u), (v19 = v18) != 0) )
          {
            v58[0].__size[v18] = 0;
            qfclose(v17);
            if ( (v19 & 0x80000000) == 0 )
            {
              do
              {
                if ( v58[0].__size[v19] )
                  break;
                --v19;
              }
              while ( v19 >= 0 );
            }
            if ( v19 + 1 >= 1 )
            {
              v20 = 0;
              do
              {
                sub_39140(&ptr, (char *)v58 + v20);
                quote_cmdline_arg((char **)&ptr);
                v21 = __strlen_chk(" ", 2);
                v22 = dest.__list.__next;
                v23 = v21;
                if ( v48 )
                  v24 = v48 - 1;
                else
                  v24 = 0;
                v25 = v24 + v21;
                v26 = v24 + v21 + 1;
                if ( v49 < v26 )
                {
                  v22 = (struct __pthread_internal_list *)qvector_reserve(
                                                            (pthread_mutex_t *)(&dest.__align + 4),
                                                            dest.__list.__next,
                                                            v26,
                                                            1u);
                  dest.__list.__next = v22;
                }
                v48 = v26;
                *((_BYTE *)&v22->__prev + v25) = 0;
                memmove((char *)dest.__list.__next + v24, " ", v23);
                if ( v51 )
                {
                  v27 = v51 - 1;
                  if ( v51 != 1 )
                  {
                    v28 = dest.__list.__next;
                    if ( v48 )
                      v29 = v48 - 1;
                    else
                      v29 = 0;
                    v30 = v29 + v51;
                    if ( v49 < v29 + v51 )
                    {
                      v28 = (struct __pthread_internal_list *)qvector_reserve(
                                                                (pthread_mutex_t *)(&dest.__align + 4),
                                                                dest.__list.__next,
                                                                v29 + v51,
                                                                1u);
                      dest.__list.__next = v28;
                    }
                    v48 = v30;
                    *((_BYTE *)&v28->__prev + v29 + v27) = 0;
                    memcpy((char *)dest.__list.__next + v29, ptr, v27);
                  }
                }
                v31 = strlen((const char *)v58 + v20);
                if ( ptr )
                {
                  v51 = 0;
                  qfree(ptr);
                  ptr = nullptr;
                  v52 = 0;
                }
                v20 += v31 + 1;
              }
              while ( v20 < v19 + 1 );
            }
          }
          else
          {
            v32 = __strlen_chk(" ", 2);
            v33 = dest.__list.__next;
            v34 = v32;
            if ( v48 )
              v35 = v48 - 1;
            else
              v35 = 0;
            v36 = v35 + v32;
            v37 = v35 + v32 + 1;
            if ( v49 < v37 )
            {
              v33 = (struct __pthread_internal_list *)qvector_reserve(
                                                        (pthread_mutex_t *)(&dest.__align + 4),
                                                        dest.__list.__next,
                                                        v37,
                                                        1u);
              dest.__list.__next = v33;
            }
            v48 = v37;
            *((_BYTE *)&v33->__prev + v36) = 0;
            memmove((char *)dest.__list.__next + v35, " ", v34);
            if ( *(&dest.__align + 1) )
            {
              v38 = *(&dest.__align + 1) - 1;
              if ( *(&dest.__align + 1) != 1 )
              {
                v39 = dest.__list.__next;
                if ( v48 )
                  v40 = v48 - 1;
                else
                  v40 = 0;
                v41 = v40 + *(&dest.__align + 1);
                if ( v49 < v40 + *(&dest.__align + 1) )
                {
                  v39 = (struct __pthread_internal_list *)qvector_reserve(
                                                            (pthread_mutex_t *)(&dest.__align + 4),
                                                            dest.__list.__next,
                                                            v40 + *(&dest.__align + 1),
                                                            1u);
                  dest.__list.__next = v39;
                }
                v48 = v41;
                *((_BYTE *)&v39->__prev + v40 + v38) = 0;
                memcpy((char *)dest.__list.__next + v40, (const void *)dest.__align, v38);
              }
            }
          }
          p_align = &v45->__align;
          sub_38A40(v45, (int *)&v46);
          a1 = v44;
        }
        if ( dest.__list.__next )
        {
          v48 = 0;
          qfree(dest.__list.__next);
          dest.__list.__next = nullptr;
          v49 = 0;
        }
      }
      if ( dest.__align )
      {
        *(&dest.__align + 1) = 0;
        qfree((void *)dest.__align);
        dest.__align = 0;
        *(&dest.__align + 2) = 0;
      }
    }
    v5 = qfindnext((__int64)v54);
  }
  v42 = p_align[1];
  qfindclose((__int64)v54);
  return (unsigned int)v42;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
