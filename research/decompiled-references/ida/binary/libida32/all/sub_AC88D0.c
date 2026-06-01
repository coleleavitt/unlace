__int64 __fastcall sub_AC88D0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rbp
  void *v16; // rdi
  __int64 v17; // [rsp+4h] [rbp-34h]
  int v18; // [rsp+Ch] [rbp-2Ch]

  v3 = *a1;
  if ( *a1 )
  {
    v4 = *(unsigned int *)(v3 + 424);
    v5 = *(unsigned int *)(v3 + 428);
    v6 = v4 + 1;
  }
  else
  {
    v8 = a1[1];
    v10 = *(_DWORD *)(v8 + 14976);
    if ( v10 )
    {
      v12 = (unsigned int)(v10 - 1);
      *(_DWORD *)(v8 + 14976) = v12;
      v3 = *(_QWORD *)(v8 + 8 * v12 + 14848);
      v13 = *(unsigned int *)(v3 + 536);
      *(_BYTE *)v3 = 0;
      v14 = *(_QWORD *)(v3 + 528);
      *(_DWORD *)(v3 + 424) = 0;
      v15 = v14 + (v13 << 6);
      if ( v14 == v15 )
      {
        v6 = 1;
        v4 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v15 -= 64;
            v16 = *(void **)(v15 + 24);
            if ( v16 == (void *)(v15 + 40) )
              break;
            operator delete(v16);
            if ( v14 == v15 )
              goto LABEL_12;
          }
        }
        while ( v14 != v15 );
LABEL_12:
        v4 = *(unsigned int *)(v3 + 424);
        v6 = v4 + 1;
      }
      *(_DWORD *)(v3 + 536) = 0;
      v5 = *(unsigned int *)(v3 + 428);
    }
    else
    {
      v11 = operator new(0x3A0u);
      v5 = 8;
      v6 = 1;
      v3 = v11;
      *(_BYTE *)v11 = 0;
      *(_QWORD *)(v11 + 96) = v11 + 112;
      *(_QWORD *)(v11 + 128) = v11 + 144;
      *(_QWORD *)(v11 + 160) = v11 + 176;
      *(_QWORD *)(v11 + 192) = v11 + 208;
      *(_QWORD *)(v11 + 224) = v11 + 240;
      *(_QWORD *)(v11 + 256) = v11 + 272;
      *(_QWORD *)(v11 + 288) = v11 + 304;
      *(_QWORD *)(v11 + 320) = v11 + 336;
      *(_QWORD *)(v11 + 352) = v11 + 368;
      *(_QWORD *)(v11 + 384) = v11 + 400;
      *(_QWORD *)(v11 + 416) = v11 + 432;
      *(_QWORD *)(v11 + 104) = 0;
      *(_BYTE *)(v11 + 112) = 0;
      *(_QWORD *)(v11 + 136) = 0;
      *(_BYTE *)(v11 + 144) = 0;
      *(_QWORD *)(v11 + 168) = 0;
      *(_BYTE *)(v11 + 176) = 0;
      *(_QWORD *)(v11 + 200) = 0;
      *(_BYTE *)(v11 + 208) = 0;
      *(_QWORD *)(v11 + 232) = 0;
      *(_BYTE *)(v11 + 240) = 0;
      *(_QWORD *)(v11 + 264) = 0;
      *(_BYTE *)(v11 + 272) = 0;
      *(_QWORD *)(v11 + 296) = 0;
      *(_BYTE *)(v11 + 304) = 0;
      *(_QWORD *)(v11 + 328) = 0;
      *(_BYTE *)(v11 + 336) = 0;
      *(_QWORD *)(v11 + 360) = 0;
      *(_BYTE *)(v11 + 368) = 0;
      *(_QWORD *)(v11 + 392) = 0;
      *(_BYTE *)(v11 + 400) = 0;
      *(_QWORD *)(v11 + 424) = 0x800000000LL;
      *(_QWORD *)(v11 + 528) = v11 + 544;
      *(_QWORD *)(v11 + 536) = 0x600000000LL;
      v4 = 0;
    }
    *a1 = v3;
  }
  v17 = *a2;
  v18 = *((_DWORD *)a2 + 2);
  if ( v6 > v5 )
  {
    sub_22134E0(v3 + 416, v3 + 432, v6, 12);
    v4 = *(unsigned int *)(v3 + 424);
  }
  result = *(_QWORD *)(v3 + 416) + 12 * v4;
  *(_QWORD *)result = v17;
  *(_DWORD *)(result + 8) = v18;
  ++*(_DWORD *)(v3 + 424);
  return result;
}

