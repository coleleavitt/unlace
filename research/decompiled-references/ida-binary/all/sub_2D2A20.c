unsigned __int64 __fastcall sub_2D2A20(__int64 *a1, const char *a2)
{
  __int64 v4; // r13
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  const char *v13; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = nullptr;
  v14 = 0;
  get_ea_name(&v13, a2, 64, 0);
  if ( (unsigned __int64)v14 > 1 )
  {
    v4 = a1[1];
    v5 = 0;
    if ( v4 )
    {
      do
      {
        v6 = (_QWORD *)(*a1 + 80 * v5);
        v7 = v6[4];
        if ( v7 )
        {
          v6[5] = 0;
          qfree(v7, a2);
        }
        v8 = v6[1];
        if ( v8 )
        {
          v6[2] = 0;
          qfree(v8, a2);
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    v9 = a1[2] == 0;
    v10 = *a1;
    a1[1] = 0;
    if ( v9 )
    {
      v11 = qvector_reserve(a1, v10, 1, 80);
      v12 = a1[1];
      *a1 = v11;
      v10 = v11 + 80 * v12;
    }
    *(_QWORD *)v10 = 0;
    a2 = &s1;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 32) = 0;
    *(_DWORD *)(v10 + 72) = 0;
    *(_OWORD *)(v10 + 16) = 0;
    *(_OWORD *)(v10 + 40) = 0;
    *(_OWORD *)(v10 + 56) = 0;
    ++a1[1];
    if ( (_QWORD)v14 )
      a2 = v13;
    sub_1E88D0(v10, a2, 0);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, a2);
  }
  return v15 - __readfsqword(0x28u);
}
