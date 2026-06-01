__int64 __fastcall sub_176A10(__int64 *a1, __int64 a2, int a3)
{
  void *v4; // rax
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  unsigned __int32 v10; // eax
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  size_t v13; // r15
  __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  void *v17; // rdx
  __int64 v18; // rax
  void *v19; // rcx
  __m128 v20; // xmm0
  __int64 v21; // rax
  void *v22; // rdi
  __int64 v23; // rdx
  __m128i v24; // xmm0
  unsigned __int32 v25; // ebp
  __m128i v26; // xmm1
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdi
  unsigned __int64 v31; // r12
  size_t v32; // r8
  __int64 v33; // r15
  __int64 v34; // r9
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+0h] [rbp-C8h]
  __int64 v42; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v43; // [rsp+8h] [rbp-C0h]
  __int64 v44; // [rsp+8h] [rbp-C0h]
  __int64 v45; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+18h] [rbp-B0h]
  _QWORD v47[3]; // [rsp+30h] [rbp-98h] BYREF
  void *src; // [rsp+48h] [rbp-80h] BYREF
  __m128i v49; // [rsp+50h] [rbp-78h] BYREF
  __int64 v50; // [rsp+60h] [rbp-68h]
  __m128i v51; // [rsp+68h] [rbp-60h] BYREF
  __int64 v52; // [rsp+78h] [rbp-50h]
  int v53; // [rsp+80h] [rbp-48h]
  char v54; // [rsp+84h] [rbp-44h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v4 = *(void **)a2;
  v55 = __readfsqword(0x28u);
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v47[0] = &off_235AB0;
  src = v4;
  v7 = *(_QWORD *)(a2 + 24);
  v49 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v50 = v7;
  v47[1] = 0;
  v47[2] = 0;
  v53 = a3;
  v54 = 0;
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_OWORD *)(a2 + 8) = 0;
  v51 = v6;
  *(_OWORD *)(a2 + 32) = 0;
  v8 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0;
  v9 = a1[9] == 0;
  v52 = v8;
  if ( !v9 )
    goto LABEL_2;
  v36 = qmutex_create();
  a1[9] = v36;
  if ( !v36 )
  {
    if ( under_debugger )
      goto LABEL_52;
    interr();
LABEL_50:
    if ( !under_debugger )
      interr();
LABEL_52:
    BUG();
  }
  v37 = *a1;
  v45 = 0;
  v46 = 0;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(v37 + 48))(a1, &v45, (__int64)a1 + 81);
  if ( (unsigned __int64)v46 <= 1 )
    goto LABEL_40;
  if ( a1[3] )
    goto LABEL_50;
  v38 = fopenA();
  a1[3] = v38;
  if ( v38 )
    *((_BYTE *)a1 + 40) = 1;
  else
    *((_BYTE *)a1 + 81) = 0;
LABEL_40:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
LABEL_2:
  if ( a1[3] && (v10 = sub_1765B0((__int64)(a1 + 1), (__int64)&src, a3), *((_BYTE *)a1 + 81)) )
  {
    v29 = v50;
    v25 = v10;
  }
  else
  {
    qmutex_lock();
    if ( *((_BYTE *)a1 + 80) )
    {
      v31 = v49.m128i_i64[0];
      if ( !v49.m128i_i64[0] || (v32 = v49.m128i_i64[0] - 1, v49.m128i_i64[0] == 1) )
      {
        v25 = 0;
      }
      else
      {
        v33 = a1[7];
        v34 = v49.m128i_i64[0] - 1;
        if ( v33 )
        {
          --v33;
          v34 = v32 + v33;
          v31 = v49.m128i_i64[0] + v33;
        }
        v35 = a1[6];
        if ( a1[8] < v31 )
        {
          v42 = v34;
          v44 = v49.m128i_i64[0] - 1;
          v40 = qvector_reserve();
          v32 = v44;
          v34 = v42;
          a1[6] = v40;
          v35 = v40;
        }
        a1[7] = v31;
        v25 = v32;
        *(_BYTE *)(v35 + v34) = 0;
        memcpy((void *)(v33 + a1[6]), src, v32);
      }
      qmutex_unlock();
      v29 = v50;
    }
    else
    {
      v11 = a1[7];
      if ( v11 > 1 )
      {
        if ( v49.m128i_i64[0] )
        {
          v12 = v49.m128i_i64[0] - 1;
          v13 = v49.m128i_i64[0] - 1;
          if ( v49.m128i_i64[0] != 1 )
          {
            v14 = a1[6];
            v15 = v12 + v11 - 1;
            v16 = v12 + v11;
            if ( a1[8] < v12 + v11 )
            {
              v43 = v12 + v11 - 1;
              v41 = v12 + v11;
              v39 = qvector_reserve();
              v15 = v43;
              v16 = v41;
              a1[6] = v39;
              v14 = v39;
            }
            a1[7] = v16;
            *(_BYTE *)(v14 + v15) = 0;
            memcpy((void *)(v11 - 1 + a1[6]), src, v13);
          }
        }
        v17 = src;
        v18 = v49.m128i_i64[1];
        a1[7] = 0;
        v19 = (void *)a1[6];
        v20 = _mm_loadh_ps((const double *)a1 + 8);
        a1[6] = (__int64)v17;
        src = v19;
        a1[8] = v18;
        v49 = (__m128i)v20;
      }
      *((_BYTE *)a1 + 80) = 1;
      qmutex_unlock();
      if ( TProgram::application )
      {
        if ( (unsigned __int8)is_main_thread() )
        {
          if ( TProgram::application )
            v25 = sub_175D30(TProgram::application + 136LL, (__int64)v47, 0, 0);
          else
            v25 = -1;
        }
        else
        {
          v21 = operator new(0x58u);
          v22 = src;
          v23 = v50;
          *(_QWORD *)v21 = &off_235AB0;
          v24 = _mm_load_si128(&v49);
          *(_QWORD *)(v21 + 8) = 0;
          v25 = 0;
          *(_QWORD *)(v21 + 24) = v22;
          v26 = _mm_loadu_si128(&v51);
          *(_QWORD *)(v21 + 16) = 0;
          v27 = TProgram::application;
          *(_DWORD *)(v21 + 80) = a3;
          *(_BYTE *)(v21 + 84) = 1;
          *(_QWORD *)(v21 + 48) = v23;
          v28 = v52;
          *(__m128i *)(v21 + 32) = v24;
          *(_QWORD *)(v21 + 72) = v28;
          src = nullptr;
          if ( v24.m128i_i64[0] )
            v25 = v24.m128i_i32[0] - 1;
          v50 = 0;
          v52 = 0;
          v49 = 0;
          *(__m128i *)(v21 + 56) = v26;
          v51 = 0;
          if ( !v27 )
          {
            *((_BYTE *)a1 + 80) = 0;
            goto LABEL_25;
          }
          sub_175D30(v27 + 136, v21, 4, 0);
        }
        v29 = v50;
      }
      else
      {
        __printf_chk();
        v29 = v50;
        v25 = 0;
      }
      *((_BYTE *)a1 + 80) = 0;
    }
  }
  v47[0] = &off_235AB0;
  if ( v29 )
  {
    v51.m128i_i64[0] = 0;
    qfree();
  }
  if ( src )
  {
    v49.m128i_i64[0] = 0;
    qfree();
  }
LABEL_25:
  v47[0] = &off_236C80;
  qsem_free();
  return v25;
}

