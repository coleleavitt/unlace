__int64 __fastcall sub_46C120(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int *v6; // r14
  unsigned int i; // ebx
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 (__fastcall *v10)(__int64, unsigned int); // rax
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // r15d
  __int64 (__fastcall *v16)(__int64, unsigned int); // rax
  unsigned int v17; // ecx
  __int64 *v19; // [rsp+0h] [rbp-78h]
  __int64 *v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v22[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(int *)(a1 + 8);
  v22[1] = __readfsqword(0x28u);
  v19 = *(__int64 **)(switch_dbctx(v4) + 1480);
  v20 = *(__int64 **)(switch_dbctx(a2[2]) + 1480);
  v6 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a3);
  for ( i = *v6; ; i = v9 )
  {
    v21 = 0;
    v14 = sub_3B8D10(v19, (unsigned int *)&v21, i);
    v22[0] = 0;
    v15 = v14;
    if ( v14 != (unsigned int)sub_3B8D10(v20, (unsigned int *)v22, i) || v15 == -1 || v21 != v22[0] )
      break;
    v16 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 176LL);
    if ( v16 == sub_46B000 )
    {
      v8 = switch_dbctx(*(int *)(a1 + 8));
      v9 = sub_3B8950(*(_QWORD *)(v8 + 1480), i);
      v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a2 + 176LL);
      if ( v10 != sub_46B000 )
        goto LABEL_13;
    }
    else
    {
      v9 = v16(a1, i);
      v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a2 + 176LL);
      if ( v10 != sub_46B000 )
      {
LABEL_13:
        v12 = v10((__int64)a2, i);
        v17 = v12;
        if ( v9 <= v12 )
          v17 = v9;
        if ( v17 >= v6[1] )
          return 0;
        goto LABEL_6;
      }
    }
    v11 = switch_dbctx(a2[2]);
    v12 = sub_3B8950(*(_QWORD *)(v11 + 1480), i);
    v13 = v12;
    if ( v9 <= v12 )
      v13 = v9;
    if ( v13 >= v6[1] )
      return 0;
LABEL_6:
    if ( v9 != v12 )
      return 1;
  }
  return 1;
}

