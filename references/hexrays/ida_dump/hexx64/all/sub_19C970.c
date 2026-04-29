bool __fastcall sub_19C970(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  int v4; // ebx
  __int64 v5; // r15
  __int64 v7; // r14
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // r12
  bool v13; // zf
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r15
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  bool v23; // al
  __int64 v24; // r15
  _QWORD *v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r15
  _QWORD *v30; // rax
  __int64 v31; // rax
  unsigned __int64 *v32; // rax
  __int64 *v33; // [rsp-10h] [rbp-130h]
  bool v34; // [rsp+6h] [rbp-11Ah]
  bool v35; // [rsp+7h] [rbp-119h]
  __int64 v36; // [rsp+10h] [rbp-110h]
  __int64 v37; // [rsp+10h] [rbp-110h]
  __int64 v38; // [rsp+10h] [rbp-110h]
  __int64 tinfo_size; // [rsp+18h] [rbp-108h]
  int v40; // [rsp+20h] [rbp-100h]
  __int64 v41; // [rsp+20h] [rbp-100h]
  __int64 v43[2]; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v44; // [rsp+40h] [rbp-E0h] BYREF
  __int128 v45; // [rsp+48h] [rbp-D8h]
  __int64 v46; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-B8h]
  _BYTE v48[24]; // [rsp+70h] [rbp-B0h] BYREF
  int v49; // [rsp+88h] [rbp-98h]
  __int64 (__fastcall **v50)(); // [rsp+90h] [rbp-90h]
  __int64 v51; // [rsp+98h] [rbp-88h]
  int v52; // [rsp+A0h] [rbp-80h]
  __int128 v53; // [rsp+A8h] [rbp-78h]
  __int64 v54; // [rsp+B8h] [rbp-68h]
  __int64 v55; // [rsp+C0h] [rbp-60h] BYREF
  __int128 v56; // [rsp+C8h] [rbp-58h]
  __int64 v57; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v58; // [rsp+E8h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 128) )
    return 0;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 184);
  v5 = v3[3];
  if ( v4 != (_DWORD)v5 && *(_DWORD *)(a1 + 208) != (unsigned int)v3[6] )
    return 0;
  v7 = v3[35];
  v36 = v3[6];
  v40 = *(_DWORD *)(a1 + 208);
  v8 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 248LL);
  tinfo_size = get_tinfo_size(0, v8, 0);
  if ( tinfo_size == -1 )
    return 0;
  v10 = (__int64 *)a2[11];
  v11 = v36;
  v12 = &v10[2 * a2[12]];
  if ( v12 != v10 )
  {
    v13 = v4 == (_DWORD)v5;
    v14 = (__int64 *)a2[11];
    v35 = v13;
    v34 = v40 == (_DWORD)v36;
    do
    {
      v15 = v14[1];
      if ( *(_BYTE *)(v15 + 64) == 5 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v15 + 72) + 8LL);
        v11 = v16
            - *(__int16 *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
                            *(_QWORD *)(a1 + 16),
                            v8,
                            v9,
                            v11);
        v41 = v11;
        if ( v11 >= 0 )
        {
          v18 = *(_QWORD *)(v7 + 1440);
          v43[0] = 0;
          v43[1] = 0;
          v44 = 0;
          v45 = 0;
          if ( v18 + v11 + tinfo_size - 1 >= (unsigned __int64)(v18 + v11) )
          {
            v37 = v18 + v11;
            v44 = qvector_reserve(&v44, 0, 1, 16);
            v30 = (_QWORD *)(16 * v45 + v44);
            *v30 = v37;
            v30[1] = tinfo_size;
            v18 = *(_QWORD *)(v7 + 1440);
            *(_QWORD *)&v45 = v45 + 1;
          }
          v19 = a1;
          v20 = v18 + v16;
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
          v22 = *(int *)(v21 + 80);
          v46 = 0;
          v47 = 0;
          memset(v48, 0, sizeof(v48));
          if ( v22 + v20 - 1 >= v20 )
          {
            v38 = v22;
            v31 = qvector_reserve(v48, 0, 1, 16);
            v22 = v38;
            *(_QWORD *)v48 = v31;
            v21 = 16LL * *(_QWORD *)&v48[8];
            v32 = (unsigned __int64 *)(16LL * *(_QWORD *)&v48[8] + v31);
            *v32 = v20;
            v32[1] = v38;
            ++*(_QWORD *)&v48[8];
          }
          sub_64640(v43, &v46, v21, v19, v22, v17);
          sub_317C60(&v44, v48);
          if ( *(_QWORD *)v48 )
          {
            *(_QWORD *)&v48[8] = 0;
            qfree(*(_QWORD *)v48);
          }
          qfree(v46);
          v8 = (__int64 *)(v7 + 232);
          if ( (unsigned __int8)sub_318470(&v44, v7 + 232)
            || (v23 = sub_17C4E0(*(__int64 **)(v7 + 784), (__int64)v43, 0, 0xFFFFFFFF, 0, 0, 2u, 0), v8 = v33, v23)
            || (v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[1] + 40) + 8LL) + 8LL), v24 < sub_194CC0(v7))
            || (v25 = (_QWORD *)a2[6], v26 = (_QWORD *)v25[35], v27 = v26[18], v24 < v27)
            || (v8 = (__int64 *)v26[187], v24 >= v27 + *(_DWORD *)(v26[188] + 80LL) * *((_DWORD *)v8 + 164))
            || v24 % *(char *)((*(__int64 (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25) + 12)
            || !*(_BYTE *)(v7 + 320)
            && *(_BYTE *)(a1 + 468)
            && v35
            && v34
            && (*(_QWORD *)(v7 + 144) < (unsigned __int64)(tinfo_size + v41)
             || (v8 = v43, sub_17C4E0(*(__int64 **)(v7 + 784), (__int64)v43, 0, 0xFFFFFFFF, 0, 0, 1u, 0))) )
          {
            if ( v44 )
            {
              *(_QWORD *)&v45 = 0;
              qfree(v44);
            }
          }
          else
          {
            v46 = 0;
            LODWORD(v47) = 0;
            *(_QWORD *)&v48[16] = -1;
            v49 = -1;
            v52 = -1;
            *(__m128i *)v48 = _mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)off_4DBD90,
                                (__m128i)(unsigned __int64)off_4DBD70);
            v53 = -1;
            v51 = -1;
            v50 = off_4DBD70;
            v54 = -1;
            v55 = 0;
            v57 = 0;
            v56 = 0;
            v28 = *v14;
            LODWORD(v47) = 16;
            v46 = v28;
            *(_QWORD *)&v48[16] = *(_QWORD *)(a1 + 176);
            v49 = *(_DWORD *)(a1 + 184);
            v51 = *(_QWORD *)(a1 + 200);
            v52 = *(_DWORD *)(a1 + 208);
            *(_QWORD *)&v53 = v41;
            *((_QWORD *)&v53 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[1] + 40) + 8LL) + 8LL);
            v29 = v14[1];
            v55 = qvector_reserve(&v55, 0, 1, 8);
            v8 = &v46;
            *(_QWORD *)(v55 + 8 * v56) = v29;
            *(_QWORD *)&v56 = v56 + 1;
            v57 = v14[1];
            sub_19C5A0((_QWORD *)a1, &v46);
            if ( v55 )
            {
              *(_QWORD *)&v56 = 0;
              qfree(v55);
            }
            if ( v44 )
            {
              *(_QWORD *)&v45 = 0;
              qfree(v44);
            }
          }
          qfree(v43[0]);
        }
      }
      v14 += 2;
    }
    while ( v12 != v14 );
  }
  return *(_QWORD *)(a1 + 128) != 0;
}
