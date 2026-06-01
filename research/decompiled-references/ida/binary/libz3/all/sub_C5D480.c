__int64 __fastcall sub_C5D480(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned __int8 v10; // dl
  int v11; // r13d
  unsigned __int8 v13; // dl
  __int64 v14; // rax
  int v15; // r12d
  int v16; // r14d
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  _QWORD *v28; // rax
  __int64 **v29; // r15
  __int64 **v30; // r14
  __int64 *v31; // rdx
  __int64 **v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rdi
  char **exception; // rbx
  __int64 *v41; // [rsp+10h] [rbp-278h] BYREF
  __int64 *v42; // [rsp+18h] [rbp-270h] BYREF
  __int64 v43; // [rsp+20h] [rbp-268h] BYREF
  __int64 v44; // [rsp+28h] [rbp-260h]
  __int64 v45[12]; // [rsp+30h] [rbp-258h] BYREF
  _BYTE v46[504]; // [rsp+90h] [rbp-1F8h] BYREF

  if ( !a3 )
  {
    v45[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_C516F0((_QWORD *)(a1 + 56), v45);
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v10 = 0;
    v11 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_19:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_34:
        sub_C5B7F0((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
      goto LABEL_6;
    }
    v20 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v21 = v20;
    if ( v20 )
    {
      v45[0] = v20;
      ++*(_DWORD *)(v20 + 8);
      sub_C516F0((_QWORD *)(a1 + 56), v45);
      if ( a2 != v21 )
      {
        v26 = *(_QWORD *)(a1 + 40);
        if ( v26 )
        {
          v27 = *(_DWORD *)(v26 - 4);
          if ( v27 )
            *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v10 = 1;
    v11 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_34;
  if ( v5 == 2 )
  {
    v13 = 3;
    if ( a3 != 3 )
      v13 = (a3 - 1) & 3;
    v14 = *(_QWORD *)(a1 + 56);
    v15 = v13;
    if ( v14 )
      v16 = *(_DWORD *)(v14 - 4);
    else
      v16 = 0;
    v17 = *(_QWORD **)(a1 + 40);
    if ( v17 )
    {
      v18 = *((unsigned int *)v17 - 1);
      if ( (_DWORD)v18 == *((_DWORD *)v17 - 2) )
      {
        v22 = (unsigned int)(3 * v18 + 1) >> 1;
        v23 = 16 * v22 + 8;
        if ( 16 * (int)v18 + 8 >= (unsigned int)v23 || (unsigned int)v18 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v45, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v45);
          sub_233E40((__int64)v45);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int *)sub_186B300(v17 - 1, v23);
        v17 = v24 + 2;
        *v24 = v22;
        v25 = v24[1];
        *(_QWORD *)(a1 + 40) = v17;
        v19 = &v17[2 * v25];
      }
      else
      {
        v19 = &v17[2 * v18];
      }
    }
    else
    {
      v28 = (_QWORD *)sub_186B270(0x28u);
      v17 = v28 + 1;
      *v28 = 2;
      *(_QWORD *)(a1 + 40) = v28 + 1;
      v19 = v28 + 1;
    }
    *v19 = a2;
    *((_DWORD *)v19 + 3) = v16;
    *((_DWORD *)v19 + 2) = v11 | (16 * v15);
    ++*((_DWORD *)v17 - 1);
    return 0;
  }
  else
  {
    if ( v5 )
      goto LABEL_19;
    if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      if ( (unsigned __int8)sub_C5B5A0((struct _Unwind_Exception *)a1, a2) )
        return 1;
      if ( !sub_C4E220(*(_QWORD **)(a1 + 96), *(_DWORD *)(a1 + 104), a2) )
      {
        sub_C59270((__int64)v45, *(_QWORD *)(a1 + 8), 0, *(_QWORD *)(a1 + 144));
        v29 = *(__int64 ***)(a1 + 96);
        v30 = &v29[*(unsigned int *)(a1 + 104)];
        if ( v29 != v30 )
        {
          while ( (unsigned __int64)*v29 <= 1 )
          {
            if ( v30 == ++v29 )
              goto LABEL_60;
          }
          if ( v29 != v30 )
          {
            v31 = *v29;
            do
            {
              v41 = v31;
              sub_4A3CA0((__int64)v46, &v41);
              v32 = v29 + 1;
              if ( v30 == v29 + 1 )
                break;
              while ( 1 )
              {
                v31 = *v32;
                v29 = v32;
                if ( (unsigned __int64)*v32 > 1 )
                  break;
                if ( v30 == ++v32 )
                  goto LABEL_60;
              }
            }
            while ( v30 != v32 );
          }
        }
LABEL_60:
        v42 = (__int64 *)a2;
        sub_4A3CA0((__int64)v46, &v42);
        v33 = *(_QWORD *)(a1 + 8);
        v34 = *(_QWORD *)(a1 + 480);
        v43 = 0;
        v44 = v33;
        sub_C5D2E0((__int64)v45, v34, &v43, (__int64 *)(a1 + 496));
        v35 = v43;
        v36 = *(_QWORD *)(a1 + 480);
        v37 = v44;
        if ( v36 != v43 )
        {
          if ( v36 )
          {
            v38 = *(_QWORD *)(a1 + 488);
            if ( (*(_DWORD *)(v36 + 8))-- == 1 )
              sub_15D7BC0(v38, v36);
          }
          *(_QWORD *)(a1 + 480) = v35;
          if ( v35 )
            ++*(_DWORD *)(v35 + 8);
        }
        sub_C4E2C0(v35, v37);
        sub_C37AF0(v45);
      }
      v7 = *(_QWORD *)(a1 + 480);
      if ( a2 == v7 )
      {
        v45[0] = *(_QWORD *)(a1 + 480);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 40);
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 - 4);
          if ( v9 )
            *(_BYTE *)(v8 + 16LL * (unsigned int)(v9 - 1) + 8) |= 2u;
        }
        v45[0] = v7;
        if ( !v7 )
          goto LABEL_14;
      }
      ++*(_DWORD *)(v7 + 8);
LABEL_14:
      sub_C516F0((_QWORD *)(a1 + 56), v45);
      return 1;
    }
    sub_39B170(a1, a2, v10, 0, a3 - (a3 != 3));
    return 0;
  }
}

