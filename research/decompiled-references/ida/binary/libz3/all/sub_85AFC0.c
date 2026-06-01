__int64 __fastcall sub_85AFC0(__int64 a1, unsigned int *a2, unsigned int *a3, int a4)
{
  char **exception; // r12
  unsigned int **v5; // r14
  __int64 v9; // rax
  unsigned int **v10; // r15
  unsigned int *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  char *v15; // rax
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // r14d
  unsigned int v22; // edx
  int v23; // r12d
  _QWORD *v24; // rax
  unsigned int v25; // edx
  _QWORD *v26; // rbp
  unsigned int *i; // rax
  __int64 v28; // rax
  __int64 v29; // r12
  unsigned int v30; // r13d
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // r15
  _DWORD *v37; // rax
  _BOOL8 v38; // rdx
  __int64 v39; // r14
  _DWORD *v40; // rax
  _BOOL8 v41; // rdx
  void *v42; // r12
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // r12
  unsigned int v46; // [rsp+8h] [rbp-80h]
  unsigned int v47; // [rsp+8h] [rbp-80h]
  __int64 v48; // [rsp+8h] [rbp-80h]
  unsigned int v49; // [rsp+10h] [rbp-78h]
  unsigned int v50; // [rsp+14h] [rbp-74h]
  __int64 v51; // [rsp+18h] [rbp-70h]
  __int64 v52[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = (unsigned int **)(a2 + 8);
  v9 = 2LL * a2[6];
  v10 = (unsigned int **)&a2[v9 + 8];
  if ( v9 * 4 )
  {
    do
    {
      v11 = *v5++;
      sub_7E5940(a1, v11);
    }
    while ( v10 != v5 );
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( !v12 )
    goto LABEL_12;
  v13 = *a2;
  if ( (unsigned int)v13 >= *(_DWORD *)(v12 - 4) )
    goto LABEL_12;
  v14 = *(_QWORD *)(v12 + 8 * v13);
  if ( !v14 )
    goto LABEL_12;
  v15 = (char *)(v14 + 88);
  if ( *(int *)(v14 + 88) >> 8 == -1 )
    goto LABEL_12;
  while ( *(_DWORD *)(a1 + 12) != *v15 )
  {
    v15 = *((char **)v15 + 1);
    if ( !v15 )
      goto LABEL_12;
  }
  if ( *(int *)v15 >> 8 == -1 )
  {
LABEL_12:
    sub_852970(a1, a2);
    v50 = sub_852C00(a1, a2);
    sub_85AE70(a1, a3);
    v17 = sub_852C00(a1, a3);
    v21 = v17;
    if ( a4 )
    {
      v51 = v17;
      v22 = sub_FF9FB0(*(_QWORD *)(a1 + 496), v17);
      v23 = 0;
      if ( v22 == -1 )
      {
        v26 = nullptr;
        goto LABEL_27;
      }
LABEL_14:
      v46 = v22;
      v24 = (_QWORD *)sub_186B270(0x10u);
      v25 = v46;
      v26 = v24 + 1;
      *v24 = 2;
      for ( i = (unsigned int *)(v24 + 1); ; i = &v35[v35[1] + 2] )
      {
        ++v23;
        *i = v25;
        ++*((_DWORD *)v26 - 1);
        if ( a4 == v23 )
          break;
        while ( 1 )
        {
          v22 = sub_FF9FB0(*(_QWORD *)(a1 + 496), v21);
          if ( v22 == -1 )
          {
LABEL_27:
            v36 = *(_QWORD *)(a1 + 496);
            v37 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8 * v51)) + 24);
            v38 = 0;
            if ( v37 && *v37 == 5 )
              v38 = v37[1] == 1;
            v22 = sub_1006C00(v36, v21, v38);
            if ( !v26 )
              goto LABEL_14;
          }
          v28 = *((unsigned int *)v26 - 1);
          if ( (_DWORD)v28 == *((_DWORD *)v26 - 2) )
            break;
          ++v23;
          *((_DWORD *)v26 + v28) = v22;
          ++*((_DWORD *)v26 - 1);
          if ( a4 == v23 )
            goto LABEL_19;
        }
        v33 = (unsigned int)(3 * v28 + 1) >> 1;
        v34 = 4 * v33 + 8;
        if ( 4 * (int)v28 + 8 >= (unsigned int)v34 || (unsigned int)v28 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v52, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v52);
          sub_233E40((__int64)v52);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v49 = v22;
        v47 = (unsigned int)(3 * v28 + 1) >> 1;
        v35 = (unsigned int *)sub_186B300(v26 - 1, v34);
        v26 = v35 + 2;
        v25 = v49;
        *v35 = v47;
      }
LABEL_19:
      if ( !*(_QWORD *)(a1 + 472) )
      {
        v48 = sub_186B270(8u);
        sub_1021CC0(v48, *(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 24) + 3904LL, *(_QWORD *)(a1 + 72));
        v42 = *(void **)(a1 + 472);
        v43 = v48;
        if ( (void *)v48 != v42 )
        {
          if ( v42 )
          {
            sub_1021E20(*(_QWORD *)(a1 + 472));
            sub_186B220(v42);
            v43 = v48;
          }
          *(_QWORD *)(a1 + 472) = v43;
        }
        v44 = *(_QWORD *)(a1 + 464);
        if ( v44 )
        {
          v45 = v44 + 12LL * *(unsigned int *)(v44 - 4);
          if ( v44 != v45 )
          {
            while ( 1 )
            {
              sub_1021CA0(v43);
              v44 += 12;
              if ( v45 == v44 )
                break;
              v43 = *(_QWORD *)(a1 + 472);
            }
          }
        }
      }
      sub_100A620(*(_QWORD *)(a1 + 496));
      v29 = *(_QWORD *)(a1 + 472);
      v30 = *((_DWORD *)v26 - 1);
      v31 = sub_FF9FB0(*(_QWORD *)(a1 + 496), v50);
      v32 = v31;
      if ( v31 == -1 )
      {
        v39 = *(_QWORD *)(a1 + 496);
        v40 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v50)) + 24);
        v41 = 0;
        if ( v40 )
        {
          if ( *v40 == 5 )
            v41 = v40[1] == 1;
        }
        v32 = (unsigned int)sub_1006C00(v39, v50, v41);
      }
      sub_1021B50(v29, v32, v30, v26);
      sub_186B220(v26 - 1);
    }
    else
    {
      sub_883EA0(a1, (_DWORD)a2, (_DWORD)a3, v18, v19, v20);
    }
    return v50;
  }
  else
  {
    sub_852970(a1, a2);
    return sub_852C00(a1, a2);
  }
}

