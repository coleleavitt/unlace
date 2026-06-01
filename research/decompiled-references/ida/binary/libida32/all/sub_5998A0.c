unsigned __int64 __fastcall sub_5998A0(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned int v6; // eax
  _QWORD *v7; // r13
  unsigned int v8; // r15d
  int v9; // eax
  int v10; // eax
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  int v13; // r13d
  __int64 v14; // r10
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v2 = switch_dbctx(*(int *)(a1 + 8));
  v3 = sub_79B3A0(*(_QWORD *)(v2 + 1480) + 2352LL, **(_QWORD **)(v2 + 1480), 0xFFFFFFFFLL, 65);
  v17 = v3;
  if ( v3 )
  {
    v4 = 1;
    v5 = a1 + 48;
    while ( 1 )
    {
      v6 = sub_79B3A0(*(_QWORD *)(v2 + 1480) + 2352LL, **(_QWORD **)(v2 + 1480), (unsigned int)v4, 73);
      v7 = *(_QWORD **)(v2 + 1480);
      v8 = v6;
      v9 = sub_79B3A0(v7 + 294, *v7, v6, 65);
      v10 = sub_3B9110(v7, v9 - 1);
      v11 = *(_QWORD **)(a1 + 56);
      v12 = a1 + 48;
      v18 = v8;
      v13 = v10;
      if ( !v11 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v14 = v11[2];
          v15 = v11[3];
          if ( v11[4] < (unsigned __int64)v8 )
            break;
          v12 = (__int64)v11;
          v11 = (_QWORD *)v11[2];
          if ( !v14 )
            goto LABEL_8;
        }
        v11 = (_QWORD *)v11[3];
      }
      while ( v15 );
LABEL_8:
      if ( v5 == v12 || (unsigned __int64)v8 < *(_QWORD *)(v12 + 32) )
      {
LABEL_10:
        v19 = (unsigned __int64 *)&v18;
        v12 = sub_599650((_QWORD *)(a1 + 40), (_QWORD *)v12, &v19);
      }
      *(_DWORD *)(v12 + 40) = v13;
      if ( v17 == v4 )
        break;
      ++v4;
    }
  }
  return v20 - __readfsqword(0x28u);
}

