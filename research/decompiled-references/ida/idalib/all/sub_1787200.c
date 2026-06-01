__int64 __fastcall sub_1787200(__int64 a1)
{
  _QWORD *v1; // r13
  __int64 v2; // r12
  unsigned int v3; // r15d
  char v4; // r14
  __int64 v5; // rax
  __m128i si128; // xmm0
  __int64 v7; // r13
  size_t v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  char v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  char *v28; // rax
  __int64 v29; // rdx
  __int64 v30[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+10h] [rbp-E8h] BYREF
  void *ptr; // [rsp+18h] [rbp-E0h]
  __int64 v33; // [rsp+20h] [rbp-D8h]
  __int64 v34; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int8 *v35[7]; // [rsp+30h] [rbp-C8h] BYREF
  void *v36[2]; // [rsp+68h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-80h]
  _QWORD *v38; // [rsp+80h] [rbp-78h]
  __int64 v39; // [rsp+88h] [rbp-70h]
  unsigned int v40; // [rsp+90h] [rbp-68h]
  char v41; // [rsp+94h] [rbp-64h]
  __int64 v42; // [rsp+98h] [rbp-60h] BYREF
  __m128i v43; // [rsp+A0h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-48h]

  v1 = *(_QWORD **)(a1 + 112);
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_DWORD *)(a1 + 140);
  v4 = *(_BYTE *)(v1[29] + 13LL);
  v5 = sub_6F3470(v1[30] + 552LL, "unhandled_exception", 0x13u);
  ptr = &v34;
  v33 = 0x800000000LL;
  *(_OWORD *)v36 = 0;
  v39 = v5;
  v31 = 0;
  v37 = 0;
  v38 = v1;
  v40 = v3;
  sub_B85890(&v42, v5);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
  v44 = 0x101010000LL;
  v43 = si128;
  sub_1A395A0(&v31);
  if ( v2 )
    v2 += 64;
  *(_WORD *)((char *)&v44 + 3) = 0;
  LODWORD(v2) = sub_1A48440(v1, &v31, v2, 0);
  if ( !BYTE3(v44) )
  {
LABEL_15:
    if ( !BYTE4(v44) || (_DWORD)v31 != 5 )
      goto LABEL_7;
LABEL_28:
    sub_1A445B0(v38, &v31);
    goto LABEL_7;
  }
  if ( (_DWORD)v31 == 5 )
  {
    if ( !BYTE4(v44) )
      goto LABEL_7;
    goto LABEL_28;
  }
  if ( v36[1] && (*(_BYTE *)(v38[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v38, (__int64)&v31);
    goto LABEL_15;
  }
LABEL_7:
  if ( v36[0] )
    sub_1A39780(v36[0]);
  if ( ptr != &v34 )
    free(ptr);
  v7 = *(_QWORD *)(a1 + 112);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 232) + 13LL) & 0x20) != 0 )
    {
      v9 = j__strlen("unhandled_exception");
      v11 = sub_17840A0(
              v7,
              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 184LL),
              *(_DWORD *)(a1 + 140),
              "unhandled_exception",
              v9,
              v10,
              si128);
      v12 = sub_19B4A30(*(_QWORD *)(a1 + 112), v11 & 0xFFFFFFFFFFFFFFFELL, *(unsigned int *)(a1 + 140), 0, 0, 0);
      if ( v12 == 1 )
      {
        LODWORD(v2) = 0;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 112);
        if ( (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 4) == 0 && (v14 = *(_QWORD *)(a1 + 128), *(_DWORD *)(v14 + 28)) )
        {
          LODWORD(v2) = 0;
          sub_168B9F0((__int64)&v31, (__int64 *)(v13 + 8), *(_DWORD *)(v14 + 28), 0x1369u, 0);
          sub_15F7200(&v31);
          sub_168B9F0(
            (__int64)&v31,
            (__int64 *)(*(_QWORD *)(a1 + 112) + 8LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 128) + 12LL),
            0x16F0u,
            0);
          v28 = sub_1783530(*(_QWORD *)(a1 + 128));
          v30[1] = v29;
          v30[0] = (__int64)v28;
          sub_166BAF0((__int64)&v31, (__int64)v30);
          sub_15F7200(&v31);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v12 & 0xFFFFFFFFFFFFFFFELL;
        }
      }
    }
  }
  else
  {
    v15 = v4 & 0x20;
    sub_168B9F0((__int64)&v31, (__int64 *)(v7 + 8), *(_DWORD *)(a1 + 140), v15 == 0 ? 6713 : 3530, 0);
    if ( (_BYTE)v39 )
    {
      sub_AE9DF0(v35, *(_QWORD *)(a1 + 200), 0xAu);
    }
    else if ( v41 )
    {
      v2 = sub_168B9E0(&v31);
      v26 = v33;
      if ( v33 )
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
      v30[0] = v26;
      v27 = sub_1587BC0(v2, v30, v22, v23, v24, v25);
      sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v40 + 8), *(_QWORD *)(a1 + 200), 0xAu);
    }
    sub_15F7200(&v31);
    sub_168B9F0(
      (__int64)&v31,
      (__int64 *)(*(_QWORD *)(a1 + 112) + 8LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 200) + 24LL),
      0x170Bu,
      0);
    if ( (_BYTE)v39 )
    {
      sub_AE9DF0(v35, *(_QWORD *)(a1 + 200), 0xAu);
      sub_15F7200(&v31);
      LOBYTE(v2) = v15 == 0;
    }
    else
    {
      if ( v41 )
      {
        v2 = sub_168B9E0(&v31);
        v20 = v33;
        if ( v33 )
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
        v30[0] = v20;
        v21 = sub_1587BC0(v2, v30, v16, v17, v18, v19);
        sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v40 + 8), *(_QWORD *)(a1 + 200), 0xAu);
      }
      sub_15F7200(&v31);
      LOBYTE(v2) = v15 == 0;
    }
  }
  return (unsigned int)v2;
}
