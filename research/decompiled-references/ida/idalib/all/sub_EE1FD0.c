__int64 __fastcall sub_EE1FD0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  _QWORD *v9; // rax
  char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // r15

  result = 1;
  if ( a3 <= a1[6] )
  {
    v4 = a3;
    v5 = *(_QWORD *)(a2 + 48);
    v6 = sub_F63270(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v6 )
    {
      return sub_EE2100(a1, v6, v6, v4);
    }
    else
    {
      v7 = sub_A72040((_QWORD *)*a1, v5);
      v8 = v7;
      if ( v7
        && (unsigned int)*(unsigned __int8 *)(v7 + 16) - 2 <= 1
        && (v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_A71600(*a1, v7) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(*v9 + 16LL) == 48)
        && (v10 = (char *)sub_F63270(*v9),
            v15 = sub_EDE580(*a1, v10, v11, v12, v13, v14),
            (v19 = sub_A63770(*a1, v8, v16, v17, v18)) != 0)
        && v4 <= a1[6] )
      {
        v20 = 0;
        while ( 1 )
        {
          result = sub_EE2100(a1, v10, v10, v4);
          if ( !(_BYTE)result )
            break;
          ++v20;
          v4 += *v15;
          if ( v19 == v20 || a1[6] < v4 )
            return 1;
        }
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}
