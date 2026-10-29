__int64 __fastcall sub_6D1FA0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  void *v11; // rdi
  int v12; // eax
  void *v13; // rbx
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbp
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // edx
  _DWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // r12d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rbx
  void *v29; // rbx
  char **exception; // rbp
  _QWORD *v32; // [rsp+0h] [rbp-F8h]
  _DWORD *v33; // [rsp+8h] [rbp-F0h]
  void *v35; // [rsp+18h] [rbp-E0h]
  _QWORD v36[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v38[4]; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v39; // [rsp+70h] [rbp-88h] BYREF
  int v40; // [rsp+80h] [rbp-78h]
  __int64 v41; // [rsp+88h] [rbp-70h]
  _QWORD v42[2]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v43[3]; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD *v44; // [rsp+B8h] [rbp-40h]

  v39.m128i_i64[0] = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v32 = (_QWORD *)(a1 + 800);
  sub_6C01B0((_QWORD *)(a1 + 800), &v39);
  v39.m128i_i64[0] = a3;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_6C01B0(v32, &v39);
  v39.m128i_i64[0] = a5;
  if ( a5 )
    ++*(_DWORD *)(a5 + 8);
  sub_6C01B0(v32, &v39);
  if ( a7 )
  {
    ++*(_DWORD *)(a7 + 8);
    v39.m128i_i64[0] = a7;
    sub_6C01B0(v32, &v39);
  }
  v36[0] = 0;
  v33 = (_DWORD *)(a1 + 832);
  v36[1] = 0;
  v37[0] = 1;
  v11 = qword_1C7F2C0;
  v37[1] = 0;
  if ( (*(_BYTE *)(a6 + 4) & 1) != 0 )
  {
    v35 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v36, a6);
    v11 = v35;
    if ( (*(_BYTE *)(a6 + 20) & 1) == 0 )
      goto LABEL_11;
  }
  else
  {
    LODWORD(v36[0]) = *(_DWORD *)a6;
    if ( (*(_BYTE *)(a6 + 20) & 1) == 0 )
    {
LABEL_11:
      v12 = *(_DWORD *)(a6 + 16);
      BYTE4(v37[0]) &= ~1u;
      LODWORD(v37[0]) = v12;
      goto LABEL_12;
    }
  }
  sub_182C690(v11, v37, a6 + 16);
LABEL_12:
  v39.m128i_i64[0] = a3;
  v39.m128i_i64[1] = a2;
  v40 = a4;
  v41 = a5;
  v42[0] = 0;
  v13 = qword_1C7F2C0;
  v42[1] = 0;
  v43[0] = 1;
  v43[1] = 0;
  if ( (v36[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v42, v36);
  else
    LODWORD(v42[0]) = v36[0];
  if ( (v37[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v13, v43, v37);
  }
  else
  {
    BYTE4(v43[0]) &= ~1u;
    LODWORD(v43[0]) = v37[0];
  }
  v14 = *(__int64 **)(a1 + 88);
  v43[2] = a7;
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    v44 = nullptr;
    if ( (_DWORD)v15 )
    {
      v16 = &v14[v15];
      v17 = (_QWORD *)sub_186B270(0x18u);
      *v17 = 2;
      v18 = v17 + 1;
      v19 = 1;
      v44 = v18;
      v20 = v18;
      while ( 1 )
      {
        v21 = *v14++;
        *v18 = v21;
        *(v20 - 1) = v19;
        if ( v14 == v16 )
          break;
        if ( *(v20 - 2) == v19 )
        {
          v23 = (3 * v19 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v19 + 8 >= (unsigned int)v24 || v19 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v38, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v38);
            sub_233E40((__int64)v38);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = (unsigned int *)sub_186B300(v20 - 2, v24);
          v20 = v25 + 2;
          *v25 = v23;
          v26 = v25[1];
          v44 = v20;
          v27 = v26;
          v18 = &v20[2 * v26];
          v19 = v27 + 1;
        }
        else
        {
          v22 = v19++;
          v18 = &v20[2 * v22];
        }
      }
    }
  }
  else
  {
    v44 = nullptr;
  }
  sub_6D1920(v33, &v39);
  if ( v44 )
    sub_186B220(v44 - 1);
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v42);
  sub_182CBA0(v28, v43);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v36);
  return sub_182CBA0(v29, v37);
}

