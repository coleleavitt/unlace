__int64 *__fastcall sub_449270(__int64 **a1, __int64 *a2, int a3, __int64 a4, int a5, int a6)
{
  int v6; // r13d
  __int64 *v7; // rbp
  __int64 v8; // rcx
  __int64 *v9; // r15
  int v10; // r12d
  __int64 *v11; // rdx
  __int64 *v12; // rbx
  int v13; // r12d
  __int64 *v14; // r14
  __int64 *v15; // rbp
  unsigned __int64 v16; // r13
  int i; // ebx
  __int64 v18; // r12
  int v19; // edx
  __int64 v20; // rcx
  unsigned __int64 v22; // rax
  int v23; // [rsp+8h] [rbp-40h]

  v6 = (int)a2;
  v7 = *a1;
  v23 = 0;
  v8 = (*a1)[4];
  v9 = (__int64 *)(*a1)[2];
  v10 = (_DWORD)a2 - (((*a1)[3] - v8) >> 3);
  if ( !a3 )
  {
    a2 = (__int64 *)(v8 + 8);
    v11 = (__int64 *)(((_BYTE)v8 + 8) & 0xF);
    v22 = (unsigned __int64)(16LL - (_QWORD)v11) >> 3;
    if ( (int)v22 + v10 < 0 )
    {
      v7[2] = (__int64)a2;
      *(_QWORD *)(v8 + 8) = v9;
      v18 = (__int64)&a2[(int)v22];
      v7[4] = v18 - 8;
      return (__int64 *)v18;
    }
LABEL_6:
    v12 = (__int64 *)v7[1];
    v13 = v6 + v23 + 2;
    if ( v12 )
    {
      v14 = v7;
      v15 = (__int64 *)v7[1];
      v16 = (unsigned __int64)(v12[3] - (_QWORD)v12 - 32) >> 3;
      if ( v12[2] || (__int64 *)v12[4] != v12 + 4 )
        sub_47D740((unsigned int)"STACK: Stack after current is in use", (_DWORD)a2, (_DWORD)v11, v8, a5, a6);
      if ( v12[1] )
        sub_47D740((unsigned int)"STACK: Stack after current is not last", (_DWORD)a2, (_DWORD)v11, v8, a5, a6);
      if ( v13 <= (int)v16 )
      {
LABEL_18:
        v15[5] = 0;
        v15[2] = (__int64)(v15 + 5);
        *a1 = v15;
        v18 = (__int64)&v15[(int)((16 - (unsigned __int64)(((_BYTE)v15 + 40) & 0xF)) >> 3) + 5];
        v19 = a3;
        v15[4] = v18 - 8;
        if ( a3 )
        {
          a2 = &v9[(int)((16 - (unsigned __int64)((unsigned __int8)v9 & 0xF)) >> 3)];
          memcpy(&v15[(int)((16 - (unsigned __int64)(((_BYTE)v15 + 40) & 0xF)) >> 3) + 5], a2, 8LL * v23);
          v20 = *v9;
          v15[4] += 8LL * v23;
          v14[4] = (__int64)(v9 - 1);
          v14[2] = v20;
          if ( v20 )
            return (__int64 *)v18;
        }
        else
        {
          v20 = v14[2];
          if ( v20 )
            return (__int64 *)v18;
        }
        sub_4490F0(v14, (int)a2, v19, v20, a5, a6);
        return (__int64 *)v18;
      }
      v7 = v14;
      sub_4490F0(v12, (int)a2, (int)v11, v8, a5, a6);
    }
    else
    {
      v16 = (unsigned __int64)(v7[3] - (_QWORD)v7 - 32) >> 3;
    }
    for ( i = 2 * v16; v13 > i; i *= 2 )
      ;
    v14 = v7;
    v15 = (__int64 *)sub_40FB00(8 * i + 40);
    v14[1] = (__int64)v15;
    *v15 = (__int64)v14;
    v15[1] = 0;
    v15[3] = (__int64)&v15[i + 4];
    goto LABEL_18;
  }
  if ( !v9 )
    sub_47D740((unsigned int)"STACK: Reallocating with no previous alloc", (_DWORD)a2, a3, v8, a5, a6);
  if ( v10 > 0 )
  {
    v11 = &v9[(int)((16 - (unsigned __int64)((unsigned __int8)v9 & 0xF)) >> 3)];
    v23 = ((v7[4] - (__int64)v11) >> 3) + 1;
    goto LABEL_6;
  }
  return &v9[(int)((16 - (unsigned __int64)((unsigned __int8)v9 & 0xF)) >> 3)];
}

