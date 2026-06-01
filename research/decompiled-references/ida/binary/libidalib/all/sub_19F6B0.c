__int64 __fastcall sub_19F6B0(const char **a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v8; // ebp
  size_t v9; // rax
  size_t v10; // r12
  __int64 v12; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  size_t v16; // r8
  __m128i *v17; // rsi
  __m128i si128; // xmm0
  size_t v19; // rax
  __int64 v20; // rax
  TGroup *v21; // r13
  unsigned __int64 v22; // rdx
  const char *v23; // r14
  unsigned __int64 v24; // r15
  __int64 v25; // r12
  size_t v26; // rax
  size_t v27; // r14
  const char *v28; // r8
  void (__fastcall *v29)(char *); // rax
  __int64 v30; // rbx
  __int64 v31; // rsi
  void *v32; // rdi
  size_t v33; // rdx
  void *v34; // rdi
  const char *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  size_t v39; // [rsp+0h] [rbp-D8h]
  size_t v40; // [rsp+0h] [rbp-D8h]
  const char *v41; // [rsp+0h] [rbp-D8h]
  size_t v42; // [rsp+0h] [rbp-D8h]
  size_t v43; // [rsp+8h] [rbp-D0h]
  __int64 *v44; // [rsp+18h] [rbp-C0h]
  __int64 v45; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+28h] [rbp-B0h]
  __int64 v47; // [rsp+38h] [rbp-A0h]
  __int128 v48; // [rsp+40h] [rbp-98h]
  void *dest; // [rsp+50h] [rbp-88h]
  __int128 v50; // [rsp+58h] [rbp-80h]
  __int64 v51; // [rsp+68h] [rbp-70h]
  __int64 v52; // [rsp+70h] [rbp-68h]
  __int128 v53; // [rsp+78h] [rbp-60h]
  int v54; // [rsp+88h] [rbp-50h]
  __int16 v55; // [rsp+8Ch] [rbp-4Ch]
  char v56; // [rsp+8Eh] [rbp-4Ah]
  unsigned __int64 v57; // [rsp+98h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v8 = batch;
  if ( batch )
  {
    if ( a3 )
    {
      v9 = strlen(a3);
      v10 = v9;
      if ( v9 )
      {
        v34 = (void *)*a1;
        v35 = (const char *)(v9 + 1);
        if ( (unsigned __int64)a1[2] < v9 + 1 )
        {
          v36 = qvector_reserve();
          *a1 = (const char *)v36;
          v34 = (void *)v36;
        }
        a1[1] = v35;
        memmove(v34, a3, v10);
        (*a1)[v10] = 0;
      }
      else
      {
        a1[1] = nullptr;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v12 = a2;
    v55 = 256;
    if ( !a2 )
      v12 = 32000;
    v45 = 0;
    v47 = 0;
    dest = nullptr;
    v51 = 0;
    v52 = 0;
    v54 = -1;
    v56 = 0;
    v46 = 0;
    v48 = 0;
    v50 = 0;
    v53 = 0;
    sub_1A3550(&v45, a4, a5);
    v17 = (__m128i *)v45;
    v51 = v12;
    if ( *((_QWORD *)&v46 + 1) <= 0x11u )
    {
      v45 = qvector_reserve();
      v17 = (__m128i *)v45;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D3DF0);
    v17[1].m128i_i8[0] = 116;
    *(_QWORD *)&v46 = 18;
    *v17 = si128;
    *(_BYTE *)(v45 + 17) = 0;
    v56 = 1;
    if ( a3 && (v19 = strlen(a3), (v16 = v19) != 0) )
    {
      v32 = dest;
      v33 = v19 + 1;
      if ( *((_QWORD *)&v50 + 1) < v19 + 1 )
      {
        v43 = v19;
        v40 = v19 + 1;
        dest = (void *)qvector_reserve();
        v16 = v43;
        v32 = dest;
        v33 = v40;
      }
      *(_QWORD *)&v50 = v33;
      v17 = (__m128i *)a3;
      v39 = v16;
      memmove(v32, a3, v16);
      v16 = v39;
      *((_BYTE *)dest + v39) = 0;
    }
    else
    {
      *(_QWORD *)&v50 = 0;
    }
    v54 = a6;
    v20 = (*(__int64 (__fastcall **)(__int64, __m128i *, __int64, __int64, size_t))(*(_QWORD *)(TProgram::application
                                                                                              + 136LL)
                                                                                  + 88LL))(
            TProgram::application + 136LL,
            v17,
            v14,
            v15,
            v16);
    v44 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 64LL))(v20, 0);
    v21 = (TGroup *)operator new(0xB8u);
    sub_1A3180(v21);
    if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v21) )
    {
      v8 = TGroup::execView(TProgram::deskTop, v21);
      if ( (_WORD)v8 != 11 )
      {
        v22 = (unsigned __int64)a1[1];
        v23 = (const char *)(v12 + 1);
        if ( v22 < v12 + 1 )
        {
          v31 = (__int64)*a1;
          if ( a1[2] < v23 )
          {
            v37 = qvector_reserve();
            *a1 = (const char *)v37;
            v22 = (unsigned __int64)a1[1];
            v31 = v37;
          }
          memset((void *)(v31 + v22), 0, (size_t)&v23[-v22]);
          a1[1] = v23;
        }
        else if ( v23 != (const char *)v22 )
        {
          a1[1] = v23;
        }
        (*a1)[v12] = 0;
        (*(void (__fastcall **)(TGroup *, const char *, const char *))(*(_QWORD *)v21 + 96LL))(v21, *a1, a1[1]);
        v24 = (unsigned __int64)a1[1];
        v25 = (__int64)*a1;
        if ( v24 && (v26 = strlen(*a1), (v27 = v26) != 0) )
        {
          v28 = (const char *)(v26 + 1);
          if ( v24 < v26 + 1 )
          {
            if ( a1[2] < v28 )
            {
              v42 = v26 + 1;
              v38 = qvector_reserve();
              v24 = (unsigned __int64)a1[1];
              v28 = (const char *)v42;
              *a1 = (const char *)v38;
              v25 = v38;
            }
            v41 = v28;
            memset((void *)(v25 + v24), 0, (size_t)&v28[-v24]);
            v25 = (__int64)*a1;
            a1[1] = v41;
          }
          else if ( v24 != v26 + 1 )
          {
            a1[1] = v28;
          }
          *(_BYTE *)(v25 + v27) = 0;
        }
        else if ( v25 )
        {
          a1[1] = nullptr;
          qfree();
          *a1 = nullptr;
          a1[2] = nullptr;
        }
      }
      if ( v21 )
      {
        (*(void (__fastcall **)(TGroup *))(*(_QWORD *)v21 + 16LL))(v21);
        (*(void (__fastcall **)(TGroup *))(*(_QWORD *)v21 + 8LL))(v21);
      }
      LOBYTE(v8) = (_WORD)v8 != 11;
    }
    if ( v44 )
    {
      v29 = *(void (__fastcall **)(char *))(*v44 + 8);
      if ( v29 == sub_19F630 )
      {
        v30 = v44[5];
        *(__m128i *)v44 = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)&off_2365F0),
                            (__m128i)(unsigned __int64)&off_22F558);
        if ( (__int64 *)v30 != v44 + 3 )
        {
          do
          {
            (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v30 + 32) + 32LL))(*(_QWORD *)(v30 + 32), v44 + 1);
            v30 = std::_Rb_tree_increment();
          }
          while ( v44 + 3 != (__int64 *)v30 );
        }
        sub_19F3F0((_QWORD *)v44[4]);
        operator delete(v44, 0x58u);
      }
      else
      {
        v29((char *)v44);
      }
    }
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree();
    }
    if ( dest )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree();
    }
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree();
    }
  }
  return v8;
}

