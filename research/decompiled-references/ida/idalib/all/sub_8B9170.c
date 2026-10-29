unsigned __int64 __fastcall sub_8B9170(
        __int64 **a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v10; // r11
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdi
  unsigned int v15; // r14d
  unsigned int v16; // r13d
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbp
  unsigned __int64 result; // rax
  __int64 *v30; // rdx
  __int64 *v31; // rdi
  __int64 *v32; // rcx
  __int64 *v33; // rdx
  unsigned __int64 v34; // [rsp+0h] [rbp-68h]
  unsigned __int64 v37; // [rsp+18h] [rbp-50h]
  unsigned __int64 v38; // [rsp+18h] [rbp-50h]
  unsigned __int64 v39; // [rsp+18h] [rbp-50h]
  __int64 v40; // [rsp+20h] [rbp-48h]
  unsigned __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+28h] [rbp-40h]

  v7 = *a2;
  if ( *a2 >= a3 )
    a3 = *a2;
  if ( a4 > a2[1] )
    a4 = a2[1];
  if ( a3 >= a4 )
    return -1;
  v8 = a2[2];
  v10 = v8 + 4 * (a3 - v7);
  if ( a4 == -1 )
  {
    v30 = a1[3];
    if ( v30 )
    {
      v31 = a1[2];
      v32 = &v31[3 * (_QWORD)v30];
      v33 = v32 - 3;
      if ( v31 == v32 )
        v33 = a1[11];
      v11 = v33[2] + 4 * (v33[1] - *v33);
    }
    else
    {
      v11 = **a1;
    }
  }
  else
  {
    v11 = v8 + 4 * (a4 - v7);
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
  v15 = v10 >> v12;
  v16 = v11 >> v12;
  v17 = (v14 & (unsigned __int64)v10) >> 2;
  v34 = (v11 & (unsigned __int64)v14) >> 2;
  v18 = v17;
  if ( !v34 )
  {
    v16 = (v11 >> v12) - 1;
    v34 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
  }
  if ( a7 )
  {
    if ( v16 >= (unsigned int)v13 )
    {
      v42 = 4 * v17;
      v19 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
      while ( 1 )
      {
        v22 = 0;
        v23 = 0;
        if ( v15 == v16 )
        {
          v34 -= v18;
          v22 = v42;
          v23 = v18;
        }
        v24 = v23 + v16 * v19;
        v25 = v24 + v7 - (v8 >> 2);
        if ( *((_DWORD *)a1 + 18) == v16 )
        {
          v20 = (__int64)a1[10];
        }
        else
        {
          *((_DWORD *)a1 + 18) = v16;
          v40 = v22;
          v38 = v18;
          v20 = sub_8BCA60(*a1, v16, 1);
          v22 = v40;
          v18 = v38;
          a1[10] = (__int64 *)v20;
        }
        if ( a6 )
        {
          *(_BYTE *)(v20 - 2) = 1;
          v20 = (__int64)a1[10];
          *((_BYTE *)a1 + 100) = 1;
        }
        v37 = v18;
        v21 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, unsigned __int64))(*(_QWORD *)a5 + 16LL))(
                a5,
                v25,
                v20 + v22,
                v34);
        if ( v21 >= 0 )
          break;
        --v16;
        v19 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
        v34 = v19;
        if ( v16 < v15 )
          return -1;
        v7 = *a2;
        v8 = a2[2];
        v18 = v37;
      }
      goto LABEL_37;
    }
    return -1;
  }
  if ( v16 < (unsigned int)v13 )
    return -1;
  while ( 1 )
  {
    v27 = v34;
    if ( v16 != v15 )
      v27 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
    v24 = v18 + (unsigned int)(*((_DWORD *)a1 + 2) + 1) * (unsigned __int64)v15;
    v28 = v24 + v7 - (v8 >> 2);
    if ( *((_DWORD *)a1 + 18) == v15 )
    {
      v26 = (__int64)a1[10];
    }
    else
    {
      *((_DWORD *)a1 + 18) = v15;
      v41 = v18;
      v39 = v27;
      v26 = sub_8BCA60(*a1, v15, 1);
      v18 = v41;
      v27 = v39;
      a1[10] = (__int64 *)v26;
    }
    if ( a6 )
    {
      *(_BYTE *)(v26 - 2) = 1;
      v26 = (__int64)a1[10];
      *((_BYTE *)a1 + 100) = 1;
    }
    v21 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)a5 + 16LL))(
            a5,
            v28,
            v26 + 4 * v18,
            v27 - v18);
    if ( v21 >= 0 )
      break;
    if ( v16 < ++v15 )
      return -1;
    v7 = *a2;
    v8 = a2[2];
    v18 = 0;
  }
LABEL_37:
  result = v24 + *a2 - (a2[2] >> 2) + v21;
  if ( result < *a2 || result >= a2[1] )
  {
    if ( !under_debugger )
      interr(1163);
    goto LABEL_50;
  }
  return result;
}
