__int64 __fastcall sub_1731F0(int a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v7; // rdi
  _OWORD *v8; // rax
  __m128i v9; // xmm3
  __int64 v10; // rdi
  __int64 inited; // rbp
  __int64 current_config; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned int v16; // ebx
  __int64 v18; // rbx
  int v19; // eax
  __m128i *v20; // r15
  __m128i *v21; // rbx
  bool v22; // zf
  __int64 v23; // r12
  __int64 v24; // r13
  __m128i v25; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+10h] [rbp-98h] BYREF
  __int128 v27; // [rsp+18h] [rbp-90h]
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  __int128 v29; // [rsp+38h] [rbp-70h]
  _QWORD *v30; // [rsp+50h] [rbp-58h]
  _QWORD v31[9]; // [rsp+5Fh] [rbp-49h] BYREF

  *(_QWORD *)((char *)&v31[1] + 1) = __readfsqword(0x28u);
  if ( !(_BYTE)byte_255558 && __cxa_guard_acquire(&byte_255558) )
  {
    v21 = (__m128i *)operator new(0x58u);
    memset(v21, 0, 0x58u);
    v21[1].m128i_i16[0] = 256;
    v22 = qword_256580 == 0;
    *v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&unk_23C3B0, (__m128i)(unsigned __int64)&off_235A60);
    if ( !v22 )
      goto LABEL_43;
    qword_256580 = (__int64)v21;
    v21[5].m128i_i32[1] = -1;
    qword_255560 = (__int64)v21;
    v21->m128i_i64[0] = (__int64)&off_238A80;
    __cxa_atexit((void (*)(void *))sub_172DD0, &qword_255560, &off_22F2A0);
    __cxa_guard_release(&byte_255558);
  }
  if ( dword_251398 != -1 )
  {
    v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&unk_23C3B0, (__m128i)(unsigned __int64)&off_235A60);
    term_kernel();
    v7 = qword_255560;
    qword_255560 = 0;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = (_OWORD *)operator new(0x58u);
    v9 = _mm_load_si128(&v25);
    memset(v8, 0, 0x58u);
    *((_WORD *)v8 + 8) = 256;
    *v8 = v9;
    if ( !qword_256580 )
    {
      qword_256580 = (__int64)v8;
      v10 = qword_255560;
      *((_DWORD *)v8 + 21) = -1;
      qword_255560 = (__int64)v8;
      *(_QWORD *)v8 = &off_238A80;
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 256);
      goto LABEL_8;
    }
    if ( under_debugger )
LABEL_45:
      BUG();
    interr();
LABEL_43:
    if ( !under_debugger )
      interr();
    goto LABEL_45;
  }
  v26 = 0;
  v27 = 0;
  if ( !(unsigned __int8)qgetenv() )
  {
    v28 = 0;
    v29 = 0;
    if ( (unsigned __int8)sub_173EE0(&v28, &v26) )
      qsetenv();
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
  }
  batch = 1;
  if ( !(_BYTE)byte_255548 && __cxa_guard_acquire(&byte_255548) )
  {
    v20 = (__m128i *)operator new(0x180u);
    sub_143650(v20);
    qword_255550 = (TProgram *)v20;
    __cxa_atexit((void (*)(void *))sub_172DF0, &qword_255550, &off_22F2A0);
    __cxa_guard_release(&byte_255548);
  }
  TProgram::create_app_frame(qword_255550);
  hook_event_listener();
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
LABEL_8:
  if ( a1 <= 1 )
  {
    strcpy((char *)v31, "idalib64");
    v30 = v31;
    LODWORD(v28) = 1;
    inited = init_kernel();
  }
  else
  {
    LODWORD(v28) = a1;
    inited = init_kernel();
    sub_157160(v28, inited, nullptr, nullptr, nullptr);
  }
  current_config = get_current_config();
  v13 = *(_QWORD *)(current_config + 672);
  v14 = *(_QWORD *)(current_config + 680);
  sub_174550(v13, v14);
  sub_10DC80(v13, v14);
  sub_98240();
  sub_97D70();
  init_plugins();
  sub_151E10(128);
  v15 = (int)v28;
  if ( (int)v28 <= 1 || (sub_157310((int *)&v28, inited, (void (*)(void))sub_173FF0), v15 = (int)v28, (int)v28 <= 1) )
  {
LABEL_11:
    if ( !*a4 )
    {
      if ( inited )
      {
        v18 = inited;
        if ( (int)v15 > 0 )
        {
          do
          {
            v18 += 8;
            qfree();
          }
          while ( v18 != inited + 8 * v15 );
        }
        qfree();
      }
      goto LABEL_13;
    }
LABEL_12:
    *a3 = v15;
    *a4 = inited;
LABEL_13:
    dword_251398 = 0;
    return 0;
  }
  if ( *a4 )
    goto LABEL_12;
  v19 = sub_173070(v28, inited, 1);
  v16 = v19;
  if ( !v19 )
  {
    close_database(1);
    v15 = (int)v28;
    goto LABEL_11;
  }
  sub_92200((__int64)"Open database failed with result: %d\n", v19);
  if ( inited )
  {
    v23 = inited;
    v24 = inited + 8LL * (int)v28;
    if ( (int)v28 > 0 )
    {
      do
      {
        v23 += 8;
        qfree();
      }
      while ( v24 != v23 );
    }
    qfree();
  }
  return v16;
}

