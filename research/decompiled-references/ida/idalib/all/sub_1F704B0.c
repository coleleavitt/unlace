__int64 __fastcall sub_1F704B0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  char v12; // cl

  v4 = (unsigned __int64)a2;
  if ( a2 == a3 )
  {
    v8 = 0;
  }
  else
  {
    v5 = (unsigned __int64)a2;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = nullptr;
        if ( (v5 & 4) != 0 )
          break;
        v5 = 0;
        ++v6;
        if ( !a3 )
          goto LABEL_8;
      }
      v5 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v5 )
      {
        v5 = *(_QWORD *)(v5 + 8);
        v7 = (_QWORD *)v5;
      }
      ++v6;
    }
    while ( a3 != v7 );
LABEL_8:
    v8 = v6;
  }
  v9 = *(unsigned int *)(a1 + 8);
  v10 = v8 + v9;
  if ( v8 + v9 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v10, 8);
    v9 = *(unsigned int *)(a1 + 8);
    LODWORD(v10) = v8 + v9;
  }
  result = *(_QWORD *)a1 + 8 * v9;
  if ( a2 != a3 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v4;
        result += 8;
        v4 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( (v12 & 4) != 0 )
          break;
        *(_QWORD *)(result - 8) = v4;
        v4 = 0;
        if ( !a3 )
          goto LABEL_18;
      }
      if ( v4 )
      {
        *(_QWORD *)(result - 8) = *(_QWORD *)v4;
        v4 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        *(_QWORD *)(result - 8) = 0;
      }
    }
    while ( a3 != (_QWORD *)v4 );
  }
LABEL_18:
  *(_DWORD *)(a1 + 8) = v10;
  return result;
}
