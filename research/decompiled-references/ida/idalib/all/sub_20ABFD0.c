__int64 __fastcall sub_20ABFD0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _QWORD **v3; // rbx
  _QWORD **i; // rbp
  _QWORD *v5; // rdi

  result = BYTE1(*a1) & 0x7F;
  if ( (_BYTE)result == 2 || *((_DWORD *)a1 - 2) )
  {
    *((_DWORD *)a1 - 2) = 0;
    sub_20ABEC0((__int64)a1);
    result = *((unsigned __int8 *)a1 - 16);
    if ( (result & 2) != 0 )
    {
      v3 = (_QWORD **)*(a1 - 4);
      v2 = *((unsigned int *)a1 - 6);
    }
    else
    {
      result = 8LL * (((unsigned __int8)result >> 2) & 0xF);
      v2 = (*((_WORD *)a1 - 8) >> 6) & 0xF;
      v3 = (_QWORD **)((char *)a1 - result - 16);
    }
    for ( i = &v3[v2]; i != v3; ++v3 )
    {
      v5 = *v3;
      if ( *v3 )
      {
        result = (unsigned int)*(unsigned __int8 *)v5 - 5;
        if ( (unsigned int)result <= 0x20 )
        {
          if ( (BYTE1(*v5) & 0x7F) == 2 || (result = *((unsigned int *)v5 - 2), (_DWORD)result) )
            result = sub_20ABFD0();
        }
      }
    }
  }
  return result;
}
