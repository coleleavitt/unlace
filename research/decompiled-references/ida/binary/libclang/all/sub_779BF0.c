__int64 __fastcall sub_779BF0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rbx
  void *v7; // rdi
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 14976);
  if ( v1 )
  {
    v2 = (unsigned int)(v1 - 1);
    *(_DWORD *)(a1 + 14976) = v2;
    v3 = *(_QWORD *)(a1 + 8 * v2 + 14848);
    v4 = *(unsigned int *)(v3 + 536);
    *(_BYTE *)v3 = 0;
    v5 = *(_QWORD *)(v3 + 528);
    *(_DWORD *)(v3 + 424) = 0;
    v6 = v5 + (v4 << 6);
    while ( v5 != v6 )
    {
      while ( 1 )
      {
        v6 -= 64;
        v7 = *(void **)(v6 + 24);
        if ( v7 == (void *)(v6 + 40) )
          break;
        operator delete(v7, *(_QWORD *)(v6 + 40) + 1LL);
        if ( v5 == v6 )
          goto LABEL_6;
      }
    }
LABEL_6:
    *(_DWORD *)(v3 + 536) = 0;
    return v3;
  }
  else
  {
    result = operator new(0x3A0u);
    *(_BYTE *)result = 0;
    *(_QWORD *)(result + 96) = result + 112;
    *(_QWORD *)(result + 128) = result + 144;
    *(_QWORD *)(result + 160) = result + 176;
    *(_QWORD *)(result + 192) = result + 208;
    *(_QWORD *)(result + 224) = result + 240;
    *(_QWORD *)(result + 256) = result + 272;
    *(_QWORD *)(result + 288) = result + 304;
    *(_QWORD *)(result + 320) = result + 336;
    *(_QWORD *)(result + 352) = result + 368;
    *(_QWORD *)(result + 384) = result + 400;
    *(_QWORD *)(result + 104) = 0;
    *(_BYTE *)(result + 112) = 0;
    *(_QWORD *)(result + 136) = 0;
    *(_BYTE *)(result + 144) = 0;
    *(_QWORD *)(result + 168) = 0;
    *(_BYTE *)(result + 176) = 0;
    *(_QWORD *)(result + 200) = 0;
    *(_BYTE *)(result + 208) = 0;
    *(_QWORD *)(result + 232) = 0;
    *(_BYTE *)(result + 240) = 0;
    *(_QWORD *)(result + 264) = 0;
    *(_BYTE *)(result + 272) = 0;
    *(_QWORD *)(result + 296) = 0;
    *(_BYTE *)(result + 304) = 0;
    *(_QWORD *)(result + 328) = 0;
    *(_BYTE *)(result + 336) = 0;
    *(_QWORD *)(result + 360) = 0;
    *(_BYTE *)(result + 368) = 0;
    *(_QWORD *)(result + 392) = 0;
    *(_BYTE *)(result + 400) = 0;
    *(_QWORD *)(result + 416) = result + 432;
    *(_QWORD *)(result + 424) = 0x800000000LL;
    *(_QWORD *)(result + 528) = result + 544;
    *(_QWORD *)(result + 536) = 0x600000000LL;
  }
  return result;
}

