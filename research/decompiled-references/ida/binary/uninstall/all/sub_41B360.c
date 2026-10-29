__int64 __fastcall sub_41B360(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v7; // edx
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  _WORD *v11; // r13
  unsigned __int64 v12; // r10
  int v13; // esi
  int v14; // ecx
  _WORD *v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  int v19; // [rsp+4h] [rbp-34h] BYREF
  int v20; // [rsp+8h] [rbp-30h] BYREF
  int v21; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( (unsigned int)(a3 - 3) <= 1 )
  {
    v9 = a4[1];
    LODWORD(v10) = -1;
    v19 = 0;
    v20 = -1;
    v11 = (_WORD *)sub_48F2D0(v9, &v21);
    v12 = sub_48F2D0(a4[2], &v20);
    if ( a3 == 4 )
    {
      v18 = sub_49FAC0(a2, a4[3], (unsigned int)(v20 - 1), &v19);
      v7 = 1;
      if ( v18 )
        return v7;
      v11 = (_WORD *)sub_48F2D0(a4[1], &v21);
      v12 = sub_48F2D0(a4[2], &v20);
      if ( v19 < 0 )
        goto LABEL_15;
      v13 = v20;
      if ( v19 < v20 )
      {
        v14 = v21;
        v15 = (_WORD *)(v12 + 2LL * v19 - 2LL * v21 + 2);
        goto LABEL_7;
      }
    }
    else
    {
      v13 = v20;
    }
    v14 = v21;
    v15 = (_WORD *)(v12 + 2LL * v13 - 2LL * v21);
LABEL_7:
    if ( v14 > 0 && v14 <= v13 && (unsigned __int64)v15 >= v12 )
    {
      v16 = 2LL * v14;
      while ( *v15 != *v11 || memcmp(v11, v15, v16) )
      {
        if ( (unsigned __int64)--v15 < v12 )
          goto LABEL_15;
      }
      v10 = ((unsigned __int64)v15 - v12) >> 1;
    }
LABEL_15:
    v17 = sub_47BD00((unsigned int)v10);
    sub_48AFD0(a2, v17);
    return 0;
  }
  sub_458930(a2, 1, a4, "needleString haystackString ?startIndex?");
  return 1;
}

