bool __fastcall sub_4478C0(__int64 a1, int a2, signed int a3, char a4)
{
  __int64 v6; // rax
  __int64 *v7; // r13
  int v8; // r12d
  bool result; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // r9d
  void *v16; // [rsp+0h] [rbp-58h]
  void *v17; // [rsp+0h] [rbp-58h]
  void *v18; // [rsp+0h] [rbp-58h]
  void *v19; // [rsp+0h] [rbp-58h]
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+8h] [rbp-50h]
  int v24[2]; // [rsp+10h] [rbp-48h] BYREF
  int v25[2]; // [rsp+18h] [rbp-40h]
  __int64 v26; // [rsp+20h] [rbp-38h]

  *(_QWORD *)v25 = __readfsqword(0x28u);
  v6 = switch_dbctx(*(int *)(a1 + 4LL * a2 + 360));
  *(_QWORD *)v24 = 0;
  v7 = *(__int64 **)(v6 + 1480);
  sub_6141A0(*v7, 26, v24, 8);
  if ( a4 )
  {
    HIDWORD(v20) = -a3;
    v8 = sub_440640((__int64)v7, -a3);
  }
  else
  {
    if ( a3 + v24[0] >= (unsigned int)(a3 + v24[1]) )
      return 0;
    v8 = sub_440640((__int64)v7, -a3);
    if ( v8 != -a3 )
    {
      v14 = sub_440640((__int64)v7, a3);
      v11 = (unsigned int)-v14;
      if ( v14 > 0 )
        v11 = (unsigned int)v14;
      v10 = (unsigned int)-v8;
      if ( v8 > 0 )
        v10 = (unsigned int)v8;
      v12 = (unsigned int)-a3;
      if ( a3 > 0 )
        v12 = (unsigned int)a3;
      if ( (int)v11 + (int)v10 < (int)v12 )
        sub_365330();
    }
    HIDWORD(v20) = -a3;
    if ( (unsigned int)sub_440DF0(v7, v8, v10, v11, v12, v13, v16, v20, v24[0], v25[0], v26) )
      return 0;
  }
  if ( (unsigned int)sub_6558F0((int)v7, v16, v20, v24[0], v25[0], v26) )
    return 0;
  if ( !(unsigned __int8)sub_651F30(v7, HIDWORD(v21)) )
  {
    v15 = -11;
LABEL_23:
    if ( a2 != 2 )
    {
      move_segm_strerror(v15);
      sub_365330();
    }
    return 0;
  }
  v15 = sub_6558F0((int)v7, v17, v21, v24[0], v25[0], v26);
  if ( v15 )
    goto LABEL_23;
  v15 = sub_6558F0((int)v7, v18, v22, v24[0], v25[0], v26);
  result = v15 == 0;
  if ( a3 + v8 && !v15 )
  {
    v15 = sub_6558F0((int)v7, v19, v23, v24[0], v25[0], v26);
    result = v15 == 0;
  }
  if ( v15 )
    goto LABEL_23;
  return result;
}

