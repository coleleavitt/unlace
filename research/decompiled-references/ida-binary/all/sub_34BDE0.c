unsigned __int64 __fastcall sub_34BDE0(__int64 *a1, const char *a2, unsigned int a3, unsigned __int64 a4)
{
  size_t v8; // rax
  __int64 v9; // rbp
  size_t v10; // r13
  size_t v11; // r8
  __int64 v12; // rsi
  size_t v13; // rdx
  void *v14; // rdi
  _BYTE *v15; // rbp
  char i; // al
  const char *v17; // rbp
  const char *v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // ecx
  const char **v21; // r15
  int v22; // edx
  unsigned int v23; // r14d
  int v24; // ebx
  int v25; // r13d
  unsigned __int64 v26; // rdx
  __int64 v27; // r10
  const char *v28; // rsi
  const char *v29; // r12
  char v30; // r11
  __int64 v31; // rax
  const char *v32; // r12
  unsigned __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rax
  const char *v38; // rsi
  __int64 v39; // rax
  const char *v40; // rbp
  unsigned __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // rsi
  const char *v44; // rbp
  size_t v45; // r13
  const char *v46; // r12
  const char *v47; // r14
  __int64 v48; // rsi
  const char *v49; // rbp
  unsigned __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // [rsp+8h] [rbp-4A0h]
  unsigned __int64 v55; // [rsp+8h] [rbp-4A0h]
  size_t v56; // [rsp+8h] [rbp-4A0h]
  char v57; // [rsp+10h] [rbp-498h]
  size_t v58; // [rsp+10h] [rbp-498h]
  __int64 v59; // [rsp+18h] [rbp-490h]
  unsigned int v60; // [rsp+20h] [rbp-488h]
  unsigned int v61; // [rsp+24h] [rbp-484h]
  unsigned __int64 v62; // [rsp+28h] [rbp-480h]
  __int128 v63; // [rsp+30h] [rbp-478h] BYREF
  void *src; // [rsp+40h] [rbp-468h] BYREF
  __int128 v65; // [rsp+48h] [rbp-460h]
  _BYTE v66[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v67; // [rsp+468h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v8 = strlen(a2);
  v9 = a1[1];
  v10 = v8;
  v11 = v8;
  if ( v9 )
  {
    --v9;
    v11 = v8 + v9;
  }
  v12 = *a1;
  v13 = v11 + 1;
  if ( a1[2] < v11 + 1 )
  {
    v58 = v11;
    v56 = v11 + 1;
    v39 = qvector_reserve(a1, v12, v13, 1);
    v11 = v58;
    v13 = v56;
    *a1 = v39;
    v12 = v39;
  }
  a1[1] = v13;
  *(_BYTE *)(v12 + v11) = 0;
  v14 = (void *)(v9 + *a1);
  v15 = v66;
  memmove(v14, a2, v10);
  b2a64(v66, 1024, a4, 8, a3);
  for ( i = v66[0]; i == 48; ++v15 )
    i = v15[1];
  v17 = &v15[-(i == 0)];
  v18 = v17;
  v19 = strlen(v17);
  v20 = (a3 == 16) + 3;
  v61 = a3;
  v62 = a4;
  v21 = (const char **)a1;
  v22 = v19 % v20;
  v60 = v20;
  v23 = v19;
  if ( !(v19 % v20) )
    v22 = v20;
  v24 = 1 - (_DWORD)v17;
  v25 = v22;
  while ( 1 )
  {
    v29 = v21[1];
    v30 = *v17;
    if ( v29 )
    {
      v26 = (unsigned __int64)(v29 + 1);
      v27 = (__int64)v21[1];
      v28 = *v21;
      --v29;
      if ( (unsigned __int64)v21[2] >= v26 )
        goto LABEL_11;
    }
    else
    {
      v28 = *v21;
      v27 = 1;
      v26 = 2;
      if ( (unsigned __int64)v21[2] >= 2 )
        goto LABEL_11;
    }
    v18 = (const char *)v21;
    v59 = v27;
    v57 = *v17;
    v54 = v26;
    v31 = qvector_reserve(v21, v28, v26, 1);
    v27 = v59;
    v30 = v57;
    *v21 = (const char *)v31;
    v26 = v54;
    v28 = (const char *)v31;
LABEL_11:
    v21[1] = (const char *)v26;
    v29[(_QWORD)v28] = v30;
    (*v21)[v27] = 0;
    if ( v24 + (int)v17 >= v23 )
      break;
    if ( --v25 )
      goto LABEL_13;
    v32 = v21[1];
    if ( v32 )
    {
      v33 = (unsigned __int64)(v32 + 1);
      v34 = (__int64)v21[1];
      v35 = (__int64)*v21;
      --v32;
      if ( (unsigned __int64)v21[2] < v33 )
        goto LABEL_21;
    }
    else
    {
      v35 = (__int64)*v21;
      v34 = 1;
      v33 = 2;
      if ( (unsigned __int64)v21[2] < 2 )
      {
LABEL_21:
        v18 = (const char *)v21;
        v55 = v33;
        v36 = qvector_reserve(v21, v35, v33, 1);
        v33 = v55;
        *v21 = (const char *)v36;
        v35 = v36;
      }
    }
    v21[1] = (const char *)v33;
    v32[v35] = 32;
    (*v21)[v34] = 0;
    v25 = v60;
LABEL_13:
    ++v17;
  }
  if ( v61 == 16 )
  {
    src = nullptr;
    v65 = 0;
    if ( *(_QWORD *)(get_eah(v18, v28, v26) + 16) >= v62
      || (v38 = (const char *)&v63, v63 = 0, getinf_buf(26, &v63, 16), v62 >= (unsigned __int64)v63)
      && v62 < *((_QWORD *)&v63 + 1) )
    {
      v38 = (const char *)v62;
      if ( get_ea_name(&src, v62, 64, 0) > 0 )
      {
        v40 = v21[1];
        if ( v40 )
        {
          v42 = (__int64)(v40 + 1);
          v41 = (unsigned __int64)(v40 + 2);
          --v40;
        }
        else
        {
          v41 = 3;
          v42 = 2;
        }
        v43 = (__int64)*v21;
        if ( (unsigned __int64)v21[2] < v41 )
        {
          v51 = qvector_reserve(v21, v43, v41, 1);
          *v21 = (const char *)v51;
          v43 = v51;
        }
        v21[1] = (const char *)v41;
        *(_BYTE *)(v43 + v42) = 0;
        *(_WORD *)&v40[(_QWORD)*v21] = 10272;
        v44 = (const char *)v65;
        if ( (_QWORD)v65 )
        {
          v45 = v65 - 1;
          if ( (_QWORD)v65 != 1 )
          {
            v46 = v21[1];
            v47 = (const char *)(v65 - 1);
            if ( v46 )
            {
              --v46;
              v47 = &v46[v45];
              v44 = &v46[v65];
            }
            v48 = (__int64)*v21;
            if ( v21[2] < v44 )
            {
              v53 = qvector_reserve(v21, v48, v44, 1);
              *v21 = (const char *)v53;
              v48 = v53;
            }
            v21[1] = v44;
            v47[v48] = 0;
            memcpy((void *)&(*v21)[(_QWORD)v46], src, v45);
          }
        }
        v49 = v21[1];
        v50 = 2;
        if ( v49 )
          v50 = (unsigned __int64)(v49-- + 1);
        v38 = *v21;
        if ( (unsigned __int64)v21[2] < v50 )
        {
          v52 = qvector_reserve(v21, v38, v50, 1);
          *v21 = (const char *)v52;
          v38 = (const char *)v52;
        }
        v21[1] = (const char *)v50;
        v49[(_QWORD)v38] = 41;
        v49[(_QWORD)*v21 + 1] = 0;
      }
    }
    if ( src )
    {
      *(_QWORD *)&v65 = 0;
      qfree(src, v38);
    }
  }
  return v67 - __readfsqword(0x28u);
}
