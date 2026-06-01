__int64 __fastcall sub_47B4A0(
        __int64 a1,
        int a2,
        unsigned __int64 *a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        void *a8,
        __int64 a9,
        int a10,
        int a11,
        void *a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        __int64 a20,
        int a21,
        int a22,
        int a23,
        int a24,
        __int64 a25)
{
  __int64 v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __m128i *v32; // r15
  __m128i *v33; // r13
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // r12
  void *v37; // rbp
  char v38; // al
  __int64 v39; // rsi
  char v40; // r12
  __int64 v42; // rbp
  __m128i *v43; // r8
  __m128i *v44; // rax
  __m128i *v45; // rdi
  __m128i *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rdx
  unsigned __int64 i; // r12
  unsigned __int64 v51; // [rsp+0h] [rbp-98h]
  unsigned __int64 v52; // [rsp+10h] [rbp-88h] BYREF
  __int64 v53; // [rsp+18h] [rbp-80h] BYREF
  int v54[2]; // [rsp+20h] [rbp-78h] BYREF
  int v55[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v56; // [rsp+30h] [rbp-68h]
  int *v57; // [rsp+38h] [rbp-60h]
  int *v58; // [rsp+40h] [rbp-58h]
  __int64 v59; // [rsp+48h] [rbp-50h]
  unsigned __int64 v60; // [rsp+58h] [rbp-40h]

  v27 = a4;
  v28 = *(int *)(a1 + 4LL * a5 + 16);
  v60 = __readfsqword(0x28u);
  v29 = switch_dbctx(v28);
  v30 = switch_dbctx(*(int *)(a1 + 4 * v27 + 16));
  v32 = *(__m128i **)(v29 + 1672);
  v33 = *(__m128i **)(v30 + 1672);
  if ( a2 == 1 )
  {
    v42 = v30;
    v55[0] = 0;
    v43 = v32 + 60;
    v56 = nullptr;
    v57 = v55;
    v58 = v55;
    v59 = 0;
    v44 = (__m128i *)v32[60].m128i_i64[1];
    if ( v44 )
    {
      v45 = v32 + 60;
      v46 = (__m128i *)v32[60].m128i_i64[1];
      do
      {
        while ( 1 )
        {
          v47 = v46[1].m128i_i64[0];
          v48 = v46[1].m128i_i64[1];
          if ( v46[2].m128i_i64[0] >= *a3 )
            break;
          v46 = (__m128i *)v46[1].m128i_i64[1];
          if ( !v48 )
            goto LABEL_28;
        }
        v45 = v46;
        v46 = (__m128i *)v46[1].m128i_i64[0];
      }
      while ( v47 );
      do
      {
LABEL_28:
        while ( 1 )
        {
          v49 = v44[1].m128i_i64[0];
          v31 = v44[1].m128i_i64[1];
          if ( v44[2].m128i_i64[0] >= a3[1] )
            break;
          v44 = (__m128i *)v44[1].m128i_i64[1];
          if ( !v31 )
            goto LABEL_30;
        }
        v43 = v44;
        v44 = (__m128i *)v44[1].m128i_i64[0];
      }
      while ( v49 );
    }
    else
    {
      v45 = v32 + 60;
    }
LABEL_30:
    sub_47B3B0((__int64)v54, v45, v43, v31);
    sub_3D2D40((__int64)v33, (__int64)&v33[59].m128i_i64[1], *a3, a3[1], 0xA1u);
    sub_3CD220(v33, &v33[59].m128i_i64[1], (__int64)v54, 0x9Fu);
    if ( (int)sub_3BDA80((__int64)v32, *a3) > 8 )
    {
      for ( i = *a3; i < a3[1]; ++i )
      {
        while ( 1 )
        {
          v52 = i;
          v53 = 0;
          if ( sub_7BE950(&v52, v29, -1, &v53, 8, 65) <= 0 )
            break;
          sub_7BE7C0(&v52, v42, -1, &v53, 8, 65);
          if ( ++i >= a3[1] )
            goto LABEL_36;
        }
        sub_7BE850(&v52, v42, -1, 65);
      }
    }
LABEL_36:
    sub_469F10(v56);
    return v60 - __readfsqword(0x28u);
  }
  else
  {
    if ( a2 )
    {
      if ( !under_debugger )
        interr(2050);
      BUG();
    }
    v34 = *a3;
    if ( *a3 < a3[1] )
    {
      while ( 1 )
      {
        v37 = (void *)v34;
        v38 = sub_3BD540((__int64)v33, v34);
        v39 = v34++;
        v40 = v38;
        if ( sub_3BD540((__int64)v32, v39) )
          break;
        if ( v40 )
        {
          sub_3D6B90(v33, v37, v34);
          if ( v34 >= a3[1] )
            return sub_3D2F00(
                     (int)v33,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a12,
                     a13,
                     a14,
                     a15,
                     a16,
                     a17,
                     a18,
                     a19,
                     a20,
                     a21,
                     a22,
                     a23,
                     a24,
                     a25);
        }
        else
        {
LABEL_15:
          if ( v34 >= a3[1] )
            return sub_3D2F00(
                     (int)v33,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a12,
                     a13,
                     a14,
                     a15,
                     a16,
                     a17,
                     a18,
                     a19,
                     a20,
                     a21,
                     a22,
                     a23,
                     a24,
                     a25);
        }
      }
      if ( !v40 )
      {
        *(_QWORD *)v54 = v37;
        *(_QWORD *)v55 = v34;
        sub_3C0380((__int64)v33, (unsigned __int64 *)v54, 0, 0);
      }
      v51 = sub_3BE900(v33, (unsigned __int64)v37, 1);
      v35 = sub_3BE900(v32, (unsigned __int64)v37, 1);
      v36 = v35;
      if ( v35 != v51 )
      {
        if ( (v35 & 0xC000) == 0 )
          sub_3C59C0((_DWORD)v33, (_DWORD)v37);
        if ( (v36 & 0x600) == 0 )
          sub_3D1350(v33, (unsigned __int64)v37, 32);
        if ( (v36 & 0x100) != 0 )
        {
          sub_3BEFF0(v32->m128i_i64, (__int64 *)v54, (unsigned __int64)v37);
          sub_3CF0D0((__int64)v33, (__int64)v37, *(__int64 *)v54);
        }
        else
        {
          sub_3BE710((__int64)v33, (__int64)v37);
        }
        sub_3D07C0(v33, v37, v36);
      }
      goto LABEL_15;
    }
    return sub_3D2F00(
             (int)v33,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24,
             a25);
  }
}
