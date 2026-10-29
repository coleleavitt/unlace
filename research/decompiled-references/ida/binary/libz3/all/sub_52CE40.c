__int64 __fastcall sub_52CE40(_QWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r15d
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r13
  __int64 v8; // r12
  _QWORD *i; // rbx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdi
  _QWORD *v17; // rbx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  v4 = a4 - 1;
  result = 3LL * a2;
  v6 = 24LL * a4;
  v7 = &a1[3 * a2];
  v8 = a3 + v6;
  if ( a1 != v7 )
  {
    for ( i = a1 + 2; *((_DWORD *)i - 3) == 2; i = (_QWORD *)result )
    {
      v11 = *((_DWORD *)i - 4);
      v12 = 24LL * (v11 & v4);
      v13 = a3 + v12;
      if ( v6 == v12 )
      {
LABEL_15:
        if ( a3 == v13 )
        {
LABEL_22:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v14 = a3;
        while ( *(_DWORD *)(v14 + 4) )
        {
          v14 += 24;
          if ( v13 == v14 )
            goto LABEL_22;
        }
        *(_DWORD *)v14 = v11;
        v18 = *((_DWORD *)i - 2);
        *(_DWORD *)(v14 + 4) = 2;
        *(_DWORD *)(v14 + 8) = v18;
        if ( i == (_QWORD *)(v14 + 16) )
          break;
        v19 = *(_QWORD *)(v14 + 16);
        if ( v19 )
        {
          v21 = v6;
          sub_186B220((void *)(v19 - 8));
          v6 = v21;
        }
      }
      else
      {
        v14 = a3 + v12;
        while ( *(_DWORD *)(v14 + 4) )
        {
          v14 += 24;
          if ( v8 == v14 )
            goto LABEL_15;
        }
        *(_DWORD *)v14 = v11;
        v15 = *((_DWORD *)i - 2);
        *(_DWORD *)(v14 + 4) = 2;
        *(_DWORD *)(v14 + 8) = v15;
        if ( i == (_QWORD *)(v14 + 16) )
          break;
        v16 = *(_QWORD *)(v14 + 16);
        if ( v16 )
        {
          v20 = v6;
          sub_186B220((void *)(v16 - 8));
          v6 = v20;
        }
      }
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 16) = *i;
      result = (__int64)(i + 3);
      v17 = i + 1;
      *(v17 - 1) = 0;
      if ( v7 == v17 )
        return result;
LABEL_4:
      ;
    }
    result = (__int64)(i + 3);
    if ( v7 == i + 1 )
      return result;
    goto LABEL_4;
  }
  return result;
}

