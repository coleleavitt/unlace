__int64 __fastcall sub_895770(
        __int64 **a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        char a7)
{
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  __int64 v10; // r11
  __int64 v11; // r12
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned int v16; // r13d
  unsigned int v17; // r14d
  unsigned __int64 v18; // r11
  __int64 v19; // r8
  __int64 v20; // r12
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  int v26; // ebx
  unsigned int v27; // ebp
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ebp
  __int64 result; // rax
  __int64 *v32; // rdx
  __int64 *v33; // rdi
  __int64 *v34; // rdx
  __int64 *v35; // rcx
  __int64 v38; // [rsp+18h] [rbp-50h]
  __int64 v39; // [rsp+18h] [rbp-50h]
  __int64 v40; // [rsp+18h] [rbp-50h]
  __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+20h] [rbp-48h]
  __int64 v43; // [rsp+28h] [rbp-40h]

  v7 = *a2;
  if ( *a2 >= a3 )
    a3 = *a2;
  if ( a4 > a2[1] )
    a4 = a2[1];
  if ( a3 >= a4 )
    return 0xFFFFFFFFLL;
  v8 = *((_QWORD *)a2 + 1);
  v10 = v8 + 4LL * (a3 - v7);
  if ( a4 == -1 )
  {
    v32 = a1[3];
    if ( v32 )
    {
      v33 = a1[2];
      v34 = &v33[2 * (_QWORD)v32];
      v35 = v34 - 2;
      if ( v33 == v34 )
        v35 = a1[10];
      v11 = v35[1] + 4LL * (unsigned int)(*((_DWORD *)v35 + 1) - *(_DWORD *)v35);
    }
    else
    {
      v11 = **a1;
    }
  }
  else
  {
    v11 = v8 + 4LL * (a4 - v7);
  }
  if ( v11 < (unsigned __int64)v10 || v11 == 0 || !v10 )
  {
    if ( !under_debugger )
      interr(800);
LABEL_50:
    BUG();
  }
  v12 = *((_DWORD *)*a1 + 2);
  v13 = v10 >> v12;
  v14 = **a1 - 1;
  v15 = v11 >> v12;
  v16 = v10 >> v12;
  v17 = v11 >> v12;
  v18 = (v14 & (unsigned __int64)v10) >> 2;
  v19 = (unsigned int)v18;
  v20 = (unsigned int)((v14 & (unsigned __int64)v11) >> 2);
  if ( !(_DWORD)v20 )
  {
    v17 = v15 - 1;
    v20 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
  }
  if ( a7 )
  {
    if ( v17 >= (unsigned int)v13 )
    {
      v43 = 4LL * (unsigned int)v18;
      v21 = *((_DWORD *)a1 + 2) + 1;
      while ( 1 )
      {
        v24 = 0;
        v25 = 0;
        if ( v16 == v17 )
        {
          v24 = v43;
          v20 -= v19;
          v25 = v19;
        }
        v26 = v25 + v17 * v21;
        v27 = v26 + v7 - (v8 >> 2);
        if ( *((_DWORD *)a1 + 16) == v17 )
        {
          v22 = (__int64)a1[9];
        }
        else
        {
          *((_DWORD *)a1 + 16) = v17;
          v41 = v24;
          v39 = v19;
          v22 = sub_898D20(*a1, v17, 1);
          v24 = v41;
          v19 = v39;
          a1[9] = (__int64 *)v22;
        }
        if ( a6 )
        {
          *(_BYTE *)(v22 - 2) = 1;
          v22 = (__int64)a1[9];
          *((_BYTE *)a1 + 92) = 1;
        }
        v38 = v19;
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a5 + 16LL))(
                a5,
                v27,
                v22 + v24,
                v20);
        if ( v23 >= 0 )
          break;
        --v17;
        v21 = *((_DWORD *)a1 + 2) + 1;
        v20 = v21;
        if ( v17 < v16 )
          return 0xFFFFFFFFLL;
        v19 = v38;
        v7 = *a2;
        v8 = *((_QWORD *)a2 + 1);
      }
      goto LABEL_37;
    }
    return 0xFFFFFFFFLL;
  }
  if ( v17 < (unsigned int)v13 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v29 = v20;
    if ( v17 != v16 )
      v29 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
    v26 = v19 + (*((_DWORD *)a1 + 2) + 1) * v16;
    v30 = v26 + v7 - (v8 >> 2);
    if ( *((_DWORD *)a1 + 16) == v16 )
    {
      v28 = (__int64)a1[9];
    }
    else
    {
      *((_DWORD *)a1 + 16) = v16;
      v42 = v19;
      v40 = v29;
      v28 = sub_898D20(*a1, v16, 1);
      v19 = v42;
      v29 = v40;
      a1[9] = (__int64 *)v28;
    }
    if ( a6 )
    {
      *(_BYTE *)(v28 - 2) = 1;
      v28 = (__int64)a1[9];
      *((_BYTE *)a1 + 92) = 1;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a5 + 16LL))(
            a5,
            v30,
            v28 + 4 * v19,
            v29 - v19);
    if ( v23 >= 0 )
      break;
    if ( v17 < ++v16 )
      return 0xFFFFFFFFLL;
    v19 = 0;
    v7 = *a2;
    v8 = *((_QWORD *)a2 + 1);
  }
LABEL_37:
  result = *a2 - (unsigned int)(*((_QWORD *)a2 + 1) >> 2) + v26 + (_DWORD)v23;
  if ( (unsigned int)result < *a2 || (unsigned int)result >= a2[1] )
  {
    if ( !under_debugger )
      interr(1163);
    goto LABEL_50;
  }
  return result;
}

