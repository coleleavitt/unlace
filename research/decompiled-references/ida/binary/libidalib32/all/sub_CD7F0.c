__int64 __fastcall sub_CD7F0(int *a1)
{
  __int64 v1; // rax
  int v3; // edx
  unsigned int v4; // r12d
  unsigned int v6; // r13d
  int v7; // r12d
  int v8; // r15d
  __int64 bpt_kernel_interface; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rdi
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  _DWORD *v17; // rdi
  struct _Unwind_Exception *v18; // rbx
  __int64 *v19; // [rsp+0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 1);
  v21 = __readfsqword(0x28u);
  v3 = qword_251330 & 0xFFFFFFF;
  if ( !v1 )
  {
    if ( v3 != 6 )
    {
      v4 = 0;
      goto LABEL_3;
    }
    v6 = qword_251328;
    if ( !*((_BYTE *)a1 + 20) )
      goto LABEL_8;
LABEL_28:
    sub_9E220();
    *((_BYTE *)a1 + 20) = 0;
    v6 = qword_251328;
    goto LABEL_8;
  }
  v4 = 0;
  if ( v3 != 5 )
    goto LABEL_3;
  v6 = *(_DWORD *)(v1 + 76);
  if ( (_DWORD)qword_251328 != v6 )
    goto LABEL_3;
  if ( *((_BYTE *)a1 + 20) )
    goto LABEL_28;
LABEL_8:
  v19 = nullptr;
  v7 = *a1;
  v8 = HIDWORD(qword_251320);
  v20 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)bpt_kernel_interface + 56LL))(
    bpt_kernel_interface,
    &v19,
    v6);
  v10 = v20;
  LODWORD(v11) = v20 - 1;
  if ( (int)v20 - 1 >= 0 )
  {
    v11 = (unsigned int)v11;
    do
    {
      v12 = &v19[v11];
      if ( (*(_BYTE *)(*v12 + 68) & 2) == 0 || (v13 = *(_DWORD *)(*v12 + 56), v13 != 4) && (v13 & 8) == 0 )
      {
        memmove(v12, v12 + 1, 8 * (v10 - v11) - 8);
        *(_QWORD *)&v20 = v20 - 1;
        v10 = v20;
      }
      --v11;
    }
    while ( (_DWORD)v11 != -1 );
  }
  if ( !v10 )
  {
    if ( !v19 )
    {
LABEL_31:
      v4 = v7 & 1;
      goto LABEL_32;
    }
LABEL_30:
    qfree();
    goto LABEL_31;
  }
  v14 = get_bpt_kernel_interface();
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v14 + 216LL))(v14, &v19) )
  {
    v17 = qword_2515B0;
    *(_DWORD *)qword_2515B0 = v8;
    v17[1] = v6;
    if ( (unsigned int)sub_CC780((__int64)v17, 23) != 1 )
    {
      if ( !v19 )
        goto LABEL_31;
      *(_QWORD *)&v20 = 0;
      goto LABEL_30;
    }
  }
  v15 = *v19;
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  if ( !v15 )
    goto LABEL_31;
  set_debug_event_code();
  if ( (qword_251330 & 0xFFFFFFF) != 5 )
  {
    v18 = (struct _Unwind_Exception *)sub_B7DE0();
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    _Unwind_Resume(v18);
  }
  v16 = -1;
  if ( *(_DWORD *)(v15 + 56) != 4 )
    v16 = *(_DWORD *)(v15 + 52);
  HIDWORD(qword_251330) = v16;
  sub_C0300();
  if ( (*(_BYTE *)(v15 + 64) & 8) != 0 )
    sub_C74B0(v15, (unsigned __int64)&qword_251320, 0.0);
  v4 = 0;
LABEL_32:
  if ( (qword_251330 & 0xFFFFFFF) != 5 )
  {
    set_debug_event_code();
    if ( (*(_BYTE *)a1 & 2) == 0 )
      return v4;
    goto LABEL_5;
  }
LABEL_3:
  if ( (*(_BYTE *)a1 & 2) != 0 )
LABEL_5:
    byte_2515A0 = 0;
  return v4;
}

