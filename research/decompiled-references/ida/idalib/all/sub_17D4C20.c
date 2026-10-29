__int64 __fastcall sub_17D4C20(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5, unsigned int a6)
{
  __int64 v10; // rsi
  int v11; // ecx
  unsigned int v12; // ebp
  __int64 v13; // rdi
  unsigned __int8 v14; // al
  int v15; // edx
  void *v16; // rdi
  size_t v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  _QWORD *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  _QWORD *v42; // rax
  unsigned __int64 v43; // [rsp+0h] [rbp-210h]
  signed __int64 v44; // [rsp+0h] [rbp-210h]
  char *v45; // [rsp+8h] [rbp-208h]
  __int64 v46; // [rsp+10h] [rbp-200h]
  __int64 v50; // [rsp+30h] [rbp-1E0h]
  __int64 v51; // [rsp+30h] [rbp-1E0h]
  __int64 v52; // [rsp+30h] [rbp-1E0h]
  __int64 v53; // [rsp+30h] [rbp-1E0h]
  __int64 v54; // [rsp+30h] [rbp-1E0h]
  __int64 v55; // [rsp+30h] [rbp-1E0h]
  _BOOL4 v56; // [rsp+54h] [rbp-1BCh] BYREF
  __int64 v57[3]; // [rsp+58h] [rbp-1B8h] BYREF
  void *v58; // [rsp+70h] [rbp-1A0h]
  __int64 v59; // [rsp+80h] [rbp-190h] BYREF
  _QWORD v60[2]; // [rsp+98h] [rbp-178h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-168h]
  unsigned __int8 *v62[11]; // [rsp+B8h] [rbp-158h] BYREF
  char v63; // [rsp+110h] [rbp-100h]
  unsigned int v64; // [rsp+118h] [rbp-F8h]
  char v65; // [rsp+11Ch] [rbp-F4h]
  __int64 v66; // [rsp+128h] [rbp-E8h] BYREF
  _QWORD *v67; // [rsp+130h] [rbp-E0h]
  __int64 v68; // [rsp+138h] [rbp-D8h]
  _OWORD v69[5]; // [rsp+140h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+190h] [rbp-80h]
  __int64 v71; // [rsp+198h] [rbp-78h]
  __int64 v72; // [rsp+1A0h] [rbp-70h]
  unsigned int v73; // [rsp+1A8h] [rbp-68h]
  __int64 v74; // [rsp+1B0h] [rbp-60h] BYREF
  __m128i si128; // [rsp+1B8h] [rbp-58h]
  __int64 v76; // [rsp+1C8h] [rbp-48h]

  v10 = *a5;
  v71 = a1;
  v67 = v69;
  v72 = v10;
  v73 = a6;
  v68 = 0x800000000LL;
  v69[4] = 0;
  v66 = 0;
  v70 = 0;
  sub_B85890(&v74, v10);
  v76 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  sub_1A395A0(&v66);
  v11 = a4;
  v12 = 0;
  sub_1A5D3E0(a1, (unsigned int)&v66, a3, v11, 0, 0, 0);
  if ( (_DWORD)v66 == 2 )
  {
    v13 = *v67 & 0xFFFFFFFFFFFFFFF8LL;
    v14 = *(_BYTE *)(v13 + 28) & 0x7F;
    v15 = v14;
    if ( (unsigned int)v14 - 53 <= 1 || ((v14 + 52) & 0x7Fu) <= 1 )
    {
      v13 = sub_B72ED0(v13);
      v15 = *(_BYTE *)(v13 + 28) & 0x7F;
    }
    v12 = 0;
    if ( (unsigned int)(v15 - 58) <= 4 )
    {
      switch ( *(_BYTE *)(v13 + 73) >> 5 )
      {
        case 0:
          v18 = j__strlen("struct ");
          v43 = v18 - 1;
          v45 = "struct ";
          break;
        case 1:
          v18 = j__strlen("__interface ");
          v43 = v18 - 1;
          v45 = "__interface ";
          break;
        case 2:
          v18 = j__strlen("union ");
          v43 = v18 - 1;
          v45 = "union ";
          break;
        case 3:
          v18 = j__strlen("class ");
          v43 = v18 - 1;
          v45 = "class ";
          break;
        case 4:
          v18 = j__strlen("enum ");
          v43 = v18 - 1;
          v45 = "enum ";
          break;
        default:
          v43 = -1;
          v18 = 0;
          v45 = nullptr;
          break;
      }
      v19 = 0;
      if ( v43 <= v18 )
        v19 = v43;
      v44 = v19;
      sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), a6, 0x54u, 0);
      v20 = sub_169D880((__int64)v60, a5);
      v21 = v20;
      if ( *(_BYTE *)(v20 + 120) )
      {
        v53 = v20;
        sub_AEC220((unsigned __int8 **)(v20 + 32), v45, v44);
        v21 = v53;
      }
      else if ( *(_BYTE *)(v20 + 132) )
      {
        v46 = v20;
        v36 = sub_168B9E0((_QWORD *)v20);
        v39 = v46;
        v40 = v36;
        v41 = *(_QWORD *)(v46 + 16);
        if ( v41 )
        {
          v54 = v40;
          v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
          v40 = v54;
          v39 = v46;
        }
        v57[0] = v41;
        v55 = v39;
        v42 = sub_1587BC0(v40, v57, v40, v39, v37, v38);
        sub_AEC220((unsigned __int8 **)(*v42 + 32LL * *(unsigned int *)(v55 + 128) + 8), v45, v44);
        v21 = v55;
      }
      v56 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0;
      v50 = sub_1588370(v21, (unsigned int *)&v56);
      sub_9EC740((__int64)v57, a6, v45, v18, 0);
      sub_1589170(v50, v57);
      if ( v58 != &v59 )
        operator delete(v58);
      sub_15F7200(v60);
      v22 = *(_QWORD **)(a2 + 8);
      v23 = &v22[*(unsigned int *)(a2 + 16)];
      if ( v23 != v22 )
      {
        while ( 1 )
        {
          sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), *(_DWORD *)((*v22 & 0xFFFFFFFFFFFFFFF8LL) + 24), 0x66u, 0);
          if ( v63 )
            break;
          if ( v65 )
          {
            v30 = sub_168B9E0(v60);
            v34 = v61;
            if ( v61 )
            {
              v52 = v30;
              v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
              v30 = v52;
            }
            v57[0] = v34;
            v35 = sub_1587BC0(v30, v57, v30, v31, v32, v33);
            sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v64 + 8), *a5, 5u);
            goto LABEL_24;
          }
LABEL_21:
          ++v22;
          sub_15F7200(v60);
          if ( v23 == v22 )
            goto LABEL_7;
        }
        sub_AE9DF0(v62, *a5, 5u);
LABEL_24:
        if ( v63 )
        {
          sub_AEC220(v62, v45, v44);
        }
        else if ( v65 )
        {
          v24 = sub_168B9E0(v60);
          v28 = v61;
          if ( v61 )
          {
            v51 = v24;
            v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
            v24 = v51;
          }
          v57[0] = v28;
          v29 = sub_1587BC0(v24, v57, v24, v25, v26, v27);
          sub_AEC220((unsigned __int8 **)(*v29 + 32LL * v64 + 8), v45, v44);
        }
        goto LABEL_21;
      }
LABEL_7:
      v16 = *(void **)(a2 + 88);
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 16) = 0;
      if ( v16 )
        sub_1A39780(v16);
      *(_BYTE *)(a2 + 166) = 0;
      v12 = 1;
      *(_DWORD *)(a2 + 152) = 1;
      *(_OWORD *)(a2 + 88) = 0;
      sub_1A395A0(a2);
      sub_1A5D3E0(a1, a2, a3, a4, 0, 0, 0);
    }
  }
  sub_169D230((__int64)&v66);
  return v12;
}
