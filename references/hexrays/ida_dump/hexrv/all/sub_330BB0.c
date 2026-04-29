_QWORD *__fastcall sub_330BB0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  int v8; // r8d
  bool v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // r12
  __int64 v14; // r15
  __int64 tinfo_size; // rax
  int v16; // [rsp+4h] [rbp-5Ch]
  int v17; // [rsp+8h] [rbp-58h]
  _QWORD *v18; // [rsp+8h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-48h]
  _QWORD v20[8]; // [rsp+20h] [rbp-40h] BYREF

  v19 = a5;
  v8 = 0;
  v20[1] = __readfsqword(0x28u);
  if ( a5 )
  {
    v8 = *(_DWORD *)(a5 + 8);
    v19 = *(_QWORD *)a5;
  }
  v10 = a6 != 0;
  if ( a4 )
  {
    if ( a6 )
    {
      v14 = *(int *)(a6 + 4);
      v16 = v8;
      v18 = a4;
      tinfo_size = get_tinfo_size(0, *a4, 0);
      a4 = v18;
      v8 = v16;
      if ( v14 != tinfo_size )
        return nullptr;
    }
    v17 = v8;
    v20[0] = 0;
    copy_tinfo_t(v20, a4);
    v8 = v17;
  }
  else
  {
    v20[0] = 0;
  }
  v11 = sub_330570(a1, a2, a3, v20, v8, v19, v10);
  v12 = (_QWORD *)v11;
  if ( v11 && a6 )
    v12 = sub_120DA0(v11, (unsigned __int8 *)a6);
  clear_tinfo_t(v20);
  return v12;
}
