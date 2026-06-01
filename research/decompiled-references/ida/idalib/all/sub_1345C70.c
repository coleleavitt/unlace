__int64 __fastcall sub_1345C70(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  char **v8; // r15
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  char **v14; // r15
  int v15; // r12d
  char *v16; // rdi
  int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // r13d
  int v20; // r11d
  __int64 v21; // rbp
  unsigned int v22; // ecx
  size_t v23; // r10
  __int64 *v24; // rbx
  int v25; // r9d
  int v26; // eax
  int v27; // esi
  __int64 *v28; // rdx
  int v29; // eax
  int v30; // esi
  int v31; // eax
  char *v32; // rdi
  int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 j; // rdx
  __int64 *v38; // rax
  char **i; // [rsp+0h] [rbp-78h]
  char **v40; // [rsp+8h] [rbp-70h]
  __int64 v41; // [rsp+10h] [rbp-68h]
  __int64 *v42; // [rsp+18h] [rbp-60h]
  size_t v43; // [rsp+20h] [rbp-58h]
  int v44; // [rsp+28h] [rbp-50h]
  int v45; // [rsp+2Ch] [rbp-4Ch]
  __int64 v46; // [rsp+30h] [rbp-48h]
  int v47; // [rsp+38h] [rbp-40h]
  unsigned int v48; // [rsp+3Ch] [rbp-3Ch]

  v6 = (unsigned int)(a2 - 1);
  v8 = (char **)*a1;
  v9 = *((unsigned int *)a1 + 4);
  v40 = (char **)*a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *((_DWORD *)a1 + 4) = v10;
  result = sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *a1 = result;
  if ( v8 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v41 = 16 * v9;
    v13 = result + 16 * v12;
    for ( i = &v40[2 * v9]; v13 != result; *(_QWORD *)(result - 16) = -4096 )
    {
      *(_DWORD *)(result + 8) = 0;
      result += 16;
      *(_DWORD *)(result - 4) = 0;
    }
    v14 = v40;
    if ( i == v40 )
      return operator delete(v40, v41, 8);
LABEL_7:
    while ( 2 )
    {
      v15 = *((_DWORD *)v14 + 3);
      if ( v15 )
      {
        v26 = *((_DWORD *)a1 + 4);
        if ( !v26 )
          goto LABEL_74;
        v21 = (__int64)*v14;
        v20 = v26 - 1;
        v18 = *a1;
        v22 = (v26 - 1) & v15;
        v19 = *((_DWORD *)v14 + 2);
        if ( *v14 != (char *)-4096LL )
        {
          if ( v21 == -8192 )
          {
            v27 = 1;
            v28 = nullptr;
            while ( 1 )
            {
              v24 = (__int64 *)(v18 + 16LL * v22);
              v29 = *((_DWORD *)v24 + 3);
              if ( v15 == v29 )
              {
                if ( *v24 == -8192 )
                {
                  v21 = -8192;
                  goto LABEL_28;
                }
              }
              else if ( !v29 )
              {
                if ( *v24 == -4096 )
                  goto LABEL_72;
                if ( *v24 == -8192 )
                {
                  if ( !v28 )
                    v28 = (__int64 *)(v18 + 16LL * v22);
                }
                else if ( !*((_DWORD *)v24 + 2) )
                {
                  goto LABEL_72;
                }
              }
              v35 = v27 + v22;
              ++v27;
              v22 = v20 & v35;
            }
          }
          goto LABEL_13;
        }
        v30 = 1;
        v28 = nullptr;
        while ( 1 )
        {
          v24 = (__int64 *)(v18 + 16LL * v22);
          v31 = *((_DWORD *)v24 + 3);
          if ( v15 == v31 )
          {
            if ( *v24 == -4096 )
            {
              v21 = -4096;
              goto LABEL_28;
            }
          }
          else if ( !v31 )
          {
            if ( *v24 == -4096 )
            {
              v38 = (__int64 *)(v18 + 16LL * v22);
              v21 = -4096;
              v24 = v28;
LABEL_69:
              if ( !v24 )
                v24 = v38;
LABEL_28:
              *v14 = (char *)-4096LL;
              v32 = (char *)*v24;
              *((_DWORD *)v24 + 2) = v19;
              *v24 = v21;
              *((_DWORD *)v24 + 3) = v15;
              if ( v32 + 4096 != nullptr && v32 + 0x2000 != nullptr && v32 )
                operator delete[](v32);
              ++*((_DWORD *)a1 + 2);
              v16 = *v14;
LABEL_32:
              if ( v16 + 0x2000 == nullptr || v16 + 4096 == nullptr || !v16 )
                goto LABEL_36;
              operator delete[](v16);
              v14 += 2;
              if ( i == v14 )
                return operator delete(v40, v41, 8);
              goto LABEL_7;
            }
            if ( *v24 == -8192 )
            {
              if ( !v28 )
                v28 = (__int64 *)(v18 + 16LL * v22);
            }
            else if ( !*((_DWORD *)v24 + 2) )
            {
LABEL_72:
              v38 = v24;
              v24 = v28;
              goto LABEL_69;
            }
          }
          v34 = v30 + v22;
          ++v30;
          v22 = v20 & v34;
        }
      }
      v16 = *v14;
      if ( *v14 != (char *)-4096LL && v16 != (char *)-8192LL )
      {
        if ( !*((_DWORD *)v14 + 2) )
          goto LABEL_32;
        v17 = *((_DWORD *)a1 + 4);
        if ( !v17 )
        {
LABEL_74:
          *v14 = (char *)-4096LL;
          BUG();
        }
        v18 = *a1;
        v19 = *((_DWORD *)v14 + 2);
        v20 = v17 - 1;
        v21 = (__int64)*v14;
        v22 = 0;
LABEL_13:
        v44 = 1;
        v23 = v19;
        v42 = nullptr;
        while ( 1 )
        {
          v24 = (__int64 *)(v18 + 16LL * v22);
          v25 = *((_DWORD *)v24 + 3);
          if ( v15 == v25 && v19 == *((_DWORD *)v24 + 2) )
          {
            v48 = v22;
            v47 = v20;
            v46 = v18;
            v45 = *((_DWORD *)v24 + 3);
            if ( !v23 )
              goto LABEL_28;
            v43 = v23;
            v33 = memcmp((const void *)v21, (const void *)*v24, v23);
            v23 = v43;
            v25 = v45;
            v18 = v46;
            v20 = v47;
            v22 = v48;
            if ( !v33 )
              goto LABEL_28;
          }
          if ( !v25 )
          {
            if ( *v24 == -4096 )
              goto LABEL_68;
            if ( *v24 == -8192 )
            {
              if ( v42 )
                v24 = v42;
              v42 = v24;
            }
            else if ( !*((_DWORD *)v24 + 2) )
            {
LABEL_68:
              v38 = v24;
              v24 = v42;
              goto LABEL_69;
            }
          }
          v22 = v20 & (v44 + v22);
          ++v44;
        }
      }
LABEL_36:
      v14 += 2;
      if ( i != v14 )
        continue;
      return operator delete(v40, v41, 8);
    }
  }
  else
  {
    v36 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( j = result + 16 * v36; j != result; *(_QWORD *)(result - 16) = -4096 )
    {
      *(_DWORD *)(result + 8) = 0;
      result += 16;
      *(_DWORD *)(result - 4) = 0;
    }
  }
  return result;
}
