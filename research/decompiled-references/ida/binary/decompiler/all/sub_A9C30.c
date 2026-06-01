__int64 __fastcall sub_A9C30(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // r14d
  __int64 v6; // r14
  int v7; // r8d
  __int64 v8; // r14
  __int64 v9; // rsi
  char v10; // al
  __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // eax
  char v14; // al
  int v15; // r8d
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  __int64 v22; // r14
  __int64 (__fastcall *v23)(__int64, __int64, __int64); // rax
  unsigned int v24; // eax
  __m128i v25; // [rsp+0h] [rbp-140h] BYREF
  __int64 v26; // [rsp+10h] [rbp-130h]
  __int64 *v27; // [rsp+18h] [rbp-128h]
  __int64 *v28; // [rsp+20h] [rbp-120h]
  __int64 *v29; // [rsp+28h] [rbp-118h]
  _DWORD *v30; // [rsp+30h] [rbp-110h]
  _DWORD *v31; // [rsp+38h] [rbp-108h]
  _DWORD *v32; // [rsp+40h] [rbp-100h]
  __int64 *v33; // [rsp+48h] [rbp-F8h]
  __int64 *v34; // [rsp+50h] [rbp-F0h]
  _DWORD *v35; // [rsp+58h] [rbp-E8h]
  __int64 v36; // [rsp+60h] [rbp-E0h] BYREF
  _DWORD *v37; // [rsp+68h] [rbp-D8h] BYREF
  _BYTE v38[16]; // [rsp+70h] [rbp-D0h] BYREF
  _QWORD v39[2]; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+90h] [rbp-B0h] BYREF
  __m128i v41; // [rsp+98h] [rbp-A8h]
  __int64 v42; // [rsp+B0h] [rbp-90h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-88h]
  __int64 v44; // [rsp+C0h] [rbp-80h] BYREF
  __int128 v45; // [rsp+C8h] [rbp-78h]
  _QWORD v46[2]; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-50h] BYREF
  __m128i v48; // [rsp+F8h] [rbp-48h] BYREF
  unsigned __int64 v49; // [rsp+108h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  if ( (*((_BYTE *)a2 + 33) & 0x40) != 0 )
    return 0;
  v3 = 0;
  if ( (*((_BYTE *)a2 + 65) & 0x40) == 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 480LL) + 112LL);
    v30 = a2 + 16;
    sub_121540(v38, a2 + 16);
    if ( !(unsigned __int8)sub_12A7F0(v38, v6, (*(_DWORD *)(a1 + 16) & 1) == 0) )
    {
LABEL_30:
      v3 = 0;
      goto LABEL_31;
    }
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v31 = a2;
      v32 = 0;
    }
    else
    {
      v32 = a2;
      v31 = 0;
    }
    *(_DWORD *)(a1 + 20) = 0;
    v7 = 0;
    v33 = &v42;
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v36 = (__int64)a2;
      if ( !sub_1280A0(v12, v38, &v36, 0, v7 | 2u) )
        goto LABEL_22;
      if ( (unsigned __int8)sub_120100(v36) )
        goto LABEL_22;
      v35 = (_DWORD *)v36;
      if ( (*(_BYTE *)(v36 + 33) & 0x40) != 0 || (*(_BYTE *)(v36 + 65) & 0x40) != 0 )
        goto LABEL_22;
      v13 = *(_DWORD *)(a1 + 16);
      if ( (v13 & 1) != 0 )
        v32 = (_DWORD *)v36;
      else
        v31 = v35;
      if ( (v13 & 4) == 0
        && (*v32 == 4 || *v32 == 67 && v32[9] == v32[17] || *v31 == 4 || *v31 == 67 && v31[9] == v31[17]) )
      {
        if ( !(unsigned __int8)sub_12E6A0(*(_QWORD *)(a1 + 8), v32, v32 + 8, v31, v31 + 8, 0) )
          goto LABEL_22;
        v35 = (_DWORD *)v36;
      }
      v8 = (__int64)a2;
      if ( *(_DWORD *)(a1 + 20) != 1 )
      {
        v8 = (__int64)v35;
        v35 = a2;
      }
      sub_125510(v33, *(_QWORD *)(a1 + 8), v8, 1);
      v9 = *(_QWORD *)(a1 + 8);
      v34 = v46;
      sub_122180(v46, v9, v35, 1);
      v10 = sub_63E80(v34, v33);
      v11 = v47;
      if ( v10 || (v28 = &v44, v14 = sub_314F20(&v47, &v44), v11 = v47, v14) )
      {
        if ( v11 )
        {
          v48.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree();
        }
      }
      else
      {
        if ( v47 )
        {
          v48.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree();
        }
        qfree();
        v15 = *(_DWORD *)(a1 + 20);
        v16 = *(_QWORD *)(a1 + 8);
        v37 = a2;
        if ( sub_1280A0(v16, v30, &v37, v36, v15 | 2u) )
          goto LABEL_22;
        v17 = *(_QWORD *)(a1 + 8);
        v29 = v39;
        sub_122180(v39, v17, v31, 1);
        if ( !sub_126C30(*(_QWORD *)(a1 + 8), (_DWORD)v29, *((_QWORD *)v35 + 2), v8, 0, 0, 257) )
        {
          v18 = *(_QWORD *)(a1 + 8);
          v44 = 0;
          v45 = 0;
          v42 = 0;
          v43 = 0;
          sub_1269C0(v18, v33, v32 + 8, 1);
          sub_1269C0(*(_QWORD *)(a1 + 8), v33, v32 + 12, 1);
          if ( !(unsigned __int8)sub_63E80(v33, v29) )
          {
            v27 = &v40;
            if ( !(unsigned __int8)sub_314F20(v28, &v40) )
            {
              sub_122180(v34, *(_QWORD *)(a1 + 8), v32, 1);
              sub_63FD0(v29, v34);
              v19 = v47;
              v47 = 0;
              v20 = _mm_loadu_si128(&v48);
              v48 = 0;
              if ( v40 )
              {
                v26 = v19;
                v25 = v20;
                v41.m128i_i64[0] = 0;
                qfree();
                v21 = _mm_load_si128(&v25);
                v40 = v26;
                v41 = v21;
                if ( v47 )
                {
                  v48.m128i_i64[0] = 0;
                  qfree();
                }
              }
              else
              {
                v40 = v19;
                v41 = v20;
              }
              qfree();
              v43 = 0;
              if ( v44 )
              {
                *(_QWORD *)&v45 = 0;
                qfree();
                v44 = 0;
                *((_QWORD *)&v45 + 1) = 0;
              }
              sub_1269C0(*(_QWORD *)(a1 + 8), v33, v31 + 8, 1);
              sub_1269C0(*(_QWORD *)(a1 + 8), v33, v31 + 12, 1);
              if ( !(unsigned __int8)sub_63E80(v33, v29) && !(unsigned __int8)sub_314F20(v28, v27) )
              {
                sub_125510(v34, *(_QWORD *)(a1 + 8), v31, 1);
                if ( !sub_A9010(*(_QWORD *)(a1 + 8), v34, *(_QWORD *)(v8 + 8), (__int64)v35, 0) )
                {
                  v22 = (__int64)v32;
                  if ( *((_BYTE *)v32 + 32) != 10
                    && *((_BYTE *)v32 + 48) != 10
                    && (v32[1] & 0x40010) == 0
                    && (*((_BYTE *)v32 + 65) & 2) == 0 )
                  {
                    v35 = *(_DWORD **)(*(_QWORD *)(a1 + 8) + 64LL);
                    if ( !sub_A18D0((__int64)v35, (__int64)v32) )
                    {
                      if ( (unsigned __int8)sub_A1BF0((__int64)v35, (__int64)v31) )
                      {
                        v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 16LL);
                        if ( v23 == sub_9FCC0 )
                          v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, _QWORD))(a1 + 24))(
                                  *(_QWORD *)(a1 + 8),
                                  v22,
                                  v31,
                                  *(unsigned int *)(a1 + 16));
                        else
                          v24 = v23(a1, (__int64)v32, (__int64)v31);
                        v3 = v24;
                        if ( (_BYTE)v24 )
                        {
                          sub_92DA0((__int64)v34);
                          sub_92DA0((__int64)v33);
                          sub_92DA0((__int64)v29);
LABEL_31:
                          sub_11A960(v38);
                          return v3;
                        }
                        if ( v47 )
                        {
                          v48.m128i_i64[0] = 0;
                          qfree();
                        }
                        qfree();
                        if ( v44 )
                        {
                          *(_QWORD *)&v45 = 0;
                          qfree();
                        }
                        qfree();
                        if ( v40 )
                        {
                          v41.m128i_i64[0] = 0;
                          qfree();
                        }
                        goto LABEL_21;
                      }
                    }
                  }
                }
                if ( v47 )
                {
                  v48.m128i_i64[0] = 0;
                  qfree();
                }
                qfree();
              }
            }
          }
          if ( v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree();
          }
          qfree();
        }
        if ( v40 )
        {
          v41.m128i_i64[0] = 0;
          qfree();
        }
      }
LABEL_21:
      qfree();
LABEL_22:
      v7 = *(_DWORD *)(a1 + 20) + 1;
      *(_DWORD *)(a1 + 20) = v7;
      if ( v7 > 1 )
        goto LABEL_30;
    }
  }
  return v3;
}
