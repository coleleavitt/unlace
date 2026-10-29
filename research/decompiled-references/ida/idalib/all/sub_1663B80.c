void __fastcall sub_1663B80(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 (*v11)(void); // rax
  __int64 v12; // rax
  void **v13; // rbp
  unsigned __int64 v14; // rax
  void **v15; // rdx
  void **v16; // r15
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // r15
  void **v20; // rbp
  unsigned __int64 v21; // rax
  void **v22; // rdx
  void **v23; // r15
  void **v24; // rdi
  void **v25; // rdi
  void **v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rdx
  char v29; // al
  void **v30; // [rsp+0h] [rbp-A8h]
  void **v31; // [rsp+0h] [rbp-A8h]
  void **v32; // [rsp+0h] [rbp-A8h]
  void **v33; // [rsp+0h] [rbp-A8h]
  char v34[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-80h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  void *v38; // [rsp+40h] [rbp-68h]
  unsigned __int64 v39; // [rsp+48h] [rbp-60h]
  int v40; // [rsp+50h] [rbp-58h]
  char v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v2 = *(_QWORD **)(a2 + 8);
  v3 = &v2[*(unsigned int *)(a2 + 16)];
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *v2 & 3LL;
        if ( (*v2 & 3) != 0 )
          break;
LABEL_3:
        if ( v3 == ++v2 )
          return;
      }
      v7 = *(_QWORD *)(a2 + 104);
      v8 = *v2 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = *(_QWORD *)(a2 + 96);
      v35 = v8;
      v37 = v7;
      v36 = v9;
      v40 = 0;
      v34[0] = v6 | v34[0] & 0xFC | 4;
      v10 = a1[31];
      v38 = nullptr;
      v39 = v10 + 2448;
      if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        break;
      v29 = sub_B72F20(v8);
      v8 = v35;
      v42 = 0;
      v41 = v29 & 1 | v41 & 0xFC;
      if ( (v34[0] & 4) != 0 )
        goto LABEL_7;
LABEL_8:
      v43 = v8;
      v11 = *(__int64 (**)(void))(*(_QWORD *)v8 + 32LL);
      if ( (char *)v11 == (char *)sub_A01140 )
        v12 = sub_B70A60(v8);
      else
        v12 = v11();
      v13 = (void **)v38;
      v43 = v12;
      v40 = 2941;
      if ( v38 )
      {
        v14 = v39;
        if ( v39 )
        {
          if ( (unsigned __int64)v38 < v39 || (unsigned __int64)v38 > v39 + 14848 )
          {
            v15 = *((void ***)v38 + 66);
            v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v38 + 134)];
            if ( v15 != v16 )
            {
              do
              {
                while ( 1 )
                {
                  v16 -= 8;
                  v17 = (void **)v16[3];
                  if ( v17 == v16 + 5 )
                    break;
                  v30 = v15;
                  operator delete(v17);
                  v15 = v30;
                  if ( v30 == v16 )
                    goto LABEL_16;
                }
              }
              while ( v15 != v16 );
LABEL_16:
              v16 = (void **)v13[66];
            }
            if ( v16 != v13 + 68 )
              free(v16);
            v18 = (void **)v13[52];
            v19 = v13 + 52;
            if ( v18 != v13 + 54 )
              free(v18);
            v31 = v13 + 12;
            do
            {
              while ( 1 )
              {
                v19 -= 4;
                if ( *v19 == v19 + 2 )
                  break;
                operator delete(*v19);
                if ( v19 == v31 )
                  goto LABEL_24;
              }
            }
            while ( v19 != v31 );
LABEL_24:
            operator delete(v13, 0x3A0u);
          }
          else
          {
            v28 = *(unsigned int *)(v39 + 14976);
            *(_DWORD *)(v39 + 14976) = v28 + 1;
            *(_QWORD *)(v14 + 8 * v28 + 14848) = v13;
          }
          v38 = nullptr;
        }
      }
      sub_165D180(a1, *(_DWORD *)(a2 + 128), (__int64)v34);
      v20 = (void **)v38;
      if ( !v38 )
        goto LABEL_3;
      v21 = v39;
      if ( !v39 )
        goto LABEL_3;
      if ( (unsigned __int64)v38 >= v39 && (unsigned __int64)v38 <= v39 + 14848 )
      {
        v27 = *(unsigned int *)(v39 + 14976);
        *(_DWORD *)(v39 + 14976) = v27 + 1;
        *(_QWORD *)(v21 + 8 * v27 + 14848) = v20;
        goto LABEL_3;
      }
      v22 = *((void ***)v38 + 66);
      v23 = &v22[8 * (unsigned __int64)*((unsigned int *)v38 + 134)];
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
            v32 = v22;
            operator delete(v24);
            v22 = v32;
            if ( v32 == v23 )
              goto LABEL_32;
          }
        }
        while ( v22 != v23 );
LABEL_32:
        v23 = (void **)v20[66];
      }
      if ( v23 != v20 + 68 )
        free(v23);
      v25 = (void **)v20[52];
      v26 = v20 + 52;
      if ( v25 != v20 + 54 )
        free(v25);
      v33 = v20 + 12;
      do
      {
        while ( 1 )
        {
          v26 -= 4;
          if ( *v26 == v26 + 2 )
            break;
          operator delete(*v26);
          if ( v26 == v33 )
            goto LABEL_40;
        }
      }
      while ( v26 != v33 );
LABEL_40:
      operator delete(v20, 0x3A0u);
      if ( v3 == ++v2 )
        return;
    }
    v41 &= 0xFCu;
    v42 = 0;
LABEL_7:
    v8 = sub_1654A20(v8);
    goto LABEL_8;
  }
}
