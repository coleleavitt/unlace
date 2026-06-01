__int64 __fastcall sub_1F8BDB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-10h] BYREF

  result = *(_QWORD *)(a1 + 48);
  if ( !result || !*(_BYTE *)(result + 9267) )
  {
    v11 = a2;
    result = sub_1F8B440(a1 + 1288, &v11, a3, a4, a5, a6);
    v8 = *(unsigned int *)(result + 8);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(result + 12) )
    {
      v10 = result;
      sub_2237220(result, result + 16, v8 + 1, 16);
      result = v10;
      v8 = *(unsigned int *)(v10 + 8);
    }
    v9 = (_QWORD *)(*(_QWORD *)result + 16 * v8);
    *v9 = 17;
    v9[1] = a3;
    ++*(_DWORD *)(result + 8);
  }
  return result;
}
