__int64 __fastcall CoinFactorization::restoreFactorization(CoinFactorization *this, const char *filename, char a3)
{
  FILE *v4; // rax
  FILE *v5; // rbx
  int v7; // r14d
  int v8; // r15d
  void *v9; // rax
  int v10; // eax
  void *v11; // rax
  int v12; // eax
  void *v13; // rax
  int v14; // eax
  void *v15; // rax
  int v16; // eax
  void *v17; // rax
  int v18; // eax
  void *v19; // rax
  int v20; // eax
  void *v21; // rax
  int v22; // eax
  void *v23; // rax
  int v24; // eax
  void *v25; // rax
  int v26; // eax
  void *v27; // rax
  int v28; // eax
  void *v29; // rax
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  bool v50; // cc
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  void *v54; // rax
  int v55; // eax
  int ptr; // [rsp+4h] [rbp-D4h] BYREF
  __int64 v57; // [rsp+8h] [rbp-D0h]
  __int64 v58; // [rsp+10h] [rbp-C8h]
  __int64 v59; // [rsp+18h] [rbp-C0h]
  __int64 v60; // [rsp+20h] [rbp-B8h]
  __int64 v61; // [rsp+28h] [rbp-B0h]
  __int64 v62; // [rsp+30h] [rbp-A8h]
  __int64 v63; // [rsp+38h] [rbp-A0h]
  __int64 v64; // [rsp+40h] [rbp-98h]
  __int64 v65; // [rsp+48h] [rbp-90h]
  __int64 v66; // [rsp+50h] [rbp-88h]
  __int64 v67; // [rsp+58h] [rbp-80h]
  __int64 v68; // [rsp+60h] [rbp-78h]
  __int64 v69; // [rsp+68h] [rbp-70h]
  __int64 v70; // [rsp+70h] [rbp-68h]
  __int64 v71; // [rsp+78h] [rbp-60h]
  __int64 v72; // [rsp+80h] [rbp-58h]
  __int64 v73; // [rsp+88h] [rbp-50h]
  __int64 v74; // [rsp+90h] [rbp-48h]
  __int64 v75; // [rsp+98h] [rbp-40h]

  v4 = fopen(filename, "rb");
  if ( v4 )
  {
    v5 = v4;
    CoinFactorization::gutsOfDestructor(this, 1);
    ptr = 0;
    if ( fread(this, 0x484u, 1u, v5) != 1 )
      return 1;
    v7 = *((_DWORD *)this + 177);
    v8 = *((_DWORD *)this + 176);
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_123;
      v54 = (void *)operator new[](8LL * ptr);
      v55 = fread(v54, 8u, ptr, v5);
      if ( ptr != v55 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_123;
      v9 = (void *)operator new[](4LL * ptr);
      v10 = fread(v9, 4u, ptr, v5);
      if ( ptr != v10 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_123;
      v11 = (void *)operator new[](4LL * ptr);
      v12 = fread(v11, 4u, ptr, v5);
      if ( ptr != v12 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_123;
      v13 = (void *)operator new[](4LL * ptr);
      v14 = fread(v13, 4u, ptr, v5);
      if ( ptr != v14 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_123;
      v15 = (void *)operator new[](8LL * ptr);
      v16 = fread(v15, 8u, ptr, v5);
      if ( ptr != v16 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_123;
      v17 = (void *)operator new[](4LL * ptr);
      v18 = fread(v17, 4u, ptr, v5);
      if ( ptr != v18 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_123;
      v19 = (void *)operator new[](4LL * ptr);
      v20 = fread(v19, 4u, ptr, v5);
      if ( ptr != v20 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_123;
      v21 = (void *)operator new[](8LL * ptr);
      v22 = fread(v21, 8u, ptr, v5);
      if ( ptr != v22 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_123;
      v23 = (void *)operator new[](4LL * ptr);
      v24 = fread(v23, 4u, ptr, v5);
      if ( ptr != v24 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_123;
      v25 = (void *)operator new[](4LL * ptr);
      v26 = fread(v25, 4u, ptr, v5);
      if ( ptr != v26 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( ptr )
    {
      if ( (unsigned __int64)ptr > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_123;
      v27 = (void *)operator new[](4LL * ptr);
      v28 = fread(v27, 4u, ptr, v5);
      if ( ptr != v28 )
        return 1;
    }
    if ( (unsigned int)fread(&ptr, 4u, 1u, v5) != 1 )
      return 1;
    if ( !ptr )
      goto LABEL_50;
    if ( (unsigned __int64)ptr <= 0x1FFFFFFFFFFFFFFELL )
    {
      v29 = (void *)operator new[](4LL * ptr);
      v30 = fread(v29, 4u, ptr, v5);
      if ( ptr != v30 )
        return 1;
LABEL_50:
      v31 = *((_QWORD *)this + 102);
      if ( *((int *)this + 206) <= -2 )
        v31 = 0;
      v57 = v31;
      if ( (unsigned int)CoinFromFile<int>() != 1 )
      {
        v32 = *((_QWORD *)this + 23);
        if ( *((int *)this + 48) <= -2 )
          v32 = 0;
        v58 = v32;
        if ( (unsigned int)CoinFromFile<int>() != 1 )
        {
          v33 = *((_QWORD *)this + 26);
          if ( *((int *)this + 54) <= -2 )
            v33 = 0;
          v59 = v33;
          if ( (unsigned int)CoinFromFile<int>() != 1 )
          {
            v34 = *((_QWORD *)this + 50);
            if ( *((int *)this + 102) <= -2 )
              v34 = 0;
            v60 = v34;
            if ( (unsigned int)CoinFromFile<int>() != 1 )
            {
              v35 = *((_QWORD *)this + 53);
              if ( *((int *)this + 108) <= -2 )
                v35 = 0;
              v61 = v35;
              if ( (unsigned int)CoinFromFile<int>() != 1 )
              {
                v36 = *((_QWORD *)this + 69);
                if ( *((int *)this + 140) <= -2 )
                  v36 = 0;
                v62 = v36;
                if ( (unsigned int)CoinFromFile<double>() != 1 )
                {
                  v37 = *((_QWORD *)this + 16);
                  if ( *((int *)this + 34) <= -2 )
                    v37 = 0;
                  v63 = v37;
                  if ( (unsigned int)CoinFromFile<int>() != 1 )
                  {
                    v38 = *((_QWORD *)this + 13);
                    if ( *((int *)this + 28) <= -2 )
                      v38 = 0;
                    v64 = v38;
                    if ( (unsigned int)CoinFromFile<int>() != 1 )
                    {
                      v39 = *((_QWORD *)this + 19);
                      if ( *((int *)this + 40) <= -2 )
                        v39 = 0;
                      v65 = v39;
                      if ( (unsigned int)CoinFromFile<int>() != 1 )
                      {
                        v40 = *((_QWORD *)this + 81);
                        if ( *((int *)this + 164) <= -2 )
                          v40 = 0;
                        v66 = v40;
                        if ( (unsigned int)CoinFromFile<int>() != 1 )
                        {
                          v41 = *((_QWORD *)this + 29);
                          if ( *((int *)this + 60) <= -2 )
                            v41 = 0;
                          v67 = v41;
                          if ( (unsigned int)CoinFromFile<int>() != 1 )
                          {
                            v42 = *((_QWORD *)this + 32);
                            if ( *((int *)this + 66) <= -2 )
                              v42 = 0;
                            v68 = v42;
                            if ( (unsigned int)CoinFromFile<int>() != 1 )
                            {
                              v43 = *((_QWORD *)this + 35);
                              if ( *((int *)this + 72) <= -2 )
                                v43 = 0;
                              v69 = v43;
                              if ( (unsigned int)CoinFromFile<int>() != 1 )
                              {
                                v44 = *((_QWORD *)this + 38);
                                if ( *((int *)this + 78) <= -2 )
                                  v44 = 0;
                                v70 = v44;
                                if ( (unsigned int)CoinFromFile<int>() != 1 )
                                {
                                  v45 = *((_QWORD *)this + 41);
                                  if ( *((int *)this + 84) <= -2 )
                                    v45 = 0;
                                  v71 = v45;
                                  if ( (unsigned int)CoinFromFile<int>() != 1 )
                                  {
                                    v46 = *((_QWORD *)this + 66);
                                    if ( *((int *)this + 134) <= -2 )
                                      v46 = 0;
                                    v72 = v46;
                                    if ( (unsigned int)CoinFromFile<int>() != 1 )
                                    {
                                      v47 = *((_QWORD *)this + 10);
                                      if ( *((int *)this + 22) <= -2 )
                                        v47 = 0;
                                      v73 = v47;
                                      if ( (unsigned int)CoinFromFile<int>() != 1 )
                                      {
                                        v48 = *((_QWORD *)this + 44);
                                        if ( *((int *)this + 90) <= -2 )
                                          v48 = 0;
                                        v74 = v48;
                                        if ( (unsigned int)CoinFromFile<int>() != 1 )
                                        {
                                          v49 = *((_QWORD *)this + 47);
                                          if ( *((int *)this + 96) <= -2 )
                                            v49 = 0;
                                          v75 = v49;
                                          if ( (unsigned int)CoinFromFile<int>() != 1
                                            && (unsigned int)CoinFromFile<double>() != 1
                                            && (unsigned int)CoinFromFile<int>() != 1 )
                                          {
                                            v50 = *((_DWORD *)this + 180) <= -2;
                                            v51 = *((int *)this + 176);
                                            v52 = *((_QWORD *)this + 89);
                                            *((_DWORD *)this + 199) = v7 - v8;
                                            if ( v50 )
                                              v52 = 0;
                                            v50 = *((_DWORD *)this + 186) <= -2;
                                            *((_QWORD *)this + 100) = v52 + 8 * v51;
                                            v53 = *((_QWORD *)this + 92);
                                            if ( v50 )
                                              v53 = 0;
                                            *((_QWORD *)this + 101) = v53 + 4 * v51;
                                            fclose(v5);
                                            if ( a3 )
                                            {
                                              if ( *((int *)this + 288) <= 2
                                                && *((_DWORD *)this + 8) == *((_DWORD *)this + 11) )
                                              {
                                                CoinFactorization::preProcess(this, 3, -1);
                                              }
                                              else
                                              {
                                                CoinFactorization::preProcess(this, 2, -1);
                                              }
                                              CoinFactorization::factor(this);
                                            }
                                            return 0;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 1;
    }
LABEL_123:
    __cxa_throw_bad_array_new_length();
  }
  return 0;
}

