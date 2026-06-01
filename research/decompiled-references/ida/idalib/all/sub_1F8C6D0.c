__int64 __fastcall sub_1F8C6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-20h]
  __int64 v10; // [rsp+10h] [rbp-10h] BYREF

  result = *(_QWORD *)(a1 + 40);
  if ( (!result || !*(_BYTE *)(result + 9267)) && *(char *)(a3 + 29) < 0 )
  {
    v10 = a3;
    result = sub_1F8B440(a1 + 1280, &v10, a3, a4, a5, a6);
    v7 = *(unsigned int *)(result + 8);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(result + 12) )
    {
      v9 = result;
      sub_2237220(result, result + 16, v7 + 1, 16);
      result = v9;
      v7 = *(unsigned int *)(v9 + 8);
    }
    v8 = (_QWORD *)(*(_QWORD *)result + 16 * v7);
    *v8 = 18;
    v8[1] = a2;
    ++*(_DWORD *)(result + 8);
  }
  return result;
}
