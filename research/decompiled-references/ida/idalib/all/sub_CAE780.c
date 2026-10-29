__int64 __fastcall sub_CAE780(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+8h] [rbp-10h] BYREF

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 2);
  if ( *(_BYTE *)(v2 + 1360) )
  {
    v5[0] = a1[2] | 4;
    return sub_D25200(v2, v3, v5);
  }
  else
  {
    result = *((unsigned __int8 *)a1 + 12);
    if ( !(_BYTE)result || (_DWORD)v3 != 10 )
    {
      v5[0] = a1[2] | 4;
      return sub_D2FA60(v2, 10, (unsigned int)v3, v5);
    }
  }
  return result;
}
