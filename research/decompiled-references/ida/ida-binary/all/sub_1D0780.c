unsigned __int64 __fastcall sub_1D0780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __m128i si128; // xmm0
  const __m128i *v11; // rbp
  char v12; // bp
  __int64 v13; // rdi
  const char *v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r15
  int v25; // eax
  void **v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // r15
  __int64 *v32; // r12
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 v36; // r13
  __int64 v37; // r13
  __int64 v38; // [rsp+8h] [rbp-A0h]
  __int64 v39; // [rsp+8h] [rbp-A0h]
  __int64 v40; // [rsp+8h] [rbp-A0h]
  __int128 v41; // [rsp+10h] [rbp-98h] BYREF
  __int64 v42; // [rsp+20h] [rbp-88h]
  void *v43; // [rsp+30h] [rbp-78h] BYREF
  __int64 v44; // [rsp+38h] [rbp-70h]
  __m128i v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+60h] [rbp-48h]
  unsigned __int64 v47; // [rsp+68h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  v6 = qalloc_or_throw(24);
  *(_QWORD *)v6 = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  v7 = qalloc_or_throw(24);
  *(_QWORD *)v7 = 0;
  v8 = v7;
  *(_OWORD *)(v7 + 8) = 0;
  if ( *(_DWORD *)(a1 + 64) )
    jvalue_t_clear(a1 + 64);
  v9 = qword_8CB290;
  *(_QWORD *)(a1 + 72) = v8;
  v41 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_8CB280);
  v11 = *(const __m128i **)(a1 + 16);
  *(_DWORD *)(a1 + 64) = 3;
  v46 = v9;
  v42 = 0;
  v45 = si128;
  if ( si128.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
  QT::QString::append((QT::QString *)&v45, (const QT::QString *)&unk_8CB1E0);
  sub_1CE950((QT::QString *)&v43, &v45);
  v12 = sub_1CF860(v11, (const QT::QString *)&v43, 0);
  sub_16D970(&v43);
  sub_16D970((void **)&v45);
  if ( v12 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 48LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
           &unk_8CB0C0) )
    {
      (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 48LL) + 96LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
        &unk_8CB0C0,
        &v41);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 48LL) + 40LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL));
  }
  if ( v42 )
  {
    v30 = (__int64 *)sub_519560((QT::QByteArray *)&v41);
    v31 = v30[1];
    v32 = v30;
    v33 = *v30;
    v40 = v33;
    if ( v31 )
    {
      v34 = v33;
      v35 = 0;
      while ( !*(_QWORD *)(v34 + 8) || strcmp(*(const char **)v34, "fullscreen") )
      {
        ++v35;
        v34 += 40;
        if ( v31 == v35 )
          goto LABEL_38;
      }
      v36 = v34 + 24;
    }
    else
    {
LABEL_38:
      if ( v32[2] < (unsigned __int64)(v31 + 1) )
      {
        v40 = qvector_reserve(v32, v40, v31 + 1, 40);
        v31 = v32[1];
        *v32 = v40;
      }
      v37 = v40 + 40 * v31;
      *(_QWORD *)v37 = 0;
      *(_DWORD *)(v37 + 24) = 0;
      *(_QWORD *)(v37 + 32) = 0;
      *(_OWORD *)(v37 + 8) = 0;
      ++v32[1];
      sub_1CB2E0((__int64 *)v37, "fullscreen");
      v36 = v37 + 24;
    }
    if ( *(_DWORD *)v36 )
      jvalue_t_clear(v36);
    *(_DWORD *)v36 = 5;
    *(_BYTE *)(v36 + 8) = 0;
    *(_QWORD *)(a1 + 56) = v32;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 24);
    if ( !*(_BYTE *)(v13 + 24) && *(_BYTE *)(v13 + 25) == 1 && sub_1D0460(v13, "Default") )
    {
      v15 = (_BYTE *)(&dword_0 + 1);
      LOBYTE(v46) = 0;
      v45 = 0u;
      sub_268600(&v45, 1, 0);
      v16 = (__int64 *)sub_4B7620(&v45);
      v18 = v16[1];
      v38 = v18;
      if ( v18 )
      {
        v19 = *v16;
        v20 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v19 + 8) )
          {
            v15 = "main";
            if ( !strcmp(*(const char **)v19, "main") )
              break;
          }
          ++v20;
          v19 += 40;
          if ( v38 == v20 )
            goto LABEL_45;
        }
        if ( *(_DWORD *)(v19 + 24) == 3 )
        {
          v21 = *(__int64 **)(v19 + 32);
          v22 = v21[1];
          if ( v22 )
          {
            v23 = *v21;
            v24 = 0;
            while ( 1 )
            {
              if ( *(_QWORD *)(v23 + 8) )
              {
                v39 = v22;
                v25 = strcmp(*(const char **)v23, "area_geom");
                v22 = v39;
                if ( !v25 )
                  break;
              }
              ++v24;
              v23 += 40;
              if ( v22 == v24 )
                goto LABEL_41;
            }
            v15 = nullptr;
            if ( *(_DWORD *)(v23 + 24) == 3 )
              v15 = (const char *)(v23 + 24);
          }
          else
          {
LABEL_41:
            v15 = nullptr;
          }
          v26 = &v43;
          LODWORD(v43) = 0;
          jvalue_t_copy(&v43, v15, v17, v22);
          if ( (_DWORD)v43 == 3 )
          {
            v29 = v44;
            v44 = 0;
            LODWORD(v43) = 0;
            *(_QWORD *)(a1 + 56) = v29;
            jvalue_t_clear(&v43);
            jvalue_t_clear(&v45);
            goto LABEL_11;
          }
        }
        else
        {
          if ( under_debugger )
            goto LABEL_47;
          v26 = (void **)(elf_gnu_hash_bucket + 423);
          interr(1279, "main", v17, v18, *(double *)si128.m128i_i64);
        }
        sub_1CAD80(*(double *)si128.m128i_i64, (__int64)v26, (__int64)v15, v27, v28);
      }
LABEL_45:
      if ( !under_debugger )
        interr(1289, v15, v17, v18, *(double *)si128.m128i_i64);
LABEL_47:
      BUG();
    }
  }
LABEL_11:
  sub_17F470((void **)&v41);
  return v47 - __readfsqword(0x28u);
}
