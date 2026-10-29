__int64 __fastcall CoinFactorization::saveFactorization(void **this, const char *filename)
{
  unsigned int v3; // r12d
  FILE *v4; // rax
  FILE *v5; // rbx
  const void *v7; // r12
  int v8; // eax
  const void *v9; // r12
  int v10; // eax
  int v11; // eax
  const void *v12; // r12
  int v13; // eax
  int v14; // eax
  const void *v15; // r12
  int v16; // eax
  const void *v17; // r12
  int v18; // eax
  int v19; // eax
  const void *v20; // r12
  int v21; // eax
  int v22; // eax
  const void *v23; // r12
  int v24; // eax
  int v25; // eax
  const void *v26; // r12
  int v27; // eax
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  void *v49; // rdi
  void *v50; // rdi
  int v51; // eax
  int v52; // [rsp+0h] [rbp-38h] BYREF
  int ptr; // [rsp+4h] [rbp-34h] BYREF
  int v54; // [rsp+8h] [rbp-30h] BYREF
  int v55; // [rsp+Ch] [rbp-2Ch] BYREF
  int v56; // [rsp+10h] [rbp-28h] BYREF
  int v57; // [rsp+14h] [rbp-24h] BYREF
  int v58; // [rsp+18h] [rbp-20h] BYREF
  _DWORD v59[7]; // [rsp+1Ch] [rbp-1Ch] BYREF

  v3 = 0;
  v4 = fopen(filename, "wb");
  if ( v4 )
  {
    v5 = v4;
    if ( fwrite(this, 0x484u, 1u, v4) != 1 )
      return 1;
    if ( *((int *)this + 152) >= -1 && (v7 = *(this + 75), v8 = *((_DWORD *)this + 148), v52 = v8, v7) && v8 )
    {
      if ( (unsigned int)fwrite(&v52, 4u, 1u, v5) != 1 )
        return 1;
      v51 = fwrite(v7, 8u, v52, v5);
      if ( v52 != v51 )
        return 1;
    }
    else
    {
      v52 = 0;
      if ( (unsigned int)fwrite(&v52, 4u, 1u, v5) != 1 )
        return 1;
    }
    if ( *((int *)this + 158) >= -1 && (v9 = *(this + 78), v10 = *((_DWORD *)this + 148), ptr = v10, v9) && v10 )
    {
      if ( (unsigned int)fwrite(&ptr, 4u, 1u, v5) != 1 )
        return 1;
      v11 = fwrite(v9, 4u, ptr, v5);
      if ( ptr != v11 )
        return 1;
    }
    else
    {
      ptr = 0;
      if ( (unsigned int)fwrite(&ptr, 4u, 1u, v5) != 1 )
        return 1;
    }
    if ( *((int *)this + 128) >= -1 && (v12 = *(this + 63), v13 = *((_DWORD *)this + 148), v54 = v13, v12) && v13 )
    {
      if ( (unsigned int)fwrite(&v54, 4u, 1u, v5) != 1 )
        return 1;
      v14 = fwrite(v12, 4u, v54, v5);
      if ( v54 != v14 )
        return 1;
    }
    else
    {
      v54 = 0;
      if ( (unsigned int)fwrite(&v54, 4u, 1u, v5) != 1 )
        return 1;
    }
    if ( *((int *)this + 170) >= -1 && (v15 = *(this + 84), (v55 = *((_DWORD *)this + 148)) != 0) && v15 )
    {
      if ( (unsigned int)fwrite(&v55, 4u, 1u, v5) != 1 )
        return 1;
      v16 = fwrite(v15, 4u, v55, v5);
      if ( v55 != v16 )
        return 1;
    }
    else
    {
      v55 = 0;
      if ( (unsigned int)fwrite(&v55, 4u, 1u, v5) != 1 )
        return 1;
    }
    if ( *((int *)this + 278) >= -1 && (v17 = *(this + 138), v18 = *((_DWORD *)this + 177), v56 = v18, v17) && v18 )
    {
      if ( (unsigned int)fwrite(&v56, 4u, 1u, v5) != 1 )
        return 1;
      v19 = fwrite(v17, 8u, v56, v5);
      if ( v56 != v19 )
        return 1;
    }
    else
    {
      v56 = 0;
      if ( (unsigned int)fwrite(&v56, 4u, 1u, v5) != 1 )
        return 1;
    }
    if ( *((int *)this + 272) >= -1 && (v20 = *(this + 135), v21 = *((_DWORD *)this + 177), v57 = v21, v20) && v21 )
    {
      if ( (unsigned int)fwrite(&v57, 4u, 1u, v5) != 1 )
        return 1;
      v22 = fwrite(v20, 4u, v57, v5);
      if ( v57 != v22 )
        return 1;
    }
    else
    {
      v57 = 0;
      if ( (unsigned int)fwrite(&v57, 4u, 1u, v5) != 1 )
        return 1;
    }
    if ( *((int *)this + 266) >= -1 && (v23 = *(this + 132), v24 = *((_DWORD *)this + 8) + 1, v58 = v24, v23) && v24 )
    {
      if ( (unsigned int)fwrite(&v58, 4u, 1u, v5) != 1 )
        return 1;
      v25 = fwrite(v23, 4u, v58, v5);
      if ( v58 != v25 )
        return 1;
    }
    else
    {
      v58 = 0;
      if ( (unsigned int)fwrite(&v58, 4u, 1u, v5) != 1 )
        return 1;
    }
    if ( *((int *)this + 180) >= -1 && (v26 = *(this + 89), (v59[0] = *((_DWORD *)this + 177)) != 0) && v26 )
    {
      if ( (unsigned int)fwrite(v59, 4u, 1u, v5) != 1 )
        return 1;
      v27 = fwrite(v26, 8u, v59[0], v5);
      if ( v59[0] != v27 )
        return 1;
    }
    else
    {
      v59[0] = 0;
      if ( (unsigned int)fwrite(v59, 4u, 1u, v5) != 1 )
        return 1;
    }
    v28 = *(this + 92);
    if ( *((int *)this + 186) <= -2 )
      v28 = nullptr;
    if ( !(unsigned int)CoinToFile<int>(v28) )
    {
      v29 = *(this + 95);
      if ( *((int *)this + 192) <= -2 )
        v29 = nullptr;
      if ( !(unsigned int)CoinToFile<int>(v29) )
      {
        v30 = *(this + 59);
        if ( *((int *)this + 120) <= -2 )
          v30 = nullptr;
        if ( !(unsigned int)CoinToFile<int>(v30) )
        {
          v31 = *(this + 56);
          if ( *((int *)this + 114) <= -2 )
            v31 = nullptr;
          if ( !(unsigned int)CoinToFile<int>(v31) )
          {
            v32 = *(this + 102);
            if ( *((int *)this + 206) <= -2 )
              v32 = nullptr;
            if ( !(unsigned int)CoinToFile<int>(v32) )
            {
              v33 = *(this + 23);
              if ( *((int *)this + 48) <= -2 )
                v33 = nullptr;
              if ( !(unsigned int)CoinToFile<int>(v33) )
              {
                v34 = *(this + 26);
                if ( *((int *)this + 54) <= -2 )
                  v34 = nullptr;
                if ( !(unsigned int)CoinToFile<int>(v34) )
                {
                  v35 = *(this + 50);
                  if ( *((int *)this + 102) <= -2 )
                    v35 = nullptr;
                  if ( !(unsigned int)CoinToFile<int>(v35) )
                  {
                    v36 = *(this + 53);
                    if ( *((int *)this + 108) <= -2 )
                      v36 = nullptr;
                    if ( !(unsigned int)CoinToFile<int>(v36) )
                    {
                      v37 = *(this + 69);
                      if ( *((int *)this + 140) <= -2 )
                        v37 = nullptr;
                      if ( !(unsigned int)CoinToFile<double>(v37) )
                      {
                        v38 = *(this + 16);
                        if ( *((int *)this + 34) <= -2 )
                          v38 = nullptr;
                        if ( !(unsigned int)CoinToFile<int>(v38) )
                        {
                          v39 = *(this + 13);
                          if ( *((int *)this + 28) <= -2 )
                            v39 = nullptr;
                          if ( !(unsigned int)CoinToFile<int>(v39) )
                          {
                            v40 = *(this + 19);
                            if ( *((int *)this + 40) <= -2 )
                              v40 = nullptr;
                            if ( !(unsigned int)CoinToFile<int>(v40) )
                            {
                              v41 = *(this + 81);
                              if ( *((int *)this + 164) <= -2 )
                                v41 = nullptr;
                              if ( !(unsigned int)CoinToFile<int>(v41) )
                              {
                                v42 = *(this + 29);
                                if ( *((int *)this + 60) <= -2 )
                                  v42 = nullptr;
                                if ( !(unsigned int)CoinToFile<int>(v42) )
                                {
                                  v43 = *(this + 32);
                                  if ( *((int *)this + 66) <= -2 )
                                    v43 = nullptr;
                                  if ( !(unsigned int)CoinToFile<int>(v43) )
                                  {
                                    v44 = *(this + 35);
                                    if ( *((int *)this + 72) <= -2 )
                                      v44 = nullptr;
                                    if ( !(unsigned int)CoinToFile<int>(v44) )
                                    {
                                      v45 = *(this + 38);
                                      if ( *((int *)this + 78) <= -2 )
                                        v45 = nullptr;
                                      if ( !(unsigned int)CoinToFile<int>(v45) )
                                      {
                                        v46 = *(this + 41);
                                        if ( *((int *)this + 84) <= -2 )
                                          v46 = nullptr;
                                        if ( !(unsigned int)CoinToFile<int>(v46) )
                                        {
                                          v47 = *(this + 66);
                                          if ( *((int *)this + 134) <= -2 )
                                            v47 = nullptr;
                                          if ( !(unsigned int)CoinToFile<int>(v47) )
                                          {
                                            v48 = *(this + 10);
                                            if ( *((int *)this + 22) <= -2 )
                                              v48 = nullptr;
                                            if ( !(unsigned int)CoinToFile<int>(v48) )
                                            {
                                              v49 = *(this + 44);
                                              if ( *((int *)this + 90) <= -2 )
                                                v49 = nullptr;
                                              if ( !(unsigned int)CoinToFile<int>(v49) )
                                              {
                                                v50 = *(this + 47);
                                                if ( *((int *)this + 96) <= -2 )
                                                  v50 = nullptr;
                                                if ( !(unsigned int)CoinToFile<int>(v50)
                                                  && !(unsigned int)CoinToFile<double>(*(this + 106)) )
                                                {
                                                  v3 = CoinToFile<int>(*(this + 107));
                                                  if ( !v3 )
                                                  {
                                                    fclose(v5);
                                                    return v3;
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
            }
          }
        }
      }
    }
    return 1;
  }
  return v3;
}

