__int64 __fastcall sub_19D2A80(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r12
  void *v24; // rdi
  __int64 v25; // [rsp+8h] [rbp-40h] BYREF
  __int64 v26; // [rsp+14h] [rbp-34h]
  int v27; // [rsp+1Ch] [rbp-2Ch]

  v4 = sub_168B9E0((_QWORD *)a1);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 32LL))(*(_QWORD *)(a1 + 16));
  v25 = v7;
  v8 = sub_1587BC0(v4, &v25, v2, v3, v5, v6);
  v9 = *a2;
  v10 = *v8 + 32LL * *(unsigned int *)(a1 + 128);
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 + 424);
    v13 = *(unsigned int *)(v11 + 428);
    v26 = *a2;
    LOBYTE(v27) = 1;
    v14 = v12 + 1;
    if ( v12 + 1 <= v13 )
      goto LABEL_5;
LABEL_9:
    sub_2237220(v11 + 416, v11 + 432, v14, 12);
    v12 = *(unsigned int *)(v11 + 424);
    goto LABEL_5;
  }
  v16 = *(_QWORD *)(v10 + 16);
  v17 = *(_DWORD *)(v16 + 14976);
  if ( v17 )
  {
    v20 = (unsigned int)(v17 - 1);
    *(_DWORD *)(v16 + 14976) = v20;
    v11 = *(_QWORD *)(v16 + 8 * v20 + 14848);
    v21 = *(unsigned int *)(v11 + 536);
    *(_BYTE *)v11 = 0;
    v22 = *(_QWORD *)(v11 + 528);
    *(_DWORD *)(v11 + 424) = 0;
    v23 = v22 + (v21 << 6);
    if ( v22 == v23 )
    {
      v14 = 1;
      v12 = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v23 -= 64;
          v24 = *(void **)(v23 + 24);
          if ( v24 == (void *)(v23 + 40) )
            break;
          operator delete(v24);
          if ( v22 == v23 )
            goto LABEL_13;
        }
      }
      while ( v22 != v23 );
LABEL_13:
      v12 = *(unsigned int *)(v11 + 424);
      v14 = v12 + 1;
    }
    *(_DWORD *)(v11 + 536) = 0;
    v19 = *(unsigned int *)(v11 + 428);
  }
  else
  {
    v18 = operator new(0x3A0u);
    v19 = 8;
    v14 = 1;
    v11 = v18;
    *(_BYTE *)v18 = 0;
    *(_QWORD *)(v18 + 96) = v18 + 112;
    *(_QWORD *)(v18 + 128) = v18 + 144;
    *(_QWORD *)(v18 + 160) = v18 + 176;
    *(_QWORD *)(v18 + 192) = v18 + 208;
    *(_QWORD *)(v18 + 224) = v18 + 240;
    *(_QWORD *)(v18 + 256) = v18 + 272;
    *(_QWORD *)(v18 + 288) = v18 + 304;
    *(_QWORD *)(v18 + 320) = v18 + 336;
    *(_QWORD *)(v18 + 352) = v18 + 368;
    *(_QWORD *)(v18 + 384) = v18 + 400;
    *(_QWORD *)(v18 + 416) = v18 + 432;
    *(_QWORD *)(v18 + 104) = 0;
    *(_BYTE *)(v18 + 112) = 0;
    *(_QWORD *)(v18 + 136) = 0;
    *(_BYTE *)(v18 + 144) = 0;
    *(_QWORD *)(v18 + 168) = 0;
    *(_BYTE *)(v18 + 176) = 0;
    *(_QWORD *)(v18 + 200) = 0;
    *(_BYTE *)(v18 + 208) = 0;
    *(_QWORD *)(v18 + 232) = 0;
    *(_BYTE *)(v18 + 240) = 0;
    *(_QWORD *)(v18 + 264) = 0;
    *(_BYTE *)(v18 + 272) = 0;
    *(_QWORD *)(v18 + 296) = 0;
    *(_BYTE *)(v18 + 304) = 0;
    *(_QWORD *)(v18 + 328) = 0;
    *(_BYTE *)(v18 + 336) = 0;
    *(_QWORD *)(v18 + 360) = 0;
    *(_BYTE *)(v18 + 368) = 0;
    *(_QWORD *)(v18 + 392) = 0;
    *(_BYTE *)(v18 + 400) = 0;
    *(_QWORD *)(v18 + 424) = 0x800000000LL;
    *(_QWORD *)(v18 + 528) = v18 + 544;
    *(_QWORD *)(v18 + 536) = 0x600000000LL;
    v12 = 0;
  }
  *(_QWORD *)(v10 + 8) = v11;
  v26 = v9;
  LOBYTE(v27) = 1;
  if ( v14 > v19 )
    goto LABEL_9;
LABEL_5:
  result = *(_QWORD *)(v11 + 416) + 12 * v12;
  *(_QWORD *)result = v26;
  *(_DWORD *)(result + 8) = v27;
  ++*(_DWORD *)(v11 + 424);
  return result;
}
