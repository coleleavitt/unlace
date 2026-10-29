__int64 __fastcall sub_AA060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebp
  __int64 v9; // r13
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  int v13; // r9d
  char v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-88h]
  __int64 v21; // [rsp+0h] [rbp-88h]
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+8h] [rbp-80h]
  __int64 v24; // [rsp+10h] [rbp-78h]
  _QWORD *v25; // [rsp+18h] [rbp-70h]
  __int64 v26; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v27[4]; // [rsp+30h] [rbp-58h] BYREF
  int v28; // [rsp+34h] [rbp-54h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) + *(_DWORD *)(a3 + 68) > 16 )
    return 0;
  v9 = sub_11C8A0(a3, &v26);
  if ( !v9 || *(_DWORD *)a3 == 13 && v9 != a3 + 48 )
    return 0;
  v20 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), *(unsigned int *)(v9 + 4), 1);
  v10 = *(_DWORD *)(v26 + 4);
  if ( v10 <= 3 || v20 == -1 || v20 == 1 || *(_BYTE *)v26 == 4 )
    goto LABEL_13;
  v11 = 8 * v10 - 1;
  v12 = 0;
  if ( (unsigned __int64)v11 <= 0x1F )
    v12 = 1 << v11;
  if ( v20 == v12 )
  {
LABEL_13:
    sub_123A40(v27);
    if ( !(unsigned __int8)sub_132E20(a1, *(_QWORD *)(a2 + 8), (unsigned int)v27, *(_QWORD *)(a3 + 8), (int)a3 + 64, 5)
      || a3 && (unsigned __int8)sub_122240(a2, *(_QWORD *)(a3 + 8), 0) && (unsigned __int8)sub_A9BE0(a1, a2, a3, a2)
      || ((v22 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), !a5) || (v14 = sub_A9F90(a1, a2, a3)) == 0)
      && (v14 = sub_1205A0(a2, v22, 0)) != 0
      || (v5 = sub_133220(a1, a3, v26, a2, a2, v13, v20, v22, (int)a3 + 64), !(_BYTE)v5) )
    {
      v5 = 0;
    }
    else
    {
      if ( *(_DWORD *)a3 == 13 )
      {
        v21 = -v21;
        *(_DWORD *)a3 = 12;
      }
      else if ( *(_DWORD *)a3 != 12 )
      {
        if ( !under_debugger )
          sub_383060(51078);
        BUG();
      }
      if ( v28 > 15 )
      {
        v19 = (_QWORD *)j__qalloc_or_throw(32, a3, v15, v16);
        v19[1] = 0;
        v19[3] = 0;
        *v19 = 0xFFFFFFFF00000000LL;
        v19[2] = 0xFFFFFFFF00000000LL;
        v25 = v19;
        sub_120A10(v19 + 2, v23, v21, *(unsigned int *)(v9 + 4), **(_QWORD **)(v9 + 8), 0);
        sub_120A10(v25, v23, 0, *(unsigned int *)(v9 + 4), **(_QWORD **)(v9 + 8), 0);
        sub_11CDA0(v9);
        *(_BYTE *)v9 = 14;
        *(_QWORD *)(v9 + 8) = v25;
        *(_DWORD *)(v9 + 4) = v28;
      }
      else
      {
        v17 = 8 * *(_DWORD *)(v9 + 4);
        v18 = 0;
        if ( (unsigned __int64)v17 < 0x40 )
          v18 = v21 << v17;
        sub_120A10(v9, v23, v18, (unsigned int)v28, **(_QWORD **)(v9 + 8), 0);
      }
      sub_12AB50(v27, v23, (unsigned int)v28, 2);
      sub_11CA10(v24, v27);
      sub_A1280(v23, a3, *(_DWORD *)(a2 + 4));
      if ( v14 )
        sub_11D5A0(a2);
    }
    sub_11CDA0(v27);
  }
  else
  {
    return 0;
  }
  return v5;
}
