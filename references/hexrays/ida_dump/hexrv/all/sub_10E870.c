__int64 __fastcall sub_10E870(_QWORD *a1, unsigned int *a2, char a3, int *a4, __int64 a5)
{
  int v5; // r14d
  unsigned int v6; // r12d
  _QWORD *v9; // r13
  char v10; // r11
  bool v11; // zf
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  int v15; // ebx
  __int64 v16; // rdi
  int v17; // r14d
  char v18; // al
  __int64 v19; // rax
  char v20; // [rsp+Fh] [rbp-69h]
  __int64 v21; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v22[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *a4;
  v6 = *a2;
  v22[3] = __readfsqword(0x28u);
  if ( v5 == 4 )
  {
    v15 = (a5 == 0) + 34;
    if ( v15 == v6 )
    {
      if ( !a3 )
      {
LABEL_18:
        v16 = a1[1] + 48LL;
        return (unsigned __int8)sub_11B8C0(v16, v22, 0) && !v22[0];
      }
    }
    else
    {
      if ( v15 != (unsigned int)sub_329740(v6) )
        return 0;
      if ( a3 )
        goto LABEL_18;
    }
    v16 = a1[1] + 32LL;
    return (unsigned __int8)sub_11B8C0(v16, v22, 0) && !v22[0];
  }
  if ( v6 != v5 )
  {
    if ( v5 == (unsigned int)sub_329740(v6) )
    {
      v9 = a4 + 12;
    }
    else
    {
      if ( (unsigned int)(v5 - 32) > 1 )
        return 0;
      v9 = a4 + 12;
      if ( !(unsigned __int8)sub_11B8C0(a4 + 12, v22, 0) || v22[0] )
        return 0;
      v17 = (v5 == 33) + 36;
      if ( v17 == v6 )
        goto LABEL_4;
      if ( v17 != (unsigned int)sub_329740(v6) )
        return 0;
    }
    v10 = 1;
    goto LABEL_5;
  }
  v9 = a4 + 12;
LABEL_4:
  v10 = 0;
LABEL_5:
  v11 = *((_BYTE *)a4 + 32) == 4;
  v12 = a4 + 8;
  v22[1] = 0;
  v22[0] = 0xFFFFFFFF00000000LL;
  if ( v11 && **((_DWORD **)a4 + 5) == 9 )
  {
    v20 = v10;
    v18 = sub_11B8C0(v9, &v21, 0);
    v10 = v20;
    if ( v18 )
    {
      if ( !v21 )
      {
        v19 = *((_QWORD *)a4 + 5);
        v9 = v22;
        v12 = (_QWORD *)(v19 + 32);
        sub_11C550(v22, *a1, 0, *(unsigned int *)(v19 + 36), **((_QWORD **)a4 + 7), 0);
        v10 = v20;
      }
    }
  }
  if ( a3 == v10 )
  {
    v13 = v9;
    v9 = v12;
    v12 = v13;
  }
  if ( (!(unsigned __int8)sub_1216A0(v9, a1[1] + 32LL, 0) || !(unsigned __int8)sub_1216A0(v12, a1[1] + 48LL, 0))
    && (v6 - 32 > 1
     || !(unsigned __int8)sub_1216A0(v12, a1[1] + 32LL, 0)
     || !(unsigned __int8)sub_1216A0(v9, a1[1] + 48LL, 0)) )
  {
    sub_1188E0(v22);
    return 0;
  }
  sub_1188E0(v22);
  return 1;
}
