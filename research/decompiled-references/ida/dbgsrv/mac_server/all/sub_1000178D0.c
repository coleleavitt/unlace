/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000178D0
// Address: 0x00000001000178D0

//----- (00000001000178D0) ----------------------------------------------------
__int64 __fastcall sub_1000178D0(
        const char *a1,
        unsigned int *a2,
        __int64 (__fastcall *a3)(_QWORD *, __int64, const char *, __int64),
        __int64 a4)
{
  unsigned int *v5; // r15
  const char *v6; // r13
  bool v7; // bl
  const char *v8; // rdx
  _QWORD *v9; // rax
  int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // r9d
  int v14; // r8d
  int v15; // r10d
  int v16; // r11d
  int v17; // edi
  int v18; // esi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  __m128i v22; // xmm1
  int v23; // eax
  __int64 v26; // [rsp+70h] [rbp-2A0h]
  int v27; // [rsp+7Ch] [rbp-294h]
  const char *v28; // [rsp+80h] [rbp-290h]
  int v29; // [rsp+88h] [rbp-288h]
  int v30; // [rsp+8Ch] [rbp-284h]
  int v31; // [rsp+90h] [rbp-280h]
  int v32; // [rsp+94h] [rbp-27Ch]
  __int128 v34; // [rsp+A0h] [rbp-270h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-260h]
  __int128 v36; // [rsp+C0h] [rbp-250h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-240h]
  _QWORD v38[2]; // [rsp+D8h] [rbp-238h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-228h] BYREF
  __int128 v40; // [rsp+F0h] [rbp-220h]
  int v41; // [rsp+100h] [rbp-210h]
  char v42; // [rsp+104h] [rbp-20Ch]
  _QWORD *v43; // [rsp+108h] [rbp-208h]
  char v44; // [rsp+110h] [rbp-200h]
  __int128 v45; // [rsp+120h] [rbp-1F0h]
  __int128 v46; // [rsp+130h] [rbp-1E0h]
  __int64 v47; // [rsp+140h] [rbp-1D0h]
  char v48; // [rsp+148h] [rbp-1C8h]
  __int64 v49; // [rsp+150h] [rbp-1C0h]
  __int128 v50; // [rsp+158h] [rbp-1B8h]
  __int128 v51; // [rsp+168h] [rbp-1A8h]
  __int16 v52; // [rsp+178h] [rbp-198h]
  __int128 v53; // [rsp+1A0h] [rbp-170h]
  __int128 v54; // [rsp+1B0h] [rbp-160h]
  __int128 v55; // [rsp+1C0h] [rbp-150h]
  __int128 v56; // [rsp+1D0h] [rbp-140h]
  __int128 v57; // [rsp+1E0h] [rbp-130h]
  __int128 v58; // [rsp+1F0h] [rbp-120h]
  __int128 v59; // [rsp+200h] [rbp-110h]
  __int128 v60; // [rsp+210h] [rbp-100h]
  __int128 v61; // [rsp+220h] [rbp-F0h]
  __int128 v62; // [rsp+230h] [rbp-E0h]
  __int128 v63; // [rsp+240h] [rbp-D0h]
  __int128 v64; // [rsp+250h] [rbp-C0h]
  __int128 v65; // [rsp+260h] [rbp-B0h]
  __int128 v66; // [rsp+270h] [rbp-A0h]
  _BYTE v67[19]; // [rsp+280h] [rbp-90h] BYREF
  int v68; // [rsp+294h] [rbp-7Ch]
  __int128 v69; // [rsp+298h] [rbp-78h]
  __int128 v70; // [rsp+2A8h] [rbp-68h]
  int v71; // [rsp+2B8h] [rbp-58h]
  __int128 v72; // [rsp+2C0h] [rbp-50h]
  __int128 v73; // [rsp+2D0h] [rbp-40h]

  v5 = a2;
  v6 = a1;
  if ( (debug[0] & 0x10) != 0 )
    sub_1000139E0((int)"Looking for Mach-O file at \"%s\"...\n", a1);
  v7 = qfileexist(a1);
  if ( (debug[0] & 0x10) != 0 )
  {
    v8 = "No";
    if ( v7 )
      v8 = "Yes";
    sub_1000139E0((int)"File \"%s\" exists? -> %s.\n", a1, v8);
  }
  if ( v7 )
  {
    v9 = open_linput(a1, 0);
    v10 = -1;
    if ( v9 )
    {
      v38[0] = &off_1000A7F20;
      v38[1] = &v39;
      v39 = 0xFFFFFFFFLL;
      v40 = -1;
      v41 = 8;
      v42 = 1;
      v43 = v9;
      v44 = 1;
      v45 = 0;
      v46 = 0;
      v47 = -1;
      v48 = 0;
      v49 = -1;
      v68 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v66 = 0;
      memset(v67, 0, sizeof(v67));
      v69 = -1;
      v70 = 0;
      v71 = 0;
      v73 = 0;
      v72 = 0;
      if ( (unsigned __int8)sub_10000FA10((__int64)v38) )
      {
        if ( (debug[0] & 0x10) != 0 )
        {
          v36 = 0;
          v37 = 0;
          sub_100002D00(
            (__int64)&v36,
            "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
            *((unsigned __int8 *)a2 + 8),
            *((unsigned __int8 *)a2 + 9),
            *((unsigned __int8 *)a2 + 10),
            *((unsigned __int8 *)a2 + 11),
            *((unsigned __int8 *)a2 + 12),
            *((unsigned __int8 *)a2 + 13),
            *((unsigned __int8 *)a2 + 14),
            *((unsigned __int8 *)a2 + 15),
            *((unsigned __int8 *)a2 + 16),
            *((unsigned __int8 *)a2 + 17),
            *((unsigned __int8 *)a2 + 18),
            *((unsigned __int8 *)a2 + 19),
            *((unsigned __int8 *)a2 + 20),
            *((unsigned __int8 *)a2 + 21),
            *((unsigned __int8 *)a2 + 22),
            *((unsigned __int8 *)a2 + 23));
          if ( (debug[0] & 0x10) != 0 )
            sub_1000139E0((int)"Looking for cpu=%d:%d, uuid=%s.\n", *a2, a2[1], (_QWORD)v36);
          if ( (_QWORD)v36 )
          {
            *((_QWORD *)&v36 + 1) = 0;
            qfree((void *)v36);
          }
          v6 = a1;
        }
        v36 = 0;
        v37 = 0;
        if ( (unsigned __int8)sub_1000171C0((__int64)&v36, (__int64)v38) )
        {
          v26 = a4;
          v10 = -1;
          v11 = 28LL * *((_QWORD *)&v36 + 1);
          if ( 28LL * *((_QWORD *)&v36 + 1) )
          {
            v12 = v36;
            v28 = v6;
            do
            {
              if ( (debug[0] & 0x10) != 0 )
              {
                v34 = 0;
                v35 = 0;
                v29 = *((unsigned __int8 *)v5 + 8);
                v30 = *((unsigned __int8 *)v5 + 9);
                v31 = *((unsigned __int8 *)v5 + 10);
                v32 = *((unsigned __int8 *)v5 + 11);
                v27 = *((unsigned __int8 *)v5 + 12);
                v13 = *((unsigned __int8 *)v5 + 13);
                v14 = *((unsigned __int8 *)v5 + 14);
                v15 = *((unsigned __int8 *)v5 + 15);
                v16 = *((unsigned __int8 *)v5 + 16);
                v17 = *((unsigned __int8 *)v5 + 17);
                v18 = *((unsigned __int8 *)v5 + 18);
                v19 = *((unsigned __int8 *)v5 + 19);
                v20 = *((unsigned __int8 *)v5 + 20);
                v21 = *((unsigned __int8 *)v5 + 21);
                v5 = a2;
                sub_100002D00(
                  (__int64)&v34,
                  "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
                  v29,
                  v30,
                  v31,
                  v32,
                  v27,
                  v13,
                  v14,
                  v15,
                  v16,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21,
                  *((unsigned __int8 *)a2 + 22),
                  *((unsigned __int8 *)a2 + 23));
                if ( (debug[0] & 0x10) != 0 )
                  sub_1000139E0((int)"Candidate: cpu=%d:%d, uuid=%s.\n", *a2, a2[1], (_QWORD)v34);
                if ( (_QWORD)v34 )
                {
                  *((_QWORD *)&v34 + 1) = 0;
                  qfree((void *)v34);
                }
                v6 = v28;
              }
              if ( *v5 == *(_DWORD *)v12 )
              {
                v22 = _mm_xor_si128(
                        _mm_loadu_si128((const __m128i *)(v12 + 8)),
                        _mm_loadu_si128((const __m128i *)(v5 + 2)));
                if ( _mm_testz_si128(v22, v22) )
                {
                  v23 = a3(v38, v26, v6, v12);
                  if ( v23 >= 0 )
                  {
                    v10 = v23;
                    goto LABEL_34;
                  }
                }
              }
              v12 += 28;
              v11 -= 28;
            }
            while ( v11 );
            v10 = -1;
          }
        }
        else
        {
          v10 = -1;
          if ( (debug[0] & 0x10) != 0 )
            sub_1000139E0((int)"Failed retrieving archs/UUID.\n");
        }
LABEL_34:
        if ( (_QWORD)v36 )
        {
          *((_QWORD *)&v36 + 1) = 0;
          qfree((void *)v36);
        }
        if ( v10 < 0 )
        {
          if ( (debug[0] & 0x10) != 0 )
            sub_1000139E0((int)"No\n");
          v10 = -1;
        }
        else if ( (debug[0] & 0x10) != 0 )
        {
          sub_1000139E0((int)"Found, with architecture #%d\n", (unsigned int)v10);
        }
      }
      sub_10001CA40((__int64)v38);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return (unsigned int)v10;
}
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
