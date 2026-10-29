__int64 __fastcall sub_3E4010(__int64 a1, const char *a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  int v7; // ecx
  bool v11; // zf
  int v12; // eax
  __m128 v13; // xmm0
  __int64 v14; // r9
  __int64 *v15; // r8
  unsigned __int64 v16; // rbp
  size_t v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  const void *v27; // r11
  void *v28; // rdi
  const void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  size_t v32; // [rsp+0h] [rbp-E8h]
  __int64 v33; // [rsp+8h] [rbp-E0h]
  __int64 *v34; // [rsp+8h] [rbp-E0h]
  __int64 *v35; // [rsp+10h] [rbp-D8h]
  const void *v36; // [rsp+18h] [rbp-D0h]
  __int64 *v37; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+28h] [rbp-C0h]
  __int64 v39; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+48h] [rbp-A0h]
  _DWORD v41[3]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v42; // [rsp+6Ch] [rbp-7Ch]
  int v43; // [rsp+74h] [rbp-74h]
  int v44; // [rsp+78h] [rbp-70h]
  char v45[8]; // [rsp+80h] [rbp-68h] BYREF
  const char *v46; // [rsp+88h] [rbp-60h]
  __int128 v47; // [rsp+90h] [rbp-58h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-40h]

  v6 = 0;
  v7 = *(_DWORD *)a2;
  v48 = __readfsqword(0x28u);
  if ( v7 )
  {
    v11 = *(_DWORD *)(a1 + 368) == 3;
    v42 = 0;
    v41[0] = a3 + 266;
    v12 = 16;
    v44 = 2;
    v47 = 0;
    if ( v11 )
      v12 = 10;
    v13.m128_u64[0] = 0;
    v41[1] = v12;
    v43 = 0;
    v41[2] = 1024;
    v45[0] = 8;
    v46 = a2;
    v37 = nullptr;
    v38 = 0;
    v6 = format_cdata(&v37, v45, a1 + 72, 0, v41, a6);
    if ( (_BYTE)v6 || (unsigned int)get_qerrno(0.0) == 1645 )
    {
      v14 = a1 + 120;
      v39 = 0;
      v40 = 0;
      v15 = &v39;
      if ( (_QWORD)v38 )
        v15 = v37;
      v16 = *(_QWORD *)(a1 + 128);
      if ( v16 && (v17 = v16 - 1, v16 != 1) )
      {
        v27 = *(const void **)(a1 + 120);
        v28 = *(void **)(a1 + 144);
        if ( *(_QWORD *)(a1 + 160) < v16 )
        {
          v36 = *(const void **)(a1 + 120);
          v34 = v15;
          v31 = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 128), 1);
          *(_QWORD *)(a1 + 144) = v31;
          v27 = v36;
          v28 = (void *)v31;
          v17 = v16 - 1;
          v15 = v34;
          v14 = a1 + 120;
        }
        *(_QWORD *)(a1 + 152) = v16;
        v35 = v15;
        v33 = v14;
        v32 = v17;
        memmove(v28, v27, v17);
        v14 = v33;
        v15 = v35;
        *(_BYTE *)(*(_QWORD *)(a1 + 144) + v32) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 152) = 0;
      }
      v18 = *(_QWORD *)(a1 + 120);
      v13 = _mm_loadh_ps((const double *)(a1 + 136));
      *(_QWORD *)(a1 + 120) = *v15;
      *(_QWORD *)(a1 + 128) = v15[1];
      *(_QWORD *)(a1 + 136) = v15[2];
      *v15 = v18;
      *(__m128 *)(v15 + 1) = v13;
      sub_3E3410(v14, 1, *(double *)v13.m128_u64);
      v6 = sub_3E3E20(a1, (__int64)a2, a3);
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        *(double *)v13.m128_u64 = qfree(v39, a2);
      }
    }
    else
    {
      v29 = (const void *)qstrerror(0xFFFFFFFFLL);
      sub_3E3770((__int64 *)(a1 + 120), v29, 0, 0.0);
      a2 = nullptr;
      sub_3E2CD0((__int64 *)a1, nullptr, *(unsigned int *)(a1 + 24), v30, 0.0);
    }
    v22 = v37;
    if ( v37 )
    {
      v23 = v38;
      if ( (_QWORD)v38 )
      {
        v24 = 0;
        do
        {
          v25 = &v22[3 * v24];
          v26 = *v25;
          if ( *v25 )
          {
            v25[1] = 0;
            *(double *)v13.m128_u64 = qfree(v26, a2, *(double *)v13.m128_u64);
            v22 = v37;
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      *(_QWORD *)&v38 = 0;
      qfree(v22, a2, v22, v19, v20, v21, *(double *)v13.m128_u64, v32, v33, v35);
    }
    free_idcv(v45);
  }
  return v6;
}
