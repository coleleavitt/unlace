unsigned __int64 __fastcall sub_18E3C0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int8 *v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int8 *v9; // rdi
  int v10; // ecx
  _BYTE *v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  void *v16; // r13
  __int64 v17; // rdi
  __m128i v18; // xmm0
  void *v19; // rdi
  __int64 *v21; // rdx
  unsigned __int64 v22; // rcx
  __m128i v23; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v24; // [rsp+18h] [rbp-B0h]
  __int64 *v25; // [rsp+20h] [rbp-A8h]
  __int64 *v26; // [rsp+28h] [rbp-A0h]
  __int64 v27; // [rsp+30h] [rbp-98h] BYREF
  __int64 v28; // [rsp+38h] [rbp-90h]
  void *src; // [rsp+40h] [rbp-88h] BYREF
  __int128 v30; // [rsp+48h] [rbp-80h]
  __int64 v31[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v32; // [rsp+70h] [rbp-58h] BYREF
  __int128 v33; // [rsp+78h] [rbp-50h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  sub_63C80((__int64 *)(a1 + 88), a2);
  v23.m128i_i64[0] = (__int64)(a2 + 2);
  sub_317070(a1 + 104, a2 + 2);
  v25 = (__int64 *)(a1 + 48);
  if ( (unsigned __int8)sub_64180(a2, (_QWORD *)(a1 + 48)) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( !v3 )
      goto LABEL_40;
  }
  else
  {
    if ( !(unsigned __int8)sub_318830(v23.m128i_i64[0], a1 + 64) )
      return v34 - __readfsqword(0x28u);
    v3 = *(_QWORD *)(a1 + 8);
    if ( !v3 )
      goto LABEL_40;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    v4 = *(__int64 **)(v3 + 8);
    v27 = 0;
    v28 = 0;
    src = nullptr;
    v30 = 0;
    if ( v4 != (__int64 *)v3 )
    {
      do
      {
        v5 = *(_QWORD *)a1;
        v6 = v4[3];
        if ( !*(_QWORD *)a1 )
        {
          if ( !under_debugger )
            sub_3835A0(51550);
          BUG();
        }
        v31[0] = 0;
        v33 = 0;
        v31[1] = 0;
        v32 = 0;
        sub_127A20(v5, v31, v6, 0);
        if ( (unsigned __int8)sub_64180(v31, a2) || (v24 = &v32, (unsigned __int8)sub_318830(&v32, v23.m128i_i64[0])) )
        {
          v7 = (unsigned __int8 *)v4[3];
          sub_18E010((unsigned __int64 **)(a1 + 8), v4);
          v4 = *(__int64 **)(a1 + 8);
          if ( v4 )
          {
            v8 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v8 )
            {
              if ( (*(_BYTE *)(*v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
              {
                v26 = &v27;
                while ( 1 )
                {
                  v9 = *(unsigned __int8 **)(v8 + 24);
                  v24 = (__int64 *)v8;
                  v10 = sub_11D480(v9, v7);
                  v11 = (_BYTE *)v24[1];
                  if ( v10 < 0 )
                    v11 = (_BYTE *)v24[2];
                  else
                    v4 = v24;
                  if ( (*v11 & 2) != 0 )
                    break;
                  v8 = (unsigned __int64)v11;
                }
              }
            }
            else
            {
              v4 = nullptr;
            }
          }
        }
        else
        {
          sub_63C80(&v27, v31);
          sub_317070(&src, v24);
          if ( (*v4 & 2) == 0 )
          {
            v12 = (__int64 *)v4[2];
            if ( (*(_BYTE *)v12 & 2) != 0 )
            {
              v13 = (__int64 *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
              v14 = *v13;
              if ( (*v13 & 2) == 0 )
              {
                while ( (__int64 *)v13[2] == v4 )
                {
                  v4 = v13;
                  v22 = v14 & 0xFFFFFFFFFFFFFFFCLL;
                  v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v14 & 2) != 0 )
                  {
                    v4 = (__int64 *)v22;
                    goto LABEL_20;
                  }
                  v13 = (__int64 *)v22;
                }
              }
              v4 = v13;
            }
            else
            {
              do
              {
                v4 = v12;
                v21 = (__int64 *)v12[1];
                if ( (*(_BYTE *)v21 & 2) != 0 )
                  break;
                v4 = v21;
                v12 = (__int64 *)v21[1];
              }
              while ( (*(_BYTE *)v12 & 2) == 0 );
            }
          }
        }
LABEL_20:
        if ( v32 )
        {
          *(_QWORD *)&v33 = 0;
          qfree(v32);
        }
        qfree(v31[0]);
      }
      while ( v4 != *(__int64 **)(a1 + 8) );
    }
    goto LABEL_23;
  }
LABEL_40:
  v27 = 0;
  v28 = 0;
  src = nullptr;
  v30 = 0;
LABEL_23:
  sub_642D0(v25, &v27);
  v15 = v30;
  v16 = nullptr;
  if ( (_QWORD)v30 )
  {
    v16 = (void *)qalloc_or_throw(16 * v30);
    memcpy(v16, src, 16 * v15);
  }
  v17 = *(_QWORD *)(a1 + 64);
  v18 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    v23 = v18;
    qfree(v17);
    v18 = _mm_load_si128(&v23);
  }
  v19 = src;
  *(_QWORD *)(a1 + 64) = v16;
  *(__m128i *)(a1 + 72) = v18;
  if ( v19 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v19);
  }
  qfree(v27);
  return v34 - __readfsqword(0x28u);
}
