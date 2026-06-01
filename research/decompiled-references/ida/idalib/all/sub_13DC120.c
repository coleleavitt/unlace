const char *__fastcall sub_13DC120(
        int a1,
        __int64 a2,
        __int64 a3,
        __m128i a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v11; // r13d
  int v12; // eax
  _DWORD *v13; // r14
  int v14; // r15d
  unsigned __int64 v15; // r12
  const char *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  int v20; // edx
  unsigned int v21; // esi
  __int64 v22; // r14
  _DWORD *v23; // rdx
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  bool v26; // al
  unsigned __int64 v27; // r13
  __int64 v28; // rax
  __int64 *v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  _QWORD *v33; // r11
  __int64 v34; // rax
  _DWORD *v35; // rax
  __int64 *v36; // rdi
  __int64 v37; // rcx
  _DWORD *v38; // rax
  _DWORD *v39; // rdx
  __int64 *v40; // rdi
  __int64 v41; // rcx
  _DWORD *v42; // rax
  _DWORD *v43; // rdx
  unsigned int v44; // [rsp+Ch] [rbp-6Ch]
  _QWORD *v45; // [rsp+10h] [rbp-68h]
  unsigned __int64 v46; // [rsp+20h] [rbp-58h] BYREF
  int v47; // [rsp+28h] [rbp-50h]

  while ( 1 )
  {
    v11 = a1 & 0x7FFFFFFF;
    if ( v11 >= *(_DWORD *)(a2 + 476) && v11 < *(_DWORD *)(a2 + 480) )
    {
      v12 = *(_DWORD *)(a2 + 472);
      if ( (unsigned int)(v12 + 1) <= 1 )
      {
LABEL_14:
        v13 = *(_DWORD **)(a2 + 184);
        goto LABEL_6;
      }
    }
    else
    {
      v12 = sub_101D590(a2, v11);
      if ( (unsigned int)(v12 + 1) <= 1 )
        goto LABEL_14;
    }
    if ( v12 < 0 )
    {
      v27 = (unsigned int)(-2 - v12);
      v28 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v12) >> 6));
      if ( _bittest64(&v28, v27) )
      {
        v29 = (__int64 *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v27 >> 5));
        v30 = *v29;
        if ( !*v29 )
        {
          v36 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
          v37 = *v36;
          v36[10] += 768;
          v38 = (_DWORD *)((v37 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v36[1] >= (unsigned __int64)(v38 + 192) && v37 )
            *v36 = (__int64)(v38 + 192);
          else
            v38 = (_DWORD *)sub_986170((__int64)v36, 768, 768, 3, a7, a8);
          *v29 = (__int64)v38;
          v39 = v38 + 192;
          do
          {
            a4 = 0;
            *v38 = 0;
            v38 += 6;
            *((_OWORD *)v38 - 1) = 0;
            *((_QWORD *)v38 - 1) = 0;
          }
          while ( v38 != v39 );
          v30 = *v29;
        }
        v13 = (_DWORD *)(v30 + 24 * (v27 & 0x1F));
      }
      else
      {
        v13 = (_DWORD *)sub_101F930(a2, v27, nullptr);
      }
    }
    else
    {
      v13 = (_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v12);
    }
LABEL_6:
    v14 = v13[3];
    if ( !v14 )
      goto LABEL_10;
    if ( v13[4] )
      break;
    v46 = sub_101FC50(a2, v14);
    v14 = v46;
    v47 = v20;
    a1 = v13[2];
    if ( !a1 )
      a1 = v13[3];
    if ( a1 >= 0 )
      break;
    v21 = v46 & 0x7FFFFFFF;
    if ( (v46 & 0x7FFFFFFF) < *(_DWORD *)(a2 + 476) || v21 >= *(_DWORD *)(a2 + 480) )
      v22 = (unsigned int)sub_101D590(a2, v21);
    else
      v22 = *(unsigned int *)(a2 + 472);
    a7 = (unsigned int)(v22 + 1);
    a8 = a1 & 0x7FFFFFFF;
    if ( (unsigned int)a7 <= 1 )
    {
      v23 = *(_DWORD **)(a2 + 184);
      v24 = v23;
      goto LABEL_24;
    }
    if ( (int)v22 < 0 )
    {
      v31 = (unsigned int)(-2 - v22);
      v32 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v22) >> 6));
      if ( _bittest64(&v32, v31) )
      {
        v33 = (_QWORD *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v31 >> 5));
        v34 = *v33;
        if ( !*v33 )
        {
          v40 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
          v41 = *v40;
          v40[10] += 768;
          v42 = (_DWORD *)((v41 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v40[1] >= (unsigned __int64)(v42 + 192) && v41 )
          {
            *v40 = (__int64)(v42 + 192);
          }
          else
          {
            v45 = v33;
            v42 = (_DWORD *)sub_986170((__int64)v40, 768, 768, 3, a7, a8);
            a7 = (unsigned int)(v22 + 1);
            v33 = v45;
            LOBYTE(v31) = -2 - v22;
            a8 = a1 & 0x7FFFFFFF;
          }
          *v33 = v42;
          v43 = v42 + 192;
          do
          {
            a4 = 0;
            *v42 = 0;
            v42 += 6;
            *((_OWORD *)v42 - 1) = 0;
            *((_QWORD *)v42 - 1) = 0;
          }
          while ( v42 != v43 );
          v34 = *v33;
        }
        v35 = (_DWORD *)(v34 + 24 * (v31 & 0x1F));
      }
      else
      {
        v35 = (_DWORD *)sub_101F930(a2, v31, nullptr);
        a8 = a1 & 0x7FFFFFFF;
        a7 = (unsigned int)(v22 + 1);
      }
      if ( (unsigned int)a8 >= (*v35 & 0x7FFFFFFFu) )
      {
        if ( (_DWORD)v22 == -2 )
          break;
        if ( *(_DWORD *)(a2 + 192) == (_DWORD)a7 )
        {
LABEL_44:
          v26 = (unsigned int)a8 < *(_DWORD *)(a2 + 312);
          goto LABEL_29;
        }
LABEL_43:
        v44 = a8;
        v25 = (_DWORD *)sub_101FA20(a2, (unsigned int)(-2 - a7), nullptr);
        a8 = v44;
        goto LABEL_28;
      }
    }
    else
    {
      v23 = *(_DWORD **)(a2 + 184);
      v24 = &v23[6 * v22];
LABEL_24:
      if ( (*v24 & 0x7FFFFFFFu) <= (unsigned int)a8 )
      {
        if ( (_DWORD)a7 == *(_DWORD *)(a2 + 192) )
          goto LABEL_44;
        if ( (int)a7 < 0 )
          goto LABEL_43;
        v25 = &v23[6 * a7];
LABEL_28:
        v26 = (unsigned int)a8 < (*v25 & 0x7FFFFFFFu);
LABEL_29:
        if ( v26 )
          break;
      }
    }
  }
  if ( v14 < 0 )
    v14 = sub_1021B90(a2, v14);
LABEL_10:
  v15 = sub_A80750(a2, v14);
  sub_13DBE60(v14, (__int64)&v46, (__int64 *)a2, a3, a4, a5);
  v16 = sub_10202B0((__int64 *)a2, v15, nullptr);
  v18 = HIDWORD(v15);
  if ( HIDWORD(v15) > v17 )
    v18 = v17;
  return &v16[v18];
}
