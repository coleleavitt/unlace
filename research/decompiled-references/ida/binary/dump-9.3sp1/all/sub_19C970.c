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
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rax
  unsigned __int64 *v35; // rax
  __int64 *v36; // [rsp-10h] [rbp-130h]
  bool v37; // [rsp+6h] [rbp-11Ah]
  bool v38; // [rsp+7h] [rbp-119h]
  __int64 v39; // [rsp+10h] [rbp-110h]
  __int64 v40; // [rsp+10h] [rbp-110h]
  __int64 v41; // [rsp+10h] [rbp-110h]
  __int64 tinfo_size; // [rsp+18h] [rbp-108h]
  int v43; // [rsp+20h] [rbp-100h]
  __int64 v44; // [rsp+20h] [rbp-100h]
  __int64 v46[2]; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v47; // [rsp+40h] [rbp-E0h] BYREF
  __int128 v48; // [rsp+48h] [rbp-D8h]
  __int64 v49; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+68h] [rbp-B8h]
  _BYTE v51[24]; // [rsp+70h] [rbp-B0h] BYREF
  int v52; // [rsp+88h] [rbp-98h]
  __int64 (__fastcall **v53)(); // [rsp+90h] [rbp-90h]
  __int64 v54; // [rsp+98h] [rbp-88h]
  int v55; // [rsp+A0h] [rbp-80h]
  __int128 v56; // [rsp+A8h] [rbp-78h]
  __int64 v57; // [rsp+B8h] [rbp-68h]
  __int64 v58; // [rsp+C0h] [rbp-60h] BYREF
  __int128 v59; // [rsp+C8h] [rbp-58h]
  __int64 v60; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v61; // [rsp+E8h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 128) )
    return 0;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 184);
  v5 = v3[3];
  if ( v4 != (_DWORD)v5 && *(_DWORD *)(a1 + 208) != (unsigned int)v3[6] )
    return 0;
  v7 = v3[35];
  v39 = v3[6];
  v43 = *(_DWORD *)(a1 + 208);
  v8 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 248LL);
  tinfo_size = get_tinfo_size();
  if ( tinfo_size == -1 )
    return 0;
  v10 = (__int64 *)a2[11];
  v11 = v39;
  v12 = &v10[2 * a2[12]];
  if ( v12 != v10 )
  {
    v13 = v4 == (_DWORD)v5;
    v14 = (__int64 *)a2[11];
    v38 = v13;
    v37 = v43 == (_DWORD)v39;
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
        v44 = v11;
        if ( v11 >= 0 )
        {
          v18 = *(_QWORD *)(v7 + 1440);
          v46[0] = 0;
          v46[1] = 0;
          v47 = 0;
          v48 = 0;
          if ( v18 + v11 + tinfo_size - 1 >= (unsigned __int64)(v18 + v11) )
          {
            v40 = v18 + v11;
            v47 = qvector_reserve((__int64)&v47, 0, 1, 16);
            v33 = (_QWORD *)(16 * v48 + v47);
            *v33 = v40;
            v33[1] = tinfo_size;
            v18 = *(_QWORD *)(v7 + 1440);
            *(_QWORD *)&v48 = v48 + 1;
          }
          v19 = a1;
          v20 = v18 + v16;
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
          v22 = *(int *)(v21 + 80);
          v49 = 0;
          v50 = 0;
          memset(v51, 0, sizeof(v51));
          if ( v22 + v20 - 1 >= v20 )
          {
            v41 = v22;
            v34 = qvector_reserve((__int64)v51, 0, 1, 16);
            v22 = v41;
            *(_QWORD *)v51 = v34;
            v21 = 16LL * *(_QWORD *)&v51[8];
            v35 = (unsigned __int64 *)(16LL * *(_QWORD *)&v51[8] + v34);
            *v35 = v20;
            v35[1] = v41;
            ++*(_QWORD *)&v51[8];
          }
          sub_64640(v46, &v49, v21, v19, v22, v17);
          sub_317C60(&v47, v51);
          if ( *(_QWORD *)v51 )
          {
            *(_QWORD *)&v51[8] = 0;
            qfree(*(__int64 *)v51);
          }
          qfree(v49);
          v8 = (__int64 *)(v7 + 232);
          if ( (unsigned __int8)sub_318470(&v47, v7 + 232) )
            goto LABEL_18;
          v23 = sub_17C4E0(*(__int64 **)(v7 + 784), (__int64)v46, 0, 0xFFFFFFFF, 0, 0, 2u, 0);
          v8 = v36;
          if ( v23
            || (v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[1] + 40) + 8LL) + 8LL), v24 < sub_194CC0(v7))
            || (v25 = (_QWORD *)a2[6], v26 = (_QWORD *)v25[35], v27 = v26[18], v24 < v27)
            || (v8 = (__int64 *)v26[187], v24 >= v27 + *(_DWORD *)(v26[188] + 80LL) * *((_DWORD *)v8 + 164))
            || v24 % *(char *)((*(__int64 (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25) + 12)
            || !*(_BYTE *)(v7 + 320)
            && *(_BYTE *)(a1 + 468)
            && v38
            && v37
            && (*(_QWORD *)(v7 + 144) < (unsigned __int64)(tinfo_size + v44)
             || (v8 = v46, sub_17C4E0(*(__int64 **)(v7 + 784), (__int64)v46, 0, 0xFFFFFFFF, 0, 0, 1u, 0))) )
          {
LABEL_18:
            if ( v47 )
            {
              *(_QWORD *)&v48 = 0;
              qfree(v47);
            }
          }
          else
          {
            v49 = 0;
            LODWORD(v50) = 0;
            *(_QWORD *)&v51[16] = -1;
            v52 = -1;
            v55 = -1;
            *(__m128i *)v51 = _mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)off_4DBD90,
                                (__m128i)(unsigned __int64)off_4DBD70);
            v56 = -1;
            v54 = -1;
            v53 = off_4DBD70;
            v57 = -1;
            v58 = 0;
            v60 = 0;
            v59 = 0;
            v28 = *v14;
            LODWORD(v50) = 16;
            v49 = v28;
            *(_QWORD *)&v51[16] = *(_QWORD *)(a1 + 176);
            v52 = *(_DWORD *)(a1 + 184);
            v54 = *(_QWORD *)(a1 + 200);
            v55 = *(_DWORD *)(a1 + 208);
            *(_QWORD *)&v56 = v44;
            *((_QWORD *)&v56 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[1] + 40) + 8LL) + 8LL);
            v29 = v14[1];
            v30 = qvector_reserve((__int64)&v58, 0, 1, 8);
            v31 = v59;
            v58 = v30;
            v8 = &v49;
            *(_QWORD *)(v30 + 8 * v59) = v29;
            *(_QWORD *)&v59 = v59 + 1;
            v60 = v14[1];
            sub_19C5A0((_QWORD *)a1, (__int64)&v49, v31, v32);
            if ( v58 )
            {
              *(_QWORD *)&v59 = 0;
              qfree(v58);
            }
            if ( v47 )
            {
              *(_QWORD *)&v48 = 0;
              qfree(v47);
            }
          }
          qfree(v46[0]);
        }
      }
      v14 += 2;
    }
    while ( v12 != v14 );
  }
  return *(_QWORD *)(a1 + 128) != 0;
}
