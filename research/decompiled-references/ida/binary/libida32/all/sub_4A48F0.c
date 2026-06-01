__int64 __fastcall sub_4A48F0(__int64 *a1, __int64 a2, __m128i *a3, unsigned int a4, char a5, char a6)
{
  __int64 v7; // rsi
  unsigned int v12; // r12d
  __int64 v14; // rdi
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rsi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v23; // r14
  void *v24; // rax
  int v25; // edx
  const char *v26; // rsi
  size_t v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  __int64 v30; // r9
  char *v31; // rsi
  __int64 v32; // rax
  size_t v33; // rcx
  __int64 v34; // r9
  void *v36; // [rsp+8h] [rbp-140h]
  __int64 v37; // [rsp+8h] [rbp-140h]
  __int64 v38; // [rsp+8h] [rbp-140h]
  __int64 v39; // [rsp+10h] [rbp-138h]
  __int64 v40; // [rsp+10h] [rbp-138h]
  __int64 v41; // [rsp+10h] [rbp-138h]
  __int64 v42; // [rsp+18h] [rbp-130h]
  int v43; // [rsp+2Ch] [rbp-11Ch] BYREF
  void *v44; // [rsp+30h] [rbp-118h] BYREF
  __int128 v45; // [rsp+38h] [rbp-110h]
  void *ptr; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v47; // [rsp+58h] [rbp-F0h]
  void *v48; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v49; // [rsp+78h] [rbp-D0h]
  void *v50; // [rsp+88h] [rbp-C0h]
  unsigned int v51[4]; // [rsp+90h] [rbp-B8h] BYREF
  __m128i v52; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-98h]
  __int64 v54; // [rsp+B8h] [rbp-90h]
  __int64 v55; // [rsp+C0h] [rbp-88h]
  _OWORD v56[2]; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v58; // [rsp+F0h] [rbp-58h]
  unsigned __int64 v59; // [rsp+108h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    if ( !under_debugger )
      interr(1309);
    goto LABEL_59;
  }
  v7 = *a1;
  v12 = 0;
  v52.m128i_i32[0] = *(_DWORD *)a2;
  if ( a4 >= (unsigned int)sub_79B3A0(&v52, v7, 1, 65) )
    return v12;
  v14 = *a1;
  v53 = 0;
  v52 = 0;
  v54 = -1;
  v55 = 0;
  v57 = 0;
  memset(v56, 0, sizeof(v56));
  v58 = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    if ( !under_debugger )
      interr(1306);
    goto LABEL_59;
  }
  v15 = sub_4A36C0(v14, (__int64)&v52, *(_DWORD *)a2, a4, 0);
  v48 = nullptr;
  v12 = v15;
  v50 = nullptr;
  v51[0] = 0;
  v49 = 0;
  if ( a6 )
  {
    if ( a5 )
    {
      if ( (_BYTE)v15 )
      {
        v21 = *a1;
        v39 = *(_QWORD *)&v56[0];
        v22 = navstack_t_stack_index(a2);
        if ( (unsigned __int8)sub_49FFC0(v21, (__int64)&v48, (int *)a2, v22, v39) )
        {
          if ( v50 && (*(_BYTE *)(a2 + 4) & 1) == 0 )
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v50 + 152LL))(v50, v51[0]);
        }
      }
    }
  }
  v16 = *(_DWORD *)a2;
  v17 = *a1;
  LODWORD(ptr) = a4;
  LODWORD(v44) = v16;
  sub_79B440(&v44, v17, 0, &ptr, 4, 65);
  if ( !(_BYTE)v12 )
    goto LABEL_18;
  if ( a5 )
  {
    v51[0] = 0;
    v50 = nullptr;
    if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    {
      v23 = *a1;
      v43 = *(_DWORD *)a2;
LABEL_29:
      sub_79B4D0(&v43, v23, a4, 82);
      goto LABEL_10;
    }
    v24 = (void *)(*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v56[0] + 144LL))(
                    *(_QWORD *)&v56[0],
                    v51);
    if ( v24 )
    {
      if ( v50 )
      {
        v36 = v24;
        qfree(v50);
        v24 = v36;
      }
      v25 = *(_DWORD *)a2;
      v23 = *a1;
      v50 = v24;
      v43 = v25;
    }
    else
    {
      v23 = *a1;
      v43 = *(_DWORD *)a2;
      if ( !v50 )
        goto LABEL_29;
      v24 = v50;
    }
    v44 = nullptr;
    ptr = nullptr;
    v45 = 0;
    v47 = 0;
    (*(void (__fastcall **)(void *, void **))(*(_QWORD *)v24 + 96LL))(v24, &ptr);
    v26 = haystack;
    if ( (_QWORD)v49 )
      v26 = (const char *)v48;
    if ( v26 )
    {
      v27 = strlen(v26) + 1;
    }
    else
    {
      v27 = 1;
      v26 = &byte_22CD811;
    }
    sub_49FDA0((__int64 *)&v44, v26, v27);
    v28 = v45;
    v29 = v45 + 4;
    v30 = v45 + 4;
    if ( (unsigned __int64)v45 >= 0xFFFFFFFFFFFFFFFCLL )
    {
      v34 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v31 = (char *)v44;
      v32 = v45;
      v33 = 4;
      if ( *((_QWORD *)&v45 + 1) < v29 )
      {
        v42 = v45 + 4;
        v41 = v45;
        v38 = v45 + 4;
        v44 = (void *)qvector_reserve(&v44, v44, v29, 1);
        v31 = (char *)v44;
        v32 = v45;
        v30 = v42;
        v28 = v41;
        v33 = v38 - v45;
      }
      v40 = v30;
      v37 = v28;
      memset(&v31[v32], 0, v33);
      v28 = v37;
      v34 = v40;
    }
    *(_QWORD *)&v45 = v34;
    *(_DWORD *)((char *)v44 + v28) = v51[0];
    if ( (_QWORD)v47 )
      sub_49FDA0((__int64 *)&v44, ptr, v47);
    if ( (unsigned __int64)v45 <= 0x400 )
    {
      sub_79B440(&v43, v23, a4, v44, v45, 82);
      if ( ptr )
      {
        *(_QWORD *)&v47 = 0;
        qfree(ptr);
      }
      if ( v44 )
      {
        *(_QWORD *)&v45 = 0;
        qfree(v44);
      }
      goto LABEL_10;
    }
    if ( !under_debugger )
      interr(1307);
LABEL_59:
    BUG();
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
    sub_49FBF0(a3, &v52);
    sub_4A03E0((__int64)a3[3].m128i_i64, (__int64)v56 + 8);
    sub_4A03E0((__int64)&a3[4].m128i_i64[1], (__int64)&v57);
  }
LABEL_18:
  if ( v50 )
  {
    qfree(v50);
    v50 = nullptr;
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  sub_4A11A0(&v52);
  return v12;
}

