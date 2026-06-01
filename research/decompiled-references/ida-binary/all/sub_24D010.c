__int64 __fastcall pathmap_chooser_t__::vfunc_12(
        __int64 a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v13; // rbx
  const char *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r12
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned __int64 v19; // r9
  size_t v20; // r10
  const char *v21; // rsi
  size_t v22; // rax
  size_t v23; // r9
  __int64 v24; // rbp
  size_t v25; // r9
  const void *v27; // r11
  void *v28; // rdi
  void *v29; // rdi
  size_t v30; // rdx
  const char *v31; // r10
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-1090h]
  unsigned int v36; // [rsp+10h] [rbp-1088h]
  size_t v37; // [rsp+10h] [rbp-1088h]
  size_t v38; // [rsp+10h] [rbp-1088h]
  unsigned __int64 v39; // [rsp+18h] [rbp-1080h]
  unsigned __int64 v40; // [rsp+18h] [rbp-1080h]
  size_t v41; // [rsp+18h] [rbp-1080h]
  const char *v42; // [rsp+18h] [rbp-1080h]
  size_t v43; // [rsp+20h] [rbp-1078h]
  const void *v44; // [rsp+28h] [rbp-1070h]
  void *dest; // [rsp+30h] [rbp-1068h] BYREF
  __int128 v46; // [rsp+38h] [rbp-1060h]
  char v47[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v48; // [rsp+1058h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v10 = a2[1];
  v46 = 0;
  dest = nullptr;
  v35 = v10;
  if ( v10 )
  {
    v13 = 0;
    v36 = 0;
    do
    {
      while ( 1 )
      {
        v14 = &s1;
        v15 = **(_QWORD **)(a1 + 184) + 48LL * *(_QWORD *)(*a2 + 8 * v13);
        v16 = v15;
        if ( *(_QWORD *)(v15 + 8) )
          v14 = *(const char **)v15;
        qstrncpy(v47, v14, 4096);
        if ( (void **)(v16 + 24) != &dest )
        {
          v19 = *(_QWORD *)(v16 + 32);
          if ( v19 && (v20 = v19 - 1, v19 != 1) )
          {
            v27 = *(const void **)(v16 + 24);
            v28 = dest;
            if ( *((_QWORD *)&v46 + 1) < v19 )
            {
              v44 = *(const void **)(v16 + 24);
              v43 = v19 - 1;
              v40 = *(_QWORD *)(v16 + 32);
              dest = (void *)qvector_reserve(&dest, dest, v40, 1);
              v27 = v44;
              v28 = dest;
              v20 = v43;
              v19 = v40;
            }
            *(_QWORD *)&v46 = v19;
            v39 = v19;
            memmove(v28, v27, v20);
            *((char *)dest + v39 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v46 = 0;
          }
        }
        v21 = v47;
        if ( (unsigned __int8)sub_24CCD0((__int64 *)&dest, v47, nullptr, 0.0, a4, a5, a6, v17, v18, a9, a10) )
          break;
        if ( v35 == ++v13 )
          goto LABEL_18;
      }
      v22 = strlen(v47);
      v23 = v22;
      if ( v22 )
      {
        v29 = *(void **)v16;
        v30 = v22 + 1;
        if ( *(_QWORD *)(v16 + 16) < v22 + 1 )
        {
          v41 = v22;
          v38 = v22 + 1;
          v33 = qvector_reserve(v16, *(_QWORD *)v16, v30, 1);
          *(_QWORD *)v16 = v33;
          v23 = v41;
          v29 = (void *)v33;
          v30 = v38;
        }
        *(_QWORD *)(v16 + 8) = v30;
        v21 = v47;
        v37 = v23;
        memmove(v29, v47, v23);
        *(_BYTE *)(*(_QWORD *)v16 + v37) = 0;
      }
      else
      {
        *(_QWORD *)(v16 + 8) = 0;
      }
      if ( (void **)(v16 + 24) != &dest )
      {
        v24 = v46;
        if ( (_QWORD)v46 && (v25 = v46 - 1, (_QWORD)v46 != 1) )
        {
          v31 = (const char *)dest;
          v32 = *(void **)(v16 + 24);
          if ( *(_QWORD *)(v16 + 40) < (unsigned __int64)v46 )
          {
            v42 = (const char *)dest;
            v34 = qvector_reserve(v16 + 24, *(_QWORD *)(v16 + 24), v46, 1);
            *(_QWORD *)(v16 + 24) = v34;
            v31 = v42;
            v32 = (void *)v34;
            v25 = v24 - 1;
          }
          *(_QWORD *)(v16 + 32) = v24;
          v21 = v31;
          memmove(v32, v31, v25);
          *(_BYTE *)(*(_QWORD *)(v16 + 24) + v24 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v16 + 32) = 0;
        }
      }
      v36 = 1;
      ++v13;
    }
    while ( v35 != v13 );
LABEL_18:
    if ( dest )
    {
      *(_QWORD *)&v46 = 0;
      qfree(dest, v21);
    }
  }
  else
  {
    return 0;
  }
  return v36;
}
