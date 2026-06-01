__int64 __fastcall sub_4F35A0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  unsigned int i; // ebp
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  __int64 v20; // rsi
  __int64 result; // rax
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // rbx
  unsigned __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  _QWORD *v31; // r10
  __int64 v32; // rsi
  __int64 v33; // rsi
  _QWORD *v35; // [rsp+10h] [rbp-58h]
  __int64 v36; // [rsp+18h] [rbp-50h]
  __int64 v37; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v38; // [rsp+28h] [rbp-40h]

  v9 = *a3;
  if ( *a3 )
  {
    v10 = a3[1];
    v11 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v10, v9);
  }
  v12 = *(_QWORD *)(a1 + 8);
  *a3 = 0;
  v13 = sub_4D6490(*(_QWORD *)(v12 + 24));
  v38 = nullptr;
  v37 = v13;
  v14 = v13;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v15 = (_QWORD *)sub_186B270(0x18u);
  v15[1] = a2;
  v38 = v15 + 1;
  *v15 = 0x100000002LL;
  sub_15EE300(&v37);
  v16 = v38;
  if ( v38 )
  {
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        if ( i >= *((_DWORD *)v16 - 1) )
        {
          v20 = *((unsigned int *)v16 - 1);
          goto LABEL_15;
        }
        v18 = v16[i];
        if ( !*(_WORD *)(v18 + 4) )
        {
          v19 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
          if ( v19 )
          {
            if ( !*v19 && v19[1] == 2 && *(_DWORD *)(v18 + 24) == 2 )
              break;
          }
        }
LABEL_12:
        ++i;
        if ( !v16 )
          goto LABEL_13;
      }
      sub_4F2FA0(a1, *(_QWORD *)(v18 + 32), *(_QWORD *)(v18 + 40), (__int64)&v37, a4, a5);
      v16 = v38;
      v28 = 0xFFFFFFFFLL;
      if ( v38 )
        v28 = (unsigned int)(*((_DWORD *)v38 - 1) - 1);
      v29 = v38[v28];
      v30 = v37;
      v31 = &v38[i];
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v32 = *v31;
      if ( *v31 )
      {
        v11 = (*(_DWORD *)(v32 + 8))-- == 1;
        if ( v11 )
        {
          v36 = v29;
          v35 = v31;
          sub_15D7BC0(v30, v32);
          v16 = v38;
          v30 = v37;
          v31 = v35;
          v29 = v36;
        }
      }
      *v31 = v29;
      v33 = v16[--*((_DWORD *)v16 - 1)];
      if ( v33 )
      {
        v11 = (*(_DWORD *)(v33 + 8))-- == 1;
        if ( v11 )
        {
          sub_15D7BC0(v30, v33);
          v16 = v38;
          goto LABEL_12;
        }
      }
    }
  }
LABEL_13:
  v20 = 0;
LABEL_15:
  result = sub_15EC1C0(v14, v20);
  v22 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v23 = *a3;
  if ( *a3 )
  {
    v24 = a3[1];
    v11 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v24, v23);
  }
  *a3 = v22;
  v25 = v38;
  if ( v38 )
  {
    result = *((unsigned int *)v38 - 1);
    v26 = (unsigned __int64)&v38[result];
    if ( (unsigned __int64)v38 >= v26 )
      return sub_186B220(v25 - 1);
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          v11 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v25 >= v26 )
          goto LABEL_27;
      }
      result = sub_15D7BC0(v37, v27);
      ++v25;
    }
    while ( (unsigned __int64)v25 < v26 );
LABEL_27:
    v25 = v38;
    if ( v38 )
      return sub_186B220(v25 - 1);
  }
  return result;
}

