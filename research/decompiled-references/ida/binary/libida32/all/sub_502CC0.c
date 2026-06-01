bool __fastcall sub_502CC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v7; // r14
  unsigned int *v8; // r13
  __int64 v10; // rbp
  __int64 v11; // rcx
  bool result; // al
  __int64 v13; // rax
  __int64 v14; // r14
  void (__fastcall *v15)(_BYTE *, unsigned int *, char *); // rax
  void (__fastcall *v16)(unsigned int *, char *, _BYTE *); // rax
  int v17; // r12d
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  __m128i v26; // xmm1
  unsigned int *v27; // rax
  unsigned int v28; // eax
  int v29; // [rsp+Ch] [rbp-46Ch]
  unsigned int v30; // [rsp+18h] [rbp-460h]
  unsigned int v31; // [rsp+18h] [rbp-460h]
  unsigned __int8 v32; // [rsp+1Fh] [rbp-459h]
  unsigned __int64 v33; // [rsp+20h] [rbp-458h] BYREF
  int v34; // [rsp+28h] [rbp-450h]
  char v35; // [rsp+2Ch] [rbp-44Ch]
  _BYTE v36[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v37; // [rsp+438h] [rbp-40h]

  v7 = a1;
  v8 = a5;
  v10 = *(_QWORD *)(a1 + 1576);
  v37 = __readfsqword(0x28u);
  v11 = *(unsigned int *)(v10 + 68);
  if ( (_DWORD)v11 != -1 )
  {
    if ( (_BYTE)a3 != 83 || (_DWORD)a2 != (_DWORD)v11 )
      return 0;
    v16 = *(void (__fastcall **)(unsigned int *, char *, _BYTE *))(v10 + 88);
    if ( v16 )
    {
      a2 = (__int64)a5 + a6;
      a1 = (__int64)a5;
      v8 = (unsigned int *)v36;
      v16(a5, (char *)a5 + a6, v36);
      v10 = *(_QWORD *)(v7 + 1576);
    }
    v29 = 0;
    v17 = *(_DWORD *)(v7 + 828);
    if ( *(_DWORD *)(v7 + 764) == 15 )
    {
      v18 = 6;
      if ( v17 != 32 )
        v18 = 0;
      v29 = v18;
    }
    if ( *(_DWORD *)(v7 + 832) >= v17 )
    {
      while ( 1 )
      {
        if ( !*(_BYTE *)(v10 + 144) )
          goto LABEL_37;
        v19 = v17 - *(_DWORD *)(*(_QWORD *)(v10 + 8) + 68LL);
        if ( (unsigned __int64)v19 >= *(_QWORD *)(v10 + 40) )
          goto LABEL_36;
        v20 = (__int64)v19 << 6;
        *(_DWORD *)(*(_QWORD *)(v10 + 32) + v20 + 56) = v17;
        v21 = (_QWORD *)(*(_QWORD *)(v10 + 32) + v20);
        v22 = _mm_cvtsi32_si128(*v8);
        v23 = v17 + v29 - *(_DWORD *)(v7 + 828);
        LOBYTE(v11) = *((_BYTE *)v8 + v23 + 72);
        LODWORD(a3) = v8[v23 + 2];
        if ( (_BYTE)v11 == 1 )
        {
          v24 = v21[1];
          if ( v24 )
          {
            a2 = 16 * v24;
            v25 = *v21 + 17 * v24 - 17;
            if ( *(_DWORD *)(v25 + 4) == _mm_cvtsi128_si32(v22) )
            {
              v30 = a3;
              a1 = *(_QWORD *)(v7 + 1480) + 1552LL;
              v27 = sub_4EEBF0(a1);
              a3 = v30;
              v11 = 1;
              if ( !v27 )
              {
LABEL_35:
                v28 = v8[1];
                *(_BYTE *)(v25 + 16) = 1;
                *(_DWORD *)(v25 + 4) = v28;
                goto LABEL_28;
              }
              while ( 1 )
              {
                a2 = *v27;
                if ( (_DWORD)a2 == *v8 )
                  break;
                v32 = v11;
                v31 = a3;
                a1 = *(_QWORD *)(v7 + 1480) + 1552LL;
                v27 = sub_4EE960(a1, a2);
                a3 = v31;
                v11 = v32;
                if ( !v27 )
                  goto LABEL_35;
              }
              v22 = _mm_cvtsi32_si128(a2);
            }
          }
        }
        v26 = _mm_cvtsi32_si128(v8[1]);
        a2 = (__int64)&v33;
        v34 = a3;
        a1 = (__int64)v21;
        v35 = v11;
        v33 = _mm_unpacklo_epi32(v22, v26).m128i_u64[0];
        sub_4FEEA0(v21, &v33, 1, 0xFFFFFFFFLL);
LABEL_28:
        if ( ++v17 > *(_DWORD *)(v7 + 832) )
          return 1;
      }
    }
    return 1;
  }
  result = (unsigned __int8)a3 <= 0x60u || *(_DWORD *)(v10 + 64) != (_DWORD)a2;
  if ( result )
    return 0;
  v11 = *(unsigned int *)(a1 + 828);
  a3 = (unsigned int)v11 + (unsigned __int8)a3 - 97;
  if ( (int)v11 <= (int)a3 && *(_DWORD *)(a1 + 832) >= (int)a3 )
  {
    if ( !*(_BYTE *)(v10 + 144) )
    {
LABEL_37:
      if ( !under_debugger )
        interr(1336);
      BUG();
    }
    a1 = (unsigned int)(a3 - *(_DWORD *)(*(_QWORD *)(v10 + 8) + 68LL));
    if ( (unsigned __int64)(int)a1 >= *(_QWORD *)(v10 + 40) )
LABEL_36:
      sub_4FC970(a1, a2, a3, v11);
    v13 = (__int64)(int)a1 << 6;
    *(_DWORD *)(*(_QWORD *)(v10 + 32) + v13 + 56) = a3;
    v14 = *(_QWORD *)(v10 + 32) + v13;
    v15 = *(void (__fastcall **)(_BYTE *, unsigned int *, char *))(v10 + 72);
    if ( v15 )
    {
      v8 = (unsigned int *)v36;
      v15(v36, a5, (char *)a5 + a6);
    }
    sub_4FEEA0(v14, v8, a7, a4);
    return 1;
  }
  return result;
}

