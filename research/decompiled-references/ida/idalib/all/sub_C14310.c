__int64 __fastcall sub_C14310(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r12
  void *v17; // rdi
  __int64 v18; // rax
  int v19; // [rsp+Ch] [rbp-2Ch]

  v2 = (__int64 *)sub_E33C10(a1, a2, 108, 0);
  v3 = sub_EEC8C0(a2);
  if ( v2 )
  {
    v4 = *v2;
    v5 = v3;
    if ( *v2 )
    {
      v6 = *(unsigned int *)(v4 + 424);
      v7 = *(unsigned int *)(v4 + 428);
      v8 = v6 + 1;
    }
    else
    {
      v11 = v2[1];
      v12 = *(_DWORD *)(v11 + 14976);
      if ( v12 )
      {
        v13 = (unsigned int)(v12 - 1);
        *(_DWORD *)(v11 + 14976) = v13;
        v4 = *(_QWORD *)(v11 + 8 * v13 + 14848);
        v14 = *(unsigned int *)(v4 + 536);
        *(_BYTE *)v4 = 0;
        v15 = *(_QWORD *)(v4 + 528);
        *(_DWORD *)(v4 + 424) = 0;
        v16 = v15 + (v14 << 6);
        if ( v15 == v16 )
        {
          v8 = 1;
          v6 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v16 -= 64;
              v17 = *(void **)(v16 + 24);
              if ( v17 == (void *)(v16 + 40) )
                break;
              operator delete(v17);
              if ( v15 == v16 )
                goto LABEL_12;
            }
          }
          while ( v15 != v16 );
LABEL_12:
          v6 = *(unsigned int *)(v4 + 424);
          v8 = v6 + 1;
        }
        *(_DWORD *)(v4 + 536) = 0;
        v7 = *(unsigned int *)(v4 + 428);
      }
      else
      {
        v18 = operator new(0x3A0u);
        v7 = 8;
        v8 = 1;
        v4 = v18;
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
        v6 = 0;
      }
      *v2 = v4;
    }
    LOBYTE(v19) = 1;
    if ( v8 > v7 )
    {
      sub_2237220(v4 + 416, v4 + 432, v8, 12);
      v6 = *(unsigned int *)(v4 + 424);
    }
    v9 = *(_QWORD *)(v4 + 416) + 12 * v6;
    *(_QWORD *)v9 = v5;
    *(_DWORD *)(v9 + 8) = v19;
    ++*(_DWORD *)(v4 + 424);
  }
  return 0;
}
