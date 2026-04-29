__int64 __fastcall sub_A92E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r15
  __int64 v7; // r12
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // r9d
  int v12; // ecx
  __int64 v13; // r12
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-88h]
  __int64 v17; // [rsp+0h] [rbp-88h]
  __int64 v18; // [rsp+8h] [rbp-80h]
  char v19; // [rsp+17h] [rbp-71h]
  _QWORD *v20; // [rsp+18h] [rbp-70h]
  __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v22[4]; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+34h] [rbp-54h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) + *(_DWORD *)(a3 + 68) > 16 )
    return 0;
  v6 = sub_11A460(a3, &v21);
  if ( !v6 || *(_DWORD *)a3 == 13 && v6 != a3 + 48 )
    return 0;
  v7 = sub_327770(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), *(unsigned int *)(v6 + 4), 1);
  v8 = *(_DWORD *)(v21 + 4);
  if ( v8 <= 3 || v7 == -1 || v7 == 1 || *(_BYTE *)v21 == 4 )
    goto LABEL_13;
  v9 = 8 * v8 - 1;
  v10 = 0;
  if ( (unsigned __int64)v9 <= 0x1F )
    v10 = 1 << v9;
  if ( v7 == v10 )
  {
LABEL_13:
    sub_121540(v22, a2 + 64);
    if ( !(unsigned __int8)sub_130900(a1, *(_QWORD *)(a2 + 8), (unsigned int)v22, *(_QWORD *)(a3 + 8), (int)a3 + 64, 5)
      || a3 && (unsigned __int8)sub_11FD40(a2, *(_QWORD *)(a3 + 8), 0) && (unsigned __int8)sub_A8E60(a1, a2, a3, a2)
      || (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), (v19 = sub_A9210(a1, a2, a3)) == 0)
      && (unsigned __int8)sub_11E160(a2, v16, 0)
      || (v3 = sub_130D00(a1, a3, v21, a2, a2, v11, v16, (int)a3 + 64), !(_BYTE)v3) )
    {
      v3 = 0;
    }
    else
    {
      if ( *(_DWORD *)a3 == 13 )
      {
        *(_DWORD *)a3 = 12;
        v7 = -v7;
      }
      else if ( *(_DWORD *)a3 != 12 )
      {
        if ( !under_debugger )
          sub_37EA20(51078);
        BUG();
      }
      if ( v23 > 15 )
      {
        v15 = (_QWORD *)j__qalloc_or_throw();
        v15[1] = 0;
        *v15 = 0xFFFFFFFF00000000LL;
        v15[2] = 0xFFFFFFFF00000000LL;
        v15[3] = 0;
        v20 = v15;
        sub_11E5D0(v15 + 2, v17, v7, *(unsigned int *)(v6 + 4), **(_QWORD **)(v6 + 8), 0);
        sub_11E5D0(v20, v17, 0, *(unsigned int *)(v6 + 4), **(_QWORD **)(v6 + 8), 0);
        sub_11A960(v6);
        *(_BYTE *)v6 = 14;
        *(_QWORD *)(v6 + 8) = v20;
        *(_DWORD *)(v6 + 4) = v23;
      }
      else
      {
        v12 = 8 * *(_DWORD *)(v6 + 4);
        v13 = v7 << v12;
        v14 = 0;
        if ( (unsigned __int64)v12 < 0x40 )
          v14 = v13;
        sub_11E5D0(v6, v17, v14, (unsigned int)v23, **(_QWORD **)(v6 + 8), 0);
      }
      sub_128630(v22, v17, (unsigned int)v23, 2);
      sub_11A5D0(v18, v22);
      if ( *(char *)(a2 + 4) >= 0 )
        *(_DWORD *)(a3 + 4) &= ~0x80u;
      sub_11B190(a3, v17);
      if ( v19 )
        sub_11B160(a2);
    }
    sub_11A960(v22);
  }
  else
  {
    return 0;
  }
  return v3;
}
