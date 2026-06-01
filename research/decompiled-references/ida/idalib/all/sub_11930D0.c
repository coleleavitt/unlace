void __fastcall sub_11930D0(__int64 a1, __int64 a2, _BYTE *a3, char *a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // ebp
  _QWORD *v7; // r12
  const char **v8; // rax
  const char *v9; // r13
  _QWORD *v10; // r13
  char *v11; // rdx
  size_t v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // [rsp+20h] [rbp-178h]
  __m128i v22[2]; // [rsp+30h] [rbp-168h] BYREF
  __int16 v23; // [rsp+50h] [rbp-148h]
  __m128i v24[2]; // [rsp+60h] [rbp-138h] BYREF
  __int16 v25; // [rsp+80h] [rbp-118h]
  __m128i v26[2]; // [rsp+90h] [rbp-108h] BYREF
  __int16 v27; // [rsp+B0h] [rbp-E8h]
  _BYTE ptr[24]; // [rsp+C0h] [rbp-D8h] BYREF
  _QWORD v29[24]; // [rsp+D8h] [rbp-C0h] BYREF

  sub_10DC500((__int64)ptr, a1, 0xDA3u);
  v4 = *(_QWORD **)&ptr[8];
  v5 = *(_QWORD *)ptr;
  v6 = *(_DWORD *)&ptr[16];
  v7 = (_QWORD *)v29[0];
  v20 = *(_QWORD *)&ptr[8] - 16LL;
LABEL_2:
  if ( v7 == (_QWORD *)v5 )
  {
LABEL_13:
    if ( !sub_10DCD30(a1, 0xC00u) )
    {
      v11 = nullptr;
      if ( a4 )
        v11 = &a4[j__strlen(a4)];
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      *(_QWORD *)ptr = v29;
      sub_A1FE50(ptr, a4, v11);
      v12 = j__strlen("-");
      v13 = *(_QWORD *)&ptr[8];
      v14 = *(_QWORD *)ptr;
      if ( *(_QWORD *)&ptr[8] != v12 || *(_QWORD *)&ptr[8] && memcmp(*(const void **)ptr, "-", *(size_t *)&ptr[8]) )
      {
        v24[0].m128i_i64[0] = v14;
        v25 = 261;
        v24[0].m128i_i64[1] = v13;
        if ( (unsigned __int8)sub_228B020(v24, 0) )
        {
          v14 = *(_QWORD *)ptr;
          v13 = *(_QWORD *)&ptr[8];
        }
        else
        {
          if ( !a3 )
            goto LABEL_31;
          v27 = 257;
          if ( *a3 )
          {
            v26[0].m128i_i64[0] = (__int64)a3;
            LOBYTE(v27) = 3;
          }
          if ( (unsigned __int8)sub_228B020(v26, 0) )
LABEL_31:
            sub_228EC80(ptr);
          v14 = *(_QWORD *)ptr;
          v13 = *(_QWORD *)&ptr[8];
        }
      }
      v26[0].m128i_i64[1] = v13;
      v27 = 261;
      v26[0].m128i_i64[0] = v14;
      v15 = sub_228B020(v26, 0);
      sub_228F0B0(ptr, 1, v15 == 0 ? 3 : 0);
      v25 = 261;
      v24[0] = *(__m128i *)ptr;
      v23 = 259;
      v22[0].m128i_i64[0] = (__int64)"-object-file-name=";
      sub_A41580(v26, v22, v24, 259, v16, v17);
      v18 = sub_10DA6C0(a1, (__int64)v26);
      sub_10DC5D0(a2, v18);
      if ( *(_QWORD **)ptr != v29 )
        free(*(void **)ptr);
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = *(const char ***)(*(_QWORD *)v5 + 48LL);
      v9 = *v8;
      if ( *v8 )
      {
        if ( strlen(*v8) > 0x10
          && !(*(_QWORD *)v9 ^ 0x2D7463656A626F2DLL | *((_QWORD *)v9 + 1) ^ 0x6D616E2D656C6966LL)
          && v9[16] == 101 )
        {
          break;
        }
      }
      v10 = (_QWORD *)(v5 + 8);
      if ( (_QWORD *)(v5 + 8) != v4 )
      {
        if ( v6 )
        {
          while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, v6) )
          {
            if ( v4 == ++v10 )
              goto LABEL_12;
          }
          v5 = (__int64)v10;
        }
        else
        {
          v5 = (__int64)&v10[((unsigned __int64)(v20 - v5) >> 3) + 1];
        }
        goto LABEL_2;
      }
LABEL_12:
      v5 = (__int64)v4;
      if ( v7 == v4 )
        goto LABEL_13;
    }
  }
}
