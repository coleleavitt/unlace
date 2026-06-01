__int64 __fastcall sub_7E4B30(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD **a5,
        _DWORD **a6,
        __int64 a7)
{
  __int64 v11; // rdi
  __int64 (*v12)(void); // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _DWORD **v18; // rcx
  _DWORD **v19; // rsi
  _DWORD *v20; // rdi
  _DWORD *v21; // r8

  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 432LL);
  if ( (char *)v12 == (char *)sub_79EFF0 )
    v13 = v11 + 2144;
  else
    v13 = v12();
  v14 = sub_180C100(v13, 16LL * a3 + 68);
  *(_QWORD *)v14 = a1;
  v15 = v14 + 8;
  *(_DWORD *)(v14 + 8) = -2;
  *(_QWORD *)(v14 + 16) = a5;
  *(_QWORD *)(v14 + 24) = a6;
  if ( a5 && **a6 < **a5 )
  {
    *(_QWORD *)(v14 + 16) = a6;
    *(_QWORD *)(v14 + 24) = a5;
  }
  *(_DWORD *)(v14 + 40) = 1;
  *(_DWORD *)(v14 + 44) = a3;
  *(_QWORD *)(v14 + 32) = a7;
  *(_QWORD *)(v14 + 48) = v14 + 64;
  *(_DWORD *)(v14 + 64) = *a2;
  *(_QWORD *)(v14 + 56) = v14 + 68;
  if ( a3 )
  {
    v16 = a4;
    v17 = (_QWORD *)(v14 + 76);
    do
    {
      v18 = *(_DWORD ***)v16;
      *(v17 - 1) = *(_QWORD *)v16;
      v19 = *(_DWORD ***)(v16 + 8);
      v20 = *v18;
      v21 = *v19;
      *v17 = v19;
      if ( *v21 < *v20 )
      {
        *(v17 - 1) = v19;
        *v17 = v18;
      }
      v16 += 16;
      v17 += 2;
    }
    while ( a4 + 16LL * a3 != v16 );
  }
  return v15;
}

