__int64 __fastcall sub_3EA440(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = j__qalloc_or_throw(184, a2, a3, a4);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 80) = result + 64;
  *(_QWORD *)(result + 88) = result + 64;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_4E9A58;
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
