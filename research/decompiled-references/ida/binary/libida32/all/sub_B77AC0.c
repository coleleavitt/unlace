unsigned __int64 __fastcall sub_B77AC0(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 result; // rax

  v4 = (_QWORD *)sub_B685F0(a1);
  v7 = v4[294];
  v4[304] += 16LL;
  v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4[295] >= v8 + 16 && v7 )
  {
    v4[294] = v8 + 16;
    result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_962430((__int64)(v4 + 294), 16, 16, 3, v5, v6);
    v8 = result & 0xFFFFFFFFFFFFFFFBLL;
  }
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = (2LL * (unsigned int)(a3 - 1)) | a2 & 0xFFFFFFFFFFFFFFF9LL;
  *(_QWORD *)(a1 + 136) = v8 | 4;
  return result;
}

