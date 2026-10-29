unsigned __int64 __fastcall sub_B9AA20(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int16 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 result; // rax
  int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  unsigned __int64 v22; // [rsp+0h] [rbp-58h]
  char v26; // [rsp+17h] [rbp-41h]

  v14 = sub_F34140(*(_QWORD *)(*(_QWORD *)a9 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v14 || *(_BYTE *)(v14 + 16) != 16 || (v15 = 8, v26 = 1, !*(_QWORD *)(v14 + 32)) )
  {
    v26 = 0;
    v15 = 0;
  }
  v22 = sub_B6C590(88, a1, a2, v15 + 16 * a11);
  sub_B4E870(v22, 0x2Fu, a2, a4);
  result = v22;
  *(_QWORD *)(v22 + 40) = a7;
  *(_QWORD *)(v22 + 56) = a9 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v22 + 48) = a8;
  v17 = *(_DWORD *)(v22 + 68);
  *(_DWORD *)(v22 + 64) = a3;
  *(_QWORD *)(v22 + 72) = 0;
  v18 = a5 & 0xFFFFF | v17 & 0xFFF00000;
  *(_DWORD *)(v22 + 84) = a11;
  *(_DWORD *)(v22 + 68) = v18;
  *(_WORD *)(v22 + 70) = (16 * a6) | BYTE2(v18) & 0xF;
  *(_QWORD *)v22 = &off_2BDA5A8;
  *(_WORD *)(v22 + 80) = 257;
  v19 = (unsigned int)a11;
  if ( a11 )
  {
    if ( a13 && (_DWORD)a11 )
    {
      LODWORD(v19) = 0;
      do
      {
        v20 = (unsigned int)v19;
        v19 = (unsigned int)(v19 + 1);
        v21 = (_QWORD *)(v22 + 16 * v20 + 88);
        *v21 = *(_QWORD *)(a10 + 8 * v20);
        v21[1] = *(_QWORD *)(a12 + 8 * v20);
      }
      while ( *(_DWORD *)(v22 + 84) != (_DWORD)v19 );
    }
  }
  else
  {
    v19 = 0;
  }
  if ( v26 )
    *(_QWORD *)(v22 + 16 * v19 + 88) = 0;
  return result;
}

