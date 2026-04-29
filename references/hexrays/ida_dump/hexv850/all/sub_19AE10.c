__int64 __fastcall sub_19AE10(__int64 *a1)
{
  __int64 v1; // rax
  bool (__fastcall *v2)(__int64); // rax
  unsigned int v3; // ebp
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned int v15; // edx
  unsigned int v16; // r14d
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v1 = *a1;
  v22 = __readfsqword(0x28u);
  v2 = *(bool (__fastcall **)(__int64))(v1 + 56);
  if ( v2 == sub_18FFE0 )
  {
    if ( !a1[9] )
      return 0;
  }
  else if ( !v2((__int64)a1) )
  {
    return 0;
  }
  if ( (unsigned int)sub_19AB80((__int64)a1) == -1 )
    return 0;
  v5 = a1[2];
  v6 = a1[9] == 0;
  v20 = 0;
  v21 = 0;
  v7 = *(_QWORD *)(v5 + 280);
  if ( !v6 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1[8] + 40 * v12 + 24);
      if ( v13 < 0 )
        v13 = 0;
      v14 = v8 + 1;
      v19 = v13;
      if ( (unsigned __int64)&v19 < v10 || (unsigned __int64)&v19 >= v10 + 8 * v9 )
      {
        if ( v9 >= v14 )
          goto LABEL_11;
      }
      else if ( v9 >= v14 )
      {
        goto LABEL_11;
      }
      v20 = qvector_reserve(&v20, v10, v14, 8);
      v10 = v20;
      v8 = v21;
LABEL_11:
      *(_QWORD *)(v10 + 8 * v8) = v13;
      v12 = ++v11;
      v8 = v21 + 1;
      *(_QWORD *)&v21 = v21 + 1;
      if ( v11 >= (unsigned __int64)a1[9] )
        break;
      v10 = v20;
      v9 = *((_QWORD *)&v21 + 1);
    }
  }
  v15 = *(_DWORD *)(v7 + 64);
  if ( v15 == 1 )
  {
    v3 = 0;
  }
  else
  {
    v16 = 1;
    v3 = 0;
    do
    {
      if ( v16 >= v15 )
      {
        if ( !under_debugger )
          sub_37CFE0(52719);
        BUG();
      }
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * v16) + 48LL);
      if ( v17 )
      {
        do
        {
          v18 = sub_196CC0(v7, v17, &v20);
          v17 = *(_QWORD *)(v17 + 8);
          v3 |= v18;
        }
        while ( v17 );
        v15 = *(_DWORD *)(v7 + 64);
      }
      ++v16;
    }
    while ( v15 != v16 );
  }
  if ( !*(_BYTE *)(v7 + 320) )
    sub_190840(v7);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v3;
}
