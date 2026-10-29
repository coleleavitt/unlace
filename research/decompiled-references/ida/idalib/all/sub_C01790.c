__int64 __fastcall sub_C01790(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r12
  const char *v6; // rax

  result = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( !result
    || (*(_BYTE *)(result + 28) & 0x7Fu) - 34 > 5
    || (v5 = *(_QWORD *)a1, result = sub_B75A50(result, 0), !(_DWORD)result)
    || (v6 = (const char *)sub_FBD4B0(*(_QWORD *)(v5 + 17520), (unsigned int)result),
        (result = (__int64)strchr(v6, 117)) == 0) )
  {
    if ( !*(_BYTE *)(a1 + 9) )
    {
      result = sub_C01160(a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8), v3, v4);
      if ( (_BYTE)result )
        *(_BYTE *)(a1 + 9) = 1;
    }
  }
  return result;
}
