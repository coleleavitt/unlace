__int64 sub_3DF7D0()
{
  __int64 result; // rax

  result = j__qalloc_or_throw();
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 80) = result + 64;
  *(_QWORD *)(result + 88) = result + 64;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_4E8AD8;
  *(_DWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_DWORD *)(result + 136) = 0;
  *(_QWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 152) = result + 136;
  *(_QWORD *)(result + 160) = result + 136;
  *(_QWORD *)(result + 168) = 0;
  *(_DWORD *)(result + 176) = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 112) = 0;
  return result;
}
