unsigned __int64 __fastcall sub_1F179A0(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r12
  __int64 v4; // r13
  __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  _QWORD *v15; // rax

  v2 = *(_QWORD **)a1;
  v3 = (_QWORD *)*v2;
  v4 = sub_1EE1670((__int64)v2);
  v6 = sub_1F16500(
         *(_QWORD **)(*(_QWORD *)a1 + 8LL),
         *(_QWORD *)(*(_QWORD *)a1 + 16LL),
         (__int64 *)(*(_QWORD *)a1 + 32LL),
         (_DWORD *)(*(_QWORD *)a1 + 24LL));
  if ( v4 )
  {
    v9 = *(_QWORD *)(v4 + 48);
    if ( v9 )
      return v9 & 0xFFFFFFFFFFFFFFF0LL;
    v9 = *(_QWORD *)(v4 + 96);
    if ( (((unsigned __int8)v9 | (unsigned __int8)(v9 >> 1)) & 1) == 0 )
    {
      v10 = (_QWORD *)v4;
      do
      {
        v10 = sub_7052B0(v10 + 12, (__int64)v10, v9, v5, v7, v8);
        if ( !v10 )
          break;
        v9 = v10[6];
        if ( v9 )
          return v9 & 0xFFFFFFFFFFFFFFF0LL;
      }
      while ( (v10[12] & 3) == 0 );
    }
  }
  v11 = v3[294];
  v3[304] += 48LL;
  v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v3[295] >= v12 + 48 && v11 )
  {
    v3[294] = v12 + 48;
    v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v13 = sub_986170((__int64)(v3 + 294), 48, 48, 4, v7, v8);
    v12 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  }
  *(_QWORD *)v13 = v13;
  *(_BYTE *)(v13 + 18) &= 0xF8u;
  *(_QWORD *)(v13 + 8) = v13 & 0xFFFFFFFFFFFFFFF0LL;
  *(_WORD *)(v13 + 16) = 1565;
  *(_QWORD *)(v13 + 24) = v4;
  *(_QWORD *)(v13 + 32) = v6;
  if ( v4 )
  {
    v14 = *(_QWORD *)(v4 + 96);
    *(_QWORD *)(v4 + 48) = v13;
    if ( (((unsigned __int8)v14 | (unsigned __int8)(v14 >> 1)) & 1) == 0 )
    {
      do
      {
        v15 = sub_7052B0((__int64 *)(v4 + 96), v4, v14, v5, v7, v8);
        v4 = (__int64)v15;
        if ( !v15 )
          break;
        v15[6] = v13;
      }
      while ( (v15[12] & 3) == 0 );
    }
  }
  return v12;
}
