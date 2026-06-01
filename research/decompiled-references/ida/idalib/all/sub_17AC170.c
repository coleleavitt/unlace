__int64 __fastcall sub_17AC170(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r12d
  __int64 v8; // r11
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r14
  const char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _BOOL4 v18; // ebp
  __int64 v19; // rax
  char v20; // bp
  unsigned int v21; // ecx
  bool v22; // dl
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  int v31; // r14d
  unsigned __int64 v32; // rbp
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rax
  _QWORD *v38; // r14
  unsigned __int64 v39; // r13
  __int64 v40; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rdi
  int v44; // eax
  int v45; // ecx
  unsigned __int64 v46; // rax
  __m128i *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // [rsp+0h] [rbp-108h]
  __int64 v54; // [rsp+8h] [rbp-100h]
  __int64 v55; // [rsp+8h] [rbp-100h]
  unsigned int v56; // [rsp+10h] [rbp-F8h]
  __int64 v57; // [rsp+18h] [rbp-F0h]
  char v58; // [rsp+20h] [rbp-E8h]
  char v59; // [rsp+24h] [rbp-E4h]
  __int64 v60; // [rsp+30h] [rbp-D8h] BYREF
  int v61; // [rsp+38h] [rbp-D0h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+48h] [rbp-C0h]
  _QWORD v64[23]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = a5;
  v8 = *(_QWORD *)(a1 + 248);
  v56 = a4;
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 2264) + 80LL);
  v10 = *(_QWORD *)(v9 + 72);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) == 0 )
  {
    v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v13 = v10 & 2;
      v14 = (__int64)v12;
      if ( !(_DWORD)v13 )
        goto LABEL_4;
      v11 = sub_6E2500(v12, v9, v13, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v10 = v11 | 1;
      *(_QWORD *)(v9 + 72) = v11 | 1;
    }
  }
  v42 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v42;
  if ( v11 )
  {
    if ( (v11 & 4) != 0 )
    {
      v14 = 0;
      if ( v42 )
      {
        v43 = *(_QWORD *)v42;
        v44 = *(_DWORD *)(*(_QWORD *)v42 + 12LL);
        if ( *(_DWORD *)(v42 + 8) != v44 )
        {
          *(_DWORD *)(v42 + 8) = v44;
          v52 = v42;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 152LL))(v43, v9);
          v42 = v52;
        }
        v14 = *(_QWORD *)(v42 + 16);
      }
    }
  }
  v8 = *(_QWORD *)(a1 + 248);
LABEL_4:
  if ( v14 )
    v14 += 40;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
  {
    v46 = sub_B99790((_QWORD *)v8, v14, v6, v6, 1, 0);
    v47 = (__m128i *)v14;
    *(_BYTE *)(v46 + 29) |= 2u;
    v14 = v46 + 40;
    sub_B94AD0(v47, v46, v48, v49, v50, v51);
    v8 = *(_QWORD *)(a1 + 248);
  }
  v15 = (const char *)sub_FBD4B0(*(__int64 **)(v8 + 17520), v56);
  v60 = 0;
  v61 = 0;
  v18 = strchr(v15, 71) != nullptr;
  v19 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v20 = 2 * v18;
  if ( *(_BYTE *)(v19 + 16) != 26 )
    v19 = sub_179A8B0(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), 71, v16, v17);
  v21 = *(_DWORD *)(a1 + 224);
  if ( ((v21 >> 3) & 7) == 7 )
  {
    v22 = 1;
    if ( (v21 & 0x104) != 0 )
      goto LABEL_12;
  }
  else
  {
    v22 = 1;
    if ( ((v21 >> 3) & 7) != 1 )
      goto LABEL_12;
  }
  v22 = 1;
  if ( (unsigned __int8)v21 >> 6 != 3 )
  {
    if ( (unsigned __int8)v21 >> 6 )
      goto LABEL_12;
    v45 = v21 & 0x100;
    goto LABEL_39;
  }
  v45 = v21 & 0x100;
  if ( !v45 )
LABEL_39:
    v22 = v45 != 0;
LABEL_12:
  v59 = v22;
  v57 = *(_QWORD *)(a1 + 248);
  v58 = v19 != 0;
  LODWORD(v63) = v6;
  ptr = a2;
  sub_B85890(v64, (__int64)a2);
  v23 = sub_B7CBC0(v57, v14, v6, (__int64 *)&ptr, a3, 0, 1, v59, 0, v58, v20, (__int64)&v60);
  *(_BYTE *)(v23 + 29) |= 2u;
  v24 = v23;
  v25 = sub_B30F40(*(_QWORD *)(a1 + 248), v56, 0);
  sub_B8CC60(v24, v25, v26, v27, v28, v29);
  v30 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v30 + 16) == 26 )
  {
    v63 = 0x1000000000LL;
    ptr = v64;
    v31 = *(unsigned __int16 *)(v30 + 22);
    if ( *(_WORD *)(v30 + 22) )
    {
      v32 = 0;
      do
      {
        v37 = sub_B74530(*(_QWORD *)(a1 + 248), v24 + 72, 0, 0, 0, *(_QWORD *)(v30 + 8 * v32 + 48), 0, 0, 0);
        *(_DWORD *)(v37 + 96) &= 0xFFF01FFF;
        if ( v32 <= 0xFE )
        {
          *(_WORD *)(v37 + 98) = (16 * (unsigned __int8)v32) | *(_WORD *)(v37 + 98) & 0xF00F;
        }
        else
        {
          v54 = v37;
          sub_B74850(v37, v32);
          v37 = v54;
        }
        v33 = (unsigned int)v63;
        v34 = (unsigned int)v63 + 1LL;
        if ( v34 > HIDWORD(v63) )
        {
          v55 = v37;
          sub_2237220(&ptr, v64, v34, 8);
          v33 = (unsigned int)v63;
          v35 = ptr;
          v37 = v55;
        }
        else
        {
          v35 = ptr;
        }
        v35[v33] = v37;
        ++v32;
        v36 = v63 + 1;
        LODWORD(v63) = v63 + 1;
      }
      while ( v31 != (_DWORD)v32 );
      v38 = ptr;
      v39 = v36;
    }
    else
    {
      v39 = 0;
      v38 = v64;
    }
    v40 = sub_B8C330(v24);
    sub_B7C440(v24, v40, v38, v39);
    if ( ptr != v64 )
      free(ptr);
  }
  if ( *(char *)(v24 + 28) >= 0 )
    sub_17A9DF0(a1, v24);
  return v24;
}
