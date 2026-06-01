__int64 __fastcall sub_A7E890(__int64 *a1, unsigned int a2, _QWORD *a3, __int64 a4, char a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // ebp
  void *v11; // rbx
  unsigned int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // rax
  unsigned int v19; // eax
  unsigned __int8 v21; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]

  v8 = sub_FF9F70(a1[63], a2);
  v9 = a1[63];
  if ( (_BYTE)v8 )
  {
    v13 = sub_FF9E10(v9, a2);
    v22 = 0;
    v23 = 0;
    v24 = 1;
    v25 = 0;
    if ( v13 != -1
      && (unsigned __int8)sub_1666AE0(a1 + 2, **(_QWORD **)(*(_QWORD *)(*a1 + 32) + 8LL * v13), &v22, &v21)
      && sub_3ED680((__int64)qword_1C7F2C0, a4, (__int64)&v22) )
    {
      *a3 = 0;
      LOBYTE(v19) = sub_3ED680((__int64)qword_1C7F2C0, a4, (__int64)&v22);
    }
    else
    {
      v14 = a1 + 100;
      if ( a5 )
        v14 = a1 + 99;
      v15 = *v14;
      if ( !v15 || a2 >= *(_DWORD *)(v15 - 4) || (v16 = (_DWORD *)(v15 + 40LL * a2), *v16 == -1) )
      {
        v10 = 0;
        goto LABEL_4;
      }
      v17 = sub_FF9FF0(a1[63]);
      v18 = (_DWORD *)sub_180C100(*(_QWORD *)(v17 + 56), 8);
      *v18 = 0x80000000;
      v18[1] = *v16;
      *a3 = v18;
      LOBYTE(v19) = sub_3ED680((__int64)qword_1C7F2C0, a4, (__int64)(v16 + 2));
    }
    v10 = v19;
  }
  else
  {
    v21 = 0;
    v10 = v8;
    v22 = 0;
    v23 = 0;
    v24 = 1;
    v25 = 0;
    if ( a5 )
    {
      if ( !(unsigned __int8)sub_FFB810(v9, a2, a3, &v22, &v21) )
        goto LABEL_4;
    }
    else if ( !(unsigned __int8)sub_FFB790(v9, a2, a3, &v22, &v21) )
    {
      goto LABEL_4;
    }
    if ( sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v22, a4) )
      v10 = v21 ^ 1;
  }
LABEL_4:
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v11, &v24);
  return v10;
}

