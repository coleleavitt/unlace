__int64 __fastcall sub_14E15D0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r14
  char *v3; // r13
  __int64 v4; // r12
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v9; // edx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r13
  int v13; // eax
  unsigned __int8 *v14; // rbx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned __int8 *v17; // rbx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  void **v20; // r12
  unsigned __int64 v21; // rax
  void **v22; // r13
  void **v23; // rbx
  void **v24; // rdi
  void **v25; // rdi
  void **v26; // rbx
  void **v27; // r13
  unsigned __int64 v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // r13
  void *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r14
  __int64 v41; // r13
  void *v42; // rdi
  void *v43; // [rsp+8h] [rbp-128h] BYREF
  unsigned int v44; // [rsp+10h] [rbp-120h]
  char v45; // [rsp+14h] [rbp-11Ch]
  void *v46; // [rsp+18h] [rbp-118h] BYREF
  unsigned __int64 v47; // [rsp+20h] [rbp-110h]
  __int64 v48; // [rsp+28h] [rbp-108h]
  void *v49; // [rsp+38h] [rbp-F8h]
  __int64 v50; // [rsp+48h] [rbp-E8h] BYREF
  __int16 v51; // [rsp+58h] [rbp-D8h]
  __m128 v52[4]; // [rsp+68h] [rbp-C8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-80h]
  _BYTE v54[104]; // [rsp+C8h] [rbp-68h] BYREF

  v1 = *(_QWORD **)(a1 + 80);
  v2 = v1[8];
  v3 = (char *)v1[7];
  v4 = v1[11];
  v5 = v1[6];
  v6 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v4, (__int64)v3, v2, nullptr, nullptr);
  sub_13E2260(v52, *(unsigned __int8 **)(a1 + 96), *(_QWORD *)(a1 + 104), v6, v4, v3, v2, v5);
  if ( (v54[32] & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v44 = 32;
    v43 = nullptr;
    v45 = 1;
    if ( (unsigned __int8)sub_13E3040((__int64)v52, &v43) )
    {
      v11 = *(_QWORD **)(a1 + 80);
      v12 = v11[6];
      v13 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v11[11], v11[7], v11[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v46, v12, v13, 1689);
      v14 = (unsigned __int8 *)v46;
      if ( !v46 )
      {
        v30 = v47;
        v31 = *(_DWORD *)(v47 + 14976);
        if ( v31 )
        {
          v38 = (unsigned int)(v31 - 1);
          *(_DWORD *)(v47 + 14976) = v38;
          v14 = *(unsigned __int8 **)(v30 + 8 * v38 + 14848);
          v39 = *((unsigned int *)v14 + 134);
          *v14 = 0;
          v40 = *((_QWORD *)v14 + 66);
          *((_DWORD *)v14 + 106) = 0;
          v41 = v40 + (v39 << 6);
          while ( v40 != v41 )
          {
            while ( 1 )
            {
              v41 -= 64;
              v42 = *(void **)(v41 + 24);
              if ( v42 == (void *)(v41 + 40) )
                break;
              operator delete(v42);
              if ( v40 == v41 )
                goto LABEL_61;
            }
          }
LABEL_61:
          *((_DWORD *)v14 + 134) = 0;
        }
        else
        {
          v14 = (unsigned __int8 *)operator new(0x3A0u);
          *v14 = 0;
          *((_QWORD *)v14 + 12) = v14 + 112;
          *((_QWORD *)v14 + 16) = v14 + 144;
          *((_QWORD *)v14 + 20) = v14 + 176;
          *((_QWORD *)v14 + 24) = v14 + 208;
          *((_QWORD *)v14 + 28) = v14 + 240;
          *((_QWORD *)v14 + 32) = v14 + 272;
          *((_QWORD *)v14 + 36) = v14 + 304;
          *((_QWORD *)v14 + 40) = v14 + 336;
          *((_QWORD *)v14 + 44) = v14 + 368;
          *((_QWORD *)v14 + 48) = v14 + 400;
          *((_QWORD *)v14 + 52) = v14 + 432;
          *((_QWORD *)v14 + 13) = 0;
          v14[112] = 0;
          *((_QWORD *)v14 + 17) = 0;
          v14[144] = 0;
          *((_QWORD *)v14 + 21) = 0;
          v14[176] = 0;
          *((_QWORD *)v14 + 25) = 0;
          v14[208] = 0;
          *((_QWORD *)v14 + 29) = 0;
          v14[240] = 0;
          *((_QWORD *)v14 + 33) = 0;
          v14[272] = 0;
          *((_QWORD *)v14 + 37) = 0;
          v14[304] = 0;
          *((_QWORD *)v14 + 41) = 0;
          v14[336] = 0;
          *((_QWORD *)v14 + 45) = 0;
          v14[368] = 0;
          *((_QWORD *)v14 + 49) = 0;
          v14[400] = 0;
          *((_QWORD *)v14 + 53) = 0x800000000LL;
          *((_QWORD *)v14 + 66) = v14 + 544;
          *((_QWORD *)v14 + 67) = 0x600000000LL;
        }
        v46 = v14;
      }
      v14[*v14 + 1] = 2;
      v15 = v46;
      v16 = *(unsigned __int8 *)v46;
      *(_BYTE *)v46 = v16 + 1;
      v17 = (unsigned __int8 *)v46;
      v15[v16 + 2] = 0;
      if ( !v17 )
      {
        v28 = v47;
        v29 = *(_DWORD *)(v47 + 14976);
        if ( v29 )
        {
          v33 = (unsigned int)(v29 - 1);
          *(_DWORD *)(v47 + 14976) = v33;
          v17 = *(unsigned __int8 **)(v28 + 8 * v33 + 14848);
          v34 = *((unsigned int *)v17 + 134);
          *v17 = 0;
          v35 = *((_QWORD *)v17 + 66);
          *((_DWORD *)v17 + 106) = 0;
          v36 = v35 + (v34 << 6);
          while ( v35 != v36 )
          {
            while ( 1 )
            {
              v36 -= 64;
              v37 = *(void **)(v36 + 24);
              if ( v37 == (void *)(v36 + 40) )
                break;
              operator delete(v37);
              if ( v35 == v36 )
                goto LABEL_56;
            }
          }
LABEL_56:
          *((_DWORD *)v17 + 134) = 0;
        }
        else
        {
          v17 = (unsigned __int8 *)operator new(0x3A0u);
          *v17 = 0;
          *((_QWORD *)v17 + 12) = v17 + 112;
          *((_QWORD *)v17 + 16) = v17 + 144;
          *((_QWORD *)v17 + 20) = v17 + 176;
          *((_QWORD *)v17 + 24) = v17 + 208;
          *((_QWORD *)v17 + 28) = v17 + 240;
          *((_QWORD *)v17 + 32) = v17 + 272;
          *((_QWORD *)v17 + 36) = v17 + 304;
          *((_QWORD *)v17 + 40) = v17 + 336;
          *((_QWORD *)v17 + 44) = v17 + 368;
          *((_QWORD *)v17 + 48) = v17 + 400;
          *((_QWORD *)v17 + 52) = v17 + 432;
          *((_QWORD *)v17 + 13) = 0;
          v17[112] = 0;
          *((_QWORD *)v17 + 17) = 0;
          v17[144] = 0;
          *((_QWORD *)v17 + 21) = 0;
          v17[176] = 0;
          *((_QWORD *)v17 + 25) = 0;
          v17[208] = 0;
          *((_QWORD *)v17 + 29) = 0;
          v17[240] = 0;
          *((_QWORD *)v17 + 33) = 0;
          v17[272] = 0;
          *((_QWORD *)v17 + 37) = 0;
          v17[304] = 0;
          *((_QWORD *)v17 + 41) = 0;
          v17[336] = 0;
          *((_QWORD *)v17 + 45) = 0;
          v17[368] = 0;
          *((_QWORD *)v17 + 49) = 0;
          v17[400] = 0;
          *((_QWORD *)v17 + 53) = 0x800000000LL;
          *((_QWORD *)v17 + 66) = v17 + 544;
          *((_QWORD *)v17 + 67) = 0x600000000LL;
        }
        v46 = v17;
      }
      v17[*v17 + 1] = 2;
      v18 = v46;
      v19 = *(unsigned __int8 *)v46;
      *(_BYTE *)v46 = v19 + 1;
      v18[v19 + 2] = 0;
      if ( (_BYTE)v51 )
      {
        sub_FC7790(v48, (__int64 *)&v46, SHIBYTE(v51));
        v48 = 0;
        v51 = 0;
      }
      if ( v49 != &v50 )
        operator delete(v49);
      v20 = (void **)v46;
      if ( v46 )
      {
        v21 = v47;
        if ( v47 )
        {
          if ( (unsigned __int64)v46 >= v47 && (unsigned __int64)v46 <= v47 + 14848 )
          {
            v32 = *(unsigned int *)(v47 + 14976);
            *(_DWORD *)(v47 + 14976) = v32 + 1;
            *(_QWORD *)(v21 + 8 * v32 + 14848) = v20;
          }
          else
          {
            v22 = *((void ***)v46 + 66);
            v23 = &v22[8 * (unsigned __int64)*((unsigned int *)v46 + 134)];
            if ( v22 != v23 )
            {
              do
              {
                while ( 1 )
                {
                  v23 -= 8;
                  v24 = (void **)v23[3];
                  if ( v24 == v23 + 5 )
                    break;
                  operator delete(v24);
                  if ( v22 == v23 )
                    goto LABEL_30;
                }
              }
              while ( v22 != v23 );
LABEL_30:
              v23 = (void **)v20[66];
            }
            if ( v23 != v20 + 68 )
              free(v23);
            v25 = (void **)v20[52];
            if ( v25 != v20 + 54 )
              free(v25);
            v26 = v20 + 48;
            v27 = v20 + 8;
            do
            {
              while ( *v26 != v26 + 2 )
              {
                operator delete(*v26);
                v26 -= 4;
                if ( v27 == v26 )
                  goto LABEL_38;
              }
              v26 -= 4;
            }
            while ( v26 != v27 );
LABEL_38:
            operator delete(v20, 0x3A0u);
          }
        }
      }
      v7 = 0;
      v9 = v44;
    }
    else
    {
      v9 = v44;
      if ( v45 )
      {
        LODWORD(v10) = (_DWORD)v43;
        if ( v44 > 0x40 )
          v10 = *(_QWORD *)v43;
      }
      else if ( v44 > 0x40 )
      {
        LODWORD(v10) = *(_DWORD *)v43;
      }
      else
      {
        LODWORD(v10) = 0;
        if ( v44 )
          v10 = (__int64)((_QWORD)v43 << (64 - (unsigned __int8)v44)) >> (64 - (unsigned __int8)v44);
      }
      v7 = (unsigned int)v10 | 0x100000000LL;
    }
    if ( v9 > 0x40 && v43 )
      operator delete[](v43);
  }
  if ( ptr != v54 )
    free(ptr);
  return v7;
}
