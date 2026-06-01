__int64 __fastcall sub_932660(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // edx
  bool v15; // cf
  unsigned int v16; // eax
  int v17; // r11d
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int *v21; // r8
  unsigned int v22; // eax
  __int64 *v23; // r8
  __int64 v24; // rdx
  _DWORD *v25; // rdx
  unsigned int v26; // r10d
  unsigned __int64 v27; // r15
  unsigned int v29; // ecx
  unsigned __int64 v30; // r13
  unsigned int v31; // r9d
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // r8
  _QWORD *v38; // rsi
  _QWORD *v39; // r8
  __int64 v40; // rax
  char *v43; // r8
  signed __int64 v44; // rax
  _QWORD *v45; // rsi
  _QWORD *v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v51; // rsi
  __int64 v57; // [rsp+0h] [rbp-90h]
  __int64 v58; // [rsp+8h] [rbp-88h]
  unsigned __int64 v61; // [rsp+18h] [rbp-78h]
  char *v62; // [rsp+20h] [rbp-70h]
  unsigned __int64 v63; // [rsp+28h] [rbp-68h]
  unsigned int v64; // [rsp+30h] [rbp-60h]
  unsigned __int64 v65; // [rsp+30h] [rbp-60h]
  char *v66; // [rsp+30h] [rbp-60h]
  _QWORD *v67; // [rsp+48h] [rbp-48h]
  __int64 v68; // [rsp+50h] [rbp-40h]
  unsigned int v69; // [rsp+50h] [rbp-40h]
  unsigned int v70; // [rsp+58h] [rbp-38h]
  int v71; // [rsp+58h] [rbp-38h]
  unsigned int v72; // [rsp+5Ch] [rbp-34h]

  v4 = *(_DWORD *)(a1 + 28);
  v5 = *(_QWORD *)(a1 + 128);
  v6 = *(_QWORD *)(a1 + 112);
  v7 = *(unsigned int *)(a1 + 24);
  v58 = *(_QWORD *)(a1 + 16);
  v8 = 1 << *(_DWORD *)(a1 + 260);
  v64 = *(_DWORD *)(a1 + 24);
  v9 = v8 - 1;
  v57 = *(_QWORD *)(a1 + 8);
  v67 = (_QWORD *)(v57 + v7);
  v10 = (_DWORD)a2 - v57;
  v62 = (char *)(v58 + v7);
  v11 = (_DWORD)a2 - v57;
  v12 = 1 << *(_DWORD *)(a1 + 256);
  v13 = (_DWORD)a2 - v57 - v12;
  if ( v12 >= (_DWORD)a2 - (_DWORD)v57 - v4 )
    v13 = *(_DWORD *)(a1 + 28);
  if ( !*(_DWORD *)(a1 + 40) )
    v4 = v13;
  v14 = v10 - v8;
  v15 = v8 < v10;
  v16 = 0;
  if ( v15 )
    v16 = v14;
  v17 = 1 << *(_DWORD *)(a1 + 268);
  v18 = *(_DWORD *)(a1 + 300);
  v19 = 64 - *(_DWORD *)(a1 + 264);
  v70 = v16;
  v20 = *(_DWORD *)(a1 + 44);
  if ( v10 > v20 )
  {
    v21 = (unsigned int *)(v6 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v57 + v20)) >> v19));
    *(_DWORD *)(v5 + 4LL * (v20 & v9)) = *v21;
    *v21 = v20;
    v22 = v20 + 1;
    if ( !v18 )
    {
      v23 = (__int64 *)(v57 + v22);
      while ( v11 != v22 )
      {
        v24 = *v23;
        v23 = (__int64 *)((char *)v23 + 1);
        v25 = (_DWORD *)(v6 + 4 * ((0xCF1BBCDCBF9B0000LL * v24) >> v19));
        *(_DWORD *)(v5 + 4LL * (v22 & v9)) = *v25;
        *v25 = v22++;
      }
    }
  }
  *(_DWORD *)(a1 + 44) = v10;
  v26 = *(_DWORD *)(v6 + 4 * ((0xCF1BBCDCBF9B0000LL * *a2) >> v19));
  if ( v26 >= v4 && v17 )
  {
    v27 = a3;
    v61 = (unsigned __int64)a2 + 4;
    v29 = v70;
    v30 = 3;
    v71 = v11 + 3;
    v31 = v64;
    v63 = v27 - 7;
    while ( 1 )
    {
      if ( v31 > v26 )
      {
        v33 = v58 + v26;
        if ( *(_DWORD *)a2 != *(_DWORD *)v33 )
          goto LABEL_16;
        v34 = v33 + 4;
        v35 = (unsigned __int64)&v62[v61 - 4 - v33];
        if ( v27 < v35 )
          v35 = v27;
        v65 = v35 - 7;
        if ( v61 < v35 - 7 )
        {
          v36 = *(_QWORD *)(v33 + 4);
          v37 = *(_QWORD *)((char *)a2 + 4);
          if ( v36 == v37 )
          {
            v38 = (_QWORD *)((char *)a2 + 12);
            v39 = (_QWORD *)(v33 + 12);
            if ( v65 > (unsigned __int64)a2 + 12 )
            {
              v68 = *(_QWORD *)(v33 + 12);
              v40 = *(_QWORD *)((char *)a2 + 12);
              if ( v40 != v68 )
              {
                _RAX = v68 ^ v40;
LABEL_28:
                __asm { tzcnt   rax, rax }
                v43 = (char *)v38 + ((unsigned int)_RAX >> 3) - v61;
                if ( v62 == &v43[v34] )
                {
LABEL_29:
                  v72 = v29;
                  v69 = v31;
                  v66 = v43;
                  v44 = sub_92B7A0(&v43[v61], v67, v27);
                  v29 = v72;
                  v31 = v69;
                  v43 = &v66[v44];
                }
LABEL_48:
                v51 = (unsigned __int64)(v43 + 4);
                goto LABEL_49;
              }
              while ( 1 )
              {
                ++v38;
                ++v39;
                if ( v65 <= (unsigned __int64)v38 )
                  break;
                if ( *v39 != *v38 )
                {
                  _RAX = *v38 ^ *v39;
                  goto LABEL_28;
                }
              }
            }
LABEL_38:
            if ( (unsigned __int64)v38 < v35 - 3 && *(_DWORD *)v39 == *(_DWORD *)v38 )
            {
              v38 = (_QWORD *)((char *)v38 + 4);
              v39 = (_QWORD *)((char *)v39 + 4);
            }
            if ( (unsigned __int64)v38 < v35 - 1 && *(_WORD *)v39 == *(_WORD *)v38 )
            {
              v38 = (_QWORD *)((char *)v38 + 2);
              v39 = (_QWORD *)((char *)v39 + 2);
            }
            if ( v35 > (unsigned __int64)v38 )
              v38 = (_QWORD *)((char *)v38 + (*(_BYTE *)v39 == *(_BYTE *)v38));
            v43 = (char *)v38 - v61;
          }
          else
          {
            _RSI = v37 ^ v36;
            __asm { tzcnt   rsi, rsi }
            v43 = (char *)((unsigned int)_RSI >> 3);
          }
          if ( v62 == &v43[v34] )
            goto LABEL_29;
          goto LABEL_48;
        }
        v38 = (_QWORD *)v61;
        v39 = (_QWORD *)(v33 + 4);
        goto LABEL_38;
      }
      v32 = (_QWORD *)(v57 + v26);
      if ( *(_DWORD *)((char *)a2 + v30 - 3) != *(_DWORD *)((char *)v32 + v30 - 3) )
        goto LABEL_16;
      if ( (unsigned __int64)a2 >= v63 )
      {
        v45 = a2;
      }
      else
      {
        if ( *v32 != *a2 )
        {
          _RDX = *a2 ^ *v32;
          __asm { tzcnt   rsi, rdx }
          v51 = (unsigned int)_RSI >> 3;
          goto LABEL_49;
        }
        v45 = a2 + 1;
        v46 = v32 + 1;
        if ( v63 > (unsigned __int64)(a2 + 1) )
        {
          v47 = v32[1];
          v48 = a2[1];
          if ( v48 != v47 )
          {
LABEL_34:
            _RAX = v47 ^ v48;
            __asm { tzcnt   rax, rax }
            v51 = (char *)v45 + ((unsigned int)_RAX >> 3) - (char *)a2;
            goto LABEL_49;
          }
          while ( 1 )
          {
            ++v45;
            ++v46;
            if ( v63 <= (unsigned __int64)v45 )
              break;
            v48 = *v46;
            v47 = *v45;
            if ( *v46 != *v45 )
              goto LABEL_34;
          }
        }
        v32 = v46;
      }
      if ( (unsigned __int64)v45 < v27 - 3 && *(_DWORD *)v32 == *(_DWORD *)v45 )
      {
        v45 = (_QWORD *)((char *)v45 + 4);
        v32 = (_QWORD *)((char *)v32 + 4);
      }
      if ( (unsigned __int64)v45 < v27 - 1 && *(_WORD *)v32 == *(_WORD *)v45 )
      {
        v45 = (_QWORD *)((char *)v45 + 2);
        v32 = (_QWORD *)((char *)v32 + 2);
      }
      if ( v27 > (unsigned __int64)v45 )
        v45 = (_QWORD *)((char *)v45 + (*(_BYTE *)v32 == *(_BYTE *)v45));
      v51 = (char *)v45 - (char *)a2;
LABEL_49:
      if ( v51 > v30 )
      {
        v30 = v51;
        *a4 = v71 - v26;
        if ( (_QWORD *)v27 == (_QWORD *)((char *)a2 + v51) )
          return v30;
      }
LABEL_16:
      if ( v26 > v29 )
      {
        --v17;
        v26 = *(_DWORD *)(v5 + 4LL * (v9 & v26));
        if ( v26 >= v4 )
        {
          if ( v17 )
            continue;
        }
      }
      return v30;
    }
  }
  return 3;
}
