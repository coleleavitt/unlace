__int64 __fastcall sub_C14610(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r12
  void *v18; // rdi
  __int64 v19; // rax
  int v20; // [rsp+Ch] [rbp-2Ch]

  v3 = (__int64 *)sub_E33C10(a1, a2, a3, 0);
  v4 = sub_EEC8C0(a2);
  if ( v3 )
  {
    v5 = *v3;
    v6 = v4;
    if ( *v3 )
    {
      v7 = *(unsigned int *)(v5 + 424);
      v8 = *(unsigned int *)(v5 + 428);
      v9 = v7 + 1;
    }
    else
    {
      v12 = v3[1];
      v13 = *(_DWORD *)(v12 + 14976);
      if ( v13 )
      {
        v14 = (unsigned int)(v13 - 1);
        *(_DWORD *)(v12 + 14976) = v14;
        v5 = *(_QWORD *)(v12 + 8 * v14 + 14848);
        v15 = *(unsigned int *)(v5 + 536);
        *(_BYTE *)v5 = 0;
        v16 = *(_QWORD *)(v5 + 528);
        *(_DWORD *)(v5 + 424) = 0;
        v17 = v16 + (v15 << 6);
        if ( v16 == v17 )
        {
          v9 = 1;
          v7 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v17 -= 64;
              v18 = *(void **)(v17 + 24);
              if ( v18 == (void *)(v17 + 40) )
                break;
              operator delete(v18);
              if ( v16 == v17 )
                goto LABEL_12;
            }
          }
          while ( v16 != v17 );
LABEL_12:
          v7 = *(unsigned int *)(v5 + 424);
          v9 = v7 + 1;
        }
        *(_DWORD *)(v5 + 536) = 0;
        v8 = *(unsigned int *)(v5 + 428);
      }
      else
      {
        v19 = operator new(0x3A0u);
        v8 = 8;
        v9 = 1;
        v5 = v19;
        *(_BYTE *)v19 = 0;
        *(_QWORD *)(v19 + 96) = v19 + 112;
        *(_QWORD *)(v19 + 128) = v19 + 144;
        *(_QWORD *)(v19 + 160) = v19 + 176;
        *(_QWORD *)(v19 + 192) = v19 + 208;
        *(_QWORD *)(v19 + 224) = v19 + 240;
        *(_QWORD *)(v19 + 256) = v19 + 272;
        *(_QWORD *)(v19 + 288) = v19 + 304;
        *(_QWORD *)(v19 + 320) = v19 + 336;
        *(_QWORD *)(v19 + 352) = v19 + 368;
        *(_QWORD *)(v19 + 384) = v19 + 400;
        *(_QWORD *)(v19 + 416) = v19 + 432;
        *(_QWORD *)(v19 + 104) = 0;
        *(_BYTE *)(v19 + 112) = 0;
        *(_QWORD *)(v19 + 136) = 0;
        *(_BYTE *)(v19 + 144) = 0;
        *(_QWORD *)(v19 + 168) = 0;
        *(_BYTE *)(v19 + 176) = 0;
        *(_QWORD *)(v19 + 200) = 0;
        *(_BYTE *)(v19 + 208) = 0;
        *(_QWORD *)(v19 + 232) = 0;
        *(_BYTE *)(v19 + 240) = 0;
        *(_QWORD *)(v19 + 264) = 0;
        *(_BYTE *)(v19 + 272) = 0;
        *(_QWORD *)(v19 + 296) = 0;
        *(_BYTE *)(v19 + 304) = 0;
        *(_QWORD *)(v19 + 328) = 0;
        *(_BYTE *)(v19 + 336) = 0;
        *(_QWORD *)(v19 + 360) = 0;
        *(_BYTE *)(v19 + 368) = 0;
        *(_QWORD *)(v19 + 392) = 0;
        *(_BYTE *)(v19 + 400) = 0;
        *(_QWORD *)(v19 + 424) = 0x800000000LL;
        *(_QWORD *)(v19 + 528) = v19 + 544;
        *(_QWORD *)(v19 + 536) = 0x600000000LL;
        v7 = 0;
      }
      *v3 = v5;
    }
    LOBYTE(v20) = 1;
    if ( v9 > v8 )
    {
      sub_2237220(v5 + 416, v5 + 432, v9, 12);
      v7 = *(unsigned int *)(v5 + 424);
    }
    v10 = *(_QWORD *)(v5 + 416) + 12 * v7;
    *(_QWORD *)v10 = v6;
    *(_DWORD *)(v10 + 8) = v20;
    ++*(_DWORD *)(v5 + 424);
  }
  return 0;
}
