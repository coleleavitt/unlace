unsigned __int64 __fastcall sub_A14A0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // r13
  __int64 v8; // rax
  __m128i *v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-190h]
  __int64 (__fastcall **v13)(); // [rsp+10h] [rbp-188h] BYREF
  int v14; // [rsp+18h] [rbp-180h]
  __int64 v15; // [rsp+20h] [rbp-178h]
  __int64 v16; // [rsp+28h] [rbp-170h]
  __int128 v17; // [rsp+30h] [rbp-168h]
  __m128i v18; // [rsp+40h] [rbp-158h] BYREF
  __int64 v19; // [rsp+58h] [rbp-140h]
  __int128 v20; // [rsp+60h] [rbp-138h]
  __int128 v21; // [rsp+70h] [rbp-128h]
  __int64 v22; // [rsp+80h] [rbp-118h]
  __int128 v23; // [rsp+88h] [rbp-110h]
  __int64 v24; // [rsp+98h] [rbp-100h]
  __int128 v25; // [rsp+A0h] [rbp-F8h]
  __int64 v26; // [rsp+D8h] [rbp-C0h]
  __int128 v27; // [rsp+E0h] [rbp-B8h]
  __int64 v28; // [rsp+F0h] [rbp-A8h]
  __int128 v29; // [rsp+F8h] [rbp-A0h]
  __int64 v30; // [rsp+114h] [rbp-84h]
  __int64 v31; // [rsp+11Ch] [rbp-7Ch]
  __int64 v32; // [rsp+124h] [rbp-74h]
  unsigned __int64 v33; // [rsp+12Ch] [rbp-6Ch]
  __int64 v34; // [rsp+138h] [rbp-60h]
  int v35; // [rsp+148h] [rbp-50h]
  unsigned __int64 v36; // [rsp+158h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 408) )
  {
    v16 = a1;
    v2 = 0;
    v14 = 0;
    v3 = 0;
    v15 = 0;
    v13 = &off_C94F0;
    v4 = operator new(0x20u);
    v19 = 0;
    *(_OWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = off_C9528;
    v18.m128i_i64[0] = v4;
    v32 = 0x80000000LL;
    v33 = 0xFFFFFFFF00000000LL;
    v5 = *(_QWORD *)(a1 + 288);
    v20 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v34 = 0;
    v30 = 0;
    v31 = 0;
    v35 = 0;
    v12 = v5;
    v17 = -1;
    if ( v5 )
    {
      do
      {
        v9 = (__m128i *)(v2 + *(_QWORD *)(a1 + 280));
        if ( (unsigned __int16)sub_97BF0((__int64)v9) == 46 )
        {
          v10 = sub_9A5C0(v16, v9, v16 + 384, 0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFFLL);
          if ( v10 )
          {
            if ( (_QWORD)v17 == -1 || (unsigned __int64)v17 < *(_QWORD *)(v10 + 16) )
              *(_QWORD *)&v17 = *(_QWORD *)(v10 + 16);
            v11 = *(_QWORD *)(v10 + 24);
            if ( *((_QWORD *)&v17 + 1) == -1 || v11 < *((_QWORD *)&v17 + 1) )
              *((_QWORD *)&v17 + 1) = v11;
          }
        }
        v6 = *(_QWORD *)(a1 + 280);
        ++v14;
        v7 = (_QWORD *)(v2 + v6);
        v8 = v7[31];
        if ( !v8 )
        {
          v8 = sub_87C20(*(_QWORD **)(*v7 + 16LL), *(_QWORD *)(*v7 + 24LL));
          v7[31] = v8;
        }
        v15 = v8;
        sub_A0CE0(v7, (__int64)&v13, 1);
        --v14;
        ++v3;
        v2 += 264;
      }
      while ( v12 != v3 );
      if ( v35 > 0 )
        sub_9A5C0(a1, &v18, a1 + 384, 0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFFLL);
    }
    *(_BYTE *)(a1 + 408) = 1;
    v13 = &off_C94F0;
    sub_1B750((__int64)&v18);
  }
  return v36 - __readfsqword(0x28u);
}
