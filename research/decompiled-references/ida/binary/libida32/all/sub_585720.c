__int64 __fastcall sub_585720(__int64 a1, int *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax
  unsigned int v7; // r13d
  __int64 (__fastcall *v8)(__int64, unsigned int, int); // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // r12
  unsigned int v15; // eax
  __int64 v16; // [rsp+0h] [rbp-50h] BYREF
  void *ptr; // [rsp+8h] [rbp-48h] BYREF
  __int128 v18; // [rsp+10h] [rbp-40h]
  unsigned __int64 v19; // [rsp+20h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v4 == sub_3D58E0 )
    v5 = (unsigned __int64 *)(a2 + 4);
  else
    v5 = (unsigned __int64 *)v4((__int64)a2);
  if ( a3 < *v5 || a3 >= v5[1] )
    return a1;
  v7 = a3;
  v8 = *(__int64 (__fastcall **)(__int64, unsigned int, int))(*(_QWORD *)a2 + 40LL);
  if ( v8 != sub_57F310 )
  {
    v10 = v8((__int64)a2, a3, 0);
    goto LABEL_11;
  }
  v9 = switch_dbctx(a2[2]);
  if ( (unsigned __int8)sub_79B3A0(*(_QWORD *)(v9 + 1480) + 2312LL, v9, (unsigned int)a3, 4176) )
    LODWORD(v10) = a3;
  else
    LODWORD(v10) = sub_79B840(*(_QWORD *)(v9 + 1480) + 2312LL, v9, (unsigned int)a3, 80);
  if ( (_DWORD)v10 != -1 )
  {
    v10 = (unsigned int)v10;
LABEL_11:
    if ( a3 == v10 )
    {
      v11 = switch_dbctx(a2[2]);
      v12 = sub_3B9110(*(_QWORD **)(v11 + 1480), a3);
      ptr = nullptr;
      v18 = 0;
      get_ea_diffpos_name(&ptr, v12);
      v13 = switch_dbctx(a2[2]);
      v14 = *(_QWORD **)(v13 + 1480);
      sub_79B3A0(v14 + 289, v13, v7, 65);
      v15 = sub_3B9110(v14, v7);
      sub_3BA160(v14, &v16, v15);
      sub_3573A0((char **)a1);
      if ( ptr )
      {
        *(_QWORD *)&v18 = 0;
        qfree(ptr);
      }
    }
  }
  return a1;
}

