__int64 __fastcall sub_CEB030(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // r15
  void *v17; // rdi
  void **v18; // r15
  void **v19; // rbx
  __int64 (__fastcall **v21)(); // [rsp+8h] [rbp-330h]
  __int64 (__fastcall **v22)(); // [rsp+10h] [rbp-328h] BYREF
  __int64 v23; // [rsp+18h] [rbp-320h]
  __int64 v24; // [rsp+20h] [rbp-318h]
  unsigned int v25; // [rsp+28h] [rbp-310h]
  __int64 v26; // [rsp+30h] [rbp-308h]
  __int64 v27; // [rsp+38h] [rbp-300h]
  unsigned int v28; // [rsp+40h] [rbp-2F8h]
  int v29; // [rsp+48h] [rbp-2F0h]
  char v30; // [rsp+4Ch] [rbp-2ECh]
  void **v31; // [rsp+50h] [rbp-2E8h]
  __int64 v32; // [rsp+58h] [rbp-2E0h]
  _QWORD v33[39]; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v34; // [rsp+198h] [rbp-1A0h]
  __int64 v35; // [rsp+1A0h] [rbp-198h]
  unsigned int v36; // [rsp+1A8h] [rbp-190h]
  __int64 v37; // [rsp+1B0h] [rbp-188h]
  __int64 v38; // [rsp+1B8h] [rbp-180h]
  unsigned int v39; // [rsp+1C0h] [rbp-178h]
  void *v40; // [rsp+1C8h] [rbp-170h]
  __int64 v41; // [rsp+1D0h] [rbp-168h]
  __int64 v42; // [rsp+1D8h] [rbp-160h]
  void *v43; // [rsp+1E0h] [rbp-158h]
  __int64 v44; // [rsp+1E8h] [rbp-150h]
  __int64 v45; // [rsp+1F0h] [rbp-148h]
  __int64 v46; // [rsp+1F8h] [rbp-140h]
  __int64 v47; // [rsp+200h] [rbp-138h]
  __int64 v48; // [rsp+208h] [rbp-130h]
  __int64 v49; // [rsp+210h] [rbp-128h]
  unsigned int v50; // [rsp+218h] [rbp-120h]
  __int64 v51; // [rsp+220h] [rbp-118h]
  __int64 v52; // [rsp+228h] [rbp-110h]
  unsigned int v53; // [rsp+230h] [rbp-108h]
  __int64 v54; // [rsp+238h] [rbp-100h]
  char v55; // [rsp+248h] [rbp-F0h]
  __int64 v56; // [rsp+250h] [rbp-E8h]
  __int16 v57; // [rsp+258h] [rbp-E0h]
  char v58; // [rsp+25Ah] [rbp-DEh]
  __int64 v59; // [rsp+260h] [rbp-D8h]
  void *ptr; // [rsp+268h] [rbp-D0h]
  __int64 v61; // [rsp+270h] [rbp-C8h]
  _BYTE v62[64]; // [rsp+278h] [rbp-C0h] BYREF
  __int64 v63; // [rsp+2B8h] [rbp-80h]
  __int64 v64; // [rsp+2C0h] [rbp-78h]
  unsigned int v65; // [rsp+2C8h] [rbp-70h]
  __int64 v66; // [rsp+2D0h] [rbp-68h]
  char v67; // [rsp+2DCh] [rbp-5Ch]
  __int64 v68; // [rsp+2E0h] [rbp-58h]
  char v69; // [rsp+2ECh] [rbp-4Ch]
  char v70; // [rsp+2F4h] [rbp-44h]
  __int64 v71; // [rsp+2F8h] [rbp-40h]

  v9 = 0;
  v10 = sub_CE9650(a1, a3, a3, a4, a5, a6);
  if ( v10 )
  {
    v12 = v10;
    v13 = *(_QWORD *)(a1 + 24);
    v23 = 0;
    v31 = (void **)v33;
    v32 = 0x200000000LL;
    v33[37] = v13;
    v47 = v13;
    v22 = &off_2C04B38;
    v21 = &off_2C04B38;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v33[36] = a1;
    v33[38] = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = nullptr;
    v41 = 0;
    v42 = 0;
    v43 = nullptr;
    v44 = 0;
    v45 = 0;
    v46 = a1;
    v48 = 0;
    v49 = 0;
    v57 = 0;
    v61 = 0x300000000LL;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v58 = 0;
    v59 = 0;
    ptr = v62;
    v62[48] = 0;
    v62[56] = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    sub_CAD320(&v22, a3, v10, v11);
    v22 = &off_2C04B38;
    operator delete(v63, 16LL * v65, 8);
    if ( ptr != v62 )
      free(ptr);
    operator delete(v51, 16LL * v53, 8);
    operator delete(v48, 24LL * v50, 8);
    v22 = (__int64 (__fastcall **)())&unk_2C04AF0;
    if ( v43 )
      operator delete(v43);
    if ( v40 )
      operator delete(v40);
    v14 = v37;
    v15 = 48LL * v39;
    if ( v39 )
    {
      v16 = v37 + 48LL * v39;
      do
      {
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)v14 + 2) > 1 )
          {
            v17 = *(void **)(v14 + 8);
            if ( v17 != (void *)(v14 + 24) )
              break;
          }
          v14 += 48;
          if ( v16 == v14 )
            goto LABEL_14;
        }
        free(v17);
        v14 += 48;
      }
      while ( v16 != v14 );
LABEL_14:
      v14 = v37;
      v15 = 48LL * v39;
    }
    operator delete(v14, v15, 8);
    operator delete(v34, 8LL * v36, 4);
    v18 = v31;
    v19 = &v31[18 * (unsigned int)v32];
    if ( v31 != v19 )
    {
      do
      {
        while ( 1 )
        {
          v19 -= 18;
          if ( *v19 == v19 + 2 )
            break;
          free(*v19);
          if ( v18 == v19 )
            goto LABEL_18;
        }
      }
      while ( v18 != v19 );
LABEL_18:
      v19 = v31;
    }
    if ( v19 != v33 )
      free(v19);
    operator delete(v26, 16LL * v28, 8);
    operator delete(v23, 16LL * v25, 8);
    ++*(_DWORD *)(a1 + 32);
    sub_E21AD0(&v22, a2, *(_QWORD *)(a1 + 24), a1 + 8, a1, v12);
    v9 = sub_E0F910(&v22);
    if ( (_BYTE)v9 )
    {
      sub_E22730(&v22);
      if ( (*(_BYTE *)(v12 + 504) & 1) == 0 )
        LOBYTE(v9) = *(_DWORD *)(v12 + 8) == 3;
    }
    else
    {
      sub_E22730(&v22);
      sub_E215D0(a1 + 8);
    }
  }
  return v9;
}
