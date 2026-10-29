__int64 __fastcall sub_B56470(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v10; // rbp
  __int64 v11; // rbx

  v10 = a2;
  if ( a2 )
    v10 = a2 + 64;
  v11 = sub_B6C590(88, a1, v10, 0);
  sub_B4E870(v11, 0x21u, v10, a3);
  *(_QWORD *)(v11 + 40) = a4;
  *(_QWORD *)(v11 + 72) = a6;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 48) = a5;
  *(_QWORD *)v11 = &off_2B20F90;
  *(_DWORD *)(v11 + 64) = 0;
  sub_BE8DF0(v11 + 56, a1, a7);
  *(_BYTE *)(v11 + 80) = *(_BYTE *)(a7 + 12);
  return v11;
}

