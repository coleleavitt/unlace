__int64 __fastcall sub_14C23C0(__int64 *a1, __int64 a2, char a3, __m128i a4, double a5)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r12
  __int64 v12; // r15
  int v13; // ebp
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r14
  void *v37; // rdi
  __int64 v38; // [rsp+0h] [rbp-128h]
  __int64 v39; // [rsp+0h] [rbp-128h]
  __int64 v40; // [rsp+8h] [rbp-120h]
  __int64 v41; // [rsp+14h] [rbp-114h]
  int v42; // [rsp+1Ch] [rbp-10Ch]
  _DWORD v43[6]; // [rsp+20h] [rbp-108h] BYREF
  void *v44; // [rsp+38h] [rbp-F0h]
  __int64 v45; // [rsp+48h] [rbp-E0h] BYREF
  _DWORD v46[6]; // [rsp+60h] [rbp-C8h] BYREF
  void *v47; // [rsp+78h] [rbp-B0h]
  __int64 v48; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-80h]

  v6 = sub_14BFE70(*a1, a2, a4);
  v7 = sub_14BE680((const __m128i *)*a1, v6, 6, a4);
  v11 = v7;
  if ( v7 != 1 )
  {
    v12 = *a1;
    v13 = -(a3 == 0);
    v14 = v7 & 0xFFFFFFFFFFFFFFFELL;
    LOBYTE(v13) = v13 & 0x7D;
    v15 = sub_C00A40(v7 & 0xFFFFFFFFFFFFFFFELL, v6, v8, v9, v10);
    sub_1564820(&v49, v12, v15, (unsigned int)(v13 + 2057));
    v16 = sub_EEB7E0(v14, v12, *(double *)a4.m128i_i64);
    sub_9EC740((__int64)v43, v16, "(", 1, 0);
    if ( v43[0] && v43[1] )
      sub_14B8100(&v49, (unsigned __int64)v43);
    v17 = *(_QWORD *)(*a1 + 8);
    v18 = sub_EEC140(v14);
    v19 = sub_13DC060(v18, 0, *(__int64 **)(v17 + 88), *(_QWORD *)(v17 + 56), a4, a5);
    v20 = v19;
    sub_9EC740((__int64)v46, v19, ")", 1, 0);
    if ( v46[0] && v46[1] )
    {
      v20 = (__int64)v46;
      sub_14B8100(&v49, (unsigned __int64)v46);
    }
    v21 = sub_EEC8C0(v14, v20, *(double *)a4.m128i_i64);
    v22 = v49;
    v23 = v21;
    if ( v49 )
    {
      v24 = *(unsigned int *)(v49 + 424);
      v25 = *(unsigned int *)(v49 + 428);
      v26 = v24 + 1;
    }
    else
    {
      v30 = v50;
      v31 = *(_DWORD *)(v50 + 14976);
      if ( v31 )
      {
        v33 = (unsigned int)(v31 - 1);
        *(_DWORD *)(v50 + 14976) = v33;
        v22 = *(_QWORD *)(v30 + 8 * v33 + 14848);
        v34 = *(unsigned int *)(v22 + 536);
        *(_BYTE *)v22 = 0;
        v35 = *(_QWORD *)(v22 + 528);
        *(_DWORD *)(v22 + 424) = 0;
        v36 = v35 + (v34 << 6);
        if ( v35 == v36 )
        {
          v26 = 1;
          v24 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v36 -= 64;
              v37 = *(void **)(v36 + 24);
              if ( v37 == (void *)(v36 + 40) )
                break;
              v40 = v23;
              v39 = v35;
              operator delete(v37);
              v35 = v39;
              v23 = v40;
              if ( v39 == v36 )
                goto LABEL_24;
            }
          }
          while ( v35 != v36 );
LABEL_24:
          v24 = *(unsigned int *)(v22 + 424);
          v26 = v24 + 1;
        }
        *(_DWORD *)(v22 + 536) = 0;
        v25 = *(unsigned int *)(v22 + 428);
      }
      else
      {
        v38 = v23;
        v32 = operator new(0x3A0u);
        v25 = 8;
        v26 = 1;
        v22 = v32;
        *(_BYTE *)v32 = 0;
        *(_QWORD *)(v32 + 96) = v32 + 112;
        *(_QWORD *)(v32 + 128) = v32 + 144;
        *(_QWORD *)(v32 + 160) = v32 + 176;
        *(_QWORD *)(v32 + 192) = v32 + 208;
        *(_QWORD *)(v32 + 224) = v32 + 240;
        *(_QWORD *)(v32 + 256) = v32 + 272;
        *(_QWORD *)(v32 + 288) = v32 + 304;
        *(_QWORD *)(v32 + 320) = v32 + 336;
        *(_QWORD *)(v32 + 352) = v32 + 368;
        *(_QWORD *)(v32 + 384) = v32 + 400;
        *(_QWORD *)(v32 + 416) = v32 + 432;
        *(_QWORD *)(v32 + 104) = 0;
        *(_BYTE *)(v32 + 112) = 0;
        *(_QWORD *)(v32 + 136) = 0;
        *(_BYTE *)(v32 + 144) = 0;
        *(_QWORD *)(v32 + 168) = 0;
        *(_BYTE *)(v32 + 176) = 0;
        *(_QWORD *)(v32 + 200) = 0;
        *(_BYTE *)(v32 + 208) = 0;
        *(_QWORD *)(v32 + 232) = 0;
        *(_BYTE *)(v32 + 240) = 0;
        *(_QWORD *)(v32 + 264) = 0;
        *(_BYTE *)(v32 + 272) = 0;
        *(_QWORD *)(v32 + 296) = 0;
        *(_BYTE *)(v32 + 304) = 0;
        *(_QWORD *)(v32 + 328) = 0;
        *(_BYTE *)(v32 + 336) = 0;
        *(_QWORD *)(v32 + 360) = 0;
        *(_BYTE *)(v32 + 368) = 0;
        *(_QWORD *)(v32 + 392) = 0;
        *(_BYTE *)(v32 + 400) = 0;
        *(_QWORD *)(v32 + 424) = 0x800000000LL;
        v23 = v38;
        *(_QWORD *)(v32 + 528) = v32 + 544;
        *(_QWORD *)(v32 + 536) = 0x600000000LL;
        v24 = 0;
      }
      v49 = v22;
    }
    v41 = v23;
    LOBYTE(v42) = 1;
    if ( v26 > v25 )
    {
      sub_2237220(v22 + 416, v22 + 432, v26, 12);
      v24 = *(unsigned int *)(v22 + 424);
    }
    v27 = *(_QWORD *)(v22 + 416) + 12 * v24;
    *(_QWORD *)v27 = v41;
    *(_DWORD *)(v27 + 8) = v42;
    v28 = (__int64 *)v47;
    ++*(_DWORD *)(v22 + 424);
    if ( v28 != &v48 )
      operator delete(v28);
    if ( v44 != &v45 )
      operator delete(v44);
    sub_AEA040((__int64)&v49);
  }
  return v11;
}
