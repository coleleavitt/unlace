__int64 __fastcall sub_7F5200(_QWORD *a1)
{
  __int64 result; // rax
  __int64 **v3; // rbx
  __int64 **i; // r13
  __int64 *v5; // rbp
  __int64 v6; // rdi
  _DWORD *v7; // rdx

  result = a1[3];
  if ( !*(_BYTE *)(result + 3184) )
  {
    v3 = (__int64 **)a1[221];
    if ( v3 )
    {
      result = *((unsigned int *)v3 - 1);
      for ( i = &v3[result]; i != v3; ++v3 )
      {
        v5 = *v3;
        v6 = a1[18];
        result = (*v3)[8];
        if ( *(_QWORD *)result == *(_QWORD *)(v6 + 864) )
        {
          result = *v5;
          if ( !*(_WORD *)(*v5 + 4) )
          {
            v7 = *(_DWORD **)(*(_QWORD *)(result + 16) + 24LL);
            if ( v7 )
            {
              if ( !*v7 && v7[1] == 2 )
              {
                result = sub_15D2CB0(v6, *(_QWORD *)(result + 32));
                if ( !(_BYTE)result )
                {
                  result = *(_QWORD *)(v5[22] + 64);
                  if ( *(_QWORD *)(v5[23] + 64) == result )
                  {
                    sub_1872CE0("");
                    sub_1873130(114, 59);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

