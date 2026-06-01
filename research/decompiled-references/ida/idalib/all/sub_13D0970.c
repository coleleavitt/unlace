void __fastcall sub_13D0970(__int64 a1, unsigned int a2, __int64 (__fastcall **a3)(), int a4)
{
  unsigned __int8 *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r12
  void *v17; // rdi
  void *ptr; // [rsp+10h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-D0h]
  __int64 v22; // [rsp+28h] [rbp-C0h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+30h] [rbp-B8h] BYREF
  int v24; // [rsp+38h] [rbp-B0h]
  __int128 v25; // [rsp+40h] [rbp-A8h]
  __int64 v26; // [rsp+50h] [rbp-98h]
  char v27; // [rsp+58h] [rbp-90h]
  int v28; // [rsp+5Ch] [rbp-8Ch]
  void **p_ptr; // [rsp+60h] [rbp-88h]
  unsigned __int8 *v30; // [rsp+70h] [rbp-78h] BYREF
  __int64 v31; // [rsp+78h] [rbp-70h]

  sub_FC70B0((__int64)&v30, a1, (int)a3, 1225);
  ptr = &v22;
  v24 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA520);
  v25 = 0;
  v23 = &off_2BEBEE0;
  v27 = 0;
  v28 = 1;
  v26 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v23, 0, 0, 0);
  sub_2232DC0(&v23, a2, 0, 4, 1);
  v23 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v23);
  sub_AEC220(&v30, ptr, si128.m128i_i64[0]);
  v4 = v30;
  if ( v30 )
  {
    v5 = *((unsigned int *)v30 + 106);
    v6 = *((unsigned int *)v30 + 107);
    v7 = v5 + 1;
  }
  else
  {
    v10 = v31;
    v11 = *(_DWORD *)(v31 + 14976);
    if ( v11 )
    {
      v13 = (unsigned int)(v11 - 1);
      *(_DWORD *)(v31 + 14976) = v13;
      v4 = *(unsigned __int8 **)(v10 + 8 * v13 + 14848);
      v14 = *((unsigned int *)v4 + 134);
      *v4 = 0;
      v15 = *((_QWORD *)v4 + 66);
      *((_DWORD *)v4 + 106) = 0;
      v16 = v15 + (v14 << 6);
      if ( v15 == v16 )
      {
        v7 = 1;
        v5 = 0;
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
              goto LABEL_14;
          }
        }
        while ( v15 != v16 );
LABEL_14:
        v5 = *((unsigned int *)v4 + 106);
        v7 = v5 + 1;
      }
      *((_DWORD *)v4 + 134) = 0;
      v6 = *((unsigned int *)v4 + 107);
    }
    else
    {
      v12 = operator new(0x3A0u);
      v6 = 8;
      v7 = 1;
      v4 = (unsigned __int8 *)v12;
      *(_BYTE *)v12 = 0;
      *(_QWORD *)(v12 + 96) = v12 + 112;
      *(_QWORD *)(v12 + 128) = v12 + 144;
      *(_QWORD *)(v12 + 160) = v12 + 176;
      *(_QWORD *)(v12 + 192) = v12 + 208;
      *(_QWORD *)(v12 + 224) = v12 + 240;
      *(_QWORD *)(v12 + 256) = v12 + 272;
      *(_QWORD *)(v12 + 288) = v12 + 304;
      *(_QWORD *)(v12 + 320) = v12 + 336;
      *(_QWORD *)(v12 + 352) = v12 + 368;
      *(_QWORD *)(v12 + 384) = v12 + 400;
      *(_QWORD *)(v12 + 416) = v12 + 432;
      *(_QWORD *)(v12 + 104) = 0;
      *(_BYTE *)(v12 + 112) = 0;
      *(_QWORD *)(v12 + 136) = 0;
      *(_BYTE *)(v12 + 144) = 0;
      *(_QWORD *)(v12 + 168) = 0;
      *(_BYTE *)(v12 + 176) = 0;
      *(_QWORD *)(v12 + 200) = 0;
      *(_BYTE *)(v12 + 208) = 0;
      *(_QWORD *)(v12 + 232) = 0;
      *(_BYTE *)(v12 + 240) = 0;
      *(_QWORD *)(v12 + 264) = 0;
      *(_BYTE *)(v12 + 272) = 0;
      *(_QWORD *)(v12 + 296) = 0;
      *(_BYTE *)(v12 + 304) = 0;
      *(_QWORD *)(v12 + 328) = 0;
      *(_BYTE *)(v12 + 336) = 0;
      *(_QWORD *)(v12 + 360) = 0;
      *(_BYTE *)(v12 + 368) = 0;
      *(_QWORD *)(v12 + 392) = 0;
      *(_BYTE *)(v12 + 400) = 0;
      *(_QWORD *)(v12 + 424) = 0x800000000LL;
      *(_QWORD *)(v12 + 528) = v12 + 544;
      *(_QWORD *)(v12 + 536) = 0x600000000LL;
      v5 = 0;
    }
    v30 = v4;
  }
  v23 = a3;
  v24 = a4;
  if ( v7 > v6 )
  {
    sub_2237220(v4 + 416, v4 + 432, v7, 12);
    v5 = *((unsigned int *)v4 + 106);
  }
  v8 = *((_QWORD *)v4 + 52) + 12 * v5;
  *(_QWORD *)v8 = v23;
  v9 = (__int64 *)ptr;
  *(_DWORD *)(v8 + 8) = v24;
  ++*((_DWORD *)v4 + 106);
  if ( v9 != &v22 )
    free(v9);
  sub_AEA040((__int64)&v30);
}
