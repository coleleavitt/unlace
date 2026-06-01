__int64 __fastcall sub_EBDCB0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r14
  char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  bool v20; // zf
  __int64 v21; // r13

  v6 = *(_QWORD *)(a2 + 48);
  v7 = sub_F3F530(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v7 )
    return sub_EBDDF0(a1, v7, v7, a3, a4);
  result = sub_A4E300((_QWORD *)*a1, v6);
  v9 = result;
  if ( result )
  {
    result = (unsigned int)*(unsigned __int8 *)(result + 16) - 2;
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(*(_QWORD *)(sub_A4D8C0(*a1, v9) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_BYTE *)(*(_QWORD *)result + 16LL) == 48 )
      {
        v10 = (char *)sub_F3F530(*(_QWORD *)result);
        v15 = sub_EBA840(*a1, v10, v11, v12, v13, v14);
        result = sub_A3FA30(*a1, v9, v16, v17, v18);
        v19 = result;
        if ( result )
        {
          v20 = a4 == 0;
          v21 = 0;
          if ( v20 )
          {
            do
            {
              if ( a1[7] <= a3 )
                break;
              ++v21;
              result = sub_EBDDF0(a1, v10, v10, a3, 0);
              a3 += *v15;
            }
            while ( v19 != v21 );
          }
          else
          {
            do
            {
              ++v21;
              result = sub_EBDDF0(a1, v10, v10, a3, 1);
              a3 += *v15;
            }
            while ( v19 != v21 );
          }
        }
      }
    }
  }
  return result;
}

