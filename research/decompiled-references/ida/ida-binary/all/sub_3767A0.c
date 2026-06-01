__int64 __fastcall sub_3767A0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  int v13; // ebp
  __int64 v14; // r14
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rsi
  __int64 *v23; // rax
  const char *v24; // rsi
  __int64 *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // r11
  __int64 v29; // r8
  __int64 v30; // r10
  size_t v31; // rax
  const char *v32; // r12
  __int64 v33; // rax
  __int64 *i; // r15
  char **v35; // [rsp+0h] [rbp-B8h]
  __int64 v36; // [rsp+8h] [rbp-B0h]
  __int64 v37; // [rsp+10h] [rbp-A8h]
  __int64 v38; // [rsp+18h] [rbp-A0h]
  __int64 v39; // [rsp+18h] [rbp-A0h]
  __int64 v40; // [rsp+20h] [rbp-98h]
  __int64 v41; // [rsp+28h] [rbp-90h]
  char v42; // [rsp+3Eh] [rbp-7Ah] BYREF
  unsigned __int8 v43; // [rsp+3Fh] [rbp-79h] BYREF
  __int64 *v44; // [rsp+40h] [rbp-78h] BYREF
  __int128 v45; // [rsp+48h] [rbp-70h]
  __int64 v46; // [rsp+60h] [rbp-58h] BYREF
  __int128 v47; // [rsp+68h] [rbp-50h]
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 200) == 0;
  v48 = __readfsqword(0x28u);
  if ( v9 )
    goto LABEL_17;
  sub_376610((__int64)&v42, (int)"Expanding selected node...");
  v36 = sub_2B70C0(a1);
  v10 = *(_QWORD *)(a1 + 200);
  v11 = *(_QWORD *)(a1 + 192);
  v12 = v11;
  if ( !(20 * v10) )
  {
    sub_541CC0(QT::QCoreApplication::self + 2);
LABEL_17:
    sub_2B70C0(a1);
    return 0;
  }
  v13 = -1;
  v14 = -1;
  do
  {
    if ( *(_BYTE *)v12 )
    {
      v13 = *(_DWORD *)(v12 + 4);
      if ( v13 != -1 && (unsigned __int64)v13 >= *(_QWORD *)(v36 + 280) )
      {
        v23 = (__int64 *)sub_3741F0((_QWORD *)v36, (char *)&v43, (unsigned int)v13, v11, a2);
        v14 = *v23;
        a2 = 0.0;
        v24 = (const char *)(v36 + 272);
        v45 = 0;
        v44 = nullptr;
        v46 = 0;
        v35 = (char **)(v36 + 272);
        v47 = 0;
        sub_371F60(
          v23,
          (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(v36 + 272),
          v43,
          (__int64 *)&v44,
          &v46);
        v25 = v44;
        v26 = v45;
        v27 = 8 * v47;
        v28 = (8 * (__int64)v47) >> 3;
        if ( v28 )
        {
          v29 = 8 * v45;
          v30 = v46;
          v31 = 0;
          if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v28 + v45) )
          {
            v41 = (8 * (__int64)v47) >> 3;
            v40 = v46;
            v39 = 8 * v45;
            v44 = (__int64 *)qvector_reserve(&v44, v44, v28 + v45, 8);
            v25 = v44;
            v29 = v39;
            v28 = v41;
            v30 = v40;
            v31 = 8 * v45 - v39;
          }
          v32 = (char *)v25 + v29;
          v38 = v28;
          v24 = v32;
          v37 = v30;
          memmove((void *)&v32[v27], v32, v31);
          v33 = 0;
          if ( v27 )
          {
            do
            {
              *(_QWORD *)&v32[v33] = *(_QWORD *)(v37 + v33);
              v33 += 8;
            }
            while ( v27 != v33 );
          }
          v25 = v44;
          v26 = v38 + v45;
          *(_QWORD *)&v45 = v38 + v45;
        }
        if ( v26 )
        {
          for ( i = &v25[v26]; i != v25; ++v25 )
          {
            v24 = (const char *)*v25;
            sub_370AA0((__int64)v35, *v25, 0);
          }
          sub_370D50(v35, v24);
          sub_3723D0((__int64)v35);
        }
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          a2 = qfree(v46, v24);
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          a2 = qfree(v44, v24);
        }
        v11 = *(_QWORD *)(a1 + 192);
        v10 = *(_QWORD *)(a1 + 200);
      }
    }
    v12 += 20;
  }
  while ( v12 != v11 + 20 * v10 );
  sub_541CC0(QT::QCoreApplication::self + 2);
  v15 = sub_2B70C0(a1);
  if ( v13 == -1 || v14 == -1 )
    return 0;
  v18 = *(_QWORD *)(v15 + 272);
  v19 = v18 + 40LL * *(_QWORD *)(v15 + 280);
  if ( v18 == v19 )
  {
LABEL_34:
    v21 = 0xFFFFFFFFLL;
  }
  else
  {
    v20 = *(_QWORD **)(v15 + 272);
    while ( v14 != *v20 )
    {
      v20 += 5;
      if ( (_QWORD *)v19 == v20 )
        goto LABEL_34;
    }
    v21 = -858993459 * (unsigned int)(((__int64)v20 - v18) >> 3);
  }
  sub_3766E0(a1, v21, v19, v18, a2, a3, a4, a5, v16, v17, a8, a9);
  return 1;
}
