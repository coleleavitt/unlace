__int64 __fastcall sub_CB6370(__int64 *a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 *a5)
{
  char **exception; // r12
  _DWORD *v6; // rax
  int v10; // eax
  __int64 result; // rax
  _DWORD *v12; // rax
  __int64 *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 *v16; // r15
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned int v35; // [rsp+0h] [rbp-A0h]
  __int64 v36; // [rsp+8h] [rbp-98h]
  __int64 v37; // [rsp+8h] [rbp-98h]
  unsigned int v38; // [rsp+10h] [rbp-90h]
  unsigned int i; // [rsp+14h] [rbp-8Ch]
  __int64 v40; // [rsp+18h] [rbp-88h]
  __int64 v41; // [rsp+20h] [rbp-80h]
  __int64 v42[2]; // [rsp+38h] [rbp-68h] BYREF
  __int64 v43[11]; // [rsp+48h] [rbp-58h] BYREF

  v6 = *(_DWORD **)(a2 + 24);
  if ( !v6 )
    return 5;
  if ( *v6 == 5 )
  {
    switch ( v6[1] )
    {
      case 2:
        v25 = a4[1];
        v26 = *a4;
        return sub_CB3B50(a1, v26, v25, a5);
      case 3:
        v25 = *a4;
        v26 = a4[1];
        return sub_CB3B50(a1, v26, v25, a5);
      case 4:
        sub_CB1DB0(a1, *a4, a4[1], a5);
        goto LABEL_33;
      case 5:
        sub_CB1E40(a1, *a4, a4[1], a5);
LABEL_33:
        result = 1;
        break;
      case 6:
        result = sub_CB4E40(a1, a3, a4, a5);
        break;
      case 7:
        result = sub_CB5470(a1, a3, a4, a5);
        break;
      case 8:
        result = sub_CB47F0(a1, *a4, a5);
        break;
      case 9:
        result = sub_CB62B0(a1, a3, a4, a5);
        break;
      case 0x10:
        result = sub_CB2F90((__int64)a1, *a4, (void *)a4[1], a5);
        break;
      default:
        return 5;
    }
  }
  else
  {
    if ( *v6 )
      return 5;
    v10 = v6[1];
    if ( v10 != 3 )
    {
      if ( v10 == 4 )
        return sub_CB4070(a1, *a4, a4[1], a4[2], a5);
      if ( v10 == 2 )
        return sub_CB42E0(a1, *a4, a4[1], a5);
      return 5;
    }
    if ( a3 <= 1 )
      return 5;
    v12 = *(_DWORD **)(sub_15D1F10(*a4) + 24);
    if ( !v12 || *v12 != 5 || v12[1] != 1 )
      return 5;
    v13 = a4 + 1;
    v40 = 0;
    v41 = *a1;
    v42[0] = *a1;
    v14 = a3 - 2;
    v15 = 0;
    for ( i = v14; i != -1; --i )
    {
      v16 = v13;
      do
      {
        if ( (unsigned int)sub_CB42E0(a1, *(v13 - 1), *v16, a5) != 4 )
        {
          v28 = 5;
          goto LABEL_42;
        }
        v20 = *a5;
        if ( *a5 )
          ++*(_DWORD *)(v20 + 8);
        if ( v15 )
        {
          v21 = *(_DWORD *)(v15 - 4);
          if ( v21 == *(_DWORD *)(v15 - 8) )
          {
            v22 = (3 * v21 + 1) >> 1;
            v23 = 8 * v22 + 8;
            if ( 8 * v21 + 8 >= (unsigned int)v23 || v21 >= v22 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v43, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v43);
              sub_233E40((__int64)v43);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v38 = (3 * v21 + 1) >> 1;
            v36 = v20;
            v24 = (unsigned int *)sub_186B300((void *)(v15 - 8), v23);
            v15 = (__int64)(v24 + 2);
            v20 = v36;
            *v24 = v38;
            LODWORD(v24) = v24[1];
            v19 = (_QWORD *)(v15 + 8LL * (unsigned int)v24);
            v18 = (_DWORD)v24 + 1;
          }
          else
          {
            v17 = v21;
            v18 = v21 + 1;
            v19 = (_QWORD *)(v15 + 8 * v17);
          }
        }
        else
        {
          v37 = v20;
          v27 = (_QWORD *)sub_186B270(0x18u);
          v20 = v37;
          *v27 = 2;
          v15 = (__int64)(v27 + 1);
          v18 = 1;
          v19 = (_QWORD *)v15;
        }
        *v19 = v20;
        ++v16;
        *(_DWORD *)(v15 - 4) = v18;
      }
      while ( v16 != &a4[v40 + 2 + i] );
      ++v40;
      ++v13;
    }
    v29 = *a1;
    if ( v15 )
      v30 = *(unsigned int *)(v15 - 4);
    else
      v30 = 0;
    v31 = sub_15EC240(v41, v30);
    v32 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    v33 = sub_15E1A70(v29);
    v34 = v33;
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    sub_CB1660(*a5, a5[1]);
    *a5 = v34;
    sub_CB1660(v32, v41);
    v28 = 4;
LABEL_42:
    v35 = v28;
    v42[1] = v15;
    sub_2334C0(v42);
    return v35;
  }
  return result;
}

