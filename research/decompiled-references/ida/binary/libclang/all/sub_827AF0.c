__int64 __fastcall sub_827AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r12
  void *v14; // rdi
  int v15; // [rsp+8h] [rbp-30h]

  v3 = (__int64 *)sub_A2E130(a1, a2, a3, 0);
  result = sub_AC7B80(a2);
  if ( v3 )
  {
    v5 = *v3;
    v6 = result;
    if ( !*v3 )
    {
      v8 = v3[1];
      v9 = *(_DWORD *)(v8 + 14976);
      if ( v9 )
      {
        v10 = (unsigned int)(v9 - 1);
        *(_DWORD *)(v8 + 14976) = v10;
        v5 = *(_QWORD *)(v8 + 8 * v10 + 14848);
        v11 = *(unsigned int *)(v5 + 536);
        *(_BYTE *)v5 = 0;
        v12 = *(_QWORD *)(v5 + 528);
        *(_DWORD *)(v5 + 424) = 0;
        v13 = v12 + (v11 << 6);
        while ( v12 != v13 )
        {
          while ( 1 )
          {
            v13 -= 64;
            v14 = *(void **)(v13 + 24);
            if ( v14 == (void *)(v13 + 40) )
              break;
            operator delete(v14, *(_QWORD *)(v13 + 40) + 1LL);
            if ( v12 == v13 )
              goto LABEL_12;
          }
        }
LABEL_12:
        *(_DWORD *)(v5 + 536) = 0;
      }
      else
      {
        v5 = operator new(0x3A0u);
        *(_BYTE *)v5 = 0;
        *(_QWORD *)(v5 + 96) = v5 + 112;
        *(_QWORD *)(v5 + 128) = v5 + 144;
        *(_QWORD *)(v5 + 160) = v5 + 176;
        *(_QWORD *)(v5 + 192) = v5 + 208;
        *(_QWORD *)(v5 + 224) = v5 + 240;
        *(_QWORD *)(v5 + 256) = v5 + 272;
        *(_QWORD *)(v5 + 288) = v5 + 304;
        *(_QWORD *)(v5 + 320) = v5 + 336;
        *(_QWORD *)(v5 + 352) = v5 + 368;
        *(_QWORD *)(v5 + 384) = v5 + 400;
        *(_QWORD *)(v5 + 104) = 0;
        *(_BYTE *)(v5 + 112) = 0;
        *(_QWORD *)(v5 + 136) = 0;
        *(_BYTE *)(v5 + 144) = 0;
        *(_QWORD *)(v5 + 168) = 0;
        *(_BYTE *)(v5 + 176) = 0;
        *(_QWORD *)(v5 + 200) = 0;
        *(_BYTE *)(v5 + 208) = 0;
        *(_QWORD *)(v5 + 232) = 0;
        *(_BYTE *)(v5 + 240) = 0;
        *(_QWORD *)(v5 + 264) = 0;
        *(_BYTE *)(v5 + 272) = 0;
        *(_QWORD *)(v5 + 296) = 0;
        *(_BYTE *)(v5 + 304) = 0;
        *(_QWORD *)(v5 + 328) = 0;
        *(_BYTE *)(v5 + 336) = 0;
        *(_QWORD *)(v5 + 360) = 0;
        *(_BYTE *)(v5 + 368) = 0;
        *(_QWORD *)(v5 + 392) = 0;
        *(_BYTE *)(v5 + 400) = 0;
        *(_QWORD *)(v5 + 416) = v5 + 432;
        *(_QWORD *)(v5 + 424) = 0x800000000LL;
        *(_QWORD *)(v5 + 528) = v5 + 544;
        *(_QWORD *)(v5 + 536) = 0x600000000LL;
      }
      *v3 = v5;
    }
    v7 = *(unsigned int *)(v5 + 424);
    LOBYTE(v15) = 1;
    if ( *(unsigned int *)(v5 + 428) < (unsigned __int64)(v7 + 1) )
    {
      sub_25D6060(v5 + 416, v5 + 432, v7 + 1, 12);
      v7 = *(unsigned int *)(v5 + 424);
    }
    result = *(_QWORD *)(v5 + 416) + 12 * v7;
    *(_QWORD *)result = v6;
    *(_DWORD *)(result + 8) = v15;
    ++*(_DWORD *)(v5 + 424);
  }
  return result;
}

