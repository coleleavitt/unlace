_QWORD *__fastcall sub_57A280(__int64 a1, _QWORD *a2)
{
  char **v2; // r12
  char **exception; // r12
  _QWORD *v4; // r14
  _QWORD *v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // r12d
  char v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rbp
  __int64 *v19; // r13
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  unsigned int v22; // edx
  _DWORD *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int *v28; // rax
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  _QWORD *v34; // rax
  __int64 v35; // [rsp+10h] [rbp-88h]
  __int64 v36; // [rsp+20h] [rbp-78h]
  unsigned int v37; // [rsp+2Ch] [rbp-6Ch]
  __int64 v38[11]; // [rsp+40h] [rbp-58h] BYREF

  sub_180C5A0(v38, "product_relation");
  if ( *(_QWORD *)(a2[1] + 16LL) != v38[0] )
    return nullptr;
  v6 = sub_5790D0(a2);
  v7 = v6[4];
  if ( !v7 )
    return nullptr;
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  while ( v9 < *(_DWORD *)(v7 - 4) )
  {
    v11 = sub_4C4AC0(*(_QWORD *)(a1 + 24), *(_QWORD *)(v7 + 8LL * v9));
    v12 = v11;
    if ( v8 )
    {
      v13 = *((_DWORD *)v8 - 1);
      if ( v13 == *((_DWORD *)v8 - 2) )
      {
        v26 = (3 * v13 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v27 || v13 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v38, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v38);
          sub_233E40((__int64)v38);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (3 * v13 + 1) >> 1;
        v36 = v12;
        v28 = (unsigned int *)sub_186B300(v8 - 1, v27);
        v8 = v28 + 2;
        v12 = v36;
        *v28 = v37;
        LODWORD(v28) = v28[1];
        v16 = &v8[(unsigned int)v28];
        v15 = (_DWORD)v28 + 1;
      }
      else
      {
        v14 = v13;
        v15 = v13 + 1;
        v16 = &v8[v14];
      }
    }
    else
    {
      v35 = v11;
      v34 = (_QWORD *)sub_186B270(0x18u);
      v12 = v35;
      v8 = v34 + 1;
      *v34 = 2;
      v15 = 1;
      v16 = v8;
    }
    *v16 = v12;
    *((_DWORD *)v8 - 1) = v15;
    ++v9;
    v10 |= v12 != 0;
    v7 = v6[4];
    if ( !v7 )
    {
      if ( v10 )
      {
        v4 = (_QWORD *)sub_186B270(0x10u);
        goto LABEL_13;
      }
LABEL_23:
      sub_186B220(v8 - 1);
      return nullptr;
    }
  }
  if ( !v10 )
  {
    if ( !v8 )
      return nullptr;
    goto LABEL_23;
  }
  v4 = (_QWORD *)sub_186B270(0x10u);
  if ( v8 )
  {
LABEL_13:
    v17 = *((unsigned int *)v8 - 1);
    v4[1] = 0;
    *v4 = &off_1C516C8;
    if ( (_DWORD)v17 )
    {
      v18 = &v8[v17];
      v19 = v8;
      v20 = (_QWORD *)sub_186B270(0x18u);
      *v20 = 2;
      v21 = v20 + 1;
      v22 = 1;
      v4[1] = v21;
      v23 = v21;
      while ( 1 )
      {
        v24 = *v19++;
        *v21 = v24;
        *(v23 - 1) = v22;
        if ( v18 == v19 )
          break;
        if ( *(v23 - 2) == v22 )
        {
          v29 = (3 * v22 + 1) >> 1;
          v30 = 8 * v29 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v30 || v22 >= v29 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v38, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v38);
            sub_233E40((__int64)v38);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = (unsigned int *)sub_186B300(v23 - 2, v30);
          v23 = v31 + 2;
          *v31 = v29;
          v32 = v31[1];
          v4[1] = v23;
          v33 = v32;
          v21 = &v23[2 * v32];
          v22 = v33 + 1;
        }
        else
        {
          v25 = v22++;
          v21 = &v23[2 * v25];
        }
      }
    }
    sub_186B220(v8 - 1);
  }
  else
  {
    v4[1] = 0;
    *v4 = &off_1C516C8;
  }
  return v4;
}

