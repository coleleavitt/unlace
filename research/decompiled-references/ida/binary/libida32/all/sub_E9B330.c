unsigned __int64 __fastcall sub_E9B330(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  int v10; // [rsp+8h] [rbp-20h]
  int v11; // [rsp+Ch] [rbp-1Ch]

  v8 = a1[294];
  a1[304] += 28LL;
  result = (v8 + 3) & 0xFFFFFFFFFFFFFFFCLL;
  if ( a1[295] >= result + 28 && v8 )
  {
    a1[294] = result + 28;
  }
  else
  {
    v11 = a6;
    v10 = a5;
    result = sub_962430((__int64)(a1 + 294), 28, 28, 2, a5, a6);
    LODWORD(a6) = v11;
    LODWORD(a5) = v10;
  }
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a6;
  *(_DWORD *)(result + 8) = 108;
  *(_BYTE *)(result + 12) = 1;
  *(_DWORD *)(result + 16) = a3;
  *(_DWORD *)(result + 20) = a4;
  *(_DWORD *)(result + 24) = a5;
  return result;
}

