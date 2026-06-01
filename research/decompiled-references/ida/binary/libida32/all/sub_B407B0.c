__int64 __fastcall sub_B407B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r13d
  char v12; // al
  int v13; // r12d
  int v14; // ebx
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned int v20; // r13d
  __int64 v21; // rdi
  char v22; // al
  char v23; // dl
  int v24; // eax
  __int64 *v25; // r12
  unsigned __int64 v26; // rax
  __int64 *v27; // rax
  __int64 *i; // rbx
  char v29; // al
  char v30; // si
  char v31; // cl
  char v32; // dl
  char v33; // al
  int v34; // esi
  int v35; // ecx
  int v36; // edx
  __int64 v37; // r12
  unsigned __int64 v38; // rbx
  char v39; // al
  __int64 v40; // rdx
  __int64 v42; // rsi
  __m128i v43; // [rsp+0h] [rbp-68h] BYREF
  __m128i v44; // [rsp+20h] [rbp-48h] BYREF
  __int64 v45; // [rsp+30h] [rbp-38h]

  v7 = *(_DWORD *)a1[2];
  v8 = a1[3];
  v43.m128i_i32[2] = *((_DWORD *)a1 + 10);
  v9 = *(_QWORD *)(v8 + 40);
  v10 = a1[4];
  v11 = (v7 >> 14) & 0x1F;
  v43.m128i_i64[0] = v9;
  v44 = _mm_load_si128(&v43);
  v45 = v10;
  v12 = sub_B61C40(&v44, a2, v43.m128i_u32[2], v9, a5, a6, v9, v43.m128i_i32[2], v10);
  v13 = v12 == 0 ? 1 : 3;
  v14 = v12 != 0 ? 2 : 0;
  v15 = (unsigned __int8)sub_B61BA0(&v44) == 0;
  v19 = *a1;
  if ( !v15 )
    v14 = v13;
  v20 = v14 | v11;
  if ( (v19 & 0x100000) != 0 )
  {
    v21 = a1[6];
    if ( v21 )
    {
      v22 = sub_E6D500(v21, a2, v16, v17, v18);
      v23 = v22 & 1;
      if ( (v22 & 8) != 0 )
      {
        if ( (v22 & 2) != 0 )
        {
          v23 |= 0x12u;
          v20 |= 0x10u;
          v24 = 2;
          goto LABEL_8;
        }
        v23 |= 0x10u;
        v20 |= 0x10u;
      }
      else if ( (v22 & 2) != 0 )
      {
        v23 |= 2u;
        v24 = 2;
LABEL_8:
        v20 |= v24 | v23 & 1;
        v19 = *a1;
        goto LABEL_9;
      }
      v24 = 0;
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( (v19 & 0x400000) != 0 && (v42 = (v19 & 0x200000) != 0, LODWORD(a1[2 * ((v19 & 0x100000) != 0) + 6 + v42])) )
    v25 = &a1[2 * ((v19 & 0x100000) != 0) + 6 + 2 * (unsigned __int64)((v19 & 0x400000) != 0) + v42];
  else
    v25 = nullptr;
  v26 = v19 >> 16;
  if ( (v26 & 0x40) != 0 )
  {
    v27 = &a1[2 * ((v26 & 0x10) != 0) + ((v26 & 0x20) != 0)];
    if ( *((_DWORD *)v27 + 12) )
    {
      for ( i = &v25[4 * *((unsigned int *)v27 + 15)]; i != v25; v20 |= v36 | v35 | v34 | v33 & 1 | 2 )
      {
        while ( 1 )
        {
          v29 = sub_EF9570(v25);
          v30 = v29 & 8;
          if ( (v29 & 8) != 0 )
            v30 = 16;
          v31 = v29 & 4;
          if ( (v29 & 4) != 0 )
            v31 = 12;
          v32 = v29 & 2;
          if ( (v29 & 2) != 0 )
            v32 = 2;
          v33 = v32 | v31 | v30 | v29 & 1;
          v34 = v33 & 0x10;
          if ( (v33 & 0x10) != 0 )
            v34 = 16;
          v35 = v33 & 8;
          if ( (v33 & 8) != 0 )
            v35 = 8;
          v36 = v33 & 4;
          if ( (v33 & 4) != 0 )
            v36 = 4;
          if ( (v33 & 2) != 0 )
            break;
          v25 += 4;
          v20 |= v36 | v35 | v34 | v33 & 1;
          if ( i == v25 )
            goto LABEL_28;
        }
        v25 += 4;
      }
    }
  }
LABEL_28:
  v37 = a1[3];
  if ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 49 <= 2 )
  {
    v38 = *(_QWORD *)(v37 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v37 + 16) & 4) != 0 )
      v38 = *(_QWORD *)v38;
    if ( v38
      && (*(_BYTE *)(v38 + 8) & 0x7Fu) - 59 <= 2
      && v38 != 64
      && (unsigned __int8)sub_B6A440(v38)
      && (unsigned __int8)sub_B432C0(v38 - 64, v38)
      && (*(_BYTE *)(*(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      v20 &= 0x1Bu;
    }
    v39 = *(_BYTE *)(v37 + 68);
    if ( (v39 & 1) != 0 )
    {
      v40 = *(_QWORD *)(v37 + 72);
      if ( (v39 & 0xC) != 0xC && (v39 & 0xC) != 0 )
        v40 = *(_QWORD *)(v40 + 8);
      if ( (*(_DWORD *)v40 & 0x20000) != 0 )
        v20 |= 4u;
    }
  }
  return v20;
}

