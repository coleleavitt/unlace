__int64 __fastcall sub_4CD2A0(__int64 *a1, char **a2, int a3, int a4, __int64 a5, int a6, int a7, int a8)
{
  __int64 v8; // rax
  unsigned int v9; // r13d
  int v11; // eax
  int v12; // eax
  char *v13; // r15
  size_t v14; // rax
  char *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // rdi
  void *v19; // rdx
  __m128i v20; // xmm0
  char *v21; // rbx
  char *v22; // rbp
  char *v23; // rax
  char *v24; // r8
  void *v25; // rdx
  char *v26; // [rsp+0h] [rbp-F8h]
  void *v27; // [rsp+0h] [rbp-F8h]
  char *v28; // [rsp+8h] [rbp-F0h]
  char *s; // [rsp+10h] [rbp-E8h] BYREF
  void *v30[2]; // [rsp+18h] [rbp-E0h]
  void *v31; // [rsp+30h] [rbp-C8h] BYREF
  void *v32[2]; // [rsp+38h] [rbp-C0h]
  void *ptr; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v34; // [rsp+58h] [rbp-A0h] BYREF
  int v35[2]; // [rsp+70h] [rbp-88h] BYREF
  int v36; // [rsp+78h] [rbp-80h]
  __int64 v37; // [rsp+80h] [rbp-78h]
  int v38; // [rsp+88h] [rbp-70h]
  int v39; // [rsp+8Ch] [rbp-6Ch]
  int v40; // [rsp+90h] [rbp-68h]
  char v41; // [rsp+94h] [rbp-64h]
  int v42; // [rsp+98h] [rbp-60h]
  __m128i si128; // [rsp+9Ch] [rbp-5Ch]
  int v44; // [rsp+ACh] [rbp-4Ch]
  char v45; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v46; // [rsp+B8h] [rbp-40h]

  v8 = *a1;
  v46 = __readfsqword(0x28u);
  v36 = a3;
  *(_QWORD *)v35 = v8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383940);
  v40 = a7;
  v37 = a5;
  v38 = a6;
  v39 = a4;
  v41 = 0;
  v42 = a8;
  v44 = 0;
  v45 = 0;
  s = nullptr;
  *(_OWORD *)v30 = 0;
  if ( (*(_BYTE *)(a5 + 12) & 0x40) != 0 )
  {
    v9 = sub_4CBFE0(v35, a2, &s);
    if ( v9 != 3 )
      goto LABEL_3;
LABEL_13:
    v9 = 1;
    goto LABEL_14;
  }
  if ( !(unsigned __int8)sub_4CBB50((__int64 *)v35, 0)
    || si128.m128i_i32[0] == -1
    || si128.m128i_i32[1] == -1
    || !(unsigned __int8)sub_4CA2E0((__int64)v35, (__int64)"get_offset_expr") )
  {
    v9 = 0;
    goto LABEL_3;
  }
  v11 = sub_4CC910((__int64)v35, (__int64 *)&s);
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      v9 = sub_4CCCD0((unsigned int *)v35, (__int64)a2);
      goto LABEL_3;
    }
    goto LABEL_13;
  }
  v9 = 2;
LABEL_14:
  if ( v30[0] <= (char *)&dword_0 + 1 )
  {
    if ( !under_debugger )
      interr(1358);
    BUG();
  }
  v41 = 1;
  v31 = nullptr;
  *(_OWORD *)v32 = 0;
  v12 = sub_4CCCD0((unsigned int *)v35, (__int64)&v31);
  if ( v12 )
  {
    if ( v12 == 2 )
    {
      if ( v9 != 2 )
      {
        v26 = (char *)v30[0];
        if ( v30[0] )
        {
          v13 = s;
          v14 = strlen(s);
          v15 = v26;
          v16 = (unsigned __int64)&v13[v14];
          if ( (unsigned __int64)(v13 + 2) < v16
            && *(_BYTE *)(v16 - 2) == 2
            && (unsigned __int8)(*(_BYTE *)(v16 - 1) - 1) < 0x28u )
          {
            v16 -= 2LL;
          }
          if ( (unsigned __int64)v13 < v16 && *(_BYTE *)(v16 - 1) == 41 )
            goto LABEL_31;
        }
      }
      v17 = a1[4];
      if ( *(_BYTE *)(v17 + 256) )
      {
        if ( *(_BYTE *)(v17 + 257) )
        {
          ptr = nullptr;
          v34 = 0;
          sub_3573A0((char **)&ptr);
          v18 = v31;
          v19 = ptr;
          v20 = _mm_loadu_si128(&v34);
          ptr = v31;
          v31 = v19;
          v34.m128i_i64[1] = (__int64)v32[1];
          *(__m128i *)v32 = v20;
          if ( ptr )
          {
            v34.m128i_i64[0] = 0;
            qfree(v18);
          }
        }
      }
    }
    v15 = (char *)v30[0];
    if ( !v30[0] )
      goto LABEL_37;
    v13 = s;
LABEL_31:
    v21 = v15 - 1;
    if ( v15 == (_BYTE *)&dword_0 + 1 )
    {
LABEL_37:
      sub_390600(a2);
      goto LABEL_40;
    }
    while ( 1 )
    {
      v22 = v21 - 1;
      v23 = v13;
      if ( v21[(_QWORD)v13 - 1] == 37 )
      {
        if ( v21 == (_BYTE *)&dword_0 + 1 )
          goto LABEL_37;
        if ( (unsigned __int8)(v21[(_QWORD)v13 - 2] - 1) <= 1u )
        {
          if ( v15 )
          {
            v24 = v15 - 1;
            v25 = v15 + 1;
            if ( v30[1] >= v15 + 1 )
            {
LABEL_45:
              v30[0] = v25;
              v15[(_QWORD)v23] = 0;
              if ( v22 < v24 )
              {
                memmove(&v21[(_QWORD)s], &v22[(_QWORD)s], v24 - v22);
                v24 = v21 - 1;
              }
              goto LABEL_47;
            }
          }
          else
          {
            if ( v30[1] > (char *)&dword_0 + 1 )
            {
              v30[0] = &dword_0 + 2;
              v24 = nullptr;
              v13[1] = 0;
LABEL_47:
              v24[(_QWORD)s] = 37;
              v15 = (char *)v30[0];
              v13 = s;
              goto LABEL_34;
            }
            v24 = nullptr;
            v25 = &dword_0 + 2;
          }
          v28 = v24;
          v27 = v25;
          v23 = (char *)qvector_reserve(&s, v13, v25, 1);
          v24 = v28;
          v25 = v27;
          s = v23;
          v15 = v28 + 1;
          goto LABEL_45;
        }
      }
      else if ( v21 == (_BYTE *)&dword_0 + 1 )
      {
        goto LABEL_37;
      }
LABEL_34:
      --v21;
    }
  }
  v9 = 0;
LABEL_40:
  if ( v31 )
  {
    v32[0] = nullptr;
    qfree(v31);
  }
LABEL_3:
  if ( s )
  {
    v30[0] = nullptr;
    qfree(s);
  }
  return v9;
}

