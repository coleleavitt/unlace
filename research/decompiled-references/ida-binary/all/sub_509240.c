__int64 __fastcall sub_509240(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  unsigned int v14; // r12d
  size_t v15; // rax
  size_t v16; // r12
  double v17; // xmm0_8
  unsigned __int64 v18; // r13
  __int64 v19; // r12
  const char *v20; // rbx
  unsigned int v21; // edi
  const char *v22; // r15
  _BYTE *v23; // r14
  int v25; // r15d
  char v26; // r14
  char *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  const char *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  size_t v40; // r13
  void *v41; // rdi
  const char *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp-10h] [rbp-10B0h]
  char v46; // [rsp+0h] [rbp-10A0h]
  unsigned int v48; // [rsp+1Ch] [rbp-1084h] BYREF
  __int64 v49; // [rsp+20h] [rbp-1080h] BYREF
  __int128 v50; // [rsp+28h] [rbp-1078h]
  __int64 v51; // [rsp+40h] [rbp-1060h] BYREF
  __int128 v52; // [rsp+48h] [rbp-1058h]
  char s[4104]; // [rsp+60h] [rbp-1040h] BYREF
  unsigned __int64 v54; // [rsp+1068h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  v14 = batch;
  if ( !batch )
  {
    switch ( (int)a2 )
    {
      case 4:
        v27 = a1;
        v25 = 0;
        v26 = 105;
        break;
      case 5:
        v25 = 4096;
        v26 = 102;
        v27 = s;
        break;
      case 6:
        v27 = a1;
        v25 = 0;
        v26 = 121;
        break;
      case 7:
        v25 = 1024;
        v26 = 88;
        v27 = s;
        break;
      case 8:
        v25 = 4096;
        v26 = 70;
        v27 = s;
        break;
      case 9:
        v27 = a1;
        v25 = 0;
        v26 = 73;
        break;
      default:
        v27 = a1;
        v25 = 0;
        v26 = 113;
        break;
    }
    qvsnprintf(s, 4096, a3, a4, a5, a6);
    v50 = 0;
    v49 = 0;
    v48 = 0;
    sub_4BEF60(&v49, &v48, s);
    strrpl(s, 58, 32);
    strrpl(s, 62, 32);
    v17 = 0.0;
    v52 = 0;
    v51 = 0;
    sub_169A50(&v51, (__int64)"@0:%d[]\nPlease enter a string\n\n <%s:%c:%d:%d::>\n\n", v48, s, v26 & 0x7F, v25 - 1, 80);
    if ( v27 == a1 )
    {
      a2 = a1;
      if ( (unsigned int)sub_1697D0(
                           v51,
                           (__int64)a1,
                           v28,
                           v45,
                           v29,
                           v30,
                           (__m128)0LL,
                           a8,
                           a9,
                           a10,
                           v31,
                           v32,
                           a13,
                           a14,
                           v46) != 1 )
      {
LABEL_28:
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          v17 = qfree(v51, a2);
        }
        if ( v49 )
        {
          *(_QWORD *)&v50 = 0;
          qfree(v49, a2, v17);
        }
        return v14;
      }
    }
    else
    {
      v33 = &s1;
      if ( *((_QWORD *)a1 + 1) )
        v33 = *(const char **)a1;
      qstrncpy(s, v33, 4096);
      a2 = v27;
      if ( (unsigned int)sub_1697D0(
                           v51,
                           (__int64)v27,
                           v34,
                           v35,
                           v36,
                           v37,
                           (__m128)0LL,
                           a8,
                           a9,
                           a10,
                           v38,
                           v39,
                           a13,
                           a14,
                           v46) != 1 )
        goto LABEL_28;
      v15 = strlen(s);
      v16 = v15;
      if ( v15 )
      {
        v40 = v15 + 1;
        v41 = *(void **)a1;
        if ( *((_QWORD *)a1 + 2) < v15 + 1 )
        {
          v43 = qvector_reserve(a1, *(_QWORD *)a1, v40, 1);
          *(_QWORD *)a1 = v43;
          v41 = (void *)v43;
        }
        a2 = s;
        *((_QWORD *)a1 + 1) = v40;
        memmove(v41, s, v16);
        *(_BYTE *)(*(_QWORD *)a1 + v16) = 0;
      }
      else
      {
        *((_QWORD *)a1 + 1) = 0;
      }
    }
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      v17 = qfree(v51, a2);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49, a2, v17);
    }
  }
  v18 = *((_QWORD *)a1 + 1);
  if ( v18 > 1 )
  {
    v19 = *(_QWORD *)a1;
    v20 = (const char *)(*(_QWORD *)a1 + v18 - 1);
    if ( *(_QWORD *)a1 < (unsigned __int64)v20 )
    {
      while ( 1 )
      {
        v21 = *(v20 - 1);
        if ( v21 > 0x7F || !isspace(v21) )
          break;
        if ( (const char *)v19 == --v20 )
          goto LABEL_21;
      }
    }
    v22 = &v20[-v19];
    if ( v20 == (const char *)v19 )
    {
LABEL_21:
      if ( v19 )
      {
        *((_QWORD *)a1 + 1) = 0;
        qfree(v19, a2);
        *(_QWORD *)a1 = 0;
        *((_QWORD *)a1 + 2) = 0;
      }
    }
    else
    {
      v23 = v22 + 1;
      if ( v18 < (unsigned __int64)(v22 + 1) )
      {
        if ( *((_QWORD *)a1 + 2) < (unsigned __int64)v23 )
        {
          v44 = qvector_reserve(a1, v19, v22 + 1, 1);
          v18 = *((_QWORD *)a1 + 1);
          *(_QWORD *)a1 = v44;
          v19 = v44;
        }
        memset((void *)(v19 + v18), 0, (size_t)&v23[-v18]);
        v42 = *(const char **)a1;
        *((_QWORD *)a1 + 1) = v23;
        v20 = &v42[(_QWORD)v22];
      }
      else if ( (const char *)v18 != v22 + 1 )
      {
        *((_QWORD *)a1 + 1) = v23;
      }
      *v20 = 0;
    }
  }
  return 1;
}
