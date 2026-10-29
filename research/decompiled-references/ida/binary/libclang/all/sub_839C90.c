__int64 __fastcall sub_839C90(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rbp
  void *v12; // rdi
  __int64 v13; // [rsp+4h] [rbp-34h]
  int v14; // [rsp+Ch] [rbp-2Ch]

  v2 = *a1;
  if ( !*a1 )
  {
    v5 = a1[1];
    v7 = *(_DWORD *)(v5 + 14976);
    if ( v7 )
    {
      v8 = (unsigned int)(v7 - 1);
      *(_DWORD *)(v5 + 14976) = v8;
      v2 = *(_QWORD *)(v5 + 8 * v8 + 14848);
      v9 = *(unsigned int *)(v2 + 536);
      *(_BYTE *)v2 = 0;
      v10 = *(_QWORD *)(v2 + 528);
      *(_DWORD *)(v2 + 424) = 0;
      v11 = v10 + (v9 << 6);
      while ( v10 != v11 )
      {
        while ( 1 )
        {
          v11 -= 64;
          v12 = *(void **)(v11 + 24);
          if ( v12 == (void *)(v11 + 40) )
            break;
          operator delete(v12, *(_QWORD *)(v11 + 40) + 1LL);
          if ( v10 == v11 )
            goto LABEL_10;
        }
      }
LABEL_10:
      *(_DWORD *)(v2 + 536) = 0;
    }
    else
    {
      v2 = operator new(0x3A0u);
      *(_BYTE *)v2 = 0;
      *(_QWORD *)(v2 + 96) = v2 + 112;
      *(_QWORD *)(v2 + 128) = v2 + 144;
      *(_QWORD *)(v2 + 160) = v2 + 176;
      *(_QWORD *)(v2 + 192) = v2 + 208;
      *(_QWORD *)(v2 + 224) = v2 + 240;
      *(_QWORD *)(v2 + 256) = v2 + 272;
      *(_QWORD *)(v2 + 288) = v2 + 304;
      *(_QWORD *)(v2 + 320) = v2 + 336;
      *(_QWORD *)(v2 + 352) = v2 + 368;
      *(_QWORD *)(v2 + 384) = v2 + 400;
      *(_QWORD *)(v2 + 104) = 0;
      *(_BYTE *)(v2 + 112) = 0;
      *(_QWORD *)(v2 + 136) = 0;
      *(_BYTE *)(v2 + 144) = 0;
      *(_QWORD *)(v2 + 168) = 0;
      *(_BYTE *)(v2 + 176) = 0;
      *(_QWORD *)(v2 + 200) = 0;
      *(_BYTE *)(v2 + 208) = 0;
      *(_QWORD *)(v2 + 232) = 0;
      *(_BYTE *)(v2 + 240) = 0;
      *(_QWORD *)(v2 + 264) = 0;
      *(_BYTE *)(v2 + 272) = 0;
      *(_QWORD *)(v2 + 296) = 0;
      *(_BYTE *)(v2 + 304) = 0;
      *(_QWORD *)(v2 + 328) = 0;
      *(_BYTE *)(v2 + 336) = 0;
      *(_QWORD *)(v2 + 360) = 0;
      *(_BYTE *)(v2 + 368) = 0;
      *(_QWORD *)(v2 + 392) = 0;
      *(_BYTE *)(v2 + 400) = 0;
      *(_QWORD *)(v2 + 416) = v2 + 432;
      *(_QWORD *)(v2 + 424) = 0x800000000LL;
      *(_QWORD *)(v2 + 528) = v2 + 544;
      *(_QWORD *)(v2 + 536) = 0x600000000LL;
    }
    *a1 = v2;
  }
  v13 = *a2;
  v14 = *((_DWORD *)a2 + 2);
  v3 = *(unsigned int *)(v2 + 424);
  if ( *(unsigned int *)(v2 + 428) < (unsigned __int64)(v3 + 1) )
  {
    sub_25D6060(v2 + 416, v2 + 432, v3 + 1, 12);
    v3 = *(unsigned int *)(v2 + 424);
  }
  result = *(_QWORD *)(v2 + 416) + 12 * v3;
  *(_QWORD *)result = v13;
  *(_DWORD *)(result + 8) = v14;
  ++*(_DWORD *)(v2 + 424);
  return result;
}

