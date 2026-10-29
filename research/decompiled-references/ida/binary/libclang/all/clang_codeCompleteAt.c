// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall clang_codeCompleteAt(
        __m128i *a1,
        const char *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7)
{
  bool v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i si128; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  _BYTE *v22; // rax
  unsigned __int64 v23; // rsi
  char *v24; // r9
  size_t v25; // rax
  char *v26; // rdi
  char *v27; // rdx
  _BYTE *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // rbx
  __int64 v34; // rax
  _BYTE *v37; // [rsp+8h] [rbp-B0h]
  __int64 v38; // [rsp+8h] [rbp-B0h]
  char *dest; // [rsp+10h] [rbp-A8h]
  char *desta; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+18h] [rbp-A0h]
  __int64 v42; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v43[32]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v44[3]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-50h]
  unsigned int v46; // [rsp+6Ch] [rbp-4Ch]
  __int64 v47; // [rsp+70h] [rbp-48h]
  int v48; // [rsp+78h] [rbp-40h]
  int v49; // [rsp+7Ch] [rbp-3Ch]

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v11 = 0;
  if ( qword_4AD21C8 && (v37 = (_BYTE *)qword_4AD21C8, strlen((const char *)qword_4AD21C8) == 1) )
  {
    v11 = *v37 == 50;
    if ( (_BYTE)qword_4AD21C0 )
      goto LABEL_5;
  }
  else if ( (_BYTE)qword_4AD21C0 )
  {
    goto LABEL_5;
  }
  if ( __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
LABEL_5:
  if ( qword_4AD21C8 )
  {
    v44[0] = 20;
    v12 = operator new(0xC0u);
    *(_DWORD *)v12 = 0;
    *(_QWORD *)(v12 + 8) = v12 + 24;
    v13 = std::string::_M_create();
    v14 = v44[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E430);
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(v12 + 24) = v14;
    *(__m128i *)v13 = si128;
    v16 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    *(_DWORD *)(v13 + 16) = 1950442868;
    v17 = v44[0];
    v18 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 16) = v44[0];
    *(_BYTE *)(v18 + v17) = 0;
    *(_QWORD *)(v12 + 48) = v12 + 72;
    *(_BYTE *)(v12 + 40) = v11;
    *(__m128i *)(v12 + 56) = v16;
    *(_QWORD *)(v12 + 136) = &off_49DA340;
    *(_QWORD *)(v12 + 184) = v12 + 48;
    *(_DWORD *)(v12 + 144) = 2;
    *(_BYTE *)(v12 + 176) = 0;
    *(_DWORD *)(v12 + 180) = 1;
    *(_QWORD *)(v12 + 168) = 0;
    *(_OWORD *)(v12 + 152) = 0;
    sub_2623850(v12 + 136, 0, 0, 0, v19, v20);
    ++*(_DWORD *)v12;
    v21 = sub_60BBA0(v12, (__int64)a1);
    v38 = v21 + 136;
    v22 = *(_BYTE **)(v21 + 168);
    if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 160) )
    {
      sub_26239D0(v38, 32);
    }
    else
    {
      *(_QWORD *)(v21 + 168) = v22 + 1;
      *v22 = 32;
    }
    v23 = *(_QWORD *)(v21 + 160);
    v24 = *(char **)(v21 + 168);
    if ( a2 )
    {
      v41 = *(_QWORD *)(v21 + 160);
      dest = *(char **)(v21 + 168);
      v25 = strlen(a2);
      v23 = v41;
      v24 = dest;
      if ( v41 - (unsigned __int64)dest < v25 )
      {
        sub_26240F0(v38, a2, v25);
        v24 = *(char **)(v21 + 168);
        v23 = *(_QWORD *)(v21 + 160);
      }
      else if ( v25 )
      {
        v26 = dest;
        desta = (char *)v25;
        memcpy(v26, a2, v25);
        v27 = &desta[*(_QWORD *)(v21 + 168)];
        *(_QWORD *)(v21 + 168) = v27;
        v23 = *(_QWORD *)(v21 + 160);
        v24 = v27;
      }
    }
    if ( (unsigned __int64)v24 >= v23 )
    {
      sub_26239D0(v38, 58);
    }
    else
    {
      *(_QWORD *)(v21 + 168) = v24 + 1;
      *v24 = 58;
    }
    sub_26238A0(v38, a3);
    v28 = *(_BYTE **)(v21 + 168);
    if ( (unsigned __int64)v28 >= *(_QWORD *)(v21 + 160) )
    {
      sub_26239D0(v38, 58);
    }
    else
    {
      *(_QWORD *)(v21 + 168) = v28 + 1;
      *v28 = 58;
    }
    sub_26238A0(v38, a4);
    if ( (*(_DWORD *)v12)-- == 1 )
    {
      sub_60C330((pthread_mutex_t *)v12, (__int64 (*)())a4, v29, v30);
      operator delete((void *)v12, 0xC0u);
    }
  }
  if ( a6 && !a5 )
    return 0;
  v48 = a6;
  v44[0] = &v42;
  v44[1] = a1;
  v45 = a3;
  v44[2] = a2;
  v46 = a4;
  v47 = a5;
  v49 = a7;
  sub_25A16F0(v43);
  if ( (unsigned __int8)sub_60B400((__int64)v43, (__int64)sub_62FA80, (__int64)v44, 0) )
  {
    if ( getenv("LIBCLANG_RESOURCE_USAGE") )
      sub_623D20(a1);
    v32 = v42;
  }
  else
  {
    fwrite("libclang: crash detected in code completion\n", 1u, 0x2Cu, stderr);
    if ( !a1 )
    {
      LOBYTE(elf_gnu_hash_bucket[211]) &= ~1u;
      BUG();
    }
    v34 = a1->m128i_i64[1];
    v32 = 0;
    *(_BYTE *)(v34 + 2036) |= 1u;
  }
  sub_25A1710(v43);
  return v32;
}

