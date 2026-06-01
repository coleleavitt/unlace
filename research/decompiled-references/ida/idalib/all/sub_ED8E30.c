_QWORD *__fastcall sub_ED8E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rdx

  result = (_QWORD *)sub_A7A590(a2, a2, a3, a4, a5, a6);
  if ( result != v7 )
  {
    v8 = v7;
    v9 = result;
    while ( 1 )
    {
      v10 = sub_ED6580((__int64 *)v9[2]);
      v11 = sub_F63270(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*((_BYTE *)v9 + 12) & 1) != 0 && (unsigned __int8)sub_A647D0(*(_QWORD *)a1) )
      {
        if ( *(_BYTE *)(a1 + 340) )
        {
          result = *(_QWORD **)(a1 + 320);
          v12 = &result[*(unsigned int *)(a1 + 332)];
          if ( result == v12 )
            goto LABEL_15;
          while ( v11 != *result )
          {
            if ( v12 == ++result )
              goto LABEL_15;
          }
        }
        else
        {
          result = (_QWORD *)sub_2236570(a1 + 320, v11);
          if ( !result )
          {
LABEL_15:
            *(_QWORD *)(a1 + 256) = v11;
            *(_BYTE *)(a1 + 264) = 1;
            return result;
          }
        }
        if ( !*(_QWORD *)(a1 + 600) )
          *(_QWORD *)(a1 + 600) = v11;
      }
      result = (_QWORD *)sub_ED8E30(a1, v11);
      if ( !*(_QWORD *)(a1 + 256) )
      {
        v9 += 3;
        if ( v9 != v8 )
          continue;
      }
      return result;
    }
  }
  return result;
}
