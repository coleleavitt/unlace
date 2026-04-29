unsigned __int64 __fastcall sub_5DE0(int *a1, unsigned __int64 a2, int a3)
{
  _DWORD *v3; // r15
  __int64 i; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r13
  __int64 v7; // rbx
  int v8; // r14d
  int *v9; // rdi
  unsigned int *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // rdx
  _DWORD *v17; // rax
  _DWORD *v19; // [rsp+8h] [rbp-80h]
  char v21; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v22[39]; // [rsp+21h] [rbp-67h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v3 = (_DWORD *)a2;
  v23 = __readfsqword(0x28u);
  for ( i = 0; i != 28; i += 2 )
  {
    v22[i - 1] = i;
    v5 = i + 1;
    v22[v5 - 1] = v5;
  }
  v6 = a2 + 4LL * a3;
  if ( a2 < v6 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = a1;
      v10 = dword_FD20;
      v11 = sub_5D40(a1, dword_FD20, (unsigned __int64)dword_FD20, (unsigned __int64)&unk_FD90);
      if ( v11 <= 1 )
      {
        v7 = (unsigned int)(v11 + 2 * v7 + 1);
      }
      else
      {
        if ( (int)v7 <= 0 )
        {
          v15 = v3;
        }
        else
        {
          v15 = &v3[v7];
          do
          {
            if ( (unsigned __int64)v3 >= v6 )
              goto LABEL_21;
            *v3++ = v8;
          }
          while ( v3 != v15 );
          v7 = 0;
        }
        v9 = (int *)v22;
        v10 = (unsigned int *)&v21;
        v16 = v11 - 1;
        v19 = v15;
        v21 = v8;
        v8 = v22[v16 - 1];
        __memmove_chk(v22, &v21, v16, 27);
        v15 = v19;
        if ( (unsigned __int64)v19 >= v6 )
          goto LABEL_21;
        *v19 = v8;
        v3 = v19 + 1;
      }
    }
    while ( (unsigned __int64)&v3[(int)v7] < v6 );
    if ( (int)v7 > 0 )
    {
      v17 = &v3[v7];
      while ( (unsigned __int64)v3 < v6 )
      {
        *v3++ = v8;
        if ( v3 == v17 )
          return v23 - __readfsqword(0x28u);
      }
LABEL_21:
      sub_5960(v9, v10, v12, v13, v14, v15);
    }
  }
  return v23 - __readfsqword(0x28u);
}
