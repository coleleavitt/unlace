__int64 __fastcall sub_85B3A0(__int64 a1, unsigned int *a2)
{
  char **exception; // r12
  unsigned int **v4; // r12
  unsigned int **v5; // rbp
  __int64 v6; // rax
  unsigned int **v7; // r14
  unsigned int *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  char *v12; // rax
  __int64 v14; // rax
  unsigned int **v15; // r14
  _DWORD *v16; // rbp
  __int64 v17; // rax
  unsigned int *v18; // rax
  unsigned int *v19; // r13
  unsigned int v20; // r13d
  unsigned int v21; // r15d
  __int64 v22; // r15
  _DWORD *v23; // rax
  _BOOL8 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned int v27; // r13d
  unsigned int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // edx
  size_t v31; // rsi
  unsigned int *v32; // rax
  void *v33; // r13
  __int64 v34; // r13
  __int64 i; // r14
  __int64 v36; // r14
  _DWORD *v37; // rax
  _BOOL8 v38; // rdx
  unsigned int v39; // [rsp+8h] [rbp-70h]
  unsigned int v40; // [rsp+Ch] [rbp-6Ch]
  __int64 v41[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (unsigned int **)(a2 + 8);
  v5 = (unsigned int **)(a2 + 8);
  v6 = 2LL * a2[6];
  v7 = (unsigned int **)&a2[v6 + 8];
  if ( v6 * 4 )
  {
    do
    {
      v8 = *v5++;
      sub_7E5940(a1, v8);
    }
    while ( v7 != v5 );
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v9 )
  {
    v10 = *a2;
    if ( (unsigned int)v10 < *(_DWORD *)(v9 - 4) )
    {
      v11 = *(_QWORD *)(v9 + 8 * v10);
      if ( v11 )
      {
        v12 = (char *)(v11 + 88);
        if ( *(int *)(v11 + 88) >> 8 != -1 )
        {
          while ( *(_DWORD *)(a1 + 12) != *v12 )
          {
            v12 = *((char **)v12 + 1);
            if ( !v12 )
              goto LABEL_12;
          }
          if ( *(int *)v12 >> 8 != -1 )
          {
            sub_852970(a1, a2);
            return sub_852C00(a1, a2);
          }
        }
      }
    }
  }
LABEL_12:
  sub_852970(a1, a2);
  v40 = sub_852C00(a1, a2);
  v14 = a2[6];
  v15 = &v4[v14];
  if ( v14 * 8 )
  {
    v16 = nullptr;
    while ( 1 )
    {
      v19 = *v4;
      if ( !*((_WORD *)*v4 + 2) )
        sub_85AE70(a1, *v4);
      v20 = sub_852C00(a1, v19);
      v21 = sub_FF9FB0(*(_QWORD *)(a1 + 496), v20);
      if ( v21 == -1 )
      {
        v22 = *(_QWORD *)(a1 + 496);
        v23 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v20)) + 24);
        v24 = 0;
        if ( v23 && *v23 == 5 )
          v24 = v23[1] == 1;
        v21 = sub_1006C00(v22, v20, v24);
        if ( !v16 )
          goto LABEL_25;
LABEL_15:
        v17 = (unsigned int)*(v16 - 1);
        if ( (_DWORD)v17 == *(v16 - 2) )
        {
          v30 = (unsigned int)(3 * v17 + 1) >> 1;
          v31 = 4 * v30 + 8;
          if ( 4 * (int)v17 + 8 >= (unsigned int)v31 || (unsigned int)v17 >= v30 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v41, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v41);
            sub_233E40((__int64)v41);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v39 = (unsigned int)(3 * v17 + 1) >> 1;
          v32 = (unsigned int *)sub_186B300(v16 - 2, v31);
          v16 = v32 + 2;
          *v32 = v39;
          v18 = &v32[v32[1] + 2];
        }
        else
        {
          v18 = &v16[v17];
        }
        ++v4;
        *v18 = v21;
        ++*(v16 - 1);
        if ( v15 == v4 )
        {
LABEL_26:
          sub_100A620(*(_QWORD *)(a1 + 496));
          v26 = *(_QWORD *)(a1 + 472);
          if ( v26 )
            goto LABEL_27;
          goto LABEL_37;
        }
      }
      else
      {
        if ( v16 )
          goto LABEL_15;
LABEL_25:
        ++v4;
        v25 = sub_186B270(0x10u);
        *(_QWORD *)v25 = 2;
        v16 = (_DWORD *)(v25 + 8);
        *(_DWORD *)(v25 + 8) = v21;
        ++*(_DWORD *)(v25 + 4);
        if ( v15 == v4 )
          goto LABEL_26;
      }
    }
  }
  v16 = nullptr;
  sub_100A620(*(_QWORD *)(a1 + 496));
  v26 = *(_QWORD *)(a1 + 472);
  if ( v26 )
  {
    v27 = 0;
  }
  else
  {
LABEL_37:
    v26 = sub_186B270(8u);
    sub_1021CC0(v26, *(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 24) + 3904LL, *(_QWORD *)(a1 + 72));
    v33 = *(void **)(a1 + 472);
    if ( (void *)v26 != v33 )
    {
      if ( v33 )
      {
        sub_1021E20(*(_QWORD *)(a1 + 472));
        sub_186B220(v33);
      }
      *(_QWORD *)(a1 + 472) = v26;
    }
    v34 = *(_QWORD *)(a1 + 464);
    if ( v34 )
    {
      for ( i = v34 + 12LL * *(unsigned int *)(v34 - 4); i != v34; v26 = *(_QWORD *)(a1 + 472) )
      {
        sub_1021CA0(v26);
        v34 += 12;
      }
    }
    v27 = 0;
    if ( v16 )
LABEL_27:
      v27 = *(v16 - 1);
  }
  v28 = sub_FF9FB0(*(_QWORD *)(a1 + 496), v40);
  v29 = v28;
  if ( v28 == -1 )
  {
    v36 = *(_QWORD *)(a1 + 496);
    v37 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v40)) + 24);
    v38 = 0;
    if ( v37 && *v37 == 5 )
      v38 = v37[1] == 1;
    v29 = (unsigned int)sub_1006C00(v36, v40, v38);
  }
  sub_1021B50(v26, v29, v27, v16);
  if ( v16 )
    sub_186B220(v16 - 2);
  return v40;
}

