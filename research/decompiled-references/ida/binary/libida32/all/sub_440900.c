__int64 __fastcall sub_440900(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r14d
  int v5; // r13d
  unsigned int v6; // ebx
  _QWORD *v8; // rax
  unsigned int v9; // edx
  unsigned int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // ebp
  int v19; // [rsp+0h] [rbp-58h]
  unsigned int v20; // [rsp+4h] [rbp-54h] BYREF
  void *v21; // [rsp+8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  int v23[2]; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+30h] [rbp-28h]

  v4 = a4 + a3;
  v5 = a2;
  v6 = a3;
  *(_QWORD *)v23 = __readfsqword(0x28u);
  LODWORD(v22) = a3;
  HIDWORD(v22) = a4 + a3;
  if ( (unsigned __int8)rangeset_t_has_common(a2, &v22, 0) || __CFADD__(v6, a4) )
    return 0;
  v8 = *(_QWORD **)(a1 + 1480);
  v21 = nullptr;
  sub_6141A0(*v8, 26, &v21, 8);
  v9 = v4 - 1;
  if ( v6 < (unsigned int)v21 )
  {
    if ( v9 >= (unsigned int)v21 && v9 < HIDWORD(v21) )
    {
      v4 = (unsigned int)v21;
      goto LABEL_19;
    }
  }
  else
  {
    if ( v6 < HIDWORD(v21) )
      v6 = HIDWORD(v21);
    if ( v9 >= (unsigned int)v21 && v9 < HIDWORD(v21) )
      v4 = (unsigned int)v21;
  }
  if ( v6 >= v4 )
    return 1;
LABEL_19:
  v16 = sub_3B90A0(*(_QWORD **)(a1 + 1480), v6);
  v17 = sub_3B90A0(*(_QWORD **)(a1 + 1480), v4);
  v20 = -1;
  v18 = v17;
  if ( (unsigned int)sub_78FE10(a1, v16, sub_440510, &v20) )
  {
    v11 = v20;
    if ( v20 != -1 && v20 >= v16 )
      goto LABEL_13;
    goto LABEL_24;
  }
  if ( v16 < v18 )
    return 1;
  if ( !(unsigned int)sub_78FE10(a1, 0, sub_440510, &v20) )
  {
    if ( !under_debugger )
      interr(2145);
LABEL_28:
    BUG();
  }
  v11 = v20;
  if ( v20 == -1 )
  {
LABEL_24:
    if ( !under_debugger )
      interr(2146);
    goto LABEL_28;
  }
  v18 = v16;
LABEL_13:
  if ( v11 >= v18 )
    return 1;
  LODWORD(v22) = sub_3B9110(*(_QWORD **)(a1 + 1480), v11);
  HIDWORD(v22) = v22 + 1;
  rangeset_t_add(v5, (int)&v22, v12, v13, v14, v15, v19, v21, v22, v23[0], v24, v25, v26);
  return 0;
}

