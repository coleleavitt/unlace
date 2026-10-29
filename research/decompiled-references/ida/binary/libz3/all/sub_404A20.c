__int64 __fastcall sub_404A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // r12
  __int64 v5; // r14
  __int64 v8; // r11
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // ebp
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v20; // r14
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-A8h]
  __int64 v32; // [rsp+30h] [rbp-78h]
  unsigned int v33; // [rsp+3Ch] [rbp-6Ch]
  __int64 v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+48h] [rbp-60h]
  __int64 v36[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = 0;
  v8 = *(unsigned int *)(a1 + 72);
  v9 = *(_QWORD **)(a1 + 64);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = 0;
  v8 *= 16;
  v12 = (_QWORD *)((char *)v9 + v8);
  v32 = v10;
  v13 = v10;
  v34 = 0;
  v35 = v10;
  if ( v9 != (_QWORD *)((char *)v9 + v8) )
  {
    while ( *v9 <= 1u )
    {
      v9 += 2;
      if ( v12 == v9 )
        goto LABEL_34;
    }
    if ( v12 == v9 )
    {
LABEL_34:
      v13 = v10;
      v11 = 0;
      v5 = 0;
      goto LABEL_19;
    }
    v5 = 0;
    do
    {
      sub_403090(*(_QWORD *)v9[1], (_QWORD *)(a1 + 320));
      v14 = *(_QWORD *)(a1 + 320);
      if ( v14 )
      {
        v15 = 0;
        do
        {
          if ( v15 >= *(_DWORD *)(v14 - 4) )
            break;
          if ( *(_QWORD *)(v14 + 8LL * v15) == a2 )
          {
            v18 = sub_15E1B70(*(_QWORD *)(a1 + 8));
            v30 = v18;
            if ( v18 )
              ++*(_DWORD *)(v18 + 8);
            if ( v5 )
            {
              if ( (*(_DWORD *)(v5 + 8))-- == 1 )
                sub_15D7BC0(v32, v5);
            }
            sub_43D1D0(*(_QWORD *)a1 + 8LL, v30, 0, ++v15, &v34, 1);
            v20 = v34;
            if ( v34 )
              ++*(_DWORD *)(v34 + 8);
            v21 = *(_QWORD **)(a4 + 8);
            if ( v21 )
            {
              v22 = *((_DWORD *)v21 - 1);
              if ( v22 == *((_DWORD *)v21 - 2) )
              {
                v26 = (3 * v22 + 1) >> 1;
                v27 = 8 * v26 + 8;
                if ( 8 * v22 + 8 >= (unsigned int)v27 || v22 >= v26 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_3FCFD0(v36, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v36);
                  sub_233E40((__int64)v36);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v33 = (3 * v22 + 1) >> 1;
                v28 = (unsigned int *)sub_186B300(v21 - 1, v27);
                v21 = v28 + 2;
                *(_QWORD *)(a4 + 8) = v28 + 2;
                *v28 = v33;
                LODWORD(v28) = v28[1];
                v25 = &v21[(unsigned int)v28];
                v24 = (_DWORD)v28 + 1;
              }
              else
              {
                v23 = v22;
                v24 = v22 + 1;
                v25 = &v21[v23];
              }
            }
            else
            {
              v29 = (_QWORD *)sub_186B270(0x18u);
              v21 = v29 + 1;
              *v29 = 2;
              v25 = v29 + 1;
              *(_QWORD *)(a4 + 8) = v29 + 1;
              v24 = 1;
            }
            *v25 = v20;
            v5 = v30;
            *((_DWORD *)v21 - 1) = v24;
            v14 = *(_QWORD *)(a1 + 320);
          }
          else
          {
            ++v15;
          }
        }
        while ( v14 );
      }
      v16 = v9 + 2;
      if ( v12 == v9 + 2 )
        break;
      while ( 1 )
      {
        v9 = v16;
        if ( *v16 > 1u )
          break;
        v16 += 2;
        if ( v12 == v16 )
          goto LABEL_18;
      }
    }
    while ( v12 != v16 );
LABEL_18:
    v11 = v34;
    v13 = v35;
  }
LABEL_19:
  sub_3FCDF0(v11, v13);
  return sub_3FCDF0(v5, v32);
}

