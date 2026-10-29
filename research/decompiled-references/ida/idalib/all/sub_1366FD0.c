__int64 __fastcall sub_1366FD0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  int v7; // r14d
  __int64 v9; // rax
  __int64 v10; // r15
  _QWORD *v11; // r12
  unsigned int v12; // ebx
  char v13; // dl
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  _QWORD *v17; // r15
  int v18; // r15d
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // eax
  void *v23; // rdi
  __int64 *v24; // rdi
  __int64 v25; // rcx
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  __int64 v28; // rbx
  unsigned int v29; // eax
  unsigned int v31; // [rsp+18h] [rbp-350h]
  unsigned int v32; // [rsp+18h] [rbp-350h]
  _DWORD v33[4]; // [rsp+20h] [rbp-348h] BYREF
  __int16 v34; // [rsp+30h] [rbp-338h]
  char v35; // [rsp+32h] [rbp-336h]
  void *v36[2]; // [rsp+40h] [rbp-328h] BYREF
  _BYTE v37[16]; // [rsp+50h] [rbp-318h] BYREF
  __m128i v38[2]; // [rsp+60h] [rbp-308h] BYREF
  char v39; // [rsp+80h] [rbp-2E8h]
  void *ptr; // [rsp+90h] [rbp-2D8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-2D0h]
  _BYTE v42[24]; // [rsp+A8h] [rbp-2C0h] BYREF
  void *v43; // [rsp+C0h] [rbp-2A8h]
  _DWORD v44[130]; // [rsp+D8h] [rbp-290h] BYREF
  void *v45; // [rsp+2E0h] [rbp-88h]
  _BYTE v46[112]; // [rsp+2F8h] [rbp-70h] BYREF

  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(_DWORD *)(v6 + 520);
  LOBYTE(ptr) = 0;
  if ( (unsigned int)(v7 + 1) <= 1 )
    return 0;
  if ( v7 < 0 )
  {
    v15 = (unsigned int)(-2 - v7);
    v16 = *(_QWORD *)(*(_QWORD *)(v6 + 320) + 8LL * ((unsigned int)(-2 - v7) >> 6));
    if ( _bittest64(&v16, v15) )
    {
      v17 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v15 >> 5));
      if ( *v17 )
      {
        v9 = *v17 + 24LL * ((-2 - (_BYTE)v7) & 0x1F);
        goto LABEL_4;
      }
      v24 = (__int64 *)(*(_QWORD *)(v6 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v25 = *v24;
      v24[10] += 768;
      v26 = (_DWORD *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v24[1] >= (unsigned __int64)(v26 + 192) && v25 )
        *v24 = (__int64)(v26 + 192);
      else
        v26 = (_DWORD *)sub_986170((__int64)v24, 768, 768, 3, a5, a6);
      *v17 = v26;
      v27 = v26 + 192;
      do
      {
        *v26 = 0;
        v26 += 6;
        *((_OWORD *)v26 - 1) = 0;
        *((_QWORD *)v26 - 1) = 0;
      }
      while ( v27 != v26 );
      v13 = (char)ptr;
      v9 = *v17 + 24LL * ((-2 - (_BYTE)v7) & 0x1F);
    }
    else
    {
      v9 = sub_101F930(v6, v15, &ptr);
      v13 = (char)ptr;
    }
    if ( v13 )
      return 0;
  }
  else
  {
    v9 = *(_QWORD *)(v6 + 184) + 24LL * (unsigned int)v7;
  }
LABEL_4:
  if ( !v9 )
    return 0;
  if ( *(char *)(v9 + 3) < 0 )
    return 0;
  sub_101D9A0(
    v38,
    (__int64 *)(*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL),
    *(_QWORD *)(v6 + 8),
    *(_QWORD *)(v6 + 16),
    0);
  if ( !v39 )
    return 0;
  v10 = **(_QWORD **)(a1 + 16);
  v11 = (_QWORD *)operator new(0xD0u);
  sub_13D4740(v11, (unsigned int)v7, v38, v6, v10, 1);
  sub_13DB5F0(v11, v33);
  if ( v11[15] != v11[19] && v34 == 67 )
  {
    sub_13DB5F0(v11, v33);
    if ( v11[15] != v11[19] && (v35 & 1) == 0 && v34 == 7 )
    {
      v18 = v33[0];
      if ( a3 )
      {
        ptr = v42;
        v19 = *(_QWORD **)(a1 + 16);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
        v20 = sub_13DB940(v33[0], &ptr, v6, *v19, 0);
        if ( (unsigned __int8)sub_2247970(v20, v21, 10, v36)
          || (v22 = (unsigned int)v36[0], v36[0] != (void *)LODWORD(v36[0])) )
        {
          v23 = ptr;
          v12 = 0;
          if ( ptr == v42 )
            goto LABEL_10;
          goto LABEL_34;
        }
        if ( ptr != v42 )
        {
          v32 = (unsigned int)v36[0];
          free(ptr);
          v22 = v32;
        }
        v31 = v22;
      }
      sub_13DB5F0(v11, v33);
      if ( (v35 & 1) == 0 && v34 == 14 )
      {
        sub_13EE5A0(&ptr, v33, 1, *(_QWORD *)(a1 + 96), 0);
        if ( !v46[44] && ((sub_13DB5F0(v11, v33), v34 == 1) || (v35 & 1) != 0) )
        {
          if ( v43 )
          {
            v36[0] = v37;
            sub_13650C0(v36, v43, (__int64)v43 + (unsigned int)(v44[128] - (_DWORD)v43));
          }
          else
          {
            v37[0] = 0;
            v36[0] = v37;
            v36[1] = nullptr;
          }
          sub_A0AAD0(a2, v36);
          if ( v36[0] != v37 )
            operator delete(v36[0]);
          if ( a3 )
          {
            v28 = *(_QWORD *)(a1 + 72);
            v29 = sub_1022E90(v6, *(const void **)a2, *(_QWORD *)(a2 + 8));
            sub_1021710(v28, v18, v31, v29, 0, 0, 3u);
          }
          v12 = v33[0];
        }
        else
        {
          v12 = 0;
        }
        if ( v45 != v46 )
          free(v45);
        v23 = v43;
        if ( v43 == v44 )
          goto LABEL_10;
LABEL_34:
        free(v23);
        goto LABEL_10;
      }
    }
  }
  v12 = 0;
LABEL_10:
  (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  return v12;
}
