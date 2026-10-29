void __fastcall sub_13FD190(__int64 a1, _BYTE *a2, signed __int64 a3, _BYTE *a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 *v11; // r9
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r13
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 *v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // r14
  char *v23; // r15
  __int64 v24; // r12
  int v25; // r13d
  __int64 *v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r13
  void *v31; // rdi
  __int64 v32; // r12
  int v33; // r13d
  __int64 *v34; // rdi
  __int64 v35; // r13
  __int64 *v36; // [rsp+0h] [rbp-F8h]
  __int64 *v37; // [rsp+8h] [rbp-F0h]
  void *v38[2]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v39[16]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-C8h] BYREF
  char v41; // [rsp+38h] [rbp-C0h]
  __int64 v42; // [rsp+3Ch] [rbp-BCh]
  char v43; // [rsp+44h] [rbp-B4h]
  void *v44[2]; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v45[24]; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int8 *v46; // [rsp+70h] [rbp-88h] BYREF
  __int64 v47; // [rsp+78h] [rbp-80h]

  sub_FC70B0((__int64)&v46, *(_QWORD *)(a1 + 8), *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL), 1272);
  sub_AEC220(&v46, a2, a3);
  sub_AEC220(&v46, *(_BYTE **)a6, *(_QWORD *)(a6 + 8));
  v44[0] = v45;
  v42 = 0;
  v40 = a7;
  v43 = 0;
  v44[1] = nullptr;
  v45[0] = 0;
  v45[16] = 0;
  v41 = 1;
  v38[0] = v39;
  sub_13F28B0(v38, a4, (__int64)&a4[a5]);
  sub_A0AAD0((__int64)v44, v38);
  if ( v38[0] != v39 )
    operator delete(v38[0]);
  if ( (_DWORD)v40 && HIDWORD(v40) )
  {
    v11 = (__int64 *)v46;
    if ( v46 )
    {
      v12 = *((unsigned int *)v46 + 134);
      v13 = *((_QWORD *)v46 + 66);
      v14 = *((unsigned int *)v46 + 135);
      v15 = v12 + 1;
      v16 = v13 + (v12 << 6);
    }
    else
    {
      v20 = v47;
      v21 = *(_DWORD *)(v47 + 14976);
      if ( v21 )
      {
        v28 = (unsigned int)(v21 - 1);
        *(_DWORD *)(v47 + 14976) = v28;
        v11 = *(__int64 **)(v20 + 8 * v28 + 14848);
        v29 = *((unsigned int *)v11 + 134);
        *(_BYTE *)v11 = 0;
        v30 = v11[66];
        *((_DWORD *)v11 + 106) = 0;
        v13 = v30 + (v29 << 6);
        if ( v30 != v13 )
        {
          do
          {
            while ( 1 )
            {
              v13 -= 64LL;
              v31 = *(void **)(v13 + 24);
              if ( v31 == (void *)(v13 + 40) )
                break;
              v36 = v11;
              operator delete(v31);
              v11 = v36;
              if ( v30 == v13 )
                goto LABEL_23;
            }
          }
          while ( v30 != v13 );
LABEL_23:
          v13 = v11[66];
        }
        *((_DWORD *)v11 + 134) = 0;
        v14 = *((unsigned int *)v11 + 135);
      }
      else
      {
        v11 = (__int64 *)operator new(0x3A0u);
        *(_BYTE *)v11 = 0;
        v11[12] = (__int64)(v11 + 14);
        v13 = (unsigned __int64)(v11 + 68);
        v11[16] = (__int64)(v11 + 18);
        v11[20] = (__int64)(v11 + 22);
        v11[24] = (__int64)(v11 + 26);
        v11[28] = (__int64)(v11 + 30);
        v11[32] = (__int64)(v11 + 34);
        v11[36] = (__int64)(v11 + 38);
        v11[40] = (__int64)(v11 + 42);
        v11[44] = (__int64)(v11 + 46);
        v11[48] = (__int64)(v11 + 50);
        v11[52] = (__int64)(v11 + 54);
        v11[13] = 0;
        *((_BYTE *)v11 + 112) = 0;
        v11[17] = 0;
        *((_BYTE *)v11 + 144) = 0;
        v11[21] = 0;
        *((_BYTE *)v11 + 176) = 0;
        v11[25] = 0;
        *((_BYTE *)v11 + 208) = 0;
        v11[29] = 0;
        *((_BYTE *)v11 + 240) = 0;
        v11[33] = 0;
        *((_BYTE *)v11 + 272) = 0;
        v11[37] = 0;
        *((_BYTE *)v11 + 304) = 0;
        v11[41] = 0;
        *((_BYTE *)v11 + 336) = 0;
        v11[45] = 0;
        *((_BYTE *)v11 + 368) = 0;
        v11[49] = 0;
        *((_BYTE *)v11 + 400) = 0;
        v11[53] = 0x800000000LL;
        v11[66] = (__int64)(v11 + 68);
        v11[67] = 0x600000000LL;
        v14 = 6;
      }
      v46 = (unsigned __int8 *)v11;
      v16 = v13;
      v15 = 1;
    }
    v17 = &v40;
    if ( v15 > v14 )
    {
      v22 = v11 + 68;
      v37 = v11;
      if ( v13 > (unsigned __int64)&v40 || v16 <= (unsigned __int64)&v40 )
      {
        v36 = v11 + 66;
        v32 = sub_2237400(v11 + 66, v11 + 68, v15, 64, v38);
        sub_9EF810(v36, v32);
        v11 = v37;
        v33 = (int)v38[0];
        v34 = (__int64 *)v37[66];
        if ( v34 != v22 )
        {
          v36 = v37;
          free(v34);
          v11 = v37;
        }
        *((_DWORD *)v11 + 135) = v33;
        v35 = *((unsigned int *)v11 + 134);
        v17 = &v40;
        v11[66] = v32;
        v16 = v32 + (v35 << 6);
      }
      else
      {
        v36 = v11 + 66;
        v23 = (char *)&v40 - v13;
        v24 = sub_2237400(v11 + 66, v11 + 68, v15, 64, v38);
        sub_9EF810(v36, v24);
        v11 = v37;
        v25 = (int)v38[0];
        v26 = (__int64 *)v37[66];
        if ( v26 != v22 )
        {
          v36 = v37;
          free(v26);
          v11 = v37;
        }
        *((_DWORD *)v11 + 135) = v25;
        v27 = *((unsigned int *)v11 + 134);
        v17 = (__int64 *)&v23[v24];
        v11[66] = v24;
        v16 = v24 + (v27 << 6);
      }
    }
    v18 = *v17;
    v36 = v11;
    *(_QWORD *)v16 = v18;
    *(_DWORD *)(v16 + 8) = *((_DWORD *)v17 + 2);
    *(_QWORD *)(v16 + 12) = *(__int64 *)((char *)v17 + 12);
    *(_DWORD *)(v16 + 20) = *((_DWORD *)v17 + 5);
    *(_QWORD *)(v16 + 24) = v16 + 40;
    sub_13F27F0((_QWORD *)(v16 + 24), (_BYTE *)v17[3], v17[3] + v17[4]);
    v19 = v36;
    *(_BYTE *)(v16 + 56) = *((_BYTE *)v17 + 56);
    ++*((_DWORD *)v19 + 134);
  }
  if ( v44[0] != v45 )
    operator delete(v44[0]);
  sub_AEA040((__int64)&v46);
}
