__int64 __fastcall irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_9(__int64 *a1, const char *a2)
{
  __int64 v3; // rax
  __m128 (__fastcall *v4)(__int64, const char *); // rax
  int v5; // ebp
  void *v6; // rdi
  int v7; // eax
  char **v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // ecx
  char i; // al
  char v13; // dl
  __int64 v15; // rsi
  char v16; // r12
  void *v17; // rbx
  const char *v18; // rdi
  float v19; // xmm2_4
  char *v20; // rbp
  int v21; // eax
  float v22; // xmm0_4
  int v23; // eax
  float v24; // [rsp+Ch] [rbp-5Ch]
  char *endptr; // [rsp+18h] [rbp-50h] BYREF
  void *v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a1;
  v26[3] = (void *)__readfsqword(0x28u);
  v4 = *(__m128 (__fastcall **)(__int64, const char *))(v3 + 88);
  if ( v4 != irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_11 )
    return (unsigned int)(int)((float (__fastcall *)(__int64 *, const char *))v4)(a1, a2);
  if ( !a2 )
    return 0;
  if ( *a2 )
  {
    v5 = strlen(a2 + 1) + 2;
    v6 = (void *)operator new[](v5);
    if ( v5 <= 0 )
      goto LABEL_6;
  }
  else
  {
    v5 = 1;
    v6 = (void *)operator new[](1u);
  }
  v6 = memcpy(v6, a2, (unsigned int)v5);
LABEL_6:
  v7 = *((_DWORD *)a1 + 31);
  if ( v7 <= 0 )
  {
LABEL_15:
    if ( v6 )
      operator delete[](v6);
    return 0;
  }
  v8 = (char **)a1[14];
  v9 = (__int64)&v8[4 * (unsigned int)(v7 - 1) + 4];
  while ( 1 )
  {
    v10 = 0;
    v11 = 0;
    for ( i = **v8; i; i = (*v8)[v11] )
    {
      v13 = *((_BYTE *)v6 + v10);
      if ( !v13 )
        break;
      if ( v13 != i )
        goto LABEL_14;
      v10 = ++v11;
    }
    if ( *((_DWORD *)v8 + 3) == v5 )
      break;
LABEL_14:
    v8 += 4;
    if ( v8 == (char **)v9 )
      goto LABEL_15;
  }
  if ( v6 )
    operator delete[](v6);
  if ( !v8 )
    return 0;
  v15 = (__int64)v8[2];
  v16 = 0;
  v26[1] = nullptr;
  v26[0] = nullptr;
  sub_1CADA0((__int64)v26, v15);
  v17 = v26[0];
  v18 = (const char *)v26[0];
  if ( *(_BYTE *)v26[0] == 45 )
  {
    v18 = (char *)v26[0] + 1;
    v16 = 1;
  }
  v19 = (float)(int)strtol(v18, &endptr, 10);
  if ( *endptr == 46 )
  {
    v20 = endptr + 1;
    v24 = v19;
    v21 = strtol(endptr + 1, &endptr, 10);
    v22 = (float)v21 * flt_5E0620[endptr - v20];
    v19 = v19 + v22;
    if ( *endptr == 101 )
    {
      v23 = strtol(endptr + 1, &endptr, 10);
      v19 = (float)(v24 + v22) * powf(10.0, (float)v23);
    }
  }
  if ( v16 )
    v19 = -v19;
  if ( v17 )
    operator delete[](v17);
  return (unsigned int)(int)v19;
}
