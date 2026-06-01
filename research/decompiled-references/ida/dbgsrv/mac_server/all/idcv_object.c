/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_object
// Address: 0x0000000100039810

//----- (0000000100039810) ----------------------------------------------------
__int64 __fastcall idcv_object(unsigned __int8 *a1, __int64 a2)
{
  int v3; // eax
  void *v4; // rdi
  void *v6; // rax
  void *v7; // r15
  int v8; // esi

  if ( !a1 )
    return set_qerrno();
  v3 = *a1;
  if ( v3 == 5 )
  {
    sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
  }
  else if ( v3 == 7 )
  {
    v4 = *((void **)a1 + 1);
    if ( v4 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree(v4);
      *((_QWORD *)a1 + 3) = 0;
    }
  }
  *((_QWORD *)a1 + 1) = 0;
  *a1 = 5;
  v6 = operator new(0x20u);
  v7 = v6;
  if ( a2 )
    v8 = *(_DWORD *)(a2 + 28);
  else
    v8 = 0;
  sub_100032160((__int64)v6, v8);
  *((_QWORD *)a1 + 1) = v7;
  return 0;
}
