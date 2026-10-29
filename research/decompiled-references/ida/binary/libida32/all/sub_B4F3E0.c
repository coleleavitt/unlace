__int64 __fastcall sub_B4F3E0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  unsigned __int64 v11; // rbp
  __int64 result; // rax

  v11 = a3 & 0xFFFFFFFFFFFFFFFCLL | 2;
  sub_B4E870(a1, a2, a4, a6);
  *(_DWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = v11;
  *(_QWORD *)(a1 + 40) = a7;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 48) = a8;
  *(_QWORD *)(a1 + 80) = a1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 56) = a9 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)a1 = &off_2B207A0;
  result = a10 & 7;
  *(_BYTE *)(a1 + 96) = result;
  return result;
}

