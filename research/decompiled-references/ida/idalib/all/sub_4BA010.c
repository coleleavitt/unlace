__int64 __fastcall sub_4BA010(__int64 *a1, __int64 a2, __m128i *a3, unsigned int a4, char a5, char a6)
{
  __int64 v7; // rsi
  void *v10; // rbx
  unsigned int v12; // r12d
  __int64 v14; // rdi
  unsigned int v15; // eax
  void *v16; // rax
  __int64 v17; // rsi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v23; // r14
  void *v24; // rax
  __int64 v25; // rdx
  const char *v26; // r9
  size_t v27; // rax
  __int64 v28; // r15
  const char *v29; // r9
  size_t v30; // r8
  unsigned __int64 v31; // r10
  __int64 v32; // r15
  unsigned __int64 v33; // rdx
  void *v34; // r8
  char *v35; // rsi
  __int64 v36; // rax
  size_t v37; // rcx
  __int64 v38; // r8
  char *v39; // rsi
  __int64 v40; // rax
  void *srca; // [rsp+10h] [rbp-148h]
  const char *srcb; // [rsp+10h] [rbp-148h]
  void *srcd; // [rsp+10h] [rbp-148h]
  void *srcf; // [rsp+10h] [rbp-148h]
  void *srce; // [rsp+10h] [rbp-148h]
  void *srcc; // [rsp+10h] [rbp-148h]
  __int64 v48; // [rsp+18h] [rbp-140h]
  const char *v49; // [rsp+20h] [rbp-138h]
  const char *v50; // [rsp+20h] [rbp-138h]
  void *v51; // [rsp+20h] [rbp-138h]
  size_t v52; // [rsp+28h] [rbp-130h]
  size_t v53; // [rsp+28h] [rbp-130h]
  __int64 v54; // [rsp+38h] [rbp-120h] BYREF
  void *v55; // [rsp+40h] [rbp-118h] BYREF
  __int128 v56; // [rsp+48h] [rbp-110h]
  void *ptr; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v58; // [rsp+68h] [rbp-F0h]
  void *v59; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v60; // [rsp+88h] [rbp-D0h]
  void *v61; // [rsp+98h] [rbp-C0h]
  unsigned int v62[4]; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i v63; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-98h]
  __int64 v65; // [rsp+C8h] [rbp-90h]
  __int64 v66; // [rsp+D0h] [rbp-88h]
  _OWORD v67[2]; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v69; // [rsp+100h] [rbp-58h]
  unsigned __int64 v70; // [rsp+118h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !under_debugger )
      interr(1309);
    goto LABEL_67;
  }
  v7 = *a1;
  v10 = (void *)a4;
  v12 = 0;
  v63.m128i_i64[0] = *(_QWORD *)a2;
  if ( a4 >= (unsigned int)sub_7BE710(&v63, v7, 1, 65) )
    return v12;
  v14 = *a1;
  v64 = 0;
  v63 = 0;
  v65 = -1;
  v66 = 0;
  v68 = 0;
  memset(v67, 0, sizeof(v67));
  v69 = 0;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !under_debugger )
      interr(1306);
    goto LABEL_67;
  }
  v15 = sub_4B8CB0(v14, (__int64)&v63, *(_QWORD *)a2, (unsigned int)v10, 0);
  v12 = v15;
  v59 = nullptr;
  v61 = nullptr;
  v62[0] = 0;
  v60 = 0;
  if ( a6 )
  {
    if ( a5 )
    {
      if ( (_BYTE)v15 )
      {
        v21 = *a1;
        v48 = *(_QWORD *)&v67[0];
        v22 = navstack_t_stack_index(a2);
        if ( (unsigned __int8)sub_4B5560(v21, (__int64)&v59, (__int64 *)a2, v22, v48) )
        {
          if ( v61 && (*(_BYTE *)(a2 + 8) & 1) == 0 )
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v61 + 152LL))(v61, v62[0]);
        }
      }
    }
  }
  v16 = *(void **)a2;
  v17 = *a1;
  ptr = v10;
  v55 = v16;
  sub_7BE7C0(&v55, v17, 0, &ptr, 8, 65);
  if ( !(_BYTE)v12 )
    goto LABEL_18;
  if ( a5 )
  {
    v62[0] = 0;
    v61 = nullptr;
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    {
      v23 = *a1;
      v54 = *(_QWORD *)a2;
LABEL_29:
      sub_7BE850(&v54, v23, v10, 82);
      goto LABEL_10;
    }
    v24 = (void *)(*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v67[0] + 144LL))(
                    *(_QWORD *)&v67[0],
                    v62);
    if ( v24 )
    {
      if ( v61 )
      {
        srca = v24;
        qfree(v61);
        v24 = srca;
      }
      v25 = *(_QWORD *)a2;
      v23 = *a1;
      v61 = v24;
      v54 = v25;
    }
    else
    {
      v23 = *a1;
      v54 = *(_QWORD *)a2;
      if ( !v61 )
        goto LABEL_29;
      v24 = v61;
    }
    v55 = nullptr;
    ptr = nullptr;
    v56 = 0;
    v58 = 0;
    (*(void (__fastcall **)(void *, void **))(*(_QWORD *)v24 + 96LL))(v24, &ptr);
    v26 = haystack;
    if ( (_QWORD)v60 )
      v26 = (const char *)v59;
    if ( v26 )
    {
      srcb = v26;
      v27 = strlen(v26);
      v28 = v56;
      v29 = srcb;
      v30 = v27 + 1;
      v31 = v27 + 1 + v56;
      if ( __CFADD__(v27 + 1, (_QWORD)v56) )
      {
        if ( (unsigned __int64)v56 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v56 == 0x7FFFFFFFFFFFFFFFLL )
          {
LABEL_40:
            memcpy((char *)v55 + v28, v29, v30);
            v32 = v56;
            v33 = v56 + 4;
            v34 = (void *)(v56 + 4);
            if ( (unsigned __int64)v56 >= 0xFFFFFFFFFFFFFFFCLL )
            {
              v38 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else
            {
              v35 = (char *)v55;
              v36 = v56;
              v37 = 4;
              if ( *((_QWORD *)&v56 + 1) < v33 )
              {
                v51 = (void *)(v56 + 4);
                srcc = (void *)(v56 + 4);
                v55 = (void *)qvector_reserve(&v55, v55, v33, 1);
                v35 = (char *)v55;
                v36 = v56;
                v34 = v51;
                v37 = (size_t)srcc - v56;
              }
              srcd = v34;
              memset(&v35[v36], 0, v37);
              v38 = (__int64)srcd;
            }
            *(_QWORD *)&v56 = v38;
            *(_DWORD *)((char *)v55 + v32) = v62[0];
            if ( (_QWORD)v58 )
              sub_4B52A0((__int64 *)&v55, ptr, v58);
            if ( (unsigned __int64)v56 <= 0x400 )
            {
              sub_7BE7C0(&v54, v23, v10, v55, v56, 82);
              if ( ptr )
              {
                *(_QWORD *)&v58 = 0;
                qfree(ptr);
              }
              if ( v55 )
              {
                *(_QWORD *)&v56 = 0;
                qfree(v55);
              }
              goto LABEL_10;
            }
            if ( !under_debugger )
              interr(1307);
LABEL_67:
            BUG();
          }
LABEL_56:
          *(_QWORD *)&v56 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_40;
        }
        v31 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v28 = v56;
      v30 = 1;
      v29 = &byte_22F0C30;
      v31 = v56 + 1;
      if ( (_QWORD)v56 == -1 )
      {
        v28 = -1;
        v29 = &byte_22F0C30;
        goto LABEL_56;
      }
    }
    v39 = (char *)v55;
    v40 = v28;
    if ( *((_QWORD *)&v56 + 1) < v31 )
    {
      v53 = v30;
      v50 = v29;
      srce = (void *)v31;
      v55 = (void *)qvector_reserve(&v55, v55, v31, 1);
      v39 = (char *)v55;
      v30 = v53;
      v40 = v56;
      v29 = v50;
      v31 = (unsigned __int64)srce;
    }
    v52 = v30;
    v49 = v29;
    srcf = (void *)v31;
    memset(&v39[v40], 0, v31 - v40);
    v29 = v49;
    v30 = v52;
    *(_QWORD *)&v56 = srcf;
    goto LABEL_40;
  }
LABEL_10:
  if ( a3 )
  {
    v18 = (void *)a3[2].m128i_i64[1];
    if ( v18 )
    {
      qfree(v18);
      a3[2].m128i_i64[1] = 0;
    }
    v19 = (void *)a3[3].m128i_i64[0];
    if ( v19 )
    {
      a3[3].m128i_i64[1] = 0;
      qfree(v19);
      a3[3].m128i_i64[0] = 0;
      a3[4].m128i_i64[0] = 0;
    }
    v20 = (void *)a3[4].m128i_i64[1];
    if ( v20 )
    {
      a3[5].m128i_i64[0] = 0;
      qfree(v20);
      a3[4].m128i_i64[1] = 0;
      a3[5].m128i_i64[1] = 0;
    }
    sub_4B50E0(a3, &v63);
    sub_4B5360((__int64)a3[3].m128i_i64, (__int64)v67 + 8);
    sub_4B5360((__int64)&a3[4].m128i_i64[1], (__int64)&v68);
  }
LABEL_18:
  if ( v61 )
  {
    qfree(v61);
    v61 = nullptr;
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  sub_4B66E0(&v63);
  return v12;
}
