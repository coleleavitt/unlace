void __fastcall sub_186DCB0(__int64 a1, int a2, char *a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  size_t v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  char *v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // r15
  void *v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-60h]
  __int64 v34; // [rsp+10h] [rbp-50h] BYREF
  __int64 v35; // [rsp+1Ch] [rbp-44h] BYREF
  int v36; // [rsp+24h] [rbp-3Ch]

  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 128) )
    {
      LODWORD(v35) = a2;
      HIDWORD(v35) = a2;
      LOBYTE(v36) = 1;
      sub_AEC610((__int64 *)(a1 + 40), &v35);
    }
    else if ( *(_BYTE *)(a1 + 140) )
    {
      v17 = sub_168B9E0((_QWORD *)(a1 + 8));
      v18 = *(_QWORD *)(a1 + 24);
      if ( v18 )
        v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 32LL))(*(_QWORD *)(a1 + 24));
      v34 = v18;
      v19 = *sub_1587BC0(v17, &v34, v13, v14, v15, v16) + 32LL * *(unsigned int *)(a1 + 136);
      v20 = *(_QWORD *)(v19 + 8);
      if ( v20 )
      {
        v21 = *(unsigned int *)(v20 + 424);
        v22 = *(unsigned int *)(v20 + 428);
        v23 = v21 + 1;
      }
      else
      {
        v25 = *(_QWORD *)(v19 + 16);
        v26 = *(_DWORD *)(v25 + 14976);
        if ( v26 )
        {
          v28 = (unsigned int)(v26 - 1);
          *(_DWORD *)(v25 + 14976) = v28;
          v20 = *(_QWORD *)(v25 + 8 * v28 + 14848);
          v29 = *(unsigned int *)(v20 + 536);
          *(_BYTE *)v20 = 0;
          v30 = *(_QWORD *)(v20 + 528);
          *(_DWORD *)(v20 + 424) = 0;
          v31 = v30 + (v29 << 6);
          if ( v30 == v31 )
          {
            v23 = 1;
            v21 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v31 -= 64;
                v32 = *(void **)(v31 + 24);
                if ( v32 == (void *)(v31 + 40) )
                  break;
                v33 = v30;
                operator delete(v32);
                v30 = v33;
                if ( v33 == v31 )
                  goto LABEL_34;
              }
            }
            while ( v30 != v31 );
LABEL_34:
            v21 = *(unsigned int *)(v20 + 424);
            v23 = v21 + 1;
          }
          *(_DWORD *)(v20 + 536) = 0;
          v22 = *(unsigned int *)(v20 + 428);
        }
        else
        {
          v27 = operator new(0x3A0u);
          v22 = 8;
          v23 = 1;
          v20 = v27;
          *(_BYTE *)v27 = 0;
          *(_QWORD *)(v27 + 96) = v27 + 112;
          *(_QWORD *)(v27 + 128) = v27 + 144;
          *(_QWORD *)(v27 + 160) = v27 + 176;
          *(_QWORD *)(v27 + 192) = v27 + 208;
          *(_QWORD *)(v27 + 224) = v27 + 240;
          *(_QWORD *)(v27 + 256) = v27 + 272;
          *(_QWORD *)(v27 + 288) = v27 + 304;
          *(_QWORD *)(v27 + 320) = v27 + 336;
          *(_QWORD *)(v27 + 352) = v27 + 368;
          *(_QWORD *)(v27 + 384) = v27 + 400;
          *(_QWORD *)(v27 + 416) = v27 + 432;
          *(_QWORD *)(v27 + 104) = 0;
          *(_BYTE *)(v27 + 112) = 0;
          *(_QWORD *)(v27 + 136) = 0;
          *(_BYTE *)(v27 + 144) = 0;
          *(_QWORD *)(v27 + 168) = 0;
          *(_BYTE *)(v27 + 176) = 0;
          *(_QWORD *)(v27 + 200) = 0;
          *(_BYTE *)(v27 + 208) = 0;
          *(_QWORD *)(v27 + 232) = 0;
          *(_BYTE *)(v27 + 240) = 0;
          *(_QWORD *)(v27 + 264) = 0;
          *(_BYTE *)(v27 + 272) = 0;
          *(_QWORD *)(v27 + 296) = 0;
          *(_BYTE *)(v27 + 304) = 0;
          *(_QWORD *)(v27 + 328) = 0;
          *(_BYTE *)(v27 + 336) = 0;
          *(_QWORD *)(v27 + 360) = 0;
          *(_BYTE *)(v27 + 368) = 0;
          *(_QWORD *)(v27 + 392) = 0;
          *(_BYTE *)(v27 + 400) = 0;
          *(_QWORD *)(v27 + 424) = 0x800000000LL;
          *(_QWORD *)(v27 + 528) = v27 + 544;
          *(_QWORD *)(v27 + 536) = 0x600000000LL;
          v21 = 0;
        }
        *(_QWORD *)(v19 + 8) = v20;
      }
      LODWORD(v35) = a2;
      HIDWORD(v35) = a2;
      LOBYTE(v36) = 1;
      if ( v23 > v22 )
      {
        sub_2237220(v20 + 416, v20 + 432, v23, 12);
        v21 = *(unsigned int *)(v20 + 424);
      }
      v24 = *(_QWORD *)(v20 + 416) + 12 * v21;
      *(_QWORD *)v24 = v35;
      *(_DWORD *)(v24 + 8) = v36;
      ++*(_DWORD *)(v20 + 424);
    }
    v5 = *(_QWORD *)(a1 + 152);
    if ( v5 )
    {
      v12 = j__strlen(" ");
      if ( v12 > 0x7FFFFFFFFFFFFFFFLL - v5
        || (sub_9EE560((_QWORD *)(a1 + 144), " ", v12),
            v6 = strlen(a3),
            v7 = *(_QWORD *)(a1 + 152),
            0x7FFFFFFFFFFFFFFFLL - v7 < v6) )
      {
        std::__throw_length_error("basic_string::append");
      }
    }
    else
    {
      v6 = strlen(a3);
      v7 = 0;
    }
    v8 = *(_QWORD *)(a1 + 144);
    v9 = v6 + v7;
    if ( v8 == a1 + 160 )
      v10 = 15;
    else
      v10 = *(_QWORD *)(a1 + 160);
    if ( v9 > v10 )
    {
      sub_998B30(a1 + 144, v7, 0, a3, v6);
      v8 = *(_QWORD *)(a1 + 144);
    }
    else if ( v6 )
    {
      v11 = (char *)(v7 + v8);
      if ( v6 == 1 )
        *v11 = *a3;
      else
        memcpy(v11, a3, v6);
      v8 = *(_QWORD *)(a1 + 144);
    }
    *(_QWORD *)(a1 + 152) = v9;
    *(_BYTE *)(v8 + v9) = 0;
  }
}
