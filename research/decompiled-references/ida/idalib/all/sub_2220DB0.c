__int64 __fastcall sub_2220DB0(std::_V2 *a1)
{
  unsigned int v1; // r13d
  __int64 (__fastcall ***v2)(); // rax
  _QWORD *v3; // rbx
  __int64 (__fastcall ***v4)(); // r12
  _QWORD **v5; // rbp
  _QWORD *v6; // r14
  __int64 (__fastcall ***v7)(); // rdx
  _QWORD *v8; // r15
  bool v9; // zf
  __int64 v10; // rax
  __int64 *v11; // rbp
  __int64 *v12; // rbx
  __int64 v13; // rax
  char *v14; // rsi
  char *v15; // rsi
  __int64 *v16; // rdx
  __int64 (__fastcall ***v18)(); // rdx
  __m128i *v19; // rax
  __m128i si128; // xmm0
  char v21; // al
  char *v22; // rsi
  char *v23; // rsi
  char *v24; // rsi
  __int64 v25; // rax
  char *v26; // rsi
  _QWORD **v27; // [rsp+0h] [rbp-B8h]
  _QWORD *v28; // [rsp+10h] [rbp-A8h]
  _QWORD **v29; // [rsp+20h] [rbp-98h]
  _QWORD v30[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v31; // [rsp+40h] [rbp-78h] BYREF
  __int64 v32[4]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v33; // [rsp+70h] [rbp-48h]

  v1 = 0;
  v2 = (__int64 (__fastcall ***)())std::_V2::system_category(a1);
  v3 = *(_QWORD **)a1;
  *(_QWORD *)a1 = 0;
  v4 = v2;
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v3 + 48LL))(v3, &unk_2D0AA9B) )
    {
      v5 = (_QWORD **)v3[1];
      v27 = (_QWORD **)v3[2];
      if ( v5 != v27 )
      {
        v6 = nullptr;
        v28 = v3;
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = *v5;
            *v5 = nullptr;
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v8 + 48LL))(v8, &unk_2D0AA9C) )
              break;
            v1 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 32LL))(v8);
            v4 = v7;
            (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
LABEL_6:
            if ( v27 == ++v5 )
              goto LABEL_18;
          }
          if ( !v6 )
            goto LABEL_31;
          v9 = (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v6 + 48LL))(v6, &unk_2D0AA9B) == 0;
          v10 = *v8;
          if ( v9 )
            break;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(v10 + 48))(v8, &unk_2D0AA9B) )
          {
            v32[0] = (__int64)v8;
            v22 = (char *)v6[2];
            if ( v22 == (char *)v6[3] )
            {
              sub_A054C0((__int64)(v6 + 1), v22, v32);
            }
            else
            {
              v32[0] = 0;
              v23 = v22 + 8;
              *((_QWORD *)v23 - 1) = v8;
              v6[2] = v23;
            }
LABEL_34:
            if ( v32[0] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32[0] + 8LL))(v32[0]);
            goto LABEL_6;
          }
          if ( v8[1] != v8[2] )
          {
            v29 = v5;
            v11 = (__int64 *)v8[2];
            v12 = (__int64 *)v8[1];
            do
            {
              while ( 1 )
              {
                v15 = (char *)v6[2];
                if ( v15 == (char *)v6[3] )
                  break;
                v13 = *v12;
                v14 = v15 + 8;
                *v12++ = 0;
                *((_QWORD *)v14 - 1) = v13;
                v6[2] = v14;
                if ( v11 == v12 )
                  goto LABEL_16;
              }
              v16 = v12++;
              sub_A054C0((__int64)(v6 + 1), v15, v16);
            }
            while ( v11 != v12 );
LABEL_16:
            v5 = v29;
          }
          ++v5;
          (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
          if ( v27 == v5 )
          {
LABEL_18:
            (*(void (__fastcall **)(_QWORD *))(*v28 + 8LL))(v28);
            goto LABEL_19;
          }
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD *, void *))(v10 + 48))(v8, &unk_2D0AA9B);
        v32[0] = (__int64)v6;
        if ( !v21 )
        {
          v30[0] = v8;
          v6 = (_QWORD *)operator new(0x20u);
          v6[1] = 0;
          v6[2] = 0;
          *v6 = &off_2BEADB8;
          v6[3] = 0;
          sub_A054C0((__int64)(v6 + 1), nullptr, v32);
          v24 = (char *)v6[2];
          if ( (char *)v6[3] == v24 )
          {
            sub_A054C0((__int64)(v6 + 1), v24, v30);
          }
          else
          {
            v25 = v30[0];
            v26 = v24 + 8;
            v30[0] = 0;
            *((_QWORD *)v26 - 1) = v25;
            v6[2] = v26;
          }
          if ( v30[0] )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30[0] + 8LL))(v30[0]);
          goto LABEL_34;
        }
        sub_AEA3D0(v8 + 1, (char *)v8[1], v32);
        if ( v32[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32[0] + 8LL))(v32[0]);
LABEL_31:
        v6 = v8;
        goto LABEL_6;
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, void *))(*v3 + 48LL))(v3, &unk_2D0AA9C);
      v1 = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 32LL))(v3);
      v4 = v18;
    }
    (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
    if ( (_BYTE)byte_2D0AAA0 )
    {
LABEL_20:
      if ( v4 != &off_2C8F5D0 )
        return v1;
      goto LABEL_26;
    }
  }
  else
  {
LABEL_19:
    if ( (_BYTE)byte_2D0AAA0 )
      goto LABEL_20;
  }
  if ( !__cxa_guard_acquire(&byte_2D0AAA0) )
    goto LABEL_20;
  __cxa_atexit((void (*)(void *))sub_221FE30, &off_2C8F5D0, &off_2B25620);
  __cxa_guard_release(&byte_2D0AAA0);
  if ( v4 != &off_2C8F5D0 )
    return v1;
LABEL_26:
  if ( v1 == 3 )
  {
    v30[0] = &v31;
    v19 = (__m128i *)operator new(0x7Cu);
    *v19 = _mm_load_si128((const __m128i *)&xmmword_23ABA80);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23ABA90);
    strcpy(v19[7].m128i_i8, "file a bug.");
    v19[1] = si128;
    v19[2] = _mm_load_si128((const __m128i *)&xmmword_23ABAA0);
    v19[3] = _mm_load_si128((const __m128i *)&xmmword_23ABAB0);
    v30[0] = v19;
    v19[4] = _mm_load_si128((const __m128i *)&xmmword_23ABAC0);
    v31 = 123;
    v19[5] = _mm_load_si128((const __m128i *)&xmmword_23ABAD0);
    v30[1] = 123;
    v19[6] = _mm_load_si128((const __m128i *)&xmmword_23ABAE0);
    v33 = 260;
    v32[0] = (__int64)v30;
    sub_2221AD0(v32, 1);
  }
  return v1;
}
