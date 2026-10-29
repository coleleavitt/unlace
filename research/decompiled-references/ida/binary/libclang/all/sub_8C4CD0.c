__int64 __fastcall sub_8C4CD0(__int16 *a1)
{
  __int64 result; // rax
  __int16 v2; // dx
  __int16 *v3; // rcx
  __int16 *v4; // rdi

  result = *((unsigned int *)a1 + 7);
  if ( !(_DWORD)result )
  {
    result = *((unsigned int *)a1 + 8);
    if ( (_DWORD)result )
    {
      v2 = *a1;
      v3 = a1 + 20;
      v4 = a1 + 24;
      if ( (v2 & 0x1FF) != 0x73 )
        v4 = v3;
      return sub_AC7460(*(_QWORD *)&v4[4 * (unsigned int)(result - 1)]);
    }
  }
  return result;
}

