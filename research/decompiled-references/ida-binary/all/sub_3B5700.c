unsigned __int64 __fastcall sub_3B5700(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r12
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned int v8; // r13d
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // ebp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-58h] BYREF
  int v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  int v27; // [rsp+18h] [rbp-40h]
  unsigned __int64 v28; // [rsp+28h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( (unsigned __int8)sub_1F07A0(a3, (__int64)&v24, (__int64)&v26, nullptr) )
  {
    v5 = *(_QWORD **)(a3 + 1000);
    v6 = *(unsigned int *)(v24 + 12);
    v7 = v5[2];
    v8 = *(_DWORD *)(v26 + 12);
    if ( v7 )
    {
      v9 = a1[2];
      v10 = *a1;
      if ( v9 >= v7 )
        goto LABEL_4;
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5);
      v9 = a1[2];
      v10 = *a1;
      v7 = v18;
      if ( v9 >= v18 )
        goto LABEL_4;
    }
    v19 = qvector_reserve(a1, v10, v7, 4);
    v9 = a1[2];
    *a1 = v19;
    v10 = v19;
LABEL_4:
    v11 = a1[1];
    v12 = v11 + 1;
    if ( v9 < v11 + 1 )
      goto LABEL_17;
    while ( 1 )
    {
      *(_DWORD *)(v10 + 4 * v11) = v6;
      ++a1[1];
      v13 = v5[2];
      if ( v13 )
      {
        if ( v6 >= v5[5] )
          return v28 - __readfsqword(0x28u);
        v14 = *(int *)(v5[4] + 4 * v6);
        if ( v14 < 0 )
          return v28 - __readfsqword(0x28u);
        v16 = v14 + 1;
      }
      else
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5) < (unsigned int)v6 || !(_DWORD)v6 )
          return v28 - __readfsqword(0x28u);
        v13 = v5[2];
        v16 = (unsigned int)v6;
        if ( !v13 )
        {
          if ( (unsigned int)v6 >= (unsigned __int64)(*(int (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5) )
            return v28 - __readfsqword(0x28u);
          v6 = (unsigned int)(v6 + 1);
          goto LABEL_14;
        }
      }
      if ( v16 >= v13 )
        return v28 - __readfsqword(0x28u);
      v6 = *(unsigned int *)(v5[1] + 4 * v16);
LABEL_14:
      if ( v8 < (unsigned int)v6 || !(_DWORD)v6 )
        return v28 - __readfsqword(0x28u);
      v11 = a1[1];
      v10 = *a1;
      v12 = v11 + 1;
      if ( a1[2] < (unsigned __int64)(v11 + 1) )
      {
LABEL_17:
        v17 = qvector_reserve(a1, v10, v12, 4);
        v11 = a1[1];
        *a1 = v17;
        v10 = v17;
      }
    }
  }
  v20 = *a1;
  v21 = *(_DWORD *)(*(_QWORD *)(a2 + 208) + 24LL);
  v22 = a1[1];
  if ( a1[2] < (unsigned __int64)(v22 + 1) )
  {
    v23 = qvector_reserve(a1, v20, v22 + 1, 4);
    *a1 = v23;
    v20 = v23;
    v22 = a1[1];
  }
  *(_DWORD *)(v20 + 4 * v22) = v21;
  ++a1[1];
  return v28 - __readfsqword(0x28u);
}
