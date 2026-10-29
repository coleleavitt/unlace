__int64 __fastcall sub_B4F460(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, char a8)
{
  __int64 v11; // rbx

  v11 = sub_B6C590(104, a1, a2, 0);
  sub_B4E870(v11, 0x28u, a2, a4);
  *(_DWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 48) = a6;
  *(_QWORD *)(v11 + 40) = a5;
  *(_QWORD *)(v11 + 56) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v11 + 64) = a3;
  *(_QWORD *)(v11 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)v11 = &off_2B207A0;
  *(_QWORD *)(v11 + 80) = v11;
  *(_QWORD *)(v11 + 88) = 0;
  *(_BYTE *)(v11 + 96) = a8 & 7;
  return v11;
}

