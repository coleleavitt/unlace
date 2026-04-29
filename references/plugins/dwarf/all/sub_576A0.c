unsigned __int64 __fastcall sub_576A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r15
  _QWORD *v5; // rax
  unsigned __int64 v6; // r13
  _DWORD *v7; // r8
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r12
  __int64 v16; // rsi
  int v18; // [rsp+0h] [rbp-60h]
  _DWORD *v19; // [rsp+0h] [rbp-60h]
  __int64 v20; // [rsp+8h] [rbp-58h] BYREF
  __int128 v21; // [rsp+10h] [rbp-50h]
  unsigned __int64 v22; // [rsp+20h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v21 = 0;
  v20 = 0;
  sub_560F0((__int64)a1, &v20, a2, 0, 0);
  v2 = (_QWORD *)*a1;
  v3 = v21;
  v4 = *a1 + 8LL * a1[1];
  if ( *a1 != v4 )
  {
    v5 = (_QWORD *)*a1;
    do
    {
      if ( a2 == *v5 )
        break;
      ++v5;
    }
    while ( (_QWORD *)v4 != v5 );
    v6 = (int)(v5 - v2);
    do
    {
      while ( 1 )
      {
        v7 = (_DWORD *)*v2;
        if ( *(_DWORD *)(*v2 + 336LL) == 5 )
        {
          v8 = *a1 + 8LL * a1[1];
          v9 = (_QWORD *)*a1;
          if ( *a1 != v8 )
          {
            do
            {
              if ( v7 == (_DWORD *)*v9 )
                break;
              ++v9;
            }
            while ( (_QWORD *)v8 != v9 );
          }
          if ( ((__int64)v9 - *a1) >> 3 >= v6 )
          {
            v10 = v20;
            if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v3 + 1) )
            {
              v19 = (_DWORD *)*v2;
              v20 = qvector_reserve(&v20, v20, v3 + 1, 8);
              v3 = v21;
              v10 = v20;
              v7 = v19;
            }
            *(_QWORD *)(v10 + 8 * v3) = v7;
            v3 = v21 + 1;
            *(_QWORD *)&v21 = v21 + 1;
            if ( (debug & 0x400000) != 0 )
              break;
          }
        }
        if ( ++v2 == (_QWORD *)v4 )
          goto LABEL_17;
      }
      v18 = (int)v7;
      v11 = (unsigned int)sub_575D0(v7);
      sub_88B80((unsigned int)"Collected 'dropped' node %p: %s\n", v18, v11, v12, v13, v14);
      ++v2;
      v3 = v21;
    }
    while ( v2 != (_QWORD *)v4 );
  }
LABEL_17:
  v15 = 0;
  if ( v3 )
  {
    do
    {
      v16 = *(_QWORD *)(v20 + 8 * v15++);
      sub_56050((__int64)a1, v16);
    }
    while ( v15 != v3 );
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v22 - __readfsqword(0x28u);
}
