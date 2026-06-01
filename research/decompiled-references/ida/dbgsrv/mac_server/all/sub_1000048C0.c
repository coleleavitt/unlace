/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000048C0
// Address: 0x00000001000048C0

//----- (00000001000048C0) ----------------------------------------------------
__int64 __fastcall sub_1000048C0(__int64 a1, int a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // r13
  unsigned int v4; // r14d
  thread_read_t v6; // edi
  kern_return_t v7; // eax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  bool v10; // zf
  char *v11; // rsi

  *(_BYTE *)(a1 + 1234) = 0;
  v2 = *(_QWORD **)(a1 + 1208);
  v3 = (_QWORD *)(a1 + 1216);
  v4 = 1;
  if ( v2 != (_QWORD *)(a1 + 1216) )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v2 + 8);
      if ( v6 != a2 )
      {
        v7 = thread_resume(v6);
        if ( v7 )
          break;
      }
      v8 = (_QWORD *)v2[1];
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        do
        {
          v9 = (_QWORD *)v2[2];
          v10 = *v9 == (_QWORD)v2;
          v2 = v9;
        }
        while ( !v10 );
      }
      v2 = v9;
      if ( v9 == v3 )
        return v4;
    }
    if ( v7 == 4 )
    {
      v11 = "Invalid thread id %d passed\n";
      goto LABEL_15;
    }
    v4 = 0;
    if ( v7 == 5 )
    {
      v11 = "Thread %d has suspend count of 0!\n";
LABEL_15:
      v4 = 0;
      sub_100060FA0(a1, v11, *((unsigned int *)v2 + 8));
    }
  }
  return v4;
}
