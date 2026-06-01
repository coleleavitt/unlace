__int64 __fastcall sub_D1700(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // r10
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // r13d
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // edx
  bool v16; // cf
  unsigned int v17; // eax
  int v18; // r11d
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int *v21; // r8
  unsigned int v22; // eax
  _DWORD *v23; // r8
  unsigned int v24; // edx
  _DWORD *v25; // rdx
  unsigned int v26; // r10d
  unsigned int v27; // ecx
  unsigned __int64 v29; // rbp
  unsigned int v30; // r9d
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r8
  _QWORD *v37; // rsi
  _QWORD *v38; // r8
  __int64 v39; // rax
  char *v42; // r8
  signed __int64 v43; // rax
  _QWORD *v44; // rsi
  _QWORD *v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v50; // rsi
  __int64 v56; // [rsp+0h] [rbp-90h]
  __int64 v57; // [rsp+8h] [rbp-88h]
  int v59; // [rsp+18h] [rbp-78h]
  unsigned __int64 v60; // [rsp+18h] [rbp-78h]
  char *v61; // [rsp+20h] [rbp-70h]
  unsigned __int64 v62; // [rsp+28h] [rbp-68h]
  unsigned int v63; // [rsp+30h] [rbp-60h]
  unsigned __int64 v64; // [rsp+30h] [rbp-60h]
  char *v65; // [rsp+30h] [rbp-60h]
  _QWORD *v66; // [rsp+48h] [rbp-48h]
  __int64 v67; // [rsp+50h] [rbp-40h]
  unsigned int v68; // [rsp+50h] [rbp-40h]
  unsigned int v69; // [rsp+58h] [rbp-38h]
  int v70; // [rsp+58h] [rbp-38h]
  unsigned int v71; // [rsp+5Ch] [rbp-34h]

  v5 = *(unsigned int *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = *(_QWORD *)(a1 + 112);
  v57 = *(_QWORD *)(a1 + 16);
  v63 = *(_DWORD *)(a1 + 24);
  v8 = 1 << *(_DWORD *)(a1 + 260);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = v8 - 1;
  v56 = v9;
  v11 = (_DWORD)a2 - v9;
  v66 = (_QWORD *)(v9 + v5);
  v61 = (char *)(v57 + v5);
  v12 = *(_DWORD *)(a1 + 28);
  v13 = (_DWORD)a2 - v9;
  LODWORD(v9) = 1 << *(_DWORD *)(a1 + 256);
  v14 = v11 - v9;
  if ( (unsigned int)v9 >= v11 - v12 )
    v14 = *(_DWORD *)(a1 + 28);
  if ( !*(_DWORD *)(a1 + 40) )
    v12 = v14;
  v15 = v11 - v8;
  v16 = v8 < v11;
  v17 = 0;
  if ( v16 )
    v17 = v15;
  v18 = 1 << *(_DWORD *)(a1 + 268);
  v19 = 32 - *(_DWORD *)(a1 + 264);
  v69 = v17;
  v59 = *(_DWORD *)(a1 + 300);
  v20 = *(_DWORD *)(a1 + 44);
  if ( v11 > v20 )
  {
    v21 = (unsigned int *)(v7 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)(v56 + v20)) >> v19));
    *(_DWORD *)(v6 + 4LL * (v20 & v10)) = *v21;
    *v21 = v20;
    v22 = v20 + 1;
    if ( !v59 )
    {
      v23 = (_DWORD *)(v56 + v22);
      while ( v13 != v22 )
      {
        v24 = -1640531535 * *v23;
        v23 = (_DWORD *)((char *)v23 + 1);
        v25 = (_DWORD *)(v7 + 4LL * (v24 >> v19));
        *(_DWORD *)(v6 + 4LL * (v22 & v10)) = *v25;
        *v25 = v22++;
      }
    }
  }
  *(_DWORD *)(a1 + 44) = v11;
  v26 = *(_DWORD *)(v7 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a2) >> v19));
  if ( v26 >= v12 && v18 )
  {
    v27 = v69;
    v60 = (unsigned __int64)a2 + 4;
    v29 = 3;
    v62 = a3 - 7;
    v70 = v13 + 3;
    v30 = v63;
    while ( 1 )
    {
      if ( v30 > v26 )
      {
        v32 = v57 + v26;
        if ( *(_DWORD *)a2 != *(_DWORD *)v32 )
          goto LABEL_16;
        v33 = v32 + 4;
        v34 = (unsigned __int64)&v61[v60 - 4 - v32];
        if ( a3 < v34 )
          v34 = a3;
        v64 = v34 - 7;
        if ( v60 < v34 - 7 )
        {
          v35 = *(_QWORD *)(v32 + 4);
          v36 = *(_QWORD *)((char *)a2 + 4);
          if ( v35 == v36 )
          {
            v37 = (_QWORD *)((char *)a2 + 12);
            v38 = (_QWORD *)(v32 + 12);
            if ( v64 > (unsigned __int64)a2 + 12 )
            {
              v67 = *(_QWORD *)(v32 + 12);
              v39 = *(_QWORD *)((char *)a2 + 12);
              if ( v39 != v67 )
              {
                _RAX = v67 ^ v39;
LABEL_28:
                __asm { tzcnt   rax, rax }
                v42 = (char *)v37 + ((unsigned int)_RAX >> 3) - v60;
                if ( v61 == &v42[v33] )
                {
LABEL_29:
                  v71 = v27;
                  v68 = v30;
                  v65 = v42;
                  v43 = sub_C9E40(&v42[v60], v66, a3);
                  v27 = v71;
                  v30 = v68;
                  v42 = &v65[v43];
                }
LABEL_48:
                v50 = (unsigned __int64)(v42 + 4);
                goto LABEL_49;
              }
              while ( 1 )
              {
                ++v37;
                ++v38;
                if ( v64 <= (unsigned __int64)v37 )
                  break;
                if ( *v38 != *v37 )
                {
                  _RAX = *v37 ^ *v38;
                  goto LABEL_28;
                }
              }
            }
LABEL_38:
            if ( (unsigned __int64)v37 < v34 - 3 && *(_DWORD *)v38 == *(_DWORD *)v37 )
            {
              v37 = (_QWORD *)((char *)v37 + 4);
              v38 = (_QWORD *)((char *)v38 + 4);
            }
            if ( (unsigned __int64)v37 < v34 - 1 && *(_WORD *)v38 == *(_WORD *)v37 )
            {
              v37 = (_QWORD *)((char *)v37 + 2);
              v38 = (_QWORD *)((char *)v38 + 2);
            }
            if ( v34 > (unsigned __int64)v37 )
              v37 = (_QWORD *)((char *)v37 + (*(_BYTE *)v38 == *(_BYTE *)v37));
            v42 = (char *)v37 - v60;
          }
          else
          {
            _RSI = v36 ^ v35;
            __asm { tzcnt   rsi, rsi }
            v42 = (char *)((unsigned int)_RSI >> 3);
          }
          if ( v61 == &v42[v33] )
            goto LABEL_29;
          goto LABEL_48;
        }
        v37 = (_QWORD *)v60;
        v38 = (_QWORD *)(v32 + 4);
        goto LABEL_38;
      }
      v31 = (_QWORD *)(v56 + v26);
      if ( *(_DWORD *)((char *)a2 + v29 - 3) != *(_DWORD *)((char *)v31 + v29 - 3) )
        goto LABEL_16;
      if ( (unsigned __int64)a2 >= v62 )
      {
        v44 = a2;
      }
      else
      {
        if ( *v31 != *a2 )
        {
          _RDX = *a2 ^ *v31;
          __asm { tzcnt   rsi, rdx }
          v50 = (unsigned int)_RSI >> 3;
          goto LABEL_49;
        }
        v44 = a2 + 1;
        v45 = v31 + 1;
        if ( v62 > (unsigned __int64)(a2 + 1) )
        {
          v46 = v31[1];
          v47 = a2[1];
          if ( v47 != v46 )
          {
LABEL_34:
            _RAX = v46 ^ v47;
            __asm { tzcnt   rax, rax }
            v50 = (char *)v44 + ((unsigned int)_RAX >> 3) - (char *)a2;
            goto LABEL_49;
          }
          while ( 1 )
          {
            ++v44;
            ++v45;
            if ( v62 <= (unsigned __int64)v44 )
              break;
            v47 = *v45;
            v46 = *v44;
            if ( *v45 != *v44 )
              goto LABEL_34;
          }
        }
        v31 = v45;
      }
      if ( (unsigned __int64)v44 < a3 - 3 && *(_DWORD *)v31 == *(_DWORD *)v44 )
      {
        v44 = (_QWORD *)((char *)v44 + 4);
        v31 = (_QWORD *)((char *)v31 + 4);
      }
      if ( (unsigned __int64)v44 < a3 - 1 && *(_WORD *)v31 == *(_WORD *)v44 )
      {
        v44 = (_QWORD *)((char *)v44 + 2);
        v31 = (_QWORD *)((char *)v31 + 2);
      }
      if ( a3 > (unsigned __int64)v44 )
        v44 = (_QWORD *)((char *)v44 + (*(_BYTE *)v31 == *(_BYTE *)v44));
      v50 = (char *)v44 - (char *)a2;
LABEL_49:
      if ( v50 > v29 )
      {
        v29 = v50;
        *a4 = v70 - v26;
        if ( (_QWORD *)a3 == (_QWORD *)((char *)a2 + v50) )
          return v29;
      }
LABEL_16:
      if ( v27 < v26 )
      {
        --v18;
        v26 = *(_DWORD *)(v6 + 4LL * (v10 & v26));
        if ( v26 >= v12 )
        {
          if ( v18 )
            continue;
        }
      }
      return v29;
    }
  }
  return 3;
}

