__int64 __fastcall sub_A6E640(__int64 a1)
{
  __int64 result; // rax
  _QWORD **v2; // rbx
  _QWORD **i; // r12
  _QWORD *v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r15

  result = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD ***)(result + 8664);
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    for ( i = &v2[result]; i != v2; ++v2 )
    {
      v4 = *v2;
      if ( v4 == (_QWORD *)v4[1] )
      {
        v5 = *(_QWORD *)(a1 + 8);
        v6 = *v4;
        result = sub_8E7030(v5);
        if ( !(_DWORD)result
          || (result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 7488) + 56LL))(
                         *(_QWORD *)(v5 + 7488),
                         v6),
              (_BYTE)result) )
        {
          if ( !*(_WORD *)(*v4 + 4LL) )
          {
            result = *(_QWORD *)(*(_QWORD *)(*v4 + 16LL) + 24LL);
            if ( result )
            {
              if ( *(_DWORD *)result == 3 )
              {
                result = *(unsigned int *)(result + 4);
                if ( !(_DWORD)result )
                  result = sub_C05B20(*(_QWORD *)(a1 + 72));
              }
            }
          }
        }
      }
    }
  }
  return result;
}

