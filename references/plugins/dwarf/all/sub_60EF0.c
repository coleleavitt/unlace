__int64 __fastcall sub_60EF0(__int64 *a1, const __m128i *a2, __m128i *a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  const __m128i **v7; // r13
  const __m128i **v8; // rax
  _DWORD *v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 *v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r13
  int v20; // eax
  const char *v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v24; // r14
  __int64 v25; // r15
  char v26; // dl
  char v27; // al
  int v28; // eax
  unsigned int v29; // r15d
  int v30; // eax
  char v31; // r15
  char v32; // al
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rdi
  char v39; // r14
  unsigned int v40; // eax
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // [rsp+18h] [rbp-178h]
  char v46; // [rsp+18h] [rbp-178h]
  unsigned __int64 v47; // [rsp+20h] [rbp-170h]
  __int64 v49; // [rsp+48h] [rbp-148h] BYREF
  __int64 v50; // [rsp+50h] [rbp-140h] BYREF
  __int128 v51; // [rsp+58h] [rbp-138h]
  __int64 v52; // [rsp+70h] [rbp-120h] BYREF
  __int128 v53; // [rsp+78h] [rbp-118h]
  const __m128i *v54; // [rsp+90h] [rbp-100h] BYREF
  __int128 v55; // [rsp+98h] [rbp-F8h]
  __int128 v56; // [rsp+A8h] [rbp-E8h]
  const __m128i *v57; // [rsp+C0h] [rbp-D0h] BYREF
  __int128 v58; // [rsp+C8h] [rbp-C8h]
  __int128 v59; // [rsp+D8h] [rbp-B8h]
  const __m128i *v60; // [rsp+F0h] [rbp-A0h] BYREF
  __int128 v61; // [rsp+F8h] [rbp-98h]
  __int128 v62; // [rsp+108h] [rbp-88h]
  __int64 (__fastcall **v63)(); // [rsp+120h] [rbp-70h] BYREF
  __int64 *v64; // [rsp+128h] [rbp-68h]
  unsigned __int64 v65; // [rsp+130h] [rbp-60h]
  __int64 v66; // [rsp+138h] [rbp-58h] BYREF
  __int128 v67; // [rsp+140h] [rbp-50h]
  int v68; // [rsp+150h] [rbp-40h]
  unsigned __int64 v69; // [rsp+158h] [rbp-38h]

  v4 = *a1;
  v69 = __readfsqword(0x28u);
  v63 = off_C8610;
  v6 = a1[1];
  v50 = 0;
  v7 = (const __m128i **)(v4 + 8 * v6);
  v64 = a1;
  v51 = 0;
  if ( (const __m128i **)v4 == v7 )
  {
    v65 = 0;
    v66 = 0;
    v67 = 0;
  }
  else
  {
    v8 = (const __m128i **)v4;
    do
    {
      if ( a2 == *v8 )
        break;
      ++v8;
    }
    while ( v7 != v8 );
    v66 = 0;
    v67 = 0;
    v65 = ((__int64)v8 - v4) >> 3;
    do
    {
      while ( 1 )
      {
        v9 = *(_DWORD **)v4;
        if ( *(_DWORD *)(*(_QWORD *)v4 + 272LL) == 2 )
        {
          v10 = *v64 + 8 * v64[1];
          if ( *v64 != v10 )
          {
            v11 = (_QWORD *)*v64;
            do
            {
              if ( v9 == (_DWORD *)*v11 )
                break;
              ++v11;
            }
            while ( (_QWORD *)v10 != v11 );
            if ( v65 < ((__int64)v11 - *v64) >> 3 )
            {
              v12 = *(_QWORD *)v4;
              v60 = nullptr;
              v61 = 0;
              sub_57000(v64, (__int64 *)&v60, v12);
              if ( !(_QWORD)v61 )
              {
                if ( (debug & 0x400000) != 0 )
                {
                  v40 = (unsigned int)sub_575D0(v9);
                  sub_88B80(
                    (unsigned int)"%s::set_action(act=%s, ord=%u)\n",
                    v40,
                    (unsigned int)"act_drop",
                    0,
                    v41,
                    v42);
                }
                v9[84] = 5;
                v43 = v67;
                v44 = v66;
                if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
                {
                  v66 = qvector_reserve(&v66, v66, v67 + 1, 8);
                  v44 = v66;
                  v43 = v67;
                }
                *(_QWORD *)(v44 + 8 * v43) = v9;
                *(_QWORD *)&v67 = v67 + 1;
              }
              if ( v60 )
                break;
            }
          }
        }
        v4 += 8;
        if ( (const __m128i **)v4 == v7 )
          goto LABEL_16;
      }
      *(_QWORD *)&v61 = 0;
      v4 += 8;
      qfree(v60);
    }
    while ( (const __m128i **)v4 != v7 );
  }
LABEL_16:
  sub_578A0(a1, (__int64)&v66, (__int64)a2);
  v63 = off_C8610;
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  v65 = (unsigned __int64)a3;
  v63 = off_C8638;
  v66 = (__int64)a2;
  v64 = a1;
  *(_QWORD *)&v67 = sub_61C40;
  *((_QWORD *)&v67 + 1) = &v50;
  v55 = (unsigned __int64)&v63;
  v68 = 0;
  v54 = a2;
  v56 = 0;
  if ( !(unsigned int)sub_55EA0(&v54, (__int64)a2) )
  {
    ++v68;
    v57 = a2;
    v58 = (unsigned __int64)&v63;
    v59 = 0;
    if ( !(unsigned int)sub_55EA0(&v57, (__int64)a2) )
    {
      ++v68;
      v60 = a2;
      v61 = (unsigned __int64)&v63;
      v62 = 0;
      sub_55EA0(&v60, (__int64)a2);
      if ( *((_QWORD *)&v61 + 1) )
      {
        *(_QWORD *)&v62 = 0;
        qfree(*((_QWORD *)&v61 + 1));
      }
    }
    if ( *((_QWORD *)&v58 + 1) )
    {
      *(_QWORD *)&v59 = 0;
      qfree(*((_QWORD *)&v58 + 1));
    }
  }
  if ( *((_QWORD *)&v55 + 1) )
  {
    *(_QWORD *)&v56 = 0;
    qfree(*((_QWORD *)&v55 + 1));
  }
  sub_56E60(a1, (__int64)a2, (__int64)a3);
  v60 = nullptr;
  v63 = &off_C85C8;
  v65 = (unsigned __int64)&v60;
  v13 = (__int64 *)*a1;
  v64 = a1;
  v14 = a1[1];
  v61 = 0;
  v15 = &v13[v14];
  if ( v13 != v15 )
  {
    v16 = v13;
    do
    {
      if ( a2 == (const __m128i *)*v16 )
        break;
      ++v16;
    }
    while ( v15 != v16 );
    v66 = v16 - v13;
    do
      sub_5B900(&v63, *v13++);
    while ( v13 != v15 );
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60);
    }
  }
  v65 = (unsigned __int64)a3;
  v67 = 0;
  v63 = &off_C85E0;
  v66 = 0;
  v64 = a1;
  v60 = a2;
  v61 = (unsigned __int64)&v63;
  v62 = 0;
  sub_55EA0(&v60, (__int64)a2);
  v47 = v67;
  if ( (_QWORD)v67 )
  {
LABEL_30:
    v17 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v66 + 8 * v17);
        v20 = *(_DWORD *)(v19 + 272);
        if ( v20 != 1 )
          break;
        if ( *(_DWORD *)(v19 + 384) != 5
          || (*(_BYTE *)(v19 + 448) & 1) != 0
          || !(unsigned __int8)sub_58220(a3[5].m128i_i64[0], (_DWORD *)(v19 + 392)) )
        {
          goto LABEL_43;
        }
LABEL_66:
        if ( ++v17 == v47 )
          goto LABEL_67;
      }
      if ( v20 != 2 )
      {
        v18 = *(_DWORD *)(v19 + 336);
        if ( v18 == 1 )
          goto LABEL_70;
        goto LABEL_33;
      }
      v24 = *(_QWORD *)(v19 + 384);
      v25 = v24 + 104LL * *(_QWORD *)(v19 + 392);
      if ( v24 == v25 )
      {
        v28 = *(_DWORD *)(v19 + 336);
        if ( v28 == 1 )
        {
LABEL_45:
          if ( (unsigned __int8)sub_84C30(v19 + 8) )
          {
            v21 = src;
            if ( *(_QWORD *)(v19 + 320) )
              v21 = *(const char **)(v19 + 312);
            sub_5F4E0((char *)a1, a3, v19, (__int64)v21);
            v18 = *(_DWORD *)(v19 + 336);
            if ( v18 == 2 )
              goto LABEL_49;
          }
          else
          {
            v18 = *(_DWORD *)(v19 + 336);
          }
LABEL_33:
          if ( v18 != 3 )
            goto LABEL_70;
          if ( *(_DWORD *)(v19 + 272) != 2 )
            v19 = 0;
        }
        else if ( v28 != 3 )
        {
          goto LABEL_70;
        }
        v54 = nullptr;
        v57 = nullptr;
        v58 = 0;
        if ( !(unsigned __int8)sub_30760(v19, (__int64)&v54, (__int64)a1, (__int64)a3, &v57, 0)
          || !(unsigned __int8)sub_5AA40((__int64)a1, (__int64)a3, v19, (__int64)&v54) )
        {
          if ( v57 )
          {
            *(_QWORD *)&v58 = 0;
            qfree(v57);
          }
          clear_tinfo_t(&v54);
          goto LABEL_40;
        }
        sub_59D00(v19);
        if ( v57 )
        {
          *(_QWORD *)&v58 = 0;
          qfree(v57);
        }
        clear_tinfo_t(&v54);
        goto LABEL_49;
      }
      do
      {
        v26 = 1;
        v27 = 0;
        if ( (*(_BYTE *)(v24 + 72) & 2) != 0 )
        {
          v24 += 104;
          if ( v25 == v24 )
            break;
          continue;
        }
        v27 = sub_58220(a3[5].m128i_i64[0], (_DWORD *)(v24 + 48));
        v24 += 104;
        v26 = v27 ^ 1;
        if ( v25 == v24 )
          break;
      }
      while ( v26 );
      if ( v27 )
        goto LABEL_66;
LABEL_43:
      v18 = *(_DWORD *)(v19 + 336);
      if ( v18 != 1 )
        goto LABEL_33;
      if ( *(_DWORD *)(v19 + 272) == 2 )
        goto LABEL_45;
LABEL_70:
      v29 = *(_DWORD *)(v19 + 276);
      if ( !v29 )
        goto LABEL_40;
      v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL) + 144LL) + 8LL);
      v30 = *(_DWORD *)(v19 + 272);
      if ( v30 )
      {
        v49 = 0;
        if ( v30 == 1 )
        {
          v52 = 0;
          v54 = nullptr;
          v57 = nullptr;
          v53 = 0;
          v55 = 0;
          v58 = 0;
          if ( (unsigned __int8)sub_5D880(v19, &v49, (__int64)a1, a3, (__int64 *)&v57)
            && (unsigned __int8)serialize_tinfo(&v52, &v54, 0, &v49, 272) )
          {
            v31 = sub_5A7B0(
                    v45,
                    v29,
                    *(_DWORD *)(v19 + 284),
                    *(const char **)(v19 + 312),
                    &v52,
                    (__int64 *)&v54,
                    v19,
                    1u);
          }
          else
          {
            v31 = 0;
          }
          if ( v57 )
          {
            *(_QWORD *)&v58 = 0;
            qfree(v57);
          }
          if ( v54 )
          {
            *(_QWORD *)&v55 = 0;
            qfree(v54);
          }
          if ( v52 )
          {
            *(_QWORD *)&v53 = 0;
            qfree(v52);
          }
          goto LABEL_96;
        }
        if ( (unsigned int)(v30 - 2) > 1 )
          goto LABEL_134;
        v57 = nullptr;
        v58 = 0;
        v31 = sub_30760(v19, (__int64)&v49, (__int64)a1, (__int64)a3, &v57, 0);
        if ( v31 )
          v31 = sub_5AA40((__int64)a1, (__int64)a3, v19, (__int64)&v49);
        if ( *(_DWORD *)(v19 + 272) != 2 || (*(_BYTE *)(v19 + 412) & 1) == 0 )
        {
          v32 = 1;
          if ( v57 )
          {
LABEL_78:
            v46 = v32;
            *(_QWORD *)&v58 = 0;
            qfree(v57);
            clear_tinfo_t(&v49);
            if ( v31 )
            {
              if ( !v46 )
                goto LABEL_49;
              goto LABEL_116;
            }
LABEL_97:
            if ( (debug & 0x400000) != 0 )
              goto LABEL_98;
            goto LABEL_40;
          }
LABEL_96:
          clear_tinfo_t(&v49);
          if ( !v31 )
            goto LABEL_97;
LABEL_116:
          sub_59D00(v19);
          goto LABEL_49;
        }
        v32 = 0;
        if ( v57 )
          goto LABEL_78;
        clear_tinfo_t(&v49);
        if ( !v31 )
        {
          if ( (debug & 0x400000) != 0 )
            goto LABEL_98;
          goto LABEL_40;
        }
LABEL_49:
        memmove((void *)(8 * v17 + v66), (const void *)(8 * v17 + v66 + 8), 8 * v67 - 8 - 8 * v17);
        v22 = v67 - 1;
        *(_QWORD *)&v67 = v67 - 1;
LABEL_50:
        if ( v22 >= v47 )
        {
          if ( !under_debugger )
          {
            interr(30401);
LABEL_134:
            if ( !under_debugger )
              interr(735);
          }
          BUG();
        }
        v47 = v22;
        if ( !v22 )
          break;
        goto LABEL_30;
      }
      v54 = nullptr;
      v57 = nullptr;
      v55 = 0;
      v58 = 0;
      if ( (unsigned __int8)serialize_tinfo(&v54, &v57, 0, v19 + 384, 262) )
      {
        v39 = sub_5A7B0(
                v45,
                v29,
                *(_DWORD *)(v19 + 284),
                *(const char **)(v19 + 312),
                (__int64 *)&v54,
                (__int64 *)&v57,
                v19,
                1u);
        if ( v57 )
        {
          *(_QWORD *)&v58 = 0;
          qfree(v57);
        }
        if ( v54 )
        {
          *(_QWORD *)&v55 = 0;
          qfree(v54);
        }
        if ( !v39 )
          goto LABEL_97;
        goto LABEL_116;
      }
      if ( v57 )
      {
        *(_QWORD *)&v58 = 0;
        qfree(v57);
        v38 = (__int64)v54;
        if ( v54 )
        {
LABEL_102:
          *(_QWORD *)&v55 = 0;
          qfree(v38);
          if ( (debug & 0x400000) != 0 )
            goto LABEL_98;
          goto LABEL_40;
        }
        goto LABEL_97;
      }
      v38 = (__int64)v54;
      if ( v54 )
        goto LABEL_102;
      if ( (debug & 0x400000) != 0 )
      {
LABEL_98:
        v33 = sub_81C40(v19 + 8);
        sub_88B80((unsigned int)"Couldn't map found type @ %s\n", v33, v34, v35, v36, v37);
      }
LABEL_40:
      if ( ++v17 == v47 )
      {
LABEL_67:
        v22 = v67;
        goto LABEL_50;
      }
    }
  }
  if ( *((_QWORD *)&v61 + 1) )
  {
    *(_QWORD *)&v62 = 0;
    qfree(*((_QWORD *)&v61 + 1));
  }
  v63 = &off_C85E0;
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  return 1;
}
