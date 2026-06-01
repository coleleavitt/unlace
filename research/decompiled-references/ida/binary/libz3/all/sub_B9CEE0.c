void __fastcall sub_B9CEE0(__int64 a1, char *a2, char a3)
{
  char **exception; // rbx
  char v7; // cl
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rax
  int *v12; // r14
  char v13; // al
  __int64 v14; // rdx
  char v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rax
  char v25; // cl
  char *v26; // r13
  __int64 v27; // r15
  __int64 v28; // r14
  _QWORD *v29; // rax
  _QWORD *v30; // rdi
  _QWORD *v31; // r8
  unsigned int v32; // eax
  __int64 v33; // rsi
  int v34; // eax
  _QWORD *v35; // rsi
  __int64 v36; // r15
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // r9d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rsi
  _QWORD *v43; // rax
  char *v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 v46; // [rsp+10h] [rbp-68h]
  _QWORD *v47; // [rsp+10h] [rbp-68h]
  _QWORD *v48; // [rsp+10h] [rbp-68h]
  unsigned int v49; // [rsp+18h] [rbp-60h]
  char *v50[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = a2[53];
  if ( v7 >= 0 )
  {
    v8 = *((_QWORD *)a2 + 1);
    v9 = 1LL << v7;
    v10 = *(_QWORD *)(v8 + 96);
    if ( ((1LL << v7) & v10) == 0 )
    {
      v11 = sub_180C100(a1 + 48, 24);
      *(_QWORD *)v11 = off_1C56EA8;
      *(_QWORD *)(v11 + 8) = v8 + 96;
      *(_QWORD *)(v11 + 16) = v10;
      v50[0] = (char *)v11;
      sub_B9B610((_QWORD *)(a1 + 32), v50);
      *(_QWORD *)(v8 + 96) |= v9;
    }
  }
  if ( (a2[44] & 8) == 0 && *(_DWORD *)(*(_QWORD *)a2 + 24LL) )
  {
    v12 = *(int **)(*(_QWORD *)a2 + 16LL);
    v13 = sub_B9B270((_QWORD *)(a1 + 88), v12);
    v14 = *(_QWORD *)(a1 + 544);
    v15 = v13;
    v16 = *v12 + 0x80000000;
    if ( v14 )
    {
      if ( (unsigned int)v16 < *(_DWORD *)(v14 - 4) )
      {
        if ( *(_BYTE *)(v14 + (unsigned int)v16) )
        {
          v36 = *((_QWORD *)a2 + 1);
          if ( ((1LL << v15) & *(_QWORD *)(v36 + 96)) == 0 )
          {
            v46 = *(_QWORD *)(v36 + 96);
            v37 = sub_180C100(a1 + 48, 24);
            *(_QWORD *)v37 = off_1C56EA8;
            *(_QWORD *)(v37 + 8) = v36 + 96;
            *(_QWORD *)(v37 + 16) = v46;
            v50[0] = (char *)v37;
            sub_B9B610((_QWORD *)(a1 + 32), v50);
            v38 = *v12;
            *(_QWORD *)(v36 + 96) |= 1LL << v15;
            v16 = v38 + 0x80000000;
          }
        }
      }
    }
    v17 = *(_QWORD *)(a1 + 536);
    if ( v17 )
    {
      if ( (unsigned int)v16 < *(_DWORD *)(v17 - 4) )
      {
        if ( *(_BYTE *)(v17 + v16) )
        {
          if ( (a2[44] & 8) == 0 )
          {
            v24 = *(unsigned int *)(*(_QWORD *)a2 + 24LL);
            if ( (_DWORD)v24 )
            {
              v25 = v15;
              v26 = a2;
              v44 = &a2[8 * v24];
              v27 = 1LL << v25;
              do
              {
                v28 = *(_QWORD *)(*((_QWORD *)v26 + 14) + 8LL);
                if ( (v27 & *(_QWORD *)(v28 + 104)) == 0 )
                {
                  v45 = *(_QWORD *)(v28 + 104);
                  v29 = (_QWORD *)sub_180C100(a1 + 48, 24);
                  v30 = *(_QWORD **)(a1 + 32);
                  v31 = v29;
                  *v29 = off_1C56EA8;
                  v29[1] = v28 + 104;
                  v29[2] = v45;
                  if ( v30 )
                  {
                    v32 = *((_DWORD *)v30 - 1);
                    if ( v32 == *((_DWORD *)v30 - 2) )
                    {
                      v39 = (3 * v32 + 1) >> 1;
                      v40 = 8 * v39 + 8;
                      if ( 8 * v32 + 8 >= (unsigned int)v40 || v32 >= v39 )
                      {
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_151CF2(v50);
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, v50);
                        sub_233E40((__int64)v50);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v49 = (3 * v32 + 1) >> 1;
                      v47 = v31;
                      v41 = (unsigned int *)sub_186B300(v30 - 1, v40);
                      v31 = v47;
                      v42 = v41[1];
                      v30 = v41 + 2;
                      *v41 = v49;
                      LODWORD(v41) = v42;
                      *(_QWORD *)(a1 + 32) = v30;
                      v35 = &v30[v42];
                      v34 = (_DWORD)v41 + 1;
                    }
                    else
                    {
                      v33 = v32;
                      v34 = v32 + 1;
                      v35 = &v30[v33];
                    }
                  }
                  else
                  {
                    v48 = v29;
                    v43 = (_QWORD *)sub_186B270(0x18u);
                    v31 = v48;
                    v30 = v43 + 1;
                    *v43 = 2;
                    v34 = 1;
                    *(_QWORD *)(a1 + 32) = v30;
                    v35 = v30;
                  }
                  *v35 = v31;
                  *((_DWORD *)v30 - 1) = v34;
                  *(_QWORD *)(v28 + 104) |= v27;
                }
                v26 += 8;
              }
              while ( v44 != v26 );
            }
          }
        }
      }
    }
    if ( !a3 )
    {
      v18 = *(_QWORD *)(a1 + 488);
      v19 = **(_DWORD **)(*(_QWORD *)a2 + 16LL) + 0x80000000;
      if ( v18 )
      {
        if ( (unsigned int)v19 < *(_DWORD *)(v18 - 4) )
        {
          v20 = *(_QWORD *)(v18 + 8 * v19);
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 40);
            if ( !v21 || !*(_DWORD *)(v21 - 4) )
            {
              v22 = *(_QWORD *)(a1 + 520);
              if ( !v22 || (v23 = *(_DWORD *)(v22 - 4), v23 == *(_DWORD *)(v22 - 8)) )
              {
                sub_B9B4D0((unsigned int **)(a1 + 520));
                v22 = *(_QWORD *)(a1 + 520);
                v23 = *(_DWORD *)(v22 - 4);
              }
              *(_QWORD *)(v22 + 8LL * v23) = v20;
              *(_DWORD *)(v22 - 4) = v23 + 1;
            }
            v50[0] = a2;
            sub_B9CC80((_QWORD *)(v20 + 40), v50);
          }
        }
      }
    }
  }
}

