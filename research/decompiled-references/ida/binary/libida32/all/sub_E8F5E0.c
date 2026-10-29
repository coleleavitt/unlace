unsigned __int64 __fastcall sub_E8F5E0(_QWORD *a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-28h]
  int v11; // [rsp+Ch] [rbp-1Ch]

  v8 = a1[294];
  a1[304] += 56LL;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= result + 56 && v8 )
  {
    a1[294] = result + 56;
  }
  else
  {
    v11 = a6;
    v10 = a5;
    result = sub_962430((__int64)(a1 + 294), 56, 56, 3, a5, a6);
    LODWORD(a6) = v11;
    a5 = v10;
  }
  *(_BYTE *)(result + 8) = 4;
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a6;
  *(_DWORD *)(result + 20) = a3;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_2B21DA0;
  *(_QWORD *)(result + 40) = a5;
  if ( a5 )
  {
    *(_QWORD *)(result + 32) = 1;
    *(_QWORD *)(result + 24) = result + 40;
  }
  *(_BYTE *)(result + 48) = a4;
  *(_QWORD *)result = off_2B21EC0;
  return result;
}

