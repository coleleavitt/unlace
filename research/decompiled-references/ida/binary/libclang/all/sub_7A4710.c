__int64 __fastcall sub_7A4710(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 result; // rax

  v5 = sub_798D40(a1);
  v6 = *(_QWORD *)(v5 + 2192);
  *(_QWORD *)(v5 + 2272) += 16LL;
  v7 = v5;
  v8 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v7 + 2200) >= v8 + 16 && v6 )
    *(_QWORD *)(v7 + 2192) = v8 + 16;
  else
    v8 = sub_7A1DE0(v7 + 2192, 16, 3);
  *(_DWORD *)(v8 + 8) = 0;
  *(_QWORD *)v8 = (2LL * (unsigned int)(a3 - 1)) | a2 & 0xFFFFFFFFFFFFFFF9LL;
  result = v8 | 4;
  *(_QWORD *)(a1 + 136) = result;
  return result;
}

