__int64 __fastcall sub_1688200(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _WORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax

  result = sub_B8E970(a2 + 64);
  if ( result )
  {
    v7 = result;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
        goto LABEL_4;
      v13 = sub_B8C3D0(v7, a2, v3, (__int64)v4, v5, v6);
      v3 = *v13;
      v4 = (_WORD *)(*v13 + 8LL * *((unsigned int *)v13 + 2));
      if ( *v13 < (unsigned __int64)v4 )
        break;
      if ( (_WORD *)v3 == v4 )
        goto LABEL_4;
      result = *(_QWORD *)v4;
      if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 145 )
      {
        result = (__int64)(v4 + 4);
        while ( v3 != result )
        {
          v4 = *(_WORD **)result;
          result += 8;
          if ( v4[18] == 145 )
            goto LABEL_6;
        }
LABEL_4:
        v8 = sub_168B6C0(a1);
        a2 = sub_B32530(v8, 0, 0);
        sub_B8CC60(v7, a2, v9, v10, v11, v12);
        result = (*(_BYTE *)(v7 + 28) & 0x7Fu) - 58;
        if ( (unsigned int)result <= 3 )
        {
          a2 = v7;
          result = sub_1688200(a1, v7);
        }
      }
LABEL_6:
      v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v7 )
        return result;
    }
    result = *v13;
    while ( 1 )
    {
      v3 = *(_QWORD *)result;
      if ( *(_WORD *)(*(_QWORD *)result + 36LL) == 145 )
        break;
      result += 8;
      if ( v4 == (_WORD *)result )
        goto LABEL_4;
    }
    if ( v4 != (_WORD *)result )
      goto LABEL_6;
    goto LABEL_4;
  }
  return result;
}
