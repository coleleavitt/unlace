__int64 __fastcall sub_46B40(__int128 a1, double a2, double a3, double a4, double a5)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  unsigned int v7; // ebp
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD **v13; // rbx
  void *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  _QWORD *v18; // rbx
  char v20; // [rsp+Fh] [rbp-159h] BYREF
  __int64 v21; // [rsp+10h] [rbp-158h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+18h] [rbp-150h]
  char v23; // [rsp+20h] [rbp-148h]
  __int64 v24; // [rsp+28h] [rbp-140h]
  __int128 v25; // [rsp+30h] [rbp-138h]
  __int128 v26; // [rsp+40h] [rbp-128h]
  __int64 v27; // [rsp+50h] [rbp-118h]
  int v28; // [rsp+58h] [rbp-110h]
  __int64 v29; // [rsp+60h] [rbp-108h]
  __int128 v30; // [rsp+68h] [rbp-100h]
  int v31; // [rsp+78h] [rbp-F0h]
  int v32; // [rsp+88h] [rbp-E0h] BYREF
  void *v33; // [rsp+90h] [rbp-D8h]
  int *v34; // [rsp+98h] [rbp-D0h]
  int *v35; // [rsp+A0h] [rbp-C8h]
  __int64 v36; // [rsp+A8h] [rbp-C0h]
  __int64 v37; // [rsp+B0h] [rbp-B8h]
  __int128 v38; // [rsp+B8h] [rbp-B0h]
  __int64 v39; // [rsp+C8h] [rbp-A0h]
  __int128 v40; // [rsp+D0h] [rbp-98h]
  __int64 v41; // [rsp+E0h] [rbp-88h]
  __int128 v42; // [rsp+E8h] [rbp-80h]
  __int64 v43; // [rsp+F8h] [rbp-70h]
  __m128i si128; // [rsp+100h] [rbp-68h]
  __int128 v45; // [rsp+110h] [rbp-58h]
  __int128 v46; // [rsp+120h] [rbp-48h]
  unsigned __int64 v47; // [rsp+138h] [rbp-30h]

  v5 = a1;
  v6 = **((_QWORD **)&a1 + 1);
  v47 = __readfsqword(0x28u);
  v7 = sub_77B70(v6);
  if ( !(_BYTE)v7 )
  {
    if ( !*(_QWORD *)(v5 + 5440) )
      *(_QWORD *)(v5 + 5440) = create_hit_counter();
    v21 = v5;
    *(_QWORD *)&a1 = &v21;
    v25 = 0;
    v26 = 0;
    v30 = 0;
    v38 = 0;
    v40 = 0;
    v42 = 0;
    v45 = 0;
    v23 = 0;
    v22 = off_16BC88;
    v24 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = &v32;
    v35 = &v32;
    v36 = 0;
    v37 = 0;
    v39 = 0;
    v41 = 0;
    v43 = *((_QWORD *)&a1 + 1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_950A0);
    v46 = 0;
    sub_42F80(a1, 0.0, *(double *)si128.m128i_i64, a4, a5);
    v20 = 0;
    v7 = sub_44B00(&v21, &v20, 0.0);
    if ( (_BYTE)v7 )
    {
      v8 = v20;
    }
    else
    {
      v8 = sub_44620((__int64)&v21);
      v20 = v8;
    }
    if ( v8 )
    {
      reanalyze_function();
      delete_wrong_frame_info();
    }
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree();
    }
    v9 = v39;
    if ( v39 )
    {
      v10 = v40;
      if ( (_QWORD)v40 )
      {
        v11 = 0;
        do
        {
          v12 = (_QWORD *)(v9 + 80 * v11);
          if ( *v12 )
          {
            v12[1] = 0;
            qfree();
            v9 = v39;
          }
          ++v11;
        }
        while ( v10 != v11 );
      }
      *(_QWORD *)&v40 = 0;
      qfree();
    }
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree();
    }
    v13 = (_QWORD **)v33;
    if ( v33 )
    {
      do
      {
        sub_3FCC0(v13[3]);
        v14 = v13;
        v13 = (_QWORD **)v13[2];
        operator delete(v14, 0x28u);
      }
      while ( v13 );
    }
    v15 = v29;
    v22 = off_16BC88;
    if ( v29 )
    {
      v16 = v30;
      if ( (_QWORD)v30 )
      {
        v17 = 0;
        do
        {
          v18 = (_QWORD *)(v15 + (v17 << 6));
          if ( v18[5] )
          {
            v18[6] = 0;
            qfree();
          }
          if ( v18[2] )
          {
            v18[3] = 0;
            qfree();
          }
          ++v17;
          v15 = v29;
        }
        while ( v16 != v17 );
      }
      *(_QWORD *)&v30 = 0;
      qfree();
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
  }
  return v7;
}
