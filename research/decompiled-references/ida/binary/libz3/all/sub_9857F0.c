__int64 __fastcall sub_9857F0(__int64 a1, unsigned __int64 a2, int a3)
{
  char **exception; // rbx
  __int64 v7; // rax
  unsigned int *v8; // rax
  unsigned int *v9; // r9
  __int64 v10; // rsi
  __int64 *v11; // r8
  unsigned int v12; // r12d
  __int64 v13; // rcx
  unsigned int v14; // ebp
  int v15; // edx
  __int64 v16; // rax
  int i; // edx
  int v18; // r13d
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int *v23; // rsi
  __int64 v24; // rcx
  unsigned int *v25; // rdx
  __int64 v26; // rax
  unsigned int *v28; // r14
  unsigned int v29; // eax
  unsigned int v30; // esi
  unsigned int *v31; // r14
  unsigned int v32; // esi
  char v33; // dl
  __int64 v34; // rax
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // rsi
  _QWORD *v37; // rdx
  __int64 v38; // rax
  unsigned int *v39; // rax
  unsigned int v40; // r14d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  unsigned __int64 v45; // [rsp+0h] [rbp-78h]
  unsigned int v46; // [rsp+0h] [rbp-78h]
  unsigned int *v47; // [rsp+8h] [rbp-70h]
  __int64 v48[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 320);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v8 = *(unsigned int **)(a1 + 336);
  v9 = v8;
  if ( v8 )
    *(v8 - 1) = 0;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(__int64 **)(a1 + 40);
  v12 = *(_DWORD *)(v10 + 9472);
  v13 = *v11;
  if ( a3 != -2 )
  {
    v14 = a3 ^ 1;
    if ( !v13 || (v15 = *(_DWORD *)(v13 - 4)) == 0 )
    {
      v18 = 0;
LABEL_34:
      sub_983C00((_QWORD *)a1, v14);
      v11 = *(__int64 **)(a1 + 40);
LABEL_14:
      if ( !*v11 )
      {
LABEL_26:
        v9 = *(unsigned int **)(a1 + 336);
        goto LABEL_27;
      }
      if ( *(_DWORD *)(*v11 - 4) )
      {
LABEL_16:
        v19 = a2 & 7;
        if ( v19 == 2 )
          goto LABEL_20;
        if ( v19 > 2 )
        {
          v36 = a2 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v19 != 3 )
          {
            sub_1872CE0("");
            sub_1873130(114, 1448);
          }
        }
        else
        {
          if ( (a2 & 7) != 0 )
          {
            sub_983C00((_QWORD *)a1, a2 >> 3);
            goto LABEL_20;
          }
          v28 = (unsigned int *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
          v47 = v28;
          v29 = *v28;
          if ( v14 != dword_1C7EC90 )
          {
            v30 = v28[2];
            v19 = 1;
            if ( v14 != v30 )
            {
              v46 = *v28;
              sub_983C00((_QWORD *)a1, v30 ^ 1);
              v29 = v46;
              v19 = 2;
            }
          }
          if ( v19 < v29 )
          {
            v31 = &v28[v19];
            v45 = (unsigned __int64)&v47[v29 - 1 - v19 + 1 + (unsigned __int64)v19];
            do
            {
              v32 = v31[2];
              ++v31;
              sub_983C00((_QWORD *)a1, v32 ^ 1);
            }
            while ( (unsigned int *)v45 != v31 );
          }
          v33 = *((_BYTE *)v47 + 7);
          if ( (v33 & 0x40) == 0 )
            goto LABEL_20;
          v34 = (__int64)&v47[(v47[1] & 0xFFFFFF) + 2];
          if ( (v33 & 3u) - 2 < 2 )
            v34 = (__int64)&v47[(v47[1] & 0xFFFFFF) + 3];
          v35 = (unsigned __int64 *)((v34 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*((_BYTE *)v47 + 7) & 0x20) != 0 )
            ++v35;
          v36 = *v35;
          if ( !*v35 )
          {
LABEL_20:
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL) + 16LL * (v14 >> 1) + 11) & 2) != 0 )
            {
              v37 = *(_QWORD **)(a1 + 320);
              if ( v37 )
              {
                v38 = *((unsigned int *)v37 - 1);
                if ( (_DWORD)v38 == *((_DWORD *)v37 - 2) )
                {
                  v40 = (unsigned int)(3 * v38 + 1) >> 1;
                  v41 = 4 * v40 + 8;
                  if ( 4 * (int)v38 + 8 >= (unsigned int)v41 || (unsigned int)v38 >= v40 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v48, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v48);
                    sub_233E40((__int64)v48);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v42 = (unsigned int *)sub_186B300(v37 - 1, v41);
                  v37 = v42 + 2;
                  *v42 = v40;
                  v43 = v42[1];
                  *(_QWORD *)(a1 + 320) = v37;
                  v39 = (unsigned int *)v37 + v43;
                }
                else
                {
                  v39 = (unsigned int *)v37 + v38;
                }
              }
              else
              {
                v44 = (_QWORD *)sub_186B270(0x10u);
                *v44 = 2;
                v37 = v44 + 1;
                *(_QWORD *)(a1 + 320) = v44 + 1;
                v39 = (unsigned int *)(v44 + 1);
              }
              *v39 = v14;
              ++*((_DWORD *)v37 - 1);
            }
            if ( v18 >= 0 )
            {
              v20 = v18 - 1;
              while ( 1 )
              {
                v14 = *(_DWORD *)(**(_QWORD **)(a1 + 40) + 4 * v20 + 4);
                v21 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL) + 16LL * (v14 >> 1);
                if ( (*(_DWORD *)(v21 + 8) & 0xFFFFFFu) < v12 )
                  break;
                if ( (*(_BYTE *)(v21 + 11) & 1) != 0 )
                {
                  a2 = *(_QWORD *)v21;
                  v18 = v20;
                  goto LABEL_16;
                }
                if ( --v20 == -2 )
                  goto LABEL_26;
              }
            }
            goto LABEL_26;
          }
        }
        sub_9855D0((_QWORD *)a1, v36);
        goto LABEL_20;
      }
      v8 = *(unsigned int **)(a1 + 336);
      goto LABEL_39;
    }
LABEL_8:
    v16 = (unsigned int)(v15 - 1);
    for ( i = v15 - 1; ; --i )
    {
      if ( *(_DWORD *)(a1 + 48) >= (*(_DWORD *)(*(_QWORD *)(v10 + 8872) + 16LL * (*(_DWORD *)(v13 + 4 * v16) >> 1) + 8)
                                  & 0xFFFFFFu) )
      {
        v18 = i;
        goto LABEL_13;
      }
      if ( !i )
        break;
      v16 = (unsigned int)(i - 1);
    }
    v18 = 0;
LABEL_13:
    if ( a3 == -2 )
      goto LABEL_14;
    goto LABEL_34;
  }
  if ( !v13 )
    goto LABEL_27;
  v15 = *(_DWORD *)(v13 - 4);
  if ( v15 )
  {
    v14 = dword_1C7EC90;
    goto LABEL_8;
  }
LABEL_39:
  v9 = v8;
LABEL_27:
  if ( v9 )
  {
    v22 = *(v9 - 1);
    if ( (_DWORD)v22 )
    {
      v23 = &v9[v22];
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
      v25 = v9;
      do
      {
        v26 = *v25++;
        *(_BYTE *)(v24 + 16 * v26 + 11) &= ~1u;
      }
      while ( v25 != v23 );
    }
    *(v9 - 1) = 0;
  }
  return sub_9827B0(a1, 0);
}

