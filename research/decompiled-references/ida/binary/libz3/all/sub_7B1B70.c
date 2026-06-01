__int64 __fastcall sub_7B1B70(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // r14d
  __int64 v5; // rbx
  __int64 result; // rax
  _QWORD *v7; // r15
  __int64 v8; // [rsp+8h] [rbp-40h]

  v3 = 0;
  v5 = 0;
  result = *a3;
  v8 = a1 + 80;
  if ( *a3 )
  {
    while ( v3 < *(_DWORD *)(result - 4) )
    {
      while ( 1 )
      {
        v7 = *(_QWORD **)(result + 8LL * v3);
        if ( (unsigned int)sub_7E4200(v7, 0) >= a2 )
          break;
        result = *a3;
        ++v3;
        *(_QWORD *)(result + 8 * v5) = v7;
        if ( !result )
          return result;
        v5 = (unsigned int)(v5 + 1);
        if ( v3 >= *(_DWORD *)(result - 4) )
          goto LABEL_8;
      }
      ++v3;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 16LL))(v7, v8);
      sub_7E4500(v7, v8);
      sub_17E9C40(a1 + 224, v7[5], v7 - 1);
      result = *a3;
      if ( !*a3 )
        return result;
    }
LABEL_8:
    *(_DWORD *)(result - 4) = v5;
  }
  return result;
}

