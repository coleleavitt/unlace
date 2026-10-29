__int64 __fastcall sub_41B190(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdi
  _WORD *v8; // r13
  unsigned __int64 v9; // r15
  _WORD *v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // rax
  unsigned int v15; // [rsp+0h] [rbp-58h]
  int v16; // [rsp+14h] [rbp-44h] BYREF
  int v17; // [rsp+18h] [rbp-40h] BYREF
  _DWORD v18[3]; // [rsp+1Ch] [rbp-3Ch] BYREF

  if ( (unsigned int)(a3 - 3) > 1 )
  {
    sub_458930(a2, 1, a4, "needleString haystackString ?startIndex?");
    return 1;
  }
  v7 = a4[1];
  v15 = -1;
  v16 = 0;
  v17 = -1;
  v8 = (_WORD *)sub_48F2D0(v7, v18);
  v9 = sub_48F2D0(a4[2], &v17);
  if ( a3 != 4 )
    goto LABEL_5;
  v13 = sub_49FAC0(a2, a4[3], (unsigned int)(v17 - 1), &v16);
  result = 1;
  if ( !v13 )
  {
    v8 = (_WORD *)sub_48F2D0(a4[1], v18);
    v14 = sub_48F2D0(a4[2], &v17);
    v9 = v14;
    if ( v16 >= v17 )
    {
LABEL_12:
      v12 = sub_47BD00(v15);
      sub_48AFD0(a2, v12);
      return 0;
    }
    if ( v16 <= 0 )
    {
      if ( v16 > -1 )
        v13 = v16;
      v16 = v13;
    }
    else
    {
      v9 = v14 + 2LL * v16;
      v17 -= v16;
    }
LABEL_5:
    if ( v18[0] > 0 && v18[0] <= v17 )
    {
      v10 = (_WORD *)v9;
      v11 = v9 + 2LL * v17 - 2LL * v18[0] + 2;
      if ( v9 < v11 )
      {
        while ( *v10 != *v8 || (unsigned int)Tcl_UniCharNcmp(v8, v10, v18[0]) )
        {
          if ( (unsigned __int64)++v10 >= v11 )
            goto LABEL_10;
        }
        v15 = ((unsigned __int64)v10 - v9) >> 1;
      }
    }
LABEL_10:
    if ( a3 == 4 && v15 != -1 )
      v15 += v16;
    goto LABEL_12;
  }
  return result;
}

