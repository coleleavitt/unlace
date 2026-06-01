__int64 __fastcall app_t::on_dock_close_event(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v5; // rdx
  const char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  char *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+8h] [rbp-B0h]
  __int64 v22; // [rsp+20h] [rbp-98h] BYREF
  __int128 v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+38h] [rbp-80h]
  __int128 v25; // [rsp+40h] [rbp-78h]
  __m128i si128; // [rsp+50h] [rbp-68h]
  void *ptr[2]; // [rsp+60h] [rbp-58h]
  __int64 v28; // [rsp+70h] [rbp-48h]
  int v29; // [rsp+78h] [rbp-40h]
  unsigned __int64 v30; // [rsp+88h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 40);
  v30 = __readfsqword(0x28u);
  if ( !v2 )
  {
    v5 = sub_4CD6B0(a2, 1);
    if ( v5 )
    {
      v29 = 0;
      v6 = (const char *)&v20;
      v23 = 0;
      v24 = 0;
      v28 = 0;
      v25 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      *(_OWORD *)ptr = 0;
      v21 = 0;
      v7 = QT::QCoreApplication::self[2];
      v22 = 0;
      v20 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(v7 + 72))(
             QT::QCoreApplication::self + 2,
             &v20,
             v5)
        && (v6 = (const char *)a2, (unsigned __int8)sub_4C42C0(&v22, a2)) )
      {
        if ( !v28 && (si128.m128i_i32[3] | si128.m128i_i32[2]) < 0 )
          *(_BYTE *)(a1 + 32) = 0;
        v14 = sub_4B8020((__int64)&v20, 1, nullptr);
        sub_4B61D0((__m128i *)(v14 + 24), (const __m128i *)&v22);
        v15 = *(_QWORD *)(a1 + 16);
        v6 = *(const char **)(a1 + 8);
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v15 + 1) )
        {
          v19 = qvector_reserve(a1 + 8, v6, v15 + 1, 24);
          *(_QWORD *)(a1 + 8) = v19;
          v15 = *(_QWORD *)(a1 + 16);
          v6 = (const char *)v19;
        }
        v16 = (char *)&v6[24 * v15];
        *(_QWORD *)v16 = 0;
        v17 = v20;
        *(_OWORD *)(v16 + 8) = 0;
        ++*(_QWORD *)(a1 + 16);
        v8 = *(_QWORD *)v16;
        *(_QWORD *)v16 = v17;
        v18 = *((_QWORD *)v16 + 2);
        v20 = v8;
        *(_OWORD *)(v16 + 8) = v21;
        *((_QWORD *)&v21 + 1) = v18;
      }
      else
      {
        v8 = v20;
      }
      if ( v8 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v8, v6);
      }
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v9 = v24;
      if ( v24 )
      {
        v10 = v25;
        if ( (_QWORD)v25 )
        {
          v11 = 0;
          do
          {
            v12 = (__int64 *)(v9 + 40 * v11);
            jvalue_t_clear(v12 + 3);
            v13 = *v12;
            if ( *v12 )
            {
              v12[1] = 0;
              qfree(v13, v6);
            }
            ++v11;
            v9 = v24;
          }
          while ( v10 != v11 );
        }
        *(_QWORD *)&v25 = 0;
        qfree(v9, v6);
      }
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22, v6);
      }
    }
  }
  return 0;
}
