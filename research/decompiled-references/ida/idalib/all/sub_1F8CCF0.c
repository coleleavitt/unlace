__int64 __fastcall sub_1F8CCF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // [rsp+0h] [rbp-30h]
  __int64 v12[4]; // [rsp+10h] [rbp-20h] BYREF

  result = *(_QWORD *)(a1 + 40);
  if ( (!result || !*(_BYTE *)(result + 9267)) && *(char *)(a3 + 29) >= 0 )
  {
    if ( *(char *)(a2 + 29) < 0 || (v8 = (_QWORD *)sub_B8C330(a2), result = sub_AA81B0(v8), a2 == result) )
    {
      result = (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35;
      if ( (unsigned int)result <= 3 )
      {
        v12[0] = a2;
        result = sub_1F8B440(a1 + 1280, v12, a3, a4, a5, a6);
        v9 = *(unsigned int *)(result + 8);
        if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(result + 12) )
        {
          v11 = result;
          sub_2237220(result, result + 16, v9 + 1, 16);
          result = v11;
          v9 = *(unsigned int *)(v11 + 8);
        }
        v10 = (_QWORD *)(*(_QWORD *)result + 16 * v9);
        *v10 = 0;
        v10[1] = a3;
        ++*(_DWORD *)(result + 8);
      }
    }
  }
  return result;
}
