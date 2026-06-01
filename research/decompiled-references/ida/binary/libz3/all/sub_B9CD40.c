_QWORD *__fastcall sub_B9CD40(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 **v11; // rbx
  __int64 **i; // rdx
  __int64 *v13; // rbp
  __int64 v14; // r12
  int v15; // eax
  char v16; // al
  _QWORD *v17; // rax
  __int64 v19; // [rsp+0h] [rbp-68h]
  _QWORD *v20; // [rsp+0h] [rbp-68h]
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 **v23; // [rsp+10h] [rbp-58h]
  __int64 **v24; // [rsp+10h] [rbp-58h]
  _QWORD *v25; // [rsp+18h] [rbp-50h]
  __int64 *v26; // [rsp+28h] [rbp-40h] BYREF

  v6 = a1[21];
  if ( !v6 || (v7 = *(_DWORD *)(v6 - 4)) == 0 )
  {
    v17 = (_QWORD *)sub_186B270(8u);
    v10 = *(_QWORD *)(a2 + 8);
    *v17 = 0;
    v9 = v17;
    v11 = *(__int64 ***)(v10 + 56);
    if ( !v11 )
      return v9;
    goto LABEL_6;
  }
  v8 = v7 - 1;
  v9 = *(_QWORD **)(v6 + 8LL * v8);
  *(_DWORD *)(v6 - 4) = v8;
  if ( *v9 )
    *(_DWORD *)(*v9 - 4LL) = 0;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(__int64 ***)(v10 + 56);
  if ( v11 )
  {
LABEL_6:
    for ( i = &v11[*((unsigned int *)v11 - 1)]; i != v11; ++v11 )
    {
      v13 = *v11;
      v14 = **v11;
      v26 = *v11;
      if ( a3 == *(_QWORD *)(v14 + 16) && (*((_BYTE *)v13 + 44) & 8) == 0 && a4 < *(_DWORD *)(v14 + 24) )
      {
        v25 = v9;
        v23 = i;
        v21 = v10;
        v19 = *a1;
        v15 = sub_8E7030(*a1);
        v10 = v21;
        i = v23;
        v9 = v25;
        if ( !v15
          || (v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 7488) + 56LL))(
                      *(_QWORD *)(v19 + 7488),
                      v14),
              v10 = v21,
              i = v23,
              v9 = v25,
              v16) )
        {
          if ( v13 == (__int64 *)v13[3] && v10 == *(_QWORD *)(v13[a4 + 14] + 8) )
          {
            v24 = i;
            v22 = v10;
            v20 = v9;
            sub_B9CC80(v9, &v26);
            i = v24;
            v10 = v22;
            v9 = v20;
          }
        }
      }
    }
  }
  return v9;
}

