__int64 __fastcall sub_20DC9F0(__int64 a1)
{
  char *v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  char v4; // dl
  __int64 v5; // rbp
  __int64 v6; // r12
  char v7; // dl
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r13
  char v11; // dl
  __int64 v12; // rbp
  __int64 v13; // r12
  char v14; // dl

  v1 = *(char **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v2 || *v1 != 100 || (unsigned __int64)(v2 - (_QWORD)v1) <= 1 )
    return sub_20DA8A0(a1);
  v4 = v1[1];
  if ( v4 != 105 )
  {
    if ( v4 == 120 )
    {
      *(_QWORD *)a1 = v1 + 2;
      v12 = sub_20DA8A0(a1);
      if ( v12 )
      {
        v13 = sub_20DC9F0(a1);
        if ( v13 )
        {
          result = sub_20CF970(a1 + 816, 40);
          v14 = *(_BYTE *)(result + 10);
          *(_WORD *)(result + 8) = 16465;
          *(_QWORD *)(result + 16) = v12;
          *(_QWORD *)(result + 24) = v13;
          *(_BYTE *)(result + 32) = 1;
          *(_BYTE *)(result + 10) = v14 & 0xF0 | 5;
          *(_QWORD *)result = off_2BE8160;
          return result;
        }
      }
    }
    else
    {
      if ( v4 != 88 )
        return sub_20DA8A0(a1);
      *(_QWORD *)a1 = v1 + 2;
      v8 = sub_20DA8A0(a1);
      if ( v8 )
      {
        v9 = sub_20DA8A0(a1);
        if ( v9 )
        {
          v10 = sub_20DC9F0(a1);
          if ( v10 )
          {
            result = sub_20CF970(a1 + 816, 40);
            *(_WORD *)(result + 8) = 16466;
            v11 = *(_BYTE *)(result + 10);
            *(_QWORD *)(result + 16) = v8;
            *(_QWORD *)(result + 24) = v9;
            *(_QWORD *)(result + 32) = v10;
            *(_BYTE *)(result + 10) = v11 & 0xF0 | 5;
            *(_QWORD *)result = off_2BE81C0;
            return result;
          }
        }
      }
    }
    return 0;
  }
  *(_QWORD *)a1 = v1 + 2;
  v5 = sub_20D1DD0((char **)a1);
  if ( !v5 )
    return 0;
  v6 = sub_20DC9F0(a1);
  if ( !v6 )
    return 0;
  result = sub_20CF970(a1 + 816, 40);
  v7 = *(_BYTE *)(result + 10);
  *(_WORD *)(result + 8) = 16465;
  *(_QWORD *)(result + 16) = v5;
  *(_QWORD *)(result + 24) = v6;
  *(_BYTE *)(result + 32) = 0;
  *(_BYTE *)(result + 10) = v7 & 0xF0 | 5;
  *(_QWORD *)result = off_2BE8160;
  return result;
}
