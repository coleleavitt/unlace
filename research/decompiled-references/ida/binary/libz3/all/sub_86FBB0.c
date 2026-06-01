__int64 __fastcall sub_86FBB0(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  char *v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 *v7; // rbp
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // r15d
  __int64 *v14; // r14
  __int64 v15; // rsi
  unsigned int v16; // eax
  unsigned int **v17; // r8
  unsigned int **v18; // rbp
  unsigned int **v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  char *v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // r15d
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-40h]

  v4 = (char *)(sub_7E4F00((__int64)a1, a2) + 88);
  if ( *(int *)v4 >> 8 == -1 )
  {
LABEL_28:
    v6 = 0x7FFFFFFF8LL;
    v5 = -1;
  }
  else
  {
    while ( *((_DWORD *)a1 + 3) != *v4 )
    {
      v4 = *((char **)v4 + 1);
      if ( !v4 )
        goto LABEL_28;
    }
    v5 = *(int *)v4 >> 8;
    v6 = 8LL * v5;
  }
  v7 = *(__int64 **)(a3 + 8);
  v8 = *(_QWORD *)(a1[75] + v6);
  if ( v8 && (result = *(unsigned int *)(v8 - 4), (_DWORD)result) )
  {
    if ( v7 )
    {
      result = (__int64)&v7[*((unsigned int *)v7 - 1)];
      v27 = result;
      if ( (__int64 *)result != v7 )
      {
        v10 = 0;
        do
        {
          v11 = *v7;
          v12 = v10;
          ++v7;
          ++v10;
          v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1[10] + 472LL))(
                  a1[10],
                  v11,
                  0,
                  0);
          sub_7E5400((__int64)a1, v13 ^ 1, *(_DWORD *)(*(_QWORD *)(a1[75] + v6) + 4 * v12), nullptr);
          result = sub_7E5400((__int64)a1, v13, *(_DWORD *)(*(_QWORD *)(a1[75] + v6) + 4 * v12) ^ 1u, nullptr);
        }
        while ( (__int64 *)v27 != v7 );
      }
    }
  }
  else
  {
    if ( v7 )
    {
      v14 = &v7[*((unsigned int *)v7 - 1)];
      if ( v14 != v7 )
      {
        do
        {
          v15 = *v7++;
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1[10] + 472LL))(
                  a1[10],
                  v15,
                  0,
                  0);
          sub_86FA40((__int64)a1, v5, v16);
        }
        while ( v14 != v7 );
        v17 = *(unsigned int ***)(a3 + 8);
        if ( v17 )
        {
          v18 = &v17[*((unsigned int *)v17 - 1)];
          if ( v17 != v18 )
          {
            v19 = *(unsigned int ***)(a3 + 8);
            do
            {
              v20 = sub_7E4F00((__int64)a1, *v19);
              v21 = *((unsigned int *)a1 + 3);
              v22 = v20;
              v23 = (char *)(v20 + 88);
              v24 = (unsigned int)(*(int *)(v22 + 88) >> 8);
              if ( (_DWORD)v24 == -1 )
                goto LABEL_26;
              while ( 1 )
              {
                v24 = (unsigned int)*v23;
                if ( (_DWORD)v21 == (_DWORD)v24 )
                  break;
                v23 = *((char **)v23 + 1);
                if ( !v23 )
                  goto LABEL_26;
              }
              if ( *(int *)v23 >> 8 == -1 )
              {
LABEL_26:
                v25 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 528LL))(a1, v22, v24, v21);
                v26 = sub_15D1F10(*(_QWORD *)v22);
                if ( (unsigned __int8)sub_1673B10(a1 + 16, v26) )
                  sub_86BD80(a1, v25);
              }
              ++v19;
            }
            while ( v18 != v19 );
          }
        }
      }
    }
    return sub_813420(a1, v5);
  }
  return result;
}

