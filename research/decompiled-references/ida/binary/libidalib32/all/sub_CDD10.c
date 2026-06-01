__int64 __fastcall sub_CDD10(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  void *v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // [rsp+Ch] [rbp-1Ch]

  if ( qword_2515B0 )
  {
    if ( under_debugger )
      goto LABEL_23;
    interr();
    goto LABEL_15;
  }
  qword_2515B0 = a1;
  v7 = a2;
  if ( (*(_BYTE *)(dbg + 34LL) & 8) != 0 )
  {
    a2 = 0;
    v8 = qsem_create();
    a1[8] = v8;
    if ( !v8 )
    {
LABEL_17:
      if ( under_debugger )
        goto LABEL_23;
      interr();
      goto LABEL_19;
    }
    a2 = 0;
    v9 = qsem_create();
    a1[9] = v9;
    if ( v9 )
    {
      v10 = qmutex_create();
      a1[31] = v10;
      if ( !v10 )
        goto LABEL_21;
      a2 = (unsigned int)a1;
      v11 = qthread_create();
      if ( v11 )
      {
        a1[7] = v11;
        inform_idc_about_debthread();
        goto LABEL_8;
      }
LABEL_19:
      if ( under_debugger )
        goto LABEL_23;
      interr();
LABEL_21:
      if ( !under_debugger )
      {
        interr();
        return sub_CDE90(40196, a2, v14, v15, v16, v17, a7);
      }
LABEL_23:
      BUG();
    }
LABEL_15:
    if ( under_debugger )
      goto LABEL_23;
    interr();
    goto LABEL_17;
  }
LABEL_8:
  result = sub_CC780((__int64)a1, v7);
  if ( (int)result <= 0 )
  {
    v13 = qword_2515B0;
    if ( qword_2515B0 )
    {
      if ( !byte_2515AB )
      {
        v18 = result;
        byte_2515AB = 1;
        sub_C2F60((__int64)qword_2515B0);
        operator delete(v13, 0x108u);
        byte_2515AB = 0;
        qword_2515B0 = nullptr;
        return v18;
      }
    }
  }
  return result;
}

