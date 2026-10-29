__int64 __fastcall sub_1583880(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  __int64 *v5; // r9
  __int64 *v6; // rbp
  __int64 *v7; // r13
  _BYTE *v8; // rsi
  __int64 *v9; // rax
  size_t v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 *v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rbp
  void *v24; // rdi
  _BYTE *v25; // rax
  _QWORD *v26; // r14
  _DWORD *v27; // rbp
  _QWORD *v28; // r12
  _QWORD *v29; // rbx
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  int v32; // r12d
  __int64 v33; // rbx
  __int64 v34; // rbp
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 *v37; // [rsp+0h] [rbp-68h]
  __int64 *v38; // [rsp+8h] [rbp-60h]
  __int64 v41[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a1 + 12) )
  {
    v2 = *(_QWORD **)a1;
    if ( *(_DWORD *)(a1 + 8) )
    {
      v3 = *(_QWORD *)(a2 + 8);
      v4 = v2[1];
      *(_DWORD *)v2 = *(_DWORD *)a2;
      *((_DWORD *)v2 + 6) = *(_DWORD *)(a2 + 24);
      if ( v3 )
      {
        v5 = (__int64 *)(v4 + 112);
        v37 = (__int64 *)(v4 + 432);
        if ( !v4 )
        {
          v18 = v2[2];
          v19 = *(_DWORD *)(v18 + 14976);
          if ( v19 )
          {
            v20 = (unsigned int)(v19 - 1);
            *(_DWORD *)(v18 + 14976) = v20;
            v4 = *(_QWORD *)(v18 + 8 * v20 + 14848);
            v21 = *(unsigned int *)(v4 + 536);
            *(_BYTE *)v4 = 0;
            v22 = *(_QWORD *)(v4 + 528);
            *(_DWORD *)(v4 + 424) = 0;
            v23 = v22 + (v21 << 6);
            while ( v22 != v23 )
            {
              while ( 1 )
              {
                v23 -= 64;
                v24 = *(void **)(v23 + 24);
                if ( v24 == (void *)(v23 + 40) )
                  break;
                operator delete(v24);
                if ( v22 == v23 )
                  goto LABEL_40;
              }
            }
LABEL_40:
            v5 = (__int64 *)(v4 + 112);
            *(_DWORD *)(v4 + 536) = 0;
            v37 = (__int64 *)(v4 + 432);
          }
          else
          {
            v25 = (_BYTE *)operator new(0x3A0u);
            v5 = (__int64 *)(v25 + 112);
            v4 = (unsigned __int64)v25;
            *v25 = 0;
            v25 += 144;
            *((_QWORD *)v25 - 6) = v5;
            *((_QWORD *)v25 - 5) = 0;
            *(v25 - 32) = 0;
            *(_QWORD *)(v4 + 128) = v25;
            *(_QWORD *)(v4 + 160) = v4 + 176;
            *(_QWORD *)(v4 + 192) = v4 + 208;
            *(_QWORD *)(v4 + 224) = v4 + 240;
            *(_QWORD *)(v4 + 256) = v4 + 272;
            *(_QWORD *)(v4 + 288) = v4 + 304;
            *(_QWORD *)(v4 + 320) = v4 + 336;
            *(_QWORD *)(v4 + 352) = v4 + 368;
            *(_QWORD *)(v4 + 384) = v4 + 400;
            v37 = (__int64 *)(v4 + 432);
            *(_QWORD *)(v4 + 136) = 0;
            *(_BYTE *)(v4 + 144) = 0;
            *(_QWORD *)(v4 + 168) = 0;
            *(_BYTE *)(v4 + 176) = 0;
            *(_QWORD *)(v4 + 200) = 0;
            *(_BYTE *)(v4 + 208) = 0;
            *(_QWORD *)(v4 + 232) = 0;
            *(_BYTE *)(v4 + 240) = 0;
            *(_QWORD *)(v4 + 264) = 0;
            *(_BYTE *)(v4 + 272) = 0;
            *(_QWORD *)(v4 + 296) = 0;
            *(_BYTE *)(v4 + 304) = 0;
            *(_QWORD *)(v4 + 328) = 0;
            *(_BYTE *)(v4 + 336) = 0;
            *(_QWORD *)(v4 + 360) = 0;
            *(_BYTE *)(v4 + 368) = 0;
            *(_QWORD *)(v4 + 392) = 0;
            *(_BYTE *)(v4 + 400) = 0;
            *(_QWORD *)(v4 + 416) = v4 + 432;
            *(_QWORD *)(v4 + 424) = 0x800000000LL;
            *(_QWORD *)(v4 + 528) = v4 + 544;
            *(_QWORD *)(v4 + 536) = 0x600000000LL;
          }
          v2[1] = v4;
          v3 = *(_QWORD *)(a2 + 8);
        }
        v6 = (__int64 *)(v3 + 96);
        v7 = v5;
        *(_BYTE *)v4 = *(_BYTE *)v3;
        *(_BYTE *)(v4 + 1) = *(_BYTE *)(v3 + 1);
        *(_BYTE *)(v4 + 2) = *(_BYTE *)(v3 + 2);
        *(_BYTE *)(v4 + 3) = *(_BYTE *)(v3 + 3);
        *(_BYTE *)(v4 + 4) = *(_BYTE *)(v3 + 4);
        *(_BYTE *)(v4 + 5) = *(_BYTE *)(v3 + 5);
        *(_BYTE *)(v4 + 6) = *(_BYTE *)(v3 + 6);
        *(_BYTE *)(v4 + 7) = *(_BYTE *)(v3 + 7);
        *(_BYTE *)(v4 + 8) = *(_BYTE *)(v3 + 8);
        *(_BYTE *)(v4 + 9) = *(_BYTE *)(v3 + 9);
        *(_BYTE *)(v4 + 10) = *(_BYTE *)(v3 + 10);
        *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 16);
        *(_QWORD *)(v4 + 24) = *(_QWORD *)(v3 + 24);
        *(_QWORD *)(v4 + 32) = *(_QWORD *)(v3 + 32);
        *(_QWORD *)(v4 + 40) = *(_QWORD *)(v3 + 40);
        *(_QWORD *)(v4 + 48) = *(_QWORD *)(v3 + 48);
        *(_QWORD *)(v4 + 56) = *(_QWORD *)(v3 + 56);
        *(_QWORD *)(v4 + 64) = *(_QWORD *)(v3 + 64);
        *(_QWORD *)(v4 + 72) = *(_QWORD *)(v3 + 72);
        *(_QWORD *)(v4 + 80) = *(_QWORD *)(v3 + 80);
        *(_QWORD *)(v4 + 88) = *(_QWORD *)(v3 + 88);
        do
        {
          if ( v6 != v7 - 2 )
          {
            v9 = (__int64 *)*(v7 - 2);
            v10 = v6[1];
            if ( v7 == v9 )
              v11 = 15;
            else
              v11 = *v7;
            if ( v10 > v11 )
            {
              if ( (v10 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_create");
              v12 = 2 * v11;
              if ( v10 < v12 )
              {
                v13 = v12 + 1;
                if ( v12 < 0 )
                {
                  v13 = 0x8000000000000000LL;
                  v12 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v13 = v10 + 1;
                v12 = v6[1];
              }
              v9 = (__int64 *)operator new(v13);
              v14 = (__int64 *)*(v7 - 2);
              if ( v7 != v14 )
              {
                v38 = v9;
                operator delete(v14);
                v9 = v38;
              }
              *(v7 - 2) = (__int64)v9;
              *v7 = v12;
            }
            if ( v10 )
            {
              v8 = (_BYTE *)*v6;
              if ( v10 == 1 )
                *(_BYTE *)v9 = *v8;
              else
                memcpy(v9, v8, v10);
              v9 = (__int64 *)*(v7 - 2);
            }
            *(v7 - 1) = v10;
            *((_BYTE *)v9 + v10) = 0;
          }
          v6 += 4;
          v7 += 4;
        }
        while ( v37 != v7 );
        sub_E32260((__int64 *)(v4 + 416), (__int64 *)(v3 + 416));
        sub_9EED30(v4 + 528, (__int64 *)(v3 + 528));
      }
      else if ( v4 )
      {
        v17 = v2[2];
        if ( v17 )
        {
          sub_1580C40(v17, v4);
          v2[1] = 0;
        }
      }
      v15 = *(unsigned int *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 8) )
      {
        if ( v15 != 1 )
        {
          v33 = *(_QWORD *)a1 + 32 * v15;
          v34 = *(_QWORD *)a1 + 32LL;
          while ( v34 != v33 )
          {
            v33 -= 32;
            v35 = *(_QWORD *)(v33 + 8);
            if ( v35 )
            {
              v36 = *(_QWORD *)(v33 + 16);
              if ( v36 )
                sub_1580C40(v36, v35);
            }
          }
        }
        goto LABEL_27;
      }
      v2 = *(_QWORD **)a1;
    }
    *(_DWORD *)v2 = *(_DWORD *)a2;
    sub_1582CA0((__int64)(v2 + 1), (_BYTE **)(a2 + 8));
LABEL_27:
    *(_DWORD *)(a1 + 8) = 1;
    return a1;
  }
  v26 = (_QWORD *)(a1 + 16);
  v27 = (_DWORD *)sub_2237400(a1, a1 + 16, 1, 32, v41);
  *v27 = *(_DWORD *)a2;
  sub_1582CA0((__int64)(v27 + 2), (_BYTE **)(a2 + 8));
  v28 = *(_QWORD **)a1;
  v29 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v29 )
  {
    do
    {
      v29 -= 4;
      v30 = v29[1];
      if ( v30 )
      {
        v31 = v29[2];
        if ( v31 )
          sub_1580C40(v31, v30);
      }
    }
    while ( v28 != v29 );
    v29 = *(_QWORD **)a1;
  }
  v32 = v41[0];
  if ( v26 != v29 )
    free(v29);
  *(_QWORD *)a1 = v27;
  *(_DWORD *)(a1 + 12) = v32;
  *(_DWORD *)(a1 + 8) = 1;
  return a1;
}
