/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9840
// Address: 0x00000000000A9840

//----- (00000000000A9840) ----------------------------------------------------
__int64 __fastcall sub_A9840(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned int *v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  char v11; // al
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int32 v20; // eax
  __int64 v21; // rbp
  void *v22; // rbx
  char *v23; // r15
  __int64 v24; // r13
  unsigned __int64 v25; // rbp
  void *v26; // rdi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  bool v29; // cc
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  __int128 v38; // xmm0
  void *v39; // rcx
  void *v40; // rdi
  char v42; // [rsp+0h] [rbp-88h]
  void *ptr[3]; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v45; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int128 v46; // [rsp+30h] [rbp-58h]
  void *v47; // [rsp+40h] [rbp-48h]
  unsigned __int64 v48; // [rsp+50h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  if ( a3 >= 0 )
  {
    v4 = qtime64();
    v5 = &v45;
    v6 = 1000000 * HIDWORD(v4) + (unsigned int)v4 + 1000LL * a3;
    if ( v6 )
    {
      v7 = qtime64();
      v8 = 1000000 * HIDWORD(v7) + (unsigned int)v7;
      v9 = v6 - v8;
      if ( v6 <= v8 )
      {
        LODWORD(v10) = 0;
      }
      else
      {
        v10 = v9 / 0x3E8;
        if ( ((v9 / 0x3E8) & 0x80000000) != 0LL )
        {
          v11 = 0;
LABEL_8:
          v42 = v11;
          goto LABEL_9;
        }
      }
      v13 = qtime64();
      v12 = 1000000 * HIDWORD(v13) + (unsigned int)v13 + 1000LL * (int)v10;
      v42 = 0;
      goto LABEL_12;
    }
    v6 = 0;
    v11 = 1;
    goto LABEL_8;
  }
  v5 = &v45;
  v42 = 1;
  v6 = 0;
LABEL_9:
  v12 = 0;
LABEL_12:
  v14 = 4;
  while ( 1 )
  {
    if ( v12 )
    {
      v15 = qtime64();
      v16 = 1000000 * HIDWORD(v15) + (unsigned int)v15;
      v17 = 0;
      if ( v12 > v16 )
        v17 = (v12 - v16) / 0x3E8;
    }
    else
    {
      v17 = 0xFFFFFFFFLL;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v17) <= 0 )
      break;
    v18 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v5, v14);
    if ( v18 <= 0 )
      break;
    v5 = (unsigned int *)((char *)v5 + v18);
    v14 -= v18;
    if ( !v14 )
      goto LABEL_23;
  }
  if ( v14 == 4 )
  {
    LODWORD(v14) = 0;
    return (unsigned int)v14;
  }
LABEL_23:
  v19 = v45;
  v20 = _byteswap_ulong(v45);
  v45 = v20;
  if ( v19 )
  {
    memset(ptr, 0, sizeof(ptr));
    v21 = v20;
    v22 = (void *)(v20 + 1LL);
    ptr[0] = qvector_reserve((__int64)ptr, nullptr, (unsigned __int64)v22, 1u);
    memset((char *)ptr[1] + (unsigned __int64)ptr[0], 0, (size_t)v22 - (unsigned __int64)ptr[1]);
    ptr[1] = v22;
    *((_BYTE *)ptr[0] + v21) = 0;
    if ( v42 )
    {
      v23 = (char *)ptr[0];
      v24 = v45;
      goto LABEL_26;
    }
    v27 = qtime64();
    v28 = 1000000 * HIDWORD(v27) + (unsigned int)v27;
    v29 = v6 <= v28;
    v30 = v6 - v28;
    if ( v29 )
    {
      v23 = (char *)ptr[0];
      v24 = v45;
      LODWORD(v31) = 0;
    }
    else
    {
      v31 = v30 / 0x3E8;
      v23 = (char *)ptr[0];
      v24 = v45;
      if ( (v31 & 0x80000000) != 0LL )
      {
LABEL_26:
        v25 = 0;
        if ( !v24 )
          goto LABEL_47;
        goto LABEL_35;
      }
    }
    v32 = qtime64();
    v25 = 1000000 * HIDWORD(v32) + (unsigned int)v32 + 1000LL * (int)v31;
    if ( !v24 )
    {
LABEL_47:
      LODWORD(v14) = 0;
LABEL_48:
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
      return (unsigned int)v14;
    }
LABEL_35:
    v33 = v24;
    while ( 1 )
    {
      if ( v25 )
      {
        v34 = qtime64();
        v35 = 1000000 * HIDWORD(v34) + (unsigned int)v34;
        v36 = 0;
        if ( v25 > v35 )
          v36 = (v25 - v35) / 0x3E8;
      }
      else
      {
        v36 = 0xFFFFFFFFLL;
      }
      if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v36) <= 0 )
        break;
      v37 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v23, v33);
      if ( v37 <= 0 )
        break;
      v23 += v37;
      v33 -= v37;
      if ( !v33 )
        goto LABEL_43;
    }
    if ( v24 == v33 )
      goto LABEL_47;
LABEL_43:
    v38 = *(_OWORD *)ptr;
    memset(ptr, 0, sizeof(ptr));
    v46 = v38;
    v39 = ptr[2];
    v47 = ptr[2];
    LODWORD(v14) = a2;
    v40 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v40);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
      v38 = v46;
      v39 = v47;
    }
    *(_OWORD *)a2 = v38;
    *(_QWORD *)(a2 + 16) = v39;
    LOBYTE(v14) = 1;
    goto LABEL_48;
  }
  v26 = *(void **)a2;
  LOBYTE(v14) = 1;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v26);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  return (unsigned int)v14;
}
// A9B67: conditional instruction was optimized away because r13.8 is in (1..FFFFFFFF)
