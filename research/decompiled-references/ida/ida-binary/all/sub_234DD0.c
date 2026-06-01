unsigned __int64 __fastcall setup_process_dialog_t__::vfunc_3(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  int v3; // r9d
  int *v4; // rbx
  int *i; // r12
  int v6; // ecx
  int v7; // r8d

  if ( a2 == 2 )
  {
    result = sub_2349C0(a1);
    v4 = *(int **)(a1 + 480);
    for ( i = &v4[8 * *(_QWORD *)(a1 + 488)]; i != v4; result = callui(203, 18, a1, v6, v7, v3) )
    {
      v6 = *v4;
      v7 = (_DWORD)v4 + 8;
      v4 += 8;
    }
  }
  return result;
}
