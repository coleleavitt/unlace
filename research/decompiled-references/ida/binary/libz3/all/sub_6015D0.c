__int64 __fastcall sub_6015D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  char **exception; // r12
  __int64 v6; // r12
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  int v9; // eax
  __int64 v10; // rsi
  _DWORD *v11; // rbx
  int v12; // eax
  __int64 v13; // r13
  unsigned int v14; // r15d
  unsigned int v15; // eax
  __int64 *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  _QWORD *v26; // rdx
  unsigned int v27; // edx
  size_t v28; // rsi
  unsigned int *v29; // rax
  _QWORD *v30; // rax
  __int64 v32; // [rsp+8h] [rbp-C0h]
  __int64 *v33; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v34; // [rsp+10h] [rbp-B8h]
  int v36; // [rsp+20h] [rbp-A8h]
  __int64 v37; // [rsp+20h] [rbp-A8h]
  __int64 v38; // [rsp+28h] [rbp-A0h]
  unsigned int v40; // [rsp+3Ch] [rbp-8Ch]
  __int64 v41; // [rsp+60h] [rbp-68h] BYREF
  __int64 v42; // [rsp+68h] [rbp-60h]
  __int64 v43[11]; // [rsp+70h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  sub_62A000(v6, a3);
  v7 = (_QWORD *)sub_186B270(0x18u);
  v34 = 0;
  v8 = v7 + 1;
  v7[1] = a3;
  *v7 = 0x100000002LL;
  v9 = 1;
  do
  {
    v10 = 0;
    v11 = (_DWORD *)v8[v9 - 1];
    v12 = v9 - 1;
    v38 = *(_QWORD *)(a1 + 32);
    if ( v11 )
    {
      sub_62A000(*(_QWORD *)(a1 + 32), v11);
      v10 = v8[*((_DWORD *)v8 - 1) - 1];
      v12 = *((_DWORD *)v8 - 1) - 1;
    }
    *((_DWORD *)v8 - 1) = v12;
    sub_62A410(v6, v10);
    v36 = v11[16];
    if ( !v36 )
    {
      v15 = v11[17];
      v14 = 0;
      if ( v15 < v11[14] )
      {
LABEL_18:
        while ( (*(_BYTE *)((*(_QWORD *)&v11[2 * v15 + 20] & 0xFFFFFFFFFFFFFFF8LL) + 30) & 2) == 0 )
        {
          if ( ++v15 >= v11[14] )
            goto LABEL_9;
        }
      }
LABEL_19:
      sub_63DAD0(a4, v11, a5);
      sub_62A410(v38, v11);
      goto LABEL_20;
    }
    v32 = (unsigned int)v11[16];
    v13 = 0;
    do
    {
      v14 = v13;
      if ( (unsigned __int8)sub_5FBCB0(a1, a2, *(_QWORD *)((*(_QWORD *)&v11[2 * v13 + 20] & 0xFFFFFFFFFFFFFFF8LL) + 16)) )
      {
        v15 = v11[17];
        if ( v15 < v11[14] )
          goto LABEL_18;
        goto LABEL_9;
      }
      ++v13;
    }
    while ( v32 != v13 );
    v15 = v11[17];
    ++v14;
    if ( v15 < v11[14] )
      goto LABEL_18;
LABEL_9:
    if ( v36 == v14 )
      goto LABEL_19;
    v16 = *(__int64 **)sub_63BA90(a1 + 216, *(_QWORD *)((*(_QWORD *)&v11[2 * v14 + 20] & 0xFFFFFFFFFFFFFFF8LL) + 16));
    if ( !v16 || (v33 = &v16[*((unsigned int *)v16 - 1)], v33 == v16) )
    {
      sub_62A410(v38, v11);
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v17 = *v16;
          v18 = *(_QWORD *)(a1 + 32);
          v41 = 0;
          v42 = v18;
          if ( (unsigned __int8)sub_600B70(a1, v11, v17, v14, &v41) )
          {
            v37 = v41;
            sub_62A000(v6, v41);
            if ( v8 )
            {
              v23 = *((_DWORD *)v8 - 1);
              if ( v23 == *((_DWORD *)v8 - 2) )
              {
                v27 = (3 * v23 + 1) >> 1;
                v28 = 8 * v27 + 8;
                if ( 8 * v23 + 8 >= (unsigned int)v28 || v23 >= v27 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v43, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v43);
                  sub_233E40((__int64)v43);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v40 = (3 * v23 + 1) >> 1;
                v29 = (unsigned int *)sub_186B300(v8 - 1, v28);
                v8 = v29 + 2;
                *v29 = v40;
                LODWORD(v29) = v29[1];
                v26 = &v8[(unsigned int)v29];
                v25 = (_DWORD)v29 + 1;
              }
              else
              {
                v24 = v23;
                v25 = v23 + 1;
                v26 = &v8[v24];
              }
            }
            else
            {
              v30 = (_QWORD *)sub_186B270(0x18u);
              v8 = v30 + 1;
              *v30 = 2;
              v25 = 1;
              v26 = v8;
            }
            *v26 = v37;
            *((_DWORD *)v8 - 1) = v25;
          }
          if ( !v41 )
            break;
          ++v16;
          sub_62A410(v42, v41);
          if ( v33 == v16 )
            goto LABEL_15;
        }
        ++v16;
      }
      while ( v33 != v16 );
LABEL_15:
      sub_62A410(v38, v11);
      if ( !v8 )
      {
        sub_6481D0(*(_QWORD *)(a1 + 464));
        return 1;
      }
    }
    v34 = 1;
LABEL_20:
    v9 = *((_DWORD *)v8 - 1);
  }
  while ( v9 );
  if ( v34 )
    sub_6481D0(*(_QWORD *)(a1 + 464));
  v19 = v8;
  v20 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
  if ( (unsigned __int64)v8 < v20 )
  {
    do
    {
      v21 = *v19++;
      sub_62A410(v6, v21);
    }
    while ( (unsigned __int64)v19 < v20 );
  }
  sub_186B220(v8 - 1);
  return v34;
}

