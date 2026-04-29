__int64 __fastcall sub_A39A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebp
  __int64 v9; // r13
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  int v13; // r9d
  char v14; // r12
  int v15; // ecx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // [rsp+0h] [rbp-88h]
  __int64 v19; // [rsp+0h] [rbp-88h]
  __int64 v20; // [rsp+8h] [rbp-80h]
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+10h] [rbp-78h]
  _QWORD *v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v25[4]; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+34h] [rbp-54h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) + *(_DWORD *)(a3 + 68) > 16 )
    return 0;
  v9 = sub_1161E0(a3, &v24);
  if ( !v9 || *(_DWORD *)a3 == 13 && v9 != a3 + 48 )
    return 0;
  v18 = sub_323690(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), *(unsigned int *)(v9 + 4), 1);
  v10 = *(_DWORD *)(v24 + 4);
  if ( v10 <= 3 || v18 == -1 || v18 == 1 || *(_BYTE *)v24 == 4 )
    goto LABEL_13;
  v11 = 8 * v10 - 1;
  v12 = 0;
  if ( (unsigned __int64)v11 <= 0x1F )
    v12 = 1 << v11;
  if ( v18 == v12 )
  {
LABEL_13:
    sub_11D380(v25, a2 + 64);
    if ( !(unsigned __int8)sub_12C760(a1, *(_QWORD *)(a2 + 8), (unsigned int)v25, *(_QWORD *)(a3 + 8), (int)a3 + 64, 5)
      || a3 && (unsigned __int8)sub_11BB80(a2, *(_QWORD *)(a3 + 8), 0) && (unsigned __int8)sub_A3520(a1, a2, a3, a2)
      || ((v20 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), !a5) || (v14 = sub_A38D0(a1, a2, a3)) == 0)
      && (v14 = sub_119EE0(a2, v20, 0)) != 0
      || (v5 = sub_12CB60(a1, a3, v24, a2, a2, v13, v18, v20, (int)a3 + 64), !(_BYTE)v5) )
    {
      v5 = 0;
    }
    else
    {
      if ( *(_DWORD *)a3 == 13 )
      {
        v19 = -v19;
        *(_DWORD *)a3 = 12;
      }
      else if ( *(_DWORD *)a3 != 12 )
      {
        if ( !under_debugger )
          sub_37B760(51078);
        BUG();
      }
      if ( v26 > 15 )
      {
        v17 = (_QWORD *)j__qalloc_or_throw(32);
        v17[1] = 0;
        v17[3] = 0;
        *v17 = 0xFFFFFFFF00000000LL;
        v17[2] = 0xFFFFFFFF00000000LL;
        v23 = v17;
        sub_11A350(v17 + 2, v21, v19, *(unsigned int *)(v9 + 4), **(_QWORD **)(v9 + 8), 0);
        sub_11A350(v23, v21, 0, *(unsigned int *)(v9 + 4), **(_QWORD **)(v9 + 8), 0);
        sub_1166E0(v9);
        *(_BYTE *)v9 = 14;
        *(_QWORD *)(v9 + 8) = v23;
        *(_DWORD *)(v9 + 4) = v26;
      }
      else
      {
        v15 = 8 * *(_DWORD *)(v9 + 4);
        v16 = 0;
        if ( (unsigned __int64)v15 < 0x40 )
          v16 = v19 << v15;
        sub_11A350(v9, v21, v16, (unsigned int)v26, **(_QWORD **)(v9 + 8), 0);
      }
      sub_124490(v25, v21, (unsigned int)v26, 2);
      sub_116350(v22, v25);
      sub_9ABC0(v21, a3, *(_DWORD *)(a2 + 4));
      if ( v14 )
        sub_116EE0(a2);
    }
    sub_1166E0(v25);
  }
  else
  {
    return 0;
  }
  return v5;
}
