__int64 __fastcall sub_225B910(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 *a5)
{
  int v5; // ebp
  __int64 v6; // r14
  int v10; // ebp
  unsigned int v11; // eax
  __int64 v12; // r9
  int v13; // r11d
  __int64 v14; // r8
  __int64 v15; // rcx
  char *v16; // rsi
  int v17; // eax
  bool v18; // al
  bool v20; // al
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // [rsp+10h] [rbp-138h]
  int v27; // [rsp+10h] [rbp-138h]
  int v28; // [rsp+10h] [rbp-138h]
  unsigned int v29; // [rsp+18h] [rbp-130h]
  int v30; // [rsp+18h] [rbp-130h]
  int v31; // [rsp+18h] [rbp-130h]
  int v32; // [rsp+1Ch] [rbp-12Ch]
  __m128i v33[2]; // [rsp+20h] [rbp-128h] BYREF
  __int16 v34; // [rsp+40h] [rbp-108h]
  __m128i v35; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v36; // [rsp+70h] [rbp-D8h]
  __m128i v37[3]; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v38[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int16 v39; // [rsp+D0h] [rbp-78h]
  __m128i v40[2]; // [rsp+E0h] [rbp-68h] BYREF
  __int16 v41; // [rsp+100h] [rbp-48h]

  v5 = *((_DWORD *)a5 + 4);
  v6 = *a5;
  if ( !v5 )
    goto LABEL_19;
  v10 = v5 - 1;
  v11 = sub_2248890(a3, a4);
  v13 = 1;
  v14 = v10 & v11;
  if ( a4 )
  {
    while ( 1 )
    {
      v15 = v6 + 24LL * (unsigned int)v14;
      v16 = *(char **)v15;
      if ( *(_QWORD *)v15 == -1 )
      {
        v18 = (_QWORD *)((char *)a3 + 1) == nullptr;
      }
      else if ( v16 == (char *)-2LL )
      {
        v18 = (_QWORD *)((char *)a3 + 2) == nullptr;
      }
      else
      {
        if ( *(_QWORD *)(v15 + 8) != a4 )
          goto LABEL_24;
        v32 = v13;
        v26 = v6 + 24LL * (unsigned int)v14;
        v29 = v14;
        v17 = memcmp(a3, v16, a4);
        v14 = v29;
        v15 = v26;
        v13 = v32;
        v18 = v17 == 0;
      }
      if ( v18 )
        goto LABEL_8;
LABEL_24:
      v28 = v13;
      v31 = v14;
      if ( sub_E39ED0(*(char **)v15, *(_QWORD *)(v15 + 8), (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
        goto LABEL_19;
      v13 = v28 + 1;
      v14 = v10 & (unsigned int)(v28 + v31);
    }
  }
  while ( 1 )
  {
    v15 = v6 + 24LL * (unsigned int)v14;
    if ( *(_QWORD *)v15 == -1 )
    {
      v20 = (_QWORD *)((char *)a3 + 1) == nullptr;
      goto LABEL_17;
    }
    if ( *(_QWORD *)v15 == -2 )
      break;
    if ( !*(_QWORD *)(v15 + 8) )
      goto LABEL_8;
LABEL_13:
    v27 = v13;
    v30 = v14;
    if ( sub_E39ED0(*(char **)v15, *(_QWORD *)(v15 + 8), (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
      goto LABEL_19;
    v13 = v27 + 1;
    v14 = v10 & (unsigned int)(v27 + v30);
  }
  v20 = (_QWORD *)((char *)a3 + 2) == nullptr;
LABEL_17:
  if ( !v20 )
    goto LABEL_13;
LABEL_8:
  if ( v15 == *a5 + 24LL * *((unsigned int *)a5 + 4) )
  {
LABEL_19:
    v21 = *a1;
    v41 = 259;
    v40[0].m128i_i64[0] = (__int64)"unknown key";
    sub_226EEF0(v21, a2, v40, 0);
    return 0;
  }
  if ( *(_BYTE *)(v15 + 17) )
  {
    v35.m128i_i64[0] = (__int64)a3;
    v36 = 261;
    v38[0].m128i_i64[0] = (__int64)"'";
    v39 = 259;
    v33[0].m128i_i64[0] = (__int64)"duplicate key '";
    v34 = 259;
    v35.m128i_i64[1] = a4;
    sub_A41580(v37, v33, &v35, 259, v14, v12);
    sub_A41580(v40, v37, v38, v22, v23, v24);
    sub_226EEF0(*a1, a2, v40, 0);
    return 0;
  }
  else
  {
    *(_BYTE *)(v15 + 17) = 1;
    return 1;
  }
}
