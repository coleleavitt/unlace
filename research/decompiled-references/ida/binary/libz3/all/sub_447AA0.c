__int64 (__fastcall **__fastcall sub_447AA0(_QWORD *a1, __int64 a2))()
{
  char **exception; // rbp
  _QWORD *v4; // r13
  __int64 v5; // rbx
  int v6; // eax
  __int64 *v7; // r14
  unsigned int v8; // r14d
  _QWORD *v9; // rbx
  _QWORD *j; // r12
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rbp
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  int v16; // eax
  _QWORD *v17; // rcx
  unsigned int v18; // eax
  __int64 (__fastcall **result)(); // rax
  unsigned int v20; // r13d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // [rsp+8h] [rbp-D0h]
  __int64 v30; // [rsp+8h] [rbp-D0h]
  __int64 *i; // [rsp+10h] [rbp-C8h]
  unsigned __int8 v32; // [rsp+10h] [rbp-C8h]
  __int64 v33; // [rsp+18h] [rbp-C0h]
  __int64 v34; // [rsp+18h] [rbp-C0h]
  __int64 v35[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v36[4]; // [rsp+50h] [rbp-88h] BYREF
  void *v37; // [rsp+70h] [rbp-68h]
  void *v38; // [rsp+88h] [rbp-50h]

  v4 = a1 + 4;
  sub_F8BB20(v36, *(_QWORD *)(a1[2] + 8LL), a1[1]);
  while ( (unsigned __int8)sub_F8BB00(v36) )
  {
    v5 = sub_F8BBA0(v36);
    if ( !(unsigned __int8)sub_15D37A0(v4, v5) )
    {
      v6 = *(_DWORD *)(v5 + 24);
      if ( !v6 )
        goto LABEL_5;
      v30 = a1[1];
      v32 = (v6 != 1) | (*(_QWORD *)(v30 + 848) == sub_15D1F10(*(_QWORD *)(v5 + 8LL * (unsigned int)(v6 - 1) + 32)));
      if ( !v32 )
        goto LABEL_5;
      v8 = *(_DWORD *)(v5 + 24);
      if ( !v8 )
        goto LABEL_15;
      v33 = v8 - 1;
      v24 = a1[1];
      if ( *(_QWORD *)(v24 + 848) == sub_15D1F10(*(_QWORD *)(v5 + 8 * v33 + 32)) )
      {
        v26 = (_QWORD *)(v5 + 32);
        v34 = v5 + 32 + 8LL * v8;
LABEL_44:
        v27 = v26;
        do
        {
          while ( 1 )
          {
            v28 = *v27;
            if ( (unsigned __int8)sub_15D37A0(a1[2] + 80LL, *v27) )
              break;
            if ( (_QWORD *)v34 == ++v27 )
              goto LABEL_48;
          }
          v32 &= sub_15D37A0(v4, v28);
          ++v27;
        }
        while ( (_QWORD *)v34 != v27 );
LABEL_48:
        sub_15D0A90(v4, v5, v32);
        if ( !v32 )
        {
LABEL_5:
          if ( (unsigned __int8)sub_15D37A0(a1[2] + 24LL, v5) || (unsigned __int8)sub_15D37A0(a1[2] + 136LL, v5) )
          {
            if ( (unsigned __int8)sub_15D37A0(a1[2] + 80LL, v5) )
            {
              v7 = (__int64 *)a1[3];
              if ( v7 )
              {
                for ( i = &v7[*((unsigned int *)v7 - 1)]; i != v7; ++v7 )
                {
                  v29 = *v7;
                  if ( (unsigned __int8)sub_15D37A0(v4, v5) )
                    break;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 16LL))(v29, v5);
                }
              }
            }
          }
        }
      }
      else
      {
        v25 = 8 * v33;
        v26 = (_QWORD *)(v5 + 32);
        v34 = v5 + 32 + 8 * v33;
        if ( v25 )
          goto LABEL_44;
LABEL_15:
        sub_15D0A90(v4, v5, 1);
      }
    }
  }
  v9 = (_QWORD *)a1[3];
  if ( v9 )
  {
    for ( j = &v9[*((unsigned int *)v9 - 1)]; j != v9; ++v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 24LL))(*v9);
  }
  v11 = (__int64 *)a1[12];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v12 != v11 )
    {
      v13 = *v11;
      v14 = *(_QWORD **)(a2 + 8);
      if ( *v11 )
        ++*(_DWORD *)(v13 + 8);
      if ( v14 )
        goto LABEL_28;
      v15 = (_QWORD *)sub_186B270(0x18u);
      v14 = v15 + 1;
      *v15 = 2;
      v16 = 1;
      *(_QWORD *)(a2 + 8) = v14;
      v17 = v14;
      while ( 1 )
      {
        ++v11;
        *v17 = v13;
        *((_DWORD *)v14 - 1) = v16;
        if ( v12 == v11 )
          break;
        while ( 1 )
        {
          v13 = *v11;
          if ( *v11 )
            ++*(_DWORD *)(v13 + 8);
LABEL_28:
          v18 = *((_DWORD *)v14 - 1);
          if ( v18 == *((_DWORD *)v14 - 2) )
            break;
          ++v11;
          v14[v18] = v13;
          *((_DWORD *)v14 - 1) = v18 + 1;
          if ( v12 == v11 )
            goto LABEL_30;
        }
        v20 = (3 * v18 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v21 || v18 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300(v14 - 1, v21);
        v23 = v22[1];
        v14 = v22 + 2;
        *v22 = v20;
        *(_QWORD *)(a2 + 8) = v22 + 2;
        LODWORD(v22) = v23;
        v17 = &v14[v23];
        v16 = (_DWORD)v22 + 1;
      }
    }
  }
LABEL_30:
  result = &off_1C62200;
  v36[1] = &off_1C62200;
  if ( v38 )
    result = (__int64 (__fastcall **)())sub_186B220(v38);
  if ( v37 )
    result = (__int64 (__fastcall **)())sub_186B220(v37);
  if ( v36[0] )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v36[0] - 8LL));
  return result;
}

