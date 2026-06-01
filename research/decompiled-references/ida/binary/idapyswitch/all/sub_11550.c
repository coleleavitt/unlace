__int64 __fastcall sub_11550(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rdx

  v1 = qword_1D3D0;
  sub_11ED0(qword_1D3D0);
  v3 = ptr;
  if ( ptr )
  {
    v4 = *(_QWORD **)ptr;
    v5 = *(_QWORD *)ptr + 8LL * *((_QWORD *)ptr + 1);
    if ( *(_QWORD *)ptr != v5 )
    {
      while ( *v4 != a1 )
      {
        if ( (_QWORD *)v5 == ++v4 )
          return sub_11F20(v1);
      }
      if ( (_QWORD *)v5 != v4 )
      {
        memmove(v4, v4 + 1, v5 - (_QWORD)v4 - 8);
        --v3[1];
      }
    }
  }
  return sub_11F20(v1);
}

