unsigned __int64 __fastcall sub_1B7C20(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __m128i v4; // xmm0
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  _QWORD *v11; // r15
  int v12; // r13d
  __int64 *v13; // r12
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rax
  int v17; // r12d
  int v18; // ecx
  __int64 *v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rdi
  const char *v23; // rax
  int v24; // [rsp+8h] [rbp-1118h]
  __int64 v25; // [rsp+18h] [rbp-1108h]
  int v26; // [rsp+24h] [rbp-10FCh]
  int v27; // [rsp+24h] [rbp-10FCh]
  __int64 v29; // [rsp+30h] [rbp-10F0h] BYREF
  __int128 v30; // [rsp+38h] [rbp-10E8h]
  __int64 v31; // [rsp+50h] [rbp-10D0h]
  __m128i v32; // [rsp+58h] [rbp-10C8h]
  __m128i v33; // [rsp+70h] [rbp-10B0h] BYREF
  __int64 v34; // [rsp+80h] [rbp-10A0h]
  _QWORD v35[5]; // [rsp+90h] [rbp-1090h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-1068h]
  __int128 v37; // [rsp+C0h] [rbp-1060h]
  __int64 v38; // [rsp+D0h] [rbp-1050h]
  char v39[4096]; // [rsp+E0h] [rbp-1040h] BYREF
  unsigned __int64 v40; // [rsp+10E8h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 480);
  v40 = __readfsqword(0x28u);
  if ( under_debugger || *(_BYTE *)(v2 + 1424) )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      v3 = *(_QWORD *)(v2 + 1024);
      if ( *(_QWORD *)(v3 + 120) > 1u )
      {
        v29 = 0;
        v30 = 0;
        sub_6B7A0(&v29);
        if ( (**(_DWORD **)(a1 + 64) & 0x200) != 0 || !strncmp(a2, "debug", 5u) )
        {
          ++*(_DWORD *)(v3 + 140);
          qsnprintf();
          v4 = _mm_loadu_si128((const __m128i *)(v3 + 88));
          v5 = *(_QWORD *)(v3 + 80);
          *(_DWORD *)(v3 + 104) = 0;
          v32 = v4;
          *(_QWORD *)(v3 + 80) = 0;
          *(_OWORD *)(v3 + 88) = 0;
          v25 = v5;
          *(_DWORD *)(v3 + 108) = *(_DWORD *)(a1 + 72);
          v6 = *(_QWORD *)(a1 + 64);
          v7 = *(_QWORD *)(a1 + 480);
          v31 = v5;
          v34 = 0;
          *(_QWORD *)(v7 + 1344) = v6;
          v8 = *(_QWORD *)(a1 + 480);
          v9 = *(_QWORD *)(v8 + 1344);
          *(_QWORD *)(v8 + 1344) = v6;
          v33 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v6 + 1496)), (__m128i)v6);
          sub_1B5800(a1, (void (***)(_QWORD, _QWORD, const char *, ...))(v3 + 40), (__int64)&v33);
          *(_QWORD *)(*(_QWORD *)(a1 + 480) + 1344LL) = v9;
          v10 = *(_QWORD *)(v3 + 88);
          if ( v4.m128i_i64[0] <= v10 )
            LODWORD(v10) = v4.m128i_i32[0];
          v24 = v10;
          v26 = v10;
          if ( (int)v10 > 0 )
          {
            v11 = (_QWORD *)(v5 + 8);
            v12 = 0;
            v13 = (__int64 *)(*(_QWORD *)(v3 + 80) + 8LL);
            while ( 1 )
            {
              v16 = *v13;
              if ( *v11 )
                break;
              v14 = s1;
              if ( v16 )
                goto LABEL_12;
LABEL_14:
              ++v12;
              v11 += 3;
              v13 += 3;
              if ( v26 == v12 )
                goto LABEL_40;
            }
            v14 = (const char *)*(v11 - 1);
            v15 = s1;
            if ( v16 )
LABEL_12:
              v15 = (const char *)*(v13 - 1);
            if ( strcmp(v15, v14) )
              goto LABEL_19;
            goto LABEL_14;
          }
          v12 = 0;
LABEL_19:
          if ( v24 == v12 )
LABEL_40:
            v12 = *(_DWORD *)(v3 + 136);
          v17 = 20 * (v12 / 20);
          if ( fopenWT() )
          {
            if ( *(_DWORD *)(v3 + 136) != 20 * (v12 / 20) )
            {
              *(_DWORD *)(v3 + 136) = 20 * (v12 / 20);
              sub_66AC0();
              v18 = 20 * (v12 / 20);
              if ( (unsigned __int64)v18 < v4.m128i_i64[0] )
              {
                do
                {
                  v27 = v18;
                  sub_66AC0();
                  v18 = v27 + 1;
                }
                while ( (unsigned __int64)(v27 + 1) < v4.m128i_i64[0] );
              }
              qfclose();
              strrchr(v39, 46);
              qstrncpy();
              fopenWT();
            }
            sub_66AC0();
            sub_66AC0();
            while ( (unsigned __int64)v17 < *(_QWORD *)(v3 + 88) )
            {
              ++v17;
              qfputs();
            }
            sub_66AC0();
            qfclose();
          }
          else
          {
            v23 = (const char *)qstrerror();
            sub_6D0A0((__int64)"%s: %s\n", v39, v23);
          }
          memset(&v35[1], 0, 32);
          v35[0] = off_4DE3D8;
          v36 = 0;
          v38 = 0;
          v37 = 0;
          sub_31EDC0(a1, v35);
          v35[0] = off_4DE3D8;
          if ( v36 )
          {
            *(_QWORD *)&v37 = 0;
            qfree(v36);
          }
          if ( v25 )
          {
            v19 = (__int64 *)v25;
            v20 = 0;
            if ( v4.m128i_i64[0] )
            {
              do
              {
                v21 = *v19;
                if ( *v19 )
                {
                  v19[1] = 0;
                  qfree(v21);
                }
                v19 += 3;
                ++v20;
              }
              while ( v4.m128i_i64[0] != v20 );
            }
            qfree(v25);
          }
        }
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree(v29);
        }
      }
    }
  }
  return v40 - __readfsqword(0x28u);
}
