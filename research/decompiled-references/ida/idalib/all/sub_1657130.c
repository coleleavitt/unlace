__int64 __fastcall sub_1657130(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 (*v9)(void); // rax
  __int64 v10; // r9
  __int64 v11; // r15
  char v12; // al
  unsigned int v13; // r13d
  unsigned int v14; // eax
  char v15; // r14
  __int64 v16; // rax
  __int64 v17; // r10
  unsigned int v18; // eax
  unsigned int v19; // r9d
  char v20; // al
  void **v22; // rax
  __int64 *v23; // rax
  void **v24; // rbp
  void **v25; // rdi
  void **v26; // r15
  __int64 v27; // [rsp+0h] [rbp-1B8h]
  int v28; // [rsp+Ch] [rbp-1ACh]
  __int64 v29; // [rsp+10h] [rbp-1A8h] BYREF
  void *v30[3]; // [rsp+18h] [rbp-1A0h] BYREF
  __int64 v31; // [rsp+30h] [rbp-188h]
  __int64 v32; // [rsp+38h] [rbp-180h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-178h]
  void *v34[2]; // [rsp+B8h] [rbp-100h] BYREF
  int v35; // [rsp+C8h] [rbp-F0h]
  char v36; // [rsp+CCh] [rbp-ECh]
  _QWORD v37[5]; // [rsp+D0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+F8h] [rbp-C0h]
  __int64 v39; // [rsp+100h] [rbp-B8h]
  _DWORD v40[26]; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+170h] [rbp-48h]
  __int16 v42; // [rsp+178h] [rbp-40h]
  char v43; // [rsp+17Ah] [rbp-3Eh]

  v5 = *(_QWORD *)(a3 + 16);
  v6 = v5;
  if ( (*(_BYTE *)(v5 + 75) & 1) != 0 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(sub_B8C1B0(v5 + 64) + 16);
      v8 = (v7 & 4) != 0 ? *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL) : v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v8 )
        break;
      v6 = v8 - 64;
      if ( (*(_BYTE *)(v8 + 11) & 1) == 0 )
        goto LABEL_8;
      v5 = v8 - 64;
    }
    v6 = 0;
  }
LABEL_8:
  v9 = *(__int64 (**)(void))(*(_QWORD *)v6 + 32LL);
  if ( (char *)v9 == (char *)sub_A01140 )
    v11 = sub_B70A60(v6);
  else
    v11 = v9();
  v12 = *(_BYTE *)a3;
  v13 = *(_BYTE *)a3 & 3;
  if ( v13 == 3 )
  {
LABEL_15:
    v15 = *(_BYTE *)(a3 + 56) & 1;
    if ( (v12 & 4) != 0 )
    {
      v16 = *(_QWORD *)(a3 + 8);
      v17 = *(_QWORD *)(a3 + 72);
      if ( ((*(_BYTE *)(v16 + 29) >> 5) & 3) != 0 )
      {
        v27 = *(_QWORD *)(a3 + 72);
        v28 = (*(_BYTE *)(v16 + 29) >> 5) & 3;
        v18 = sub_1656AA0(a1, a2, v27, (*(_BYTE *)(v16 + 29) >> 5) & 3, a3, (*(_BYTE *)(v16 + 29) >> 5) & 3);
        v17 = v27;
        v13 = v18;
        if ( v18 )
        {
          v19 = v28;
          if ( v18 == 2 )
          {
LABEL_19:
            v20 = *(_BYTE *)(a3 + 56);
LABEL_20:
            *(_BYTE *)(a3 + 56) = v20 & 0xFE | v15;
            return v13;
          }
          if ( v27 == v11 )
          {
            v13 = 1;
            goto LABEL_19;
          }
LABEL_25:
          v29 = 0;
          v30[2] = nullptr;
          v31 = 1;
          v30[1] = v30;
          v30[0] = v30;
          v22 = (void **)&v32;
          do
          {
            *v22 = nullptr;
            v22 += 2;
          }
          while ( v34 != v22 );
          v34[0] = v37;
          ptr = v40;
          v42 = 257;
          v34[1] = &byte_4;
          v35 = 0;
          v36 = 1;
          v37[4] = 0;
          v39 = 0x400000000LL;
          v40[24] = 0;
          v41 = 0;
          v43 = 1;
          v23 = sub_1656EB0(a1, a2, a3, v19, (__int64)&v29);
          if ( v23 )
            v13 = *((_DWORD *)v23 + 28) != 0;
          else
            v13 = 2;
          if ( ptr != v40 )
            free(ptr);
          if ( !v36 )
            free(v34[0]);
          if ( (v31 & 1) == 0 )
            operator delete(v32, 16LL * v33, 8);
          v24 = (void **)v30[0];
          if ( v30[0] != v30 )
          {
            while ( 1 )
            {
              v25 = (void **)v24[2];
              v26 = (void **)*v24;
              if ( v25 == v24 + 4 )
              {
                operator delete(v24);
                if ( v26 == v30 )
                  goto LABEL_19;
              }
              else
              {
                free(v25);
                operator delete(v24);
                if ( v26 == v30 )
                  goto LABEL_19;
              }
              v24 = v26;
            }
          }
          goto LABEL_19;
        }
      }
      v20 = *(_BYTE *)(a3 + 56) & 0xFE;
      *(_BYTE *)(a3 + 56) = v20;
      if ( v17 == v11 )
      {
        v13 = 0;
        goto LABEL_20;
      }
    }
    v19 = 0;
    goto LABEL_25;
  }
  if ( (*(_BYTE *)a3 & 3) != 0 )
  {
    v14 = sub_1656AA0(a1, a2, v11, *(_BYTE *)a3 & 3, a3, v10);
    v13 = v14;
    if ( v14 )
    {
      if ( v14 != 2 )
      {
        v12 = *(_BYTE *)a3;
        goto LABEL_15;
      }
    }
  }
  return v13;
}
