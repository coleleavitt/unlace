__int64 __fastcall sub_1915F50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  unsigned int v7; // ebx
  char v10; // r13
  unsigned __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // eax
  bool v26; // al
  unsigned int v27; // eax
  __int64 v28; // rax
  void *v29; // rdi
  unsigned __int64 v30; // rax
  unsigned int v31; // [rsp+Ch] [rbp-14Ch]
  bool v32; // [rsp+17h] [rbp-141h] BYREF
  __int64 v33; // [rsp+18h] [rbp-140h] BYREF
  void *v34; // [rsp+20h] [rbp-138h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-130h]
  unsigned __int8 v36; // [rsp+2Ch] [rbp-12Ch]
  void *v37[2]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v38[16]; // [rsp+40h] [rbp-118h] BYREF
  void *ptr; // [rsp+50h] [rbp-108h] BYREF
  __m128i si128; // [rsp+58h] [rbp-100h]
  _BYTE v41[40]; // [rsp+68h] [rbp-F0h] BYREF
  __int64 (__fastcall **v42)(); // [rsp+90h] [rbp-C8h] BYREF
  char v43; // [rsp+98h] [rbp-C0h]

  v7 = 0;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
    return v7;
  v10 = a4;
  v11 = a2;
  v33 = *(_QWORD *)(a2 + 8);
  LOBYTE(v12) = sub_9EC890(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  v7 = v12;
  if ( !(_BYTE)v12
    || (v16 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL),
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v17 + 16) == 13)
    && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x1B4
    || (unsigned __int8)sub_F57EE0(v16) )
  {
    v18 = sub_C00A40(a2, a2, v13, v14, v15);
    sub_168B9F0((__int64)&v42, a1 + 1, v18, 0x12DBu, 0);
    sub_1605D30((__int64)&v42, &v33);
    v7 = 1;
    sub_15F7200(&v42);
    return v7;
  }
  v35 = 1;
  v36 = 0;
  v34 = nullptr;
  v43 = 0;
  v42 = off_2BC6E80;
  if ( sub_1914D50(a1, a2, (__int64)&v34, (_BOOL4 *)&v42, 0, a6, a7) == 1 )
    goto LABEL_31;
  v21 = v35;
  if ( !v10 )
  {
    if ( v36 )
    {
      if ( v35 > 0x40 )
      {
LABEL_23:
        v31 = v35;
        v25 = sub_2206780(&v34);
        v21 = v31;
        v26 = v25 == v31;
        goto LABEL_24;
      }
      v29 = v34;
    }
    else
    {
      v19 = v35 - 1;
      v29 = v34;
      a2 = 1LL << ((unsigned __int8)v35 - 1);
      if ( v35 > 0x40 )
      {
        v19 = (unsigned int)v19 >> 6;
        if ( (a2 & *((_QWORD *)v34 + (unsigned int)v19)) != 0 )
          goto LABEL_25;
        goto LABEL_23;
      }
      if ( ((1LL << ((unsigned __int8)v35 - 1)) & (unsigned __int64)v34) != 0 )
        goto LABEL_25;
    }
    v26 = v29 == nullptr;
LABEL_24:
    if ( !v26 )
    {
LABEL_17:
      v32 = 1;
      if ( (unsigned int)v21 > 0x40 )
        goto LABEL_13;
LABEL_18:
      if ( !v34 )
        return 0;
      _BitScanReverse64(&v24, (unsigned __int64)v34);
      v21 = 64 - ((unsigned int)v24 ^ 0x3F);
      if ( (unsigned int)v21 <= 0x1F )
        return 0;
      goto LABEL_26;
    }
LABEL_25:
    v32 = 0;
    goto LABEL_26;
  }
  if ( v36 )
    goto LABEL_17;
  v19 = v35 - 1;
  a2 = (__int64)v34;
  v22 = 1LL << ((unsigned __int8)v35 - 1);
  if ( v35 <= 0x40 )
  {
    v30 = (unsigned __int64)v34 & v22;
    v32 = v30 == 0;
    if ( v30 )
      goto LABEL_26;
    goto LABEL_18;
  }
  v19 = (unsigned int)v19 >> 6;
  v23 = *((_QWORD *)v34 + v19) & v22;
  v32 = v23 == 0;
  if ( v23 )
  {
LABEL_26:
    v27 = sub_C00A40(v11, a2, v21, v19, v20);
    sub_168B9F0((__int64)&v42, a1 + 1, v27, 0x39u, 0);
    ptr = v41;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    sub_220BA90((unsigned int)&v34, (unsigned int)&ptr, 10, v36 ^ 1, 0, 1, 0);
    v37[0] = v38;
    sub_18BD0A0(v37, ptr, (__int64)ptr + si128.m128i_i64[0]);
    if ( ptr != v41 )
      free(ptr);
    v28 = sub_1682AF0((__int64)&v42, (__int64)v37);
    sub_15890D0(v28, (unsigned __int8 *)&v32);
    if ( v37[0] != v38 )
      operator delete(v37[0]);
    sub_15F7200(&v42);
LABEL_31:
    if ( v35 <= 0x40 )
      return v7;
    goto LABEL_15;
  }
LABEL_13:
  v21 = (unsigned int)v21 - (unsigned int)sub_2206780(&v34);
  if ( (unsigned int)v21 > 0x1F )
    goto LABEL_26;
  v7 = 0;
LABEL_15:
  if ( v34 )
    operator delete[](v34);
  return v7;
}
