unsigned __int64 __fastcall user2qstr(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rdx
  _BYTE *v4; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbp
  char v9; // r13
  __int64 v10; // rax
  _BYTE *v12; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v2 = a2;
  a1[1] = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( a1[2] < v3 )
  {
    a2 = *a1;
    *a1 = qvector_reserve(a1, *a1, v3, 1);
    v3 = *(_QWORD *)(v2 + 8);
  }
  if ( v3 )
  {
    v4 = *(_BYTE **)v2;
    v5 = *(_QWORD *)v2 + v3 - 1;
    v12 = v4;
    if ( (_BYTE *)v5 != v4 )
    {
      do
      {
        v12 = v4 + 1;
        v9 = *v4;
        if ( *v4 == 92 )
          v9 = back_char(&v12, a2);
        v8 = a1[1];
        if ( v8 )
        {
          v6 = v8 + 1;
          v7 = a1[1];
          a2 = *a1;
          --v8;
          if ( a1[2] < v6 )
            goto LABEL_12;
        }
        else
        {
          a2 = *a1;
          v7 = 1;
          v6 = 2;
          if ( (unsigned __int64)a1[2] < 2 )
          {
LABEL_12:
            v10 = qvector_reserve(a1, a2, v6, 1);
            *a1 = v10;
            a2 = v10;
          }
        }
        a1[1] = v6;
        *(_BYTE *)(a2 + v8) = v9;
        *(_BYTE *)(*a1 + v7) = 0;
        v4 = v12;
      }
      while ( v12 != (_BYTE *)v5 );
    }
  }
  return v13 - __readfsqword(0x28u);
}
