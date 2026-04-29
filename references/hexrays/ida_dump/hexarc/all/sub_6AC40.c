unsigned __int64 __fastcall sub_6AC40(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  _QWORD v10[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v10[0] = 0;
    v10[1] = 0;
    if ( a2 < v2 )
    {
      v7 = a2;
      do
      {
        v8 = v7++;
        qfree(*(_QWORD *)(*a1 + 16 * v8));
      }
      while ( v2 != v7 );
    }
    else
    {
      v4 = *a1;
      v5 = a1[2];
      if ( (unsigned __int64)v10 >= *a1 && (unsigned __int64)v10 < v4 + 16 * v5 )
      {
        sub_5DA80(v11, (__int64)v10);
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 16);
        v9 = a1[1];
        if ( v9 < a2 )
        {
          do
            sub_5DA80((__int64 *)(*a1 + 16 * v9++), (__int64)v11);
          while ( a2 != v9 );
        }
        a1[1] = a2;
        qfree(v11[0]);
        goto LABEL_9;
      }
      if ( v5 < a2 )
      {
        *a1 = qvector_reserve(a1, v4, a2, 16);
        v2 = a1[1];
      }
      for ( ; v2 < a2; ++v2 )
        sub_5DA80((__int64 *)(*a1 + 16 * v2), (__int64)v10);
    }
    a1[1] = a2;
LABEL_9:
    qfree(v10[0]);
  }
  return v12 - __readfsqword(0x28u);
}
