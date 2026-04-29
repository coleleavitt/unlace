unsigned __int64 __fastcall sub_2C99A0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // r15
  unsigned __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // [rsp+0h] [rbp-C8h]
  int v15; // [rsp+Ch] [rbp-BCh]
  __int64 (__fastcall **v16)(); // [rsp+20h] [rbp-A8h] BYREF
  int v17; // [rsp+28h] [rbp-A0h]
  __int64 v18; // [rsp+30h] [rbp-98h] BYREF
  __int128 v19; // [rsp+38h] [rbp-90h]
  unsigned __int64 v20; // [rsp+48h] [rbp-80h]
  __int64 (__fastcall **v21)(); // [rsp+50h] [rbp-78h]
  int v22; // [rsp+58h] [rbp-70h]
  __int64 v23; // [rsp+60h] [rbp-68h] BYREF
  __int128 v24; // [rsp+68h] [rbp-60h]
  unsigned __int64 v25; // [rsp+78h] [rbp-50h]
  unsigned __int64 v26; // [rsp+88h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v17 = -1;
    v18 = 0;
    v20 = 0xFFFFFFFEFFFFFFFFLL;
    v16 = off_4DBA58;
    v19 = 0;
    if ( a2 < v2 )
    {
      v9 = a2;
      do
      {
        v10 = (_QWORD *)(*a1 + 48 * v9);
        v11 = v10[2];
        *v10 = off_4DBA30;
        if ( v11 )
        {
          v10[3] = 0;
          qfree(v11);
        }
        ++v9;
      }
      while ( v2 != v9 );
      a1[1] = a2;
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)&v16 < *a1 || (unsigned __int64)&v16 >= v5 + 48 * v6 )
      {
        if ( v6 < a2 )
        {
          *a1 = qvector_reserve(a1, v5, a2, 48);
          v2 = a1[1];
        }
        for ( ; v2 < a2; *(_QWORD *)(v7 + 40) = 0xFFFFFFFEFFFFFFFFLL )
        {
          v7 = *a1 + 48 * v2;
          *(_QWORD *)v7 = off_4DBA30;
          *(_DWORD *)(v7 + 8) = -1;
          *(_QWORD *)(v7 + 16) = 0;
          *(_OWORD *)(v7 + 24) = 0;
          sub_2AE6E0((_QWORD *)(v7 + 16), (__int64)&v18);
          ++v2;
          *(_QWORD *)v7 = off_4DBA58;
        }
        a1[1] = a2;
      }
      else
      {
        v22 = -1;
        v21 = off_4DBA30;
        v23 = 0;
        v24 = 0;
        sub_2AE6E0(&v23, (__int64)&v18);
        v21 = off_4DBA58;
        v15 = v22;
        v14 = v23;
        v25 = 0xFFFFFFFEFFFFFFFFLL;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 48);
        v12 = a1[1];
        if ( v12 < a2 )
        {
          do
          {
            v13 = *a1 + 48 * v12;
            *(_QWORD *)v13 = off_4DBA30;
            *(_QWORD *)(v13 + 16) = 0;
            *(_DWORD *)(v13 + 8) = v15;
            v22 = v15;
            *(_OWORD *)(v13 + 24) = 0;
            v23 = v14;
            sub_2AE6E0((_QWORD *)(v13 + 16), (__int64)&v23);
            ++v12;
            *(_QWORD *)v13 = off_4DBA58;
            *(_QWORD *)(v13 + 40) = 0xFFFFFFFEFFFFFFFFLL;
          }
          while ( a2 != v12 );
        }
        a1[1] = a2;
        if ( v14 )
          qfree(v14);
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}
