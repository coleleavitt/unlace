__int64 __fastcall sub_1C580(_QWORD *a1)
{
  __int64 v1; // rax
  _BYTE *v2; // rdx
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  char *v5; // rax
  __int64 result; // rax
  _BYTE *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rax
  char *v11; // rbx
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  v1 = a1[4];
  if ( !v1 )
    goto LABEL_11;
  v2 = (_BYTE *)a1[3];
  if ( *v2 == 115 )
  {
    v3 = (_QWORD *)a1[5];
    a1[3] = v2 + 1;
    a1[4] = v1 - 1;
    v4 = v3[1];
    if ( !v4 || (v5 = (char *)(v4 + 5), (unsigned __int64)(v4 + 5) > v3[2]) )
    {
      v8 = 2LL * v3[4];
      if ( v8 < 6 )
        v8 = 6;
      v3[4] = v8;
      v9 = v8 + 8;
      v10 = malloc(v8 + 8);
      v11 = (char *)v10 + v9;
      *v10 = v3[3];
      v4 = (__int64)(v10 + 1);
      v3[3] = v10;
      v5 = (char *)v10 + 13;
      v3[2] = v11;
    }
    v3[1] = v5;
    *(_DWORD *)v4 = 1718187859;
    *(_BYTE *)(v4 + 4) = 116;
    return sub_C510(v3, 143, v4, 5);
  }
  if ( *v2 == 83 )
  {
    a1[3] = v2 + 1;
    a1[4] = v1 - 1;
    result = sub_1BFA0(a1);
    if ( result && *(_WORD *)(result + 16) != 143 )
      return 0;
  }
  else
  {
LABEL_11:
    result = sub_1B300(a1, 143, 1);
    v12[0] = result;
    if ( result )
    {
      v7 = (_BYTE *)a1[1];
      if ( v7 == (_BYTE *)a1[2] )
      {
        sub_18710((__int64)a1, v7, v12);
        return v12[0];
      }
      else
      {
        *(_QWORD *)v7 = result;
        a1[1] += 8LL;
      }
    }
  }
  return result;
}

