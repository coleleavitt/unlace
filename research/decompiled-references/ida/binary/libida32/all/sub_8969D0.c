__int64 __fastcall sub_8969D0(__int64 **a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  unsigned int *v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // r14
  __int64 *v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  int v16; // eax
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 *v20; // rsi
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  unsigned int *v23; // rax
  __int64 *v24; // [rsp+0h] [rbp-68h]
  unsigned int v25; // [rsp+Ch] [rbp-5Ch]
  unsigned int v26; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+14h] [rbp-54h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v3 = a2;
  v28 = __readfsqword(0x28u);
  v5 = sub_8952A0(a1, a2);
  v6 = a1[10];
  v7 = (__int64)v5;
  v8 = a1[2];
  v9 = v7 + 16;
  v10 = (v7 - (__int64)v8) >> 4;
  if ( v6 == (__int64 *)v7 )
    v10 = 0;
  v11 = sub_8951C0(a1, a3, v10, ((char *)v6 - (char *)v8) >> 4);
  v12 = (unsigned int *)a1[10];
  v24 = (__int64 *)v11;
  if ( v12 == (unsigned int *)v7 )
  {
    v9 = (__int64)a1[2];
    if ( (unsigned int *)v9 != v11 )
    {
LABEL_5:
      if ( a1[2] != (__int64 *)v11 )
        v12 = v11 - 4;
      if ( a2 >= *(_DWORD *)v9 && a2 < *(_DWORD *)(v9 + 4) )
        v3 = *(_DWORD *)v9;
      v13 = v12[1];
      v14 = *v12;
      v15 = v13;
      if ( a3 >= v13 )
        v15 = a3;
      if ( a3 >= v14 )
        a3 = v15;
      v16 = v3 + ((*((_QWORD *)v12 + 1) - *(_QWORD *)(v9 + 8) + 4 * (unsigned __int64)(v13 - v14)) >> 2);
      if ( a3 == v16 )
        return 0;
      v25 = a3 - v16;
      if ( !(unsigned int)sub_896380((__int64)a1, 4LL * (a3 - v16)) )
      {
        v18 = (__int64)a1[10];
        v19 = v25;
        v20 = v24;
        v21 = a3 - v12[1];
        while ( 1 )
        {
          v19 = sub_895F60(a1, v20, v18, v19, v21);
          if ( (unsigned int *)v9 == v12 )
            break;
          v22 = *v12;
          v20 = (__int64 *)v12;
          v12 -= 4;
          v23 = v12;
          if ( a1[2] == (__int64 *)(v12 + 4) )
            v23 = (unsigned int *)a1[10];
          v21 = v22 - v23[1];
          v18 = (__int64)v20;
        }
        if ( (unsigned int)sub_895F60(a1, (__int64 *)v9, v9, v19, *(_DWORD *)v9 - v3) )
        {
          if ( !under_debugger )
            interr(801);
          BUG();
        }
        v26 = v3;
        v27 = a3;
        sub_896160(a1, v7, v24, &v26);
        return 0;
      }
      return 4;
    }
  }
  else if ( (unsigned int *)v9 != v11 )
  {
    goto LABEL_5;
  }
  if ( !(unsigned int)sub_896910((__int64)a1, (__int64 *)v9, a3 - a2) )
  {
    v26 = a2;
    v27 = a3;
    sub_896160(a1, v7, (__int64 *)v9, &v26);
    return 0;
  }
  return 4;
}

