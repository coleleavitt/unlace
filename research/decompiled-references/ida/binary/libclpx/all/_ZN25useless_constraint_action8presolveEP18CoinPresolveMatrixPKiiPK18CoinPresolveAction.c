__int64 __fastcall useless_constraint_action::presolve(
        useless_constraint_action *this,
        CoinPresolveMatrix *a2,
        const int *a3,
        __int64 a4,
        const CoinPresolveAction *a5)
{
  int v5; // r15d
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r12
  size_t v9; // r9
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // ebx
  int *v13; // rdi
  int v14; // ecx
  int v15; // edx
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rax
  int *v18; // rbp
  void *v19; // rax
  void *v20; // r10
  void *v21; // rax
  void *v22; // rax
  void *v23; // r10
  __int64 v24; // r11
  __int64 v25; // rax
  _DWORD *v26; // r15
  __int64 v27; // rsi
  int v28; // r10d
  _DWORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // xmm0_8
  __int64 v33; // rax
  __int64 v34; // rcx
  int *v35; // rdx
  int v36; // esi
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  int v40; // esi
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v45; // [rsp+8h] [rbp-E0h]
  __int64 v46; // [rsp+10h] [rbp-D8h]
  __int64 v48; // [rsp+18h] [rbp-D0h]
  _QWORD *v49; // [rsp+20h] [rbp-C8h]
  _QWORD *v50; // [rsp+28h] [rbp-C0h]
  __int64 v51; // [rsp+30h] [rbp-B8h]
  int v52; // [rsp+38h] [rbp-B0h]
  __int64 n; // [rsp+40h] [rbp-A8h]
  size_t v54; // [rsp+48h] [rbp-A0h]
  __int64 v55; // [rsp+48h] [rbp-A0h]
  size_t v56; // [rsp+50h] [rbp-98h]
  __int64 v57; // [rsp+58h] [rbp-90h]
  __int64 v58; // [rsp+60h] [rbp-88h]
  __int64 v59; // [rsp+68h] [rbp-80h]
  __int64 v60; // [rsp+70h] [rbp-78h]
  __int64 v61; // [rsp+78h] [rbp-70h]
  __int64 v62; // [rsp+80h] [rbp-68h]
  __int64 v63; // [rsp+88h] [rbp-60h]
  __int64 v64; // [rsp+98h] [rbp-50h]
  unsigned int v65; // [rsp+A4h] [rbp-44h]

  v5 = (int)a3;
  v6 = *((_QWORD *)this + 7);
  v65 = (unsigned int)a3;
  v46 = *((_QWORD *)this + 8);
  v63 = *((_QWORD *)this + 5);
  v45 = *((_QWORD *)this + 6);
  v57 = *((_QWORD *)this + 37);
  v51 = *((_QWORD *)this + 38);
  v58 = *((_QWORD *)this + 35);
  v59 = *((_QWORD *)this + 36);
  v60 = *((_QWORD *)this + 13);
  v61 = *((_QWORD *)this + 14);
  if ( (unsigned __int64)(int)a3 > 0x333333333333333LL )
LABEL_35:
    __cxa_throw_bad_array_new_length();
  v7 = operator new[](40LL * (int)a3);
  v64 = v7;
  if ( v5 > 0 )
  {
    v8 = v46;
    v9 = v7;
    v62 = v7 + 40LL * (v65 - 1) + 40;
    do
    {
      while ( 1 )
      {
        v10 = *(int *)a2;
        v11 = *(int *)(v58 + 4 * v10);
        v12 = *(_DWORD *)a2;
        v13 = (int *)(v59 + 4 * v10);
        v14 = *v13;
        *(_DWORD *)(v9 + 32) = v10;
        v15 = *v13;
        v48 = 8 * v10;
        v49 = (_QWORD *)(8 * v10 + v60);
        *(_QWORD *)v9 = *v49;
        *(_DWORD *)(v9 + 36) = v15;
        v52 = v11 + v14;
        v16 = (_QWORD *)(8 * v10 + v61);
        v17 = *v13;
        v50 = v16;
        *(_QWORD *)(v9 + 8) = *v16;
        v18 = (int *)(v51 + 4 * v11);
        if ( v18 )
        {
          v54 = v9;
          if ( v17 > 0x1FFFFFFFFFFFFFFELL )
            goto LABEL_35;
          n = 4 * v17;
          v19 = (void *)operator new[](4 * v17);
          v20 = memcpy(v19, v18, n);
          v9 = v54;
          v17 = *v13;
        }
        else
        {
          v20 = nullptr;
        }
        *(_QWORD *)(v9 + 16) = v20;
        if ( v57 + 8 * v11 )
        {
          v56 = v9;
          if ( v17 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_35;
          v55 = 8 * v17;
          v21 = (void *)operator new[](8 * v17);
          v22 = memcpy(v21, (const void *)(v57 + 8 * v11), v55);
          v9 = v56;
          v23 = v22;
        }
        else
        {
          v23 = nullptr;
        }
        *(_QWORD *)(v9 + 24) = v23;
        if ( (int)v11 < v52 )
        {
          v24 = v51 + 4 * ((unsigned int)(v52 - v11 - 1) + v11) + 4;
          do
          {
            v25 = *v18;
            v26 = (_DWORD *)(v45 + 4 * v25);
            v27 = *(int *)(v63 + 4 * v25);
            v28 = v27 + *v26;
            v29 = (_DWORD *)(v6 + 4 * v27);
            if ( (int)v27 >= v28 || v12 == *v29 )
            {
              v30 = *(int *)(v63 + 4 * v25);
            }
            else
            {
              v30 = v27 + 1;
              v31 = v6 + 4 * v27 + 4;
              while ( 1 )
              {
                v29 = (_DWORD *)v31;
                if ( v6 + 4 + 4 * ((unsigned int)(*v26 - 1) + v27) == v31 )
                  break;
                v31 += 4;
                if ( v12 == *v29 )
                  break;
                ++v30;
              }
            }
            v32 = *(_QWORD *)(v8 + 8LL * v28 - 8);
            *v29 = *(_DWORD *)(v6 + 4LL * v28 - 4);
            *(_QWORD *)(v8 + 8 * v30) = v32;
            --*v26;
            v33 = *v18;
            if ( !*(_DWORD *)(v45 + 4 * v33) )
            {
              v34 = *((_QWORD *)this + 32);
              v35 = (int *)(v34 + 8 * v33);
              v36 = *v35;
              v37 = v35[1];
              if ( *v35 >= 0 )
                *(_DWORD *)(v34 + 8LL * v36 + 4) = v37;
              if ( (int)v37 >= 0 )
                *(_DWORD *)(v34 + 8 * v37) = v36;
              *(_QWORD *)v35 = 0xFC06BF56FC06BF56LL;
            }
            ++v18;
          }
          while ( (int *)v24 != v18 );
        }
        *v13 = 0;
        v38 = *((_QWORD *)this + 33);
        v39 = (_QWORD *)(v38 + v48);
        v40 = *(_DWORD *)(v38 + v48);
        v41 = *(int *)(v38 + v48 + 4);
        if ( v40 >= 0 )
          *(_DWORD *)(v38 + 8LL * v40 + 4) = v41;
        if ( (int)v41 < 0 )
          break;
        *(_DWORD *)(v38 + 8 * v41) = v40;
        a2 = (CoinPresolveMatrix *)((char *)a2 + 4);
        *v39 = 0xFC06BF56FC06BF56LL;
        v9 += 40LL;
        *v49 = 0;
        *v50 = 0;
        if ( v9 == v62 )
          goto LABEL_29;
      }
      a2 = (CoinPresolveMatrix *)((char *)a2 + 4);
      v9 += 40LL;
      *v39 = 0xFC06BF56FC06BF56LL;
      *v49 = 0;
      *v50 = 0;
    }
    while ( v62 != v9 );
  }
LABEL_29:
  v42 = operator new(0x20u);
  useless_constraint_action::useless_constraint_action(v42, v65, v64, a4);
  return v42;
}

