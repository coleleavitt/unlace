__int64 __fastcall sub_1585F70(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  void *v8; // rax
  _BYTE *v9; // r14
  signed __int64 v10; // rbp
  __int64 result; // rax
  __int64 v12; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  void *v17; // rbp
  unsigned __int64 v18; // r13
  __int64 v19; // r15
  void *v20; // rdi
  int v21; // ebx
  __int64 v22; // rbx
  __int64 v23; // r15
  void *v24; // rdi
  int v25; // ebx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rbx
  void *v31; // rdi
  _DWORD v32[16]; // [rsp+8h] [rbp-40h] BYREF

  v2 = a2;
  v3 = *a1;
  if ( *a1 )
  {
    v4 = *(unsigned int *)(v3 + 536);
    v5 = *(_QWORD *)(v3 + 528);
    v6 = v4 + 1;
    v7 = v5 + (v4 << 6);
    if ( v6 <= *(unsigned int *)(v3 + 540) )
      goto LABEL_3;
    goto LABEL_17;
  }
  v12 = a1[1];
  v14 = *(_DWORD *)(v12 + 14976);
  if ( v14 )
  {
    v27 = (unsigned int)(v14 - 1);
    *(_DWORD *)(v12 + 14976) = v27;
    v3 = *(_QWORD *)(v12 + 8 * v27 + 14848);
    v28 = *(unsigned int *)(v3 + 536);
    v29 = *(_QWORD *)(v3 + 528);
    *(_BYTE *)v3 = 0;
    *(_DWORD *)(v3 + 424) = 0;
    v30 = v29 + (v28 << 6);
    while ( v29 != v30 )
    {
      while ( 1 )
      {
        v30 -= 64;
        v31 = *(void **)(v30 + 24);
        if ( v31 == (void *)(v30 + 40) )
          break;
        operator delete(v31);
        if ( v29 == v30 )
          goto LABEL_29;
      }
    }
LABEL_29:
    *(_DWORD *)(v3 + 536) = 0;
    v16 = *(unsigned int *)(v3 + 540);
  }
  else
  {
    v15 = operator new(0x3A0u);
    v16 = 6;
    v3 = v15;
    *(_BYTE *)v15 = 0;
    *(_QWORD *)(v15 + 96) = v15 + 112;
    *(_QWORD *)(v15 + 128) = v15 + 144;
    *(_QWORD *)(v15 + 160) = v15 + 176;
    *(_QWORD *)(v15 + 192) = v15 + 208;
    *(_QWORD *)(v15 + 224) = v15 + 240;
    *(_QWORD *)(v15 + 256) = v15 + 272;
    *(_QWORD *)(v15 + 288) = v15 + 304;
    *(_QWORD *)(v15 + 320) = v15 + 336;
    *(_QWORD *)(v15 + 352) = v15 + 368;
    *(_QWORD *)(v15 + 384) = v15 + 400;
    *(_QWORD *)(v15 + 416) = v15 + 432;
    *(_QWORD *)(v15 + 104) = 0;
    *(_BYTE *)(v15 + 112) = 0;
    *(_QWORD *)(v15 + 136) = 0;
    *(_BYTE *)(v15 + 144) = 0;
    *(_QWORD *)(v15 + 168) = 0;
    *(_BYTE *)(v15 + 176) = 0;
    *(_QWORD *)(v15 + 200) = 0;
    *(_BYTE *)(v15 + 208) = 0;
    *(_QWORD *)(v15 + 232) = 0;
    *(_BYTE *)(v15 + 240) = 0;
    *(_QWORD *)(v15 + 264) = 0;
    *(_BYTE *)(v15 + 272) = 0;
    *(_QWORD *)(v15 + 296) = 0;
    *(_BYTE *)(v15 + 304) = 0;
    *(_QWORD *)(v15 + 328) = 0;
    *(_BYTE *)(v15 + 336) = 0;
    *(_QWORD *)(v15 + 360) = 0;
    *(_BYTE *)(v15 + 368) = 0;
    *(_QWORD *)(v15 + 392) = 0;
    *(_BYTE *)(v15 + 400) = 0;
    *(_QWORD *)(v15 + 424) = 0x800000000LL;
    *(_QWORD *)(v15 + 528) = v15 + 544;
    *(_QWORD *)(v15 + 536) = 0x600000000LL;
  }
  *a1 = v3;
  v5 = *(_QWORD *)(v3 + 528);
  v6 = 1;
  v7 = v5;
  if ( !v16 )
  {
LABEL_17:
    v17 = (void *)(v3 + 544);
    if ( v5 > a2 || v7 <= a2 )
    {
      v23 = sub_2237400(v3 + 528, v3 + 544, v6, 64, v32);
      sub_9EF810((__int64 *)(v3 + 528), v23);
      v24 = *(void **)(v3 + 528);
      v25 = v32[0];
      if ( v24 != v17 )
        free(v24);
      *(_DWORD *)(v3 + 540) = v25;
      v26 = *(unsigned int *)(v3 + 536);
      *(_QWORD *)(v3 + 528) = v23;
      v7 = v23 + (v26 << 6);
    }
    else
    {
      v18 = a2 - v5;
      v19 = sub_2237400(v3 + 528, v3 + 544, v6, 64, v32);
      sub_9EF810((__int64 *)(v3 + 528), v19);
      v20 = *(void **)(v3 + 528);
      v21 = v32[0];
      if ( v20 != v17 )
        free(v20);
      *(_DWORD *)(v3 + 540) = v21;
      v22 = *(unsigned int *)(v3 + 536);
      v2 = v19 + v18;
      *(_QWORD *)(v3 + 528) = v19;
      v7 = v19 + (v22 << 6);
    }
  }
LABEL_3:
  *(_QWORD *)v7 = *(_QWORD *)v2;
  *(_DWORD *)(v7 + 8) = *(_DWORD *)(v2 + 8);
  *(_QWORD *)(v7 + 12) = *(_QWORD *)(v2 + 12);
  *(_DWORD *)(v7 + 20) = *(_DWORD *)(v2 + 20);
  v8 = (void *)(v7 + 40);
  *(_QWORD *)(v7 + 24) = v7 + 40;
  v9 = *(_BYTE **)(v2 + 24);
  v10 = *(_QWORD *)(v2 + 32);
  if ( &v9[v10] && !v9 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v10 > 0xF )
  {
    if ( v10 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v8 = (void *)operator new(v10 + 1);
    *(_QWORD *)(v7 + 40) = v10;
    *(_QWORD *)(v7 + 24) = v8;
    goto LABEL_13;
  }
  if ( v10 != 1 )
  {
    if ( !v10 )
      goto LABEL_8;
LABEL_13:
    memcpy(v8, v9, v10);
    v8 = *(void **)(v7 + 24);
    goto LABEL_8;
  }
  *(_BYTE *)(v7 + 40) = *v9;
LABEL_8:
  *(_QWORD *)(v7 + 32) = v10;
  *((_BYTE *)v8 + v10) = 0;
  result = *(unsigned __int8 *)(v2 + 56);
  *(_BYTE *)(v7 + 56) = result;
  ++*(_DWORD *)(v3 + 536);
  return result;
}
