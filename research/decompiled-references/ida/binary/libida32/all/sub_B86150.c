unsigned __int64 __fastcall sub_B86150(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v11; // rbx

  v11 = sub_B6C590(80, a1, a2, 0);
  sub_B4E870(v11, 0x33u, a2, a4);
  *(_QWORD *)(v11 + 40) = a5;
  *(_QWORD *)(v11 + 48) = a6;
  *(_QWORD *)(v11 + 56) = 0;
  *(_DWORD *)(v11 + 64) = a3;
  *(_QWORD *)v11 = &off_2B20908;
  *(_DWORD *)(v11 + 68) = 0;
  if ( a7 )
  {
    *(_BYTE *)(v11 + 68) |= 1u;
    *(_QWORD *)(v11 + 72) = a7;
  }
  else
  {
    *(_QWORD *)(v11 + 72) = 0;
  }
  *(_QWORD *)v11 = &off_2BD9AF8;
  return v11;
}

