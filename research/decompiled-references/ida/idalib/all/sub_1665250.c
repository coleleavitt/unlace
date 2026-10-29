__int64 __fastcall sub_1665250(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  _QWORD v11[3]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+18h] [rbp-20h] BYREF
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h] BYREF

  result = *((unsigned int *)a1 + 2);
  v11[1] = a4;
  v11[0] = a3;
  if ( a4 )
  {
    v7 = *a1 + 32 * result;
    v13 = *a1;
    v14 = v7;
    sub_1665000(&v12, &v14, &v13, (__int64)v11);
    v8 = *a1;
    result = v12;
    if ( *a1 != v12 )
    {
      v9 = v12 - 32;
      a1[11] = *(_QWORD *)(v12 - 16);
      v10 = *(_DWORD *)(v9 + 24);
      result = (v9 - v8) >> 5;
      *((_DWORD *)a1 + 24) = v10;
      *((_DWORD *)a1 + 2) = result;
    }
  }
  else if ( (_DWORD)result )
  {
    v5 = (unsigned int)result;
    result = (unsigned int)(result - 1);
    v6 = *a1 + 32 * v5 - 32;
    a1[11] = *(_QWORD *)(v6 + 16);
    LODWORD(v6) = *(_DWORD *)(v6 + 24);
    *((_DWORD *)a1 + 2) = result;
    *((_DWORD *)a1 + 24) = v6;
  }
  return result;
}
