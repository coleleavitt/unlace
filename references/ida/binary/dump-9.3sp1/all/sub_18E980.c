unsigned __int64 __fastcall sub_18E980(__int64 a1, __int64 *a2)
{
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int8 *v9; // r15
  unsigned __int64 v10; // rdx
  unsigned __int8 *v11; // rdi
  int v12; // ecx
  _BYTE *v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  void *v20; // r13
  __int64 v21; // rdi
  __m128i v22; // xmm0
  void *v23; // rdi
  __int64 *v25; // rdx
  unsigned __int64 v26; // rcx
  __m128i v27; // [rsp+0h] [rbp-C8h] BYREF
  int v28; // [rsp+10h] [rbp-B8h]
  __int64 *v29; // [rsp+18h] [rbp-B0h]
  __int64 *v30; // [rsp+20h] [rbp-A8h]
  __int64 *v31; // [rsp+28h] [rbp-A0h]
  __int64 v32; // [rsp+30h] [rbp-98h] BYREF
  __int64 v33; // [rsp+38h] [rbp-90h]
  void *src; // [rsp+40h] [rbp-88h] BYREF
  __int128 v35; // [rsp+48h] [rbp-80h]
  __int64 v36[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v37; // [rsp+70h] [rbp-58h] BYREF
  __int128 v38; // [rsp+78h] [rbp-50h]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  sub_64280((__int64 *)(a1 + 88), a2);
  v27.m128i_i64[0] = (__int64)(a2 + 2);
  sub_316CB0(a1 + 104, a2 + 2);
  v30 = (__int64 *)(a1 + 48);
  if ( (unsigned __int8)sub_64780(a2, (_QWORD *)(a1 + 48)) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( !v5 )
      goto LABEL_40;
  }
  else
  {
    if ( !(unsigned __int8)sub_318470(v27.m128i_i64[0], a1 + 64) )
      return v39 - __readfsqword(0x28u);
    v5 = *(_QWORD *)(a1 + 8);
    if ( !v5 )
      goto LABEL_40;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = *(__int64 **)(v5 + 8);
    v32 = 0;
    v33 = 0;
    src = nullptr;
    v35 = 0;
    if ( v6 != (__int64 *)v5 )
    {
      do
      {
        v7 = *(_QWORD *)a1;
        v8 = v6[3];
        if ( !*(_QWORD *)a1 )
        {
          if ( !under_debugger )
            sub_383060(51550);
          BUG();
        }
        v36[0] = 0;
        v38 = 0;
        v36[1] = 0;
        v37 = 0;
        sub_127FE0(v7, (__int64)v36, v8, 0, v3, v4, v27.m128i_i32[0], v27.m128i_i32[2], v28, (int)v29, (__int64)v30);
        if ( (unsigned __int8)sub_64780(v36, a2) || (v29 = &v37, (unsigned __int8)sub_318470(&v37, v27.m128i_i64[0])) )
        {
          v9 = (unsigned __int8 *)v6[3];
          sub_18E5D0((unsigned __int64 **)(a1 + 8), v6);
          v6 = *(__int64 **)(a1 + 8);
          if ( v6 )
          {
            v10 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v10 )
            {
              if ( (*(_BYTE *)(*v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
              {
                v31 = &v32;
                while ( 1 )
                {
                  v11 = *(unsigned __int8 **)(v10 + 24);
                  v29 = (__int64 *)v10;
                  v12 = sub_11DA40(v11, v9);
                  v13 = (_BYTE *)v29[1];
                  if ( v12 < 0 )
                    v13 = (_BYTE *)v29[2];
                  else
                    v6 = v29;
                  if ( (*v13 & 2) != 0 )
                    break;
                  v10 = (unsigned __int64)v13;
                }
              }
            }
            else
            {
              v6 = nullptr;
            }
          }
        }
        else
        {
          sub_64280(&v32, v36);
          sub_316CB0(&src, v29);
          if ( (*v6 & 2) == 0 )
          {
            v14 = (__int64 *)v6[2];
            if ( (*(_BYTE *)v14 & 2) != 0 )
            {
              v15 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
              v16 = *v15;
              if ( (*v15 & 2) == 0 )
              {
                while ( (__int64 *)v15[2] == v6 )
                {
                  v6 = v15;
                  v26 = v16 & 0xFFFFFFFFFFFFFFFCLL;
                  v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v16 & 2) != 0 )
                  {
                    v6 = (__int64 *)v26;
                    goto LABEL_20;
                  }
                  v15 = (__int64 *)v26;
                }
              }
              v6 = v15;
            }
            else
            {
              do
              {
                v6 = v14;
                v25 = (__int64 *)v14[1];
                if ( (*(_BYTE *)v25 & 2) != 0 )
                  break;
                v6 = v25;
                v14 = (__int64 *)v25[1];
              }
              while ( (*(_BYTE *)v14 & 2) == 0 );
            }
          }
        }
LABEL_20:
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
        qfree(v36[0]);
      }
      while ( v6 != *(__int64 **)(a1 + 8) );
    }
    goto LABEL_23;
  }
LABEL_40:
  v32 = 0;
  v33 = 0;
  src = nullptr;
  v35 = 0;
LABEL_23:
  sub_648D0(v30, &v32);
  v19 = v35;
  v20 = nullptr;
  if ( (_QWORD)v35 )
  {
    v20 = (void *)qalloc_or_throw(16 * v35, (__int64)&v32, v17, v18);
    memcpy(v20, src, 16 * v19);
  }
  v21 = *(_QWORD *)(a1 + 64);
  v22 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    v27 = v22;
    qfree(v21);
    v22 = _mm_load_si128(&v27);
  }
  v23 = src;
  *(_QWORD *)(a1 + 64) = v20;
  *(__m128i *)(a1 + 72) = v22;
  if ( v23 )
  {
    *(_QWORD *)&v35 = 0;
    qfree((__int64)v23);
  }
  qfree(v32);
  return v39 - __readfsqword(0x28u);
}
