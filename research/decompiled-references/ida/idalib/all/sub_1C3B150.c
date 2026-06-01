__int64 __fastcall sub_1C3B150(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        double a6,
        double a7)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  int v18; // eax
  _QWORD *v19; // r14
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  void *v25; // rdi
  void **v26; // rax
  void **v27; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // [rsp+8h] [rbp-2F0h]
  void **v31; // [rsp+8h] [rbp-2F0h]
  _QWORD *v32; // [rsp+10h] [rbp-2E8h]
  void **v33; // [rsp+10h] [rbp-2E8h]
  _QWORD *v34; // [rsp+18h] [rbp-2E0h]
  __int64 v35; // [rsp+20h] [rbp-2D8h] BYREF
  __int64 v36; // [rsp+28h] [rbp-2D0h] BYREF
  __int64 v37[18]; // [rsp+30h] [rbp-2C8h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-238h] BYREF
  int v39; // [rsp+D0h] [rbp-228h]
  __int16 v40; // [rsp+D4h] [rbp-224h]
  __int64 v41; // [rsp+D8h] [rbp-220h]
  _QWORD *v42; // [rsp+E0h] [rbp-218h]
  __int64 v43; // [rsp+E8h] [rbp-210h]
  _QWORD v44[17]; // [rsp+F0h] [rbp-208h] BYREF
  __int64 v45; // [rsp+178h] [rbp-180h]
  __int64 v46; // [rsp+180h] [rbp-178h]
  __int64 v47; // [rsp+190h] [rbp-168h]
  __int64 v48; // [rsp+198h] [rbp-160h]
  int v49; // [rsp+1A8h] [rbp-150h]
  char v50; // [rsp+1ACh] [rbp-14Ch]
  void *v51; // [rsp+1B0h] [rbp-148h]
  __int64 v52; // [rsp+1B8h] [rbp-140h]
  _QWORD v53[10]; // [rsp+1C0h] [rbp-138h] BYREF
  void *v54; // [rsp+210h] [rbp-E8h]
  __int64 v55; // [rsp+218h] [rbp-E0h]
  _WORD v56[52]; // [rsp+220h] [rbp-D8h] BYREF
  void *ptr; // [rsp+288h] [rbp-70h]
  __int64 v58; // [rsp+290h] [rbp-68h]
  _BYTE v59[96]; // [rsp+298h] [rbp-60h] BYREF

  v11 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v11 && (*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v11 + 17) & 4) == 0 )
  {
    if ( a3 <= 1 )
    {
LABEL_42:
      sub_B88650(a2, 1);
      return 1;
    }
    a3 &= ~1uLL;
  }
  v35 = 0;
  if ( (*(_WORD *)a3 & 0x1FF) != 0x35
    && (v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v15 + 16) == 13)
    && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    sub_168B9F0((__int64)&v38, (__int64 *)(a1 + 8), a4, a5, 0);
    v37[0] = *(_QWORD *)(a3 + 8);
    sub_162B6D0((__int64)&v38, v37);
    sub_15F7200(&v38);
  }
  else
  {
    a6 = 0.0;
    v45 &= 0xFFFFFFFE00000000LL;
    v47 &= 0xFFFFFFFE00000000LL;
    v51 = v53;
    v54 = v56;
    v39 = sub_C00A40(a3, a2, v12, v13, v14);
    v56[48] = 0;
    v40 = 0;
    ptr = v59;
    v16 = *(_QWORD *)(a2 + 56);
    v42 = v44;
    v38 = 0;
    v41 = 0;
    v43 = 0x400000000LL;
    v44[16] = 0;
    v46 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v52 = 0x800000000LL;
    v53[8] = 0;
    v53[9] = 0;
    v55 = 0x400000000LL;
    v58 = 0x400000000LL;
    if ( (v16 & 4) != 0 )
      v17 = *(_QWORD **)((v16 & 0xFFFFFFFFFFFFFFF8LL) + 32);
    else
      v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    v18 = sub_1D79BF0(a1, *v17, (int)v17 + 8, a3, (unsigned int)&v35, (unsigned int)&v38, 0, 0, 0);
    if ( v18 && v18 != 18 )
    {
      sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a4, a5, 0);
      v36 = *(_QWORD *)(a3 + 8);
      sub_162B6D0((__int64)v37, &v36);
      sub_15F7200(v37);
    }
    if ( ptr != v59 )
      free(ptr);
    if ( v54 != v56 )
      free(v54);
    if ( v51 != v53 )
      free(v51);
    v34 = v42;
    v19 = &v42[4 * (unsigned int)v43];
    if ( v42 != v19 )
    {
      do
      {
        v19 -= 4;
        v20 = v19[1];
        if ( v20 )
        {
          v21 = v19[2];
          if ( v21 )
          {
            if ( v20 < v21 || v20 > v21 + 14848 )
            {
              v22 = *(_QWORD **)(v20 + 528);
              v23 = &v22[8 * (unsigned __int64)*(unsigned int *)(v20 + 536)];
              if ( v22 != v23 )
              {
                do
                {
                  while ( 1 )
                  {
                    v23 -= 8;
                    v24 = (_QWORD *)v23[3];
                    if ( v24 == v23 + 5 )
                      break;
                    v32 = v23;
                    v30 = v22;
                    operator delete(v24);
                    v22 = v30;
                    v23 = v32;
                    if ( v30 == v32 )
                      goto LABEL_24;
                  }
                }
                while ( v22 != v23 );
LABEL_24:
                v23 = *(_QWORD **)(v20 + 528);
              }
              if ( v23 != (_QWORD *)(v20 + 544) )
                free(v23);
              v25 = *(void **)(v20 + 416);
              if ( v25 != (void *)(v20 + 432) )
                free(v25);
              v26 = (void **)(v20 + 384);
              v27 = (void **)(v20 + 64);
              do
              {
                while ( *v26 != v26 + 2 )
                {
                  v33 = v27;
                  v31 = v26;
                  operator delete(*v26);
                  v27 = v33;
                  v26 = v31 - 4;
                  if ( v31 - 4 == v33 )
                    goto LABEL_32;
                }
                v26 -= 4;
              }
              while ( v26 != v27 );
LABEL_32:
              operator delete((void *)v20, 0x3A0u);
            }
            else
            {
              v29 = *(unsigned int *)(v21 + 14976);
              *(_DWORD *)(v21 + 14976) = v29 + 1;
              *(_QWORD *)(v21 + 8 * v29 + 14848) = v20;
            }
          }
        }
      }
      while ( v34 != v19 );
      v19 = v42;
    }
    if ( v19 != v44 )
      free(v19);
  }
  if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_42;
  *(_QWORD *)(a2 + 48) = v35;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0 )
  {
    if ( (unsigned __int8)sub_189F360(*(__int64 **)(a1 + 736), a2) )
      sub_B88650(a2, 1);
  }
  sub_17ED4C0(a1, a2, a3, 0, a6, a7);
  sub_17BF6B0(a1, a2, a6);
  sub_B8EA00(*(__m128i **)(a1 + 544), a2);
  return 0;
}
