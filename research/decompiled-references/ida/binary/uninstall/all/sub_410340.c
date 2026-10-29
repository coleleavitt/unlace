__int64 __fastcall sub_410340(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // r14d
  _QWORD *v6; // r12
  int *v8; // r13
  __int64 v9; // rax
  int *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebp
  int v13; // eax
  bool v14; // zf
  int v15; // [rsp+10h] [rbp-98h] BYREF
  int v16; // [rsp+14h] [rbp-94h] BYREF
  __int64 v17; // [rsp+18h] [rbp-90h] BYREF
  _DWORD v18[11]; // [rsp+20h] [rbp-88h] BYREF
  int v19; // [rsp+4Ch] [rbp-5Ch] BYREF
  int v20; // [rsp+54h] [rbp-54h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h] BYREF

  v4 = 0;
  v6 = *(_QWORD **)(a1 + 8);
  v16 = 0;
  if ( a3 != 3 )
  {
    sub_458930(a2, 1, a4, "dict changeover");
    return 1;
  }
  v8 = *(int **)(a4 + 8);
  if ( (unsigned int)sub_4406D0(a2, v8, v6[9], &v17) )
    goto LABEL_6;
  if ( !v17 )
    goto LABEL_7;
  if ( (unsigned int)sub_4584C0(a2, v17, (unsigned int)&off_653E20, 8, (unsigned int)"era", 1, (__int64)&v16)
    || (unsigned int)sub_4406D0(a2, v8, v6[21], &v17) )
  {
    goto LABEL_6;
  }
  if ( !v17 )
    goto LABEL_7;
  if ( (unsigned int)sub_47C180(a2, v17, &v19) || (unsigned int)sub_4406D0(a2, v8, v6[17], &v17) )
    goto LABEL_6;
  if ( !v17 )
    goto LABEL_7;
  if ( (unsigned int)sub_47C180(a2, v17, &v20) || (unsigned int)sub_4406D0(a2, v8, v6[6], &v17) )
    goto LABEL_6;
  if ( !v17 )
    goto LABEL_7;
  if ( (unsigned int)sub_47C180(a2, v17, &v21) || (unsigned int)sub_47C180(a2, *(_QWORD *)(a4 + 16), &v15) )
  {
LABEL_6:
    if ( v17 )
      return 1;
LABEL_7:
    v9 = sub_48DF10("expected key(s) not found in dictionary", 0xFFFFFFFF);
    sub_48AFD0(a2, v9);
    return 1;
  }
  v18[9] = v16;
  sub_410150(v18, v15);
  if ( *v8 > 1 )
  {
    v4 = 1;
    v10 = (int *)sub_47B2A0(v8);
    ++*v10;
    v8 = v10;
  }
  v11 = sub_47BD00(v18[8]);
  v12 = sub_440560(a2, v8, v6[15], v11);
  if ( !v12 )
    sub_48AFD0(a2, v8);
  if ( v4 )
  {
    v13 = *v8 - 1;
    v14 = *v8 == 1;
    *v8 = v13;
    if ( v13 < 0 || v14 )
      sub_47B120(v8);
  }
  return v12;
}

