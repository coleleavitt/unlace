__int64 __fastcall sub_1245970(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  const char **v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r12
  __int64 result; // rax
  void *v9; // rdi
  void **v10; // r13
  unsigned __int64 v11; // rax
  void **v12; // r14
  void **v13; // rbx
  void **v14; // rdi
  void **v15; // rdi
  void **v16; // rbx
  void **v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  void *v20[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-98h] BYREF
  void *v22; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-80h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  void *v25; // [rsp+40h] [rbp-68h]
  _BYTE v26[16]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v27; // [rsp+60h] [rbp-48h]

  v2 = sub_10DCD30(a2, 0xCEAu);
  if ( !v2 )
  {
    v18 = *(_DWORD *)(a1 + 64);
    if ( (unsigned int)(v18 - 18) > 7 && v18 != 49 )
      return *(_DWORD *)(a1 + 60) != 39;
    return 0;
  }
  v3 = v2;
  v4 = *(const char ***)(v2 + 48);
  v5 = *v4;
  if ( *v4 )
  {
    v6 = strlen(*v4);
    v7 = v6;
    if ( v6 == 9 )
    {
      if ( *(_QWORD *)v5 == 0x2B6364747362696CLL && v5[8] == 43 )
        return 1;
    }
    else if ( v6 == 6 && *(_DWORD *)v5 == 1667393900 && *((_WORD *)v5 + 2) == 11051 )
    {
      return *(_DWORD *)v5 != 1667393900 || *((_WORD *)v5 + 2) != 11051;
    }
  }
  else
  {
    v7 = 0;
  }
  sub_FC70B0((__int64)&v22, **(_QWORD **)(a1 + 8), 0, 397);
  sub_21B5FF0(v20, v3, a2);
  sub_AEC220((unsigned __int8 **)&v22, (_BYTE *)v20[0], (signed __int64)v20[1]);
  if ( v20[0] != &v21 )
    operator delete(v20[0]);
  if ( (_BYTE)v27 )
  {
    sub_FC7790(v24, (__int64 *)&v22, SHIBYTE(v27));
    v9 = v25;
    v24 = 0;
    v27 = 0;
    if ( v25 == v26 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v9 = v25;
  if ( v25 != v26 )
LABEL_13:
    operator delete(v9);
LABEL_14:
  v10 = (void **)v22;
  if ( v22 )
  {
    v11 = v23;
    if ( v23 )
    {
      if ( (unsigned __int64)v22 < v23 || (unsigned __int64)v22 > v23 + 14848 )
      {
        v12 = *((void ***)v22 + 66);
        v13 = &v12[8 * (unsigned __int64)*((unsigned int *)v22 + 134)];
        if ( v12 != v13 )
        {
          do
          {
            while ( 1 )
            {
              v13 -= 8;
              v14 = (void **)v13[3];
              if ( v14 == v13 + 5 )
                break;
              operator delete(v14);
              if ( v12 == v13 )
                goto LABEL_20;
            }
          }
          while ( v12 != v13 );
LABEL_20:
          v13 = (void **)v10[66];
        }
        if ( v13 != v10 + 68 )
          free(v13);
        v15 = (void **)v10[52];
        if ( v15 != v10 + 54 )
          free(v15);
        v16 = v10 + 48;
        v17 = v10 + 8;
        do
        {
          while ( *v16 != v16 + 2 )
          {
            operator delete(*v16);
            v16 -= 4;
            if ( v17 == v16 )
              goto LABEL_28;
          }
          v16 -= 4;
        }
        while ( v17 != v16 );
LABEL_28:
        operator delete(v10, 0x3A0u);
      }
      else
      {
        v19 = *(unsigned int *)(v23 + 14976);
        *(_DWORD *)(v23 + 14976) = v19 + 1;
        *(_QWORD *)(v11 + 8 * v19 + 14848) = v10;
      }
    }
  }
  if ( v7 == 9 )
    return 1;
  result = 1;
  if ( v7 == 6 )
    return *(_DWORD *)v5 != 1667393900 || *((_WORD *)v5 + 2) != 11051;
  return result;
}
