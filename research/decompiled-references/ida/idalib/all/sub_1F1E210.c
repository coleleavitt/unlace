_QWORD *__fastcall sub_1F1E210(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  _QWORD *v9; // r13
  __int64 v10; // rdx
  int v11; // eax
  __int64 (__fastcall *v12)(__int64); // rdx
  int v13; // eax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rax
  _DWORD *v17; // rsi
  _QWORD *v18; // r12
  __int64 v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v22; // rax
  size_t v23; // rax
  __int64 v24; // [rsp+0h] [rbp-2F8h]
  int v25; // [rsp+Ch] [rbp-2ECh]
  __int64 v26; // [rsp+10h] [rbp-2E8h]
  __int64 v27; // [rsp+28h] [rbp-2D0h]
  __m128i v28; // [rsp+30h] [rbp-2C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-2B8h]
  _QWORD *v30; // [rsp+58h] [rbp-2A0h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-298h] BYREF
  _QWORD *v32; // [rsp+70h] [rbp-288h] BYREF
  char v33; // [rsp+78h] [rbp-280h]
  __int64 v34; // [rsp+80h] [rbp-278h] BYREF
  char v35; // [rsp+88h] [rbp-270h]
  _QWORD *v36[3]; // [rsp+90h] [rbp-268h] BYREF
  unsigned int v37; // [rsp+A8h] [rbp-250h]
  void *ptr[2]; // [rsp+B0h] [rbp-248h] BYREF
  _BYTE v39[568]; // [rsp+C0h] [rbp-238h] BYREF

  v26 = *(_QWORD *)(a1 + 144);
  v3 = sub_1F1F8D0(a1, a2);
  v4 = v3 + 2704;
  v5 = v3;
  v6 = *(_QWORD *)(v3 + 2720);
  v7 = *(unsigned int *)(v5 + 2736);
  v31[0] = v4;
  v31[1] = 8 * v6 - v7;
  sub_1EAF7C0((__int64 *)v36, v4, v8);
  v9 = v36[0];
  if ( v36[0] )
  {
    sub_1EBF0A0(a1, v36);
    if ( v36[0] )
      (*(void (__fastcall **)(_QWORD *))(*v36[0] + 8LL))(v36[0]);
    v9 = nullptr;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *(_DWORD *)(a1 + 13208);
    *(_DWORD *)(a1 + 13208) = 1;
    v12 = *(__int64 (__fastcall **)(__int64))(v10 + 184);
    v25 = v11;
    v24 = a1 + 24;
    if ( v12 == sub_1EA8950 )
    {
      v13 = *(_DWORD *)(a1 + 9408);
      *(_DWORD *)(a1 + 9408) = v13 + 1;
      if ( !v13 )
      {
        v19 = *(_QWORD *)(a1 + 496);
        if ( v19 )
          sub_224E010(v19);
      }
    }
    else
    {
      v12(a1 + 24);
    }
    sub_1EAF8B0((__int64)&v32, v4);
    if ( (v33 & 1) != 0 )
    {
      v20 = v32;
      v32 = nullptr;
      v36[0] = v20;
      sub_1EBF0A0(a1, v36);
      if ( v36[0] )
        (*(void (__fastcall **)(_QWORD *))(*v36[0] + 8LL))(v36[0]);
    }
    else
    {
      v14 = *(_QWORD **)(a1 + 144);
      ptr[0] = v39;
      ptr[1] = (void *)0x4000000000LL;
      v36[0] = v14;
      v36[1] = (_QWORD *)a1;
      v36[2] = (_QWORD *)v5;
      v37 = 0;
      sub_2027F10(&v34, v4, (unsigned int)v32, ptr, 0);
      if ( (v35 & 1) != 0 )
      {
        if ( (v33 & 1) != 0 )
        {
          v22 = v32;
          v32 = nullptr;
          v30 = v22;
        }
        else
        {
          v30 = nullptr;
        }
        sub_1EBF0A0(a1, &v30);
        if ( v30 )
          (*(void (__fastcall **)(_QWORD *))(*v30 + 8LL))(v30);
      }
      else if ( (_DWORD)v34 == 122 )
      {
        v15 = v37++;
        v27 = *((_QWORD *)ptr[0] + v15);
        v16 = (_DWORD *)sub_1EC2080((__int64 *)(v26 + 2352), 24LL * (unsigned int)v27, 3u);
        v9 = v16;
        v17 = &v16[6 * (unsigned int)v27];
        if ( (_DWORD)v27 )
        {
          do
          {
            *v16 = 0;
            v16 += 6;
            *(v16 - 5) = 0;
            *(v16 - 4) = 0;
          }
          while ( v16 != v17 );
        }
        if ( (_DWORD)v27 )
        {
          v18 = v9;
          do
          {
            v18 += 3;
            sub_1F1E140((__int64)&v28, (__int64)v36);
            *(__m128i *)(v18 - 3) = _mm_loadu_si128(&v28);
            *(v18 - 1) = v29;
          }
          while ( &v9[3 * (unsigned int)(v27 - 1) + 3] != v18 );
        }
      }
      else
      {
        v23 = j__strlen("malformed AST file: missing C++ base specifiers");
        sub_1EAD680(a1, "malformed AST file: missing C++ base specifiers", v23);
      }
      sub_A0AE90(&v34);
      if ( ptr[0] != v39 )
        free(ptr[0]);
    }
    sub_A0AE90((__int64 *)&v32);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 192LL))(v24);
    *(_DWORD *)(a1 + 13208) = v25;
  }
  sub_1EAF840((__int64)v31);
  return v9;
}
