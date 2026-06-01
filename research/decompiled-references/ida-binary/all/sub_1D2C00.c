void __fastcall sub_1D2C00(__int64 a1, __int16 *a2, void *a3, int a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int16 v12; // ax
  __int16 *v13; // rdx

  v6 = *(unsigned int *)(a1 + 44);
  v7 = *(unsigned int *)(a1 + 40);
  if ( (unsigned int)v6 <= 5 && (v8 = 43, _bittest64(&v8, v6)) )
  {
    if ( (unsigned int)v7 <= 5 && _bittest64(&v8, v7) )
      goto LABEL_5;
  }
  else
  {
    if ( (unsigned int)v7 > 5 )
      goto LABEL_5;
    v11 = 43;
    if ( !_bittest64(&v11, v7) )
      goto LABEL_5;
  }
  v12 = *a2;
  if ( *a2 )
  {
    v13 = a2;
    do
    {
      *v13++ = __ROL2__(v12, 8);
      v12 = *v13;
    }
    while ( *v13 );
  }
LABEL_5:
  v9 = operator new[](a4);
  v10 = 0;
  *(_QWORD *)(a1 + 8) = v9;
  if ( a4 > 0 )
  {
    do
    {
      *(_BYTE *)(v9 + v10) = a2[v10];
      ++v10;
      v9 = *(_QWORD *)(a1 + 8);
    }
    while ( a4 != v10 );
  }
  *(_QWORD *)(a1 + 24) = v9;
  *(_DWORD *)(a1 + 32) = a4;
  if ( a3 )
    operator delete[](a3);
}
