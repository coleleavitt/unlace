__int64 __fastcall sub_1F8CC40(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-20h]
  _BYTE *v10; // [rsp+10h] [rbp-10h] BYREF

  result = *(_QWORD *)(a1 + 40);
  if ( (!result || !*(_BYTE *)(result + 9267)) && (char)a2[29] < 0 )
  {
    if ( (result = (unsigned __int8)a2[83], (result & 8) == 0) && ((a2[128] & 1) != 0 || *((_QWORD *)a2 + 16))
      || (result & 0x40) != 0 )
    {
      v10 = a2;
      result = sub_1F8B440(a1 + 1280, (__int64 *)&v10, a3, a4, a5, a6);
      v7 = *(unsigned int *)(result + 8);
      if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(result + 12) )
      {
        v9 = result;
        sub_2237220(result, result + 16, v7 + 1, 16);
        result = v9;
        v7 = *(unsigned int *)(v9 + 8);
      }
      v8 = (_QWORD *)(*(_QWORD *)result + 16 * v7);
      *v8 = 2;
      v8[1] = 0;
      ++*(_DWORD *)(result + 8);
    }
  }
  return result;
}
