__int64 __fastcall sub_3AAC80(__int64 **a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdi

  v3 = *a1;
  v4 = *a2;
  v5 = **a1;
  v6 = (unsigned __int64 *)(*a1)[7];
  v7 = *(_QWORD *)(v5 + 56 * v4 + 48);
  if ( *v6 < v7 )
  {
    v8 = *a3;
    *v6 = v7;
    if ( *((_BYTE *)v3 + 80) )
    {
      v9 = (_QWORD *)v3[8];
      if ( v8 == v4 )
      {
        *v9 = *(_QWORD *)v3[7];
        *(_QWORD *)v3[9] = -1;
      }
      else
      {
        *v9 = *(_QWORD *)(*v3 + 56 * v8 + 48);
        *(_QWORD *)v3[9] = v8;
      }
    }
  }
  return 0;
}
