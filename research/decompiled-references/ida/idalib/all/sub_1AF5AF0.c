__int64 __fastcall sub_1AF5AF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  result = *(unsigned int *)(v2 + 344);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(v2 + 336) + 6776 * result - 6776;
    if ( *(_QWORD *)(result + 6768) == *(_QWORD *)(v2 + 328) )
    {
      v4 = *(unsigned int *)(result + 8);
      v5 = *(unsigned int *)(v2 + 27504);
      if ( (unsigned int)v4 > (unsigned int)v5 )
      {
        v6 = v4 - v5;
        if ( v6 )
        {
          v7 = *(_QWORD *)result + 1688 * (v6 - 1);
          if ( v7 )
          {
            if ( *(_QWORD *)(v7 + 1536) )
            {
              result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
              v8 = *(unsigned int *)(v7 + 1552);
              if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 1556) )
              {
                v9 = result;
                sub_2237220(v7 + 1544, v7 + 1560, v8 + 1, 8);
                v8 = *(unsigned int *)(v7 + 1552);
                result = v9;
              }
              *(_QWORD *)(*(_QWORD *)(v7 + 1544) + 8 * v8) = result;
              ++*(_DWORD *)(v7 + 1552);
            }
          }
        }
      }
    }
  }
  return result;
}
