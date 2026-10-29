/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C2A4
// Address: 0x000000000009C2A4

//----- (000000000009C2A4) ----------------------------------------------------
__int64 __fastcall sub_9C2A4(__int64 a1, __int64 a2, char a3, double a4)
{
  char v4; // w21
  __int64 *p_align; // x19
  void **v6; // x22
  void **v7; // x1
  __int64 v8; // x9
  __int64 v9; // x10
  void **v10; // x8
  void **v11; // x11
  void *v12; // x23
  unsigned __int64 v13; // x23
  __int64 v14; // x24
  _QWORD *v15; // x10
  _QWORD *v16; // x8
  unsigned __int64 v17; // x11
  _QWORD *v18; // x9
  unsigned __int64 v19; // x12
  bool v20; // cf
  _BOOL4 v21; // w12
  _QWORD *v22; // x10
  unsigned __int64 v23; // x10
  _QWORD *v24; // x11
  char *v25; // x0
  __int64 v26; // x8
  unsigned int *v27; // x26
  int v28; // w0
  __int64 v29; // x1
  void *v30; // x24
  int v31; // w23
  double v32; // d0
  double v33; // d0
  __int64 v34; // x9
  __int64 v35; // x11
  void **v36; // x0
  void **v37; // x8
  __int64 v38; // x9
  __int64 v39; // x11
  void **v40; // x0
  _QWORD *v41; // x11
  _QWORD *v42; // x9
  int v43; // w11
  void **v44; // x8
  unsigned __int64 v45; // x22
  __int64 v49; // x8
  __int64 v50; // x0
  double v51; // d0
  __int64 v52; // x23
  __int64 v53; // x0
  int v54; // w1
  unsigned __int64 v55; // x2
  __int64 v56; // x30
  double v57; // d0
  __int64 v58; // x9
  __int64 v59; // x11
  _QWORD *v60; // x10
  pthread_mutex_t *v62; // x0
  __int64 v63; // x1
  int v64; // [xsp+8h] [xbp-78h] BYREF
  void *ptr; // [xsp+10h] [xbp-70h]
  __int64 v66; // [xsp+18h] [xbp-68h]
  __int64 v67; // [xsp+20h] [xbp-60h]
  __int64 v68; // [xsp+28h] [xbp-58h]
  __int64 v69; // [xsp+40h] [xbp-40h]

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
    return 0;
  v45 = *(_QWORD *)(a2 + 32);
  if ( v45 == -1 )
  {
    v49 = 8;
    if ( *(_QWORD *)(a2 + 24) != -1 )
      v49 = 24;
    v45 = *(_QWORD *)(a2 + v49);
  }
  v50 = sub_9C0F8(a1, *(_DWORD *)(a2 + 4), v45, a4);
  if ( !v50 )
    return 0;
  v52 = v50;
  v53 = sub_99D18(a1, "%a: bptcnd yielded false\n", v51);
  *(_BYTE *)(a2 + 16) = 1;
  v58 = 8LL * *(_QWORD *)(a1 + 360);
  if ( v58 )
  {
    v59 = 8LL * *(_QWORD *)(a1 + 360);
    v60 = *(_QWORD **)(a1 + 352);
    while ( v45 != *v60 )
    {
      v59 -= 8;
      ++v60;
      if ( !v59 )
        goto LABEL_15;
    }
  }
  else
  {
    v60 = *(_QWORD **)(a1 + 352);
  }
  if ( v60 == (_QWORD *)(*(_QWORD *)(a1 + 352) + v58) )
  {
LABEL_15:
    v62 = (pthread_mutex_t *)a1;
    v63 = v52;
    v4 = a3;
    p_align = &v62->__align;
    v68 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    v6 = (void **)v52;
    if ( (v62[16].__size[32] & 0x10) == 0 )
      goto LABEL_22;
    if ( *(_DWORD *)(v52 + 32) == 4 )
      return (v4 & 2) != 0 || (*(int (__fastcall **)(__int64 *, __int64))(*p_align + 168))(p_align, a2) > 0;
    v13 = *(_QWORD *)v52;
    v14 = *(int *)(v63 + 428);
    v62 = (pthread_mutex_t *)(*(__int64 (__fastcall **)(pthread_mutex_t *))(v62->__align + 496))(v62);
    v15 = (_QWORD *)p_align[64];
    v16 = p_align + 64;
    if ( v15 )
    {
      v17 = v13 & -(int)v62;
      v18 = p_align + 64;
      do
      {
        v19 = v15[4];
        v20 = v19 >= v17;
        v21 = v19 < v17;
        if ( v20 )
          v18 = v15;
        v15 = (_QWORD *)v15[v21];
      }
      while ( v15 );
      v22 = p_align + 64;
      if ( v18 != v16 )
      {
        v24 = v18 + 4;
        v23 = v18[4];
        if ( v23 < v13 + v14 )
        {
LABEL_84:
          if ( (_DWORD)v14 )
          {
            v43 = *((_DWORD *)v24 + 7);
            if ( v43 )
            {
              if ( v13 + v14 - 1 >= v23 && v18 != v16 && v23 + v43 - 1 >= v13 )
              {
LABEL_22:
                v7 = (void **)p_align[44];
                v8 = p_align[45];
                v9 = 8 * v8;
                v10 = &v7[v8];
                v11 = v7;
                if ( 8 * v8 )
                {
                  v12 = *v6;
                  v11 = (void **)p_align[44];
                  while ( v12 != *v11 )
                  {
                    v9 -= 8;
                    ++v11;
                    if ( !v9 )
                      goto LABEL_39;
                  }
                }
                if ( v11 != v10 )
                {
                  if ( !under_debugger )
                    v62 = interr(616);
                  __break(1u);
                  sub_39134(v62);
                }
                v12 = *v6;
LABEL_39:
                if ( p_align[46] < (unsigned __int64)(v8 + 1) )
                {
                  v25 = (char *)qvector_reserve((pthread_mutex_t *)(p_align + 44), v7, v8 + 1, 8u);
                  v26 = p_align[45];
                  p_align[44] = (__int64)v25;
                  v10 = (void **)&v25[8 * v26];
                }
                *v10 = v12;
                ++p_align[45];
                if ( (v4 & 1) != 0 )
                {
                  v27 = (unsigned int *)(a2 + 4);
                }
                else
                {
                  v64 = -2;
                  v66 = 0;
                  v67 = 0;
                  ptr = *v6;
                  v27 = (unsigned int *)(a2 + 4);
                  if ( (*(int (__fastcall **)(__int64 *, _QWORD, _QWORD, int *, _QWORD))(*p_align + 232))(
                         p_align,
                         *(unsigned int *)(a2 + 4),
                         *((unsigned int *)p_align + 164),
                         &v64,
                         0) <= 0 )
                  {
                    v38 = 8 * p_align[45];
                    if ( v38 )
                    {
                      v39 = 8 * p_align[45];
                      v40 = (void **)p_align[44];
                      while ( *v6 != *v40 )
                      {
                        v39 -= 8;
                        ++v40;
                        if ( !v39 )
                          goto LABEL_96;
                      }
                    }
                    else
                    {
                      v40 = (void **)p_align[44];
                    }
                    v44 = (void **)(p_align[44] + v38);
                    if ( v40 != v44 )
                    {
                      memmove(v40, v40 + 1, ((char *)(v44 - 1) - (char *)v40) & 0xFFFFFFFFFFFFFFF8LL);
                      --p_align[45];
                    }
LABEL_96:
                    if ( v64 >= -1 )
                    {
                      if ( ptr )
                      {
                        v66 = 0;
                        qfree(ptr);
                        ptr = nullptr;
                        v67 = 0;
                      }
                      v64 = -2;
                    }
                    return 0;
                  }
                  if ( v64 >= -1 )
                  {
                    if ( ptr )
                    {
                      v66 = 0;
                      qfree(ptr);
                      ptr = nullptr;
                      v67 = 0;
                    }
                    v64 = -2;
                  }
                }
                v28 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*p_align + 8))(p_align, *v27);
                if ( v28 < 1 )
                {
                  v31 = v28;
                }
                else
                {
                  v29 = *((unsigned int *)v6 + 8);
                  if ( (_DWORD)v29 == 4 )
                    v30 = v6[6];
                  else
                    LODWORD(v30) = *((_DWORD *)v6 + 107);
                  v31 = (*(__int64 (__fastcall **)(__int64 *, __int64, void *, void *, _QWORD))(*p_align + 320))(
                          p_align,
                          v29,
                          *v6,
                          v6[5],
                          (unsigned int)v30);
                  if ( v31 >= 1 )
                  {
                    if ( (*(int (__fastcall **)(__int64 *, __int64, void **))*p_align)(p_align, a2, v6 + 8) <= 0 )
                    {
                      sub_3A0D8((__int64)p_align, "%a: failed to single step\n", v32);
                      v31 = 0;
                    }
                    if ( (*(int (__fastcall **)(__int64 *, _QWORD, _QWORD, void *, _QWORD))(*p_align + 312))(
                           p_align,
                           0,
                           *((unsigned int *)v6 + 8),
                           *v6,
                           (unsigned int)v30) <= 0 )
                    {
                      sub_40F34((__int64)p_align, "%a: could not restore deleted bpt\n", v33);
                      v31 = 0;
                    }
                  }
                  if ( (*(int (__fastcall **)(__int64 *, _QWORD))(*p_align + 16))(p_align, *v27) <= 0 )
                  {
                    sub_40F34((__int64)p_align, "%d: could not resume suspended threads\n", *v27);
                    v31 = 0;
                  }
                }
                v34 = 8 * p_align[45];
                if ( v34 )
                {
                  v35 = 8 * p_align[45];
                  v36 = (void **)p_align[44];
                  while ( *v6 != *v36 )
                  {
                    v35 -= 8;
                    ++v36;
                    if ( !v35 )
                      goto LABEL_68;
                  }
                }
                else
                {
                  v36 = (void **)p_align[44];
                }
                v37 = (void **)(p_align[44] + v34);
                if ( v36 != v37 )
                {
                  memmove(v36, v36 + 1, ((char *)(v37 - 1) - (char *)v36) & 0xFFFFFFFFFFFFFFF8LL);
                  --p_align[45];
                }
LABEL_68:
                if ( v31 < 1 || (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 6 )
                  return 0;
                return (v4 & 2) != 0 || (*(int (__fastcall **)(__int64 *, __int64))(*p_align + 168))(p_align, a2) > 0;
              }
            }
          }
          return (v4 & 2) != 0 || (*(int (__fastcall **)(__int64 *, __int64))(*p_align + 168))(p_align, a2) > 0;
        }
        v22 = v18;
      }
    }
    else
    {
      v22 = p_align + 64;
    }
    if ( v22 == (_QWORD *)p_align[63] )
      return (v4 & 2) != 0 || (*(int (__fastcall **)(__int64 *, __int64))(*p_align + 168))(p_align, a2) > 0;
    v41 = (_QWORD *)*v22;
    if ( *v22 )
    {
      do
      {
        v18 = v41;
        v41 = (_QWORD *)v41[1];
      }
      while ( v41 );
    }
    else
    {
      do
      {
        v42 = v22;
        v22 = (_QWORD *)v22[2];
      }
      while ( (_QWORD *)*v22 == v42 );
      v18 = v22;
    }
    v24 = v18 + 4;
    v23 = v18[4];
    goto LABEL_84;
  }
  if ( !under_debugger )
    v53 = (__int64)interr(617);
  __break(1u);
  v69 = v56;
  if ( sub_9C0F8(v53, v54, v55, v57) )
    return 0xFFFFFFFFLL;
  else
    return 1;
}
// 9C318: variable 'v51' is possibly undefined
// 9C3B4: variable 'v56' is possibly undefined
// 9C3B8: variable 'v54' is possibly undefined
// 9C3B8: variable 'v55' is possibly undefined
// 9C3B8: variable 'v57' is possibly undefined
// 9BD28: variable 'v32' is possibly undefined
// 9BD68: variable 'v33' is possibly undefined
// 168DF0: using guessed type char under_debugger;
