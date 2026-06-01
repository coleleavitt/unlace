__int64 __fastcall sub_BEA730(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 *v5; // r14
  __int64 *v6; // r13
  __int64 v7; // r15
  __int64 *v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  _QWORD v16[2]; // [rsp+20h] [rbp-58h] BYREF
  int v17[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v18; // [rsp+38h] [rbp-40h]

  v2 = a1 + 72;
  v3 = (unsigned int)sub_BE93F0(a1, a2);
  if ( (unsigned __int8)sub_186D060(a1 + 72, v3) || (unsigned int)sub_186CF40(v2) >= *(_DWORD *)(a1 + 224) )
    return 0;
  sub_186FEB0(v2, (unsigned int)v3);
  sub_155D090(v16, *(_QWORD *)a1 + 1224LL);
  sub_14B9B80(*(_QWORD *)a1 + 1192LL, v16);
  if ( v16[0] == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 856LL) )
  {
    sub_186EBA0(v2, (unsigned int)v3);
  }
  else
  {
    *(_QWORD *)v17 = *(_QWORD *)(a1 + 16);
    v18 = nullptr;
    sub_BE9C80((_QWORD *)a1, a2, (__int64)v17);
    v5 = v18;
    if ( v18 )
    {
      v6 = v18;
      v15 = *(_QWORD *)v17;
      v14 = &v18[*((unsigned int *)v18 - 1)];
      if ( v18 != v14 )
      {
        do
        {
          v7 = (unsigned int)sub_BE93F0(a1, *v6);
          sub_186FEB0(v2, v7);
          sub_18706F0(v2, (unsigned int)v3, (unsigned int)v7, 1);
          ++v6;
        }
        while ( v14 != v6 );
      }
      sub_1872B40(v2, (unsigned int)v3);
      v8 = v5;
      v9 = (unsigned __int64)&v5[*((unsigned int *)v5 - 1)];
      if ( (unsigned __int64)v5 < v9 )
      {
        do
        {
          while ( 1 )
          {
            v10 = *v8;
            if ( *v8 )
            {
              v11 = (*(_DWORD *)(v10 + 8))-- == 1;
              if ( v11 )
                break;
            }
            if ( (unsigned __int64)++v8 >= v9 )
              goto LABEL_14;
          }
          ++v8;
          sub_15D7BC0(v15, v10);
        }
        while ( (unsigned __int64)v8 < v9 );
      }
LABEL_14:
      sub_186B220(v5 - 1);
    }
    else
    {
      sub_1872B40(v2, (unsigned int)v3);
    }
  }
  v12 = v16[0];
  if ( v16[0] )
  {
    v13 = v16[1];
    v11 = (*(_DWORD *)(v16[0] + 8LL))-- == 1;
    if ( v11 )
      sub_15D7BC0(v13, v12);
  }
  return 1;
}

