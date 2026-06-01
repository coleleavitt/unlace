/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006420
// Address: 0x0000000100006420

//----- (0000000100006420) ----------------------------------------------------
void __fastcall sub_100006420(__int64 a1)
{
  mach_port_name_t v1; // esi
  mach_port_t v2; // r14d
  int v3; // r12d

  v1 = *(_DWORD *)(a1 + 1236);
  if ( v1 )
  {
    v2 = mach_task_self_;
    if ( !*(_DWORD *)(a1 + 1464) )
      goto LABEL_7;
    v3 = 0;
    while ( !task_set_exception_ports(
               v2,
               *(_DWORD *)(a1 + 4LL * v3 + 1240),
               *(_DWORD *)(a1 + 4LL * v3 + 1296),
               *(_DWORD *)(a1 + 4LL * v3 + 1352),
               *(_DWORD *)(a1 + 4LL * v3 + 1408)) )
    {
      if ( (unsigned int)++v3 >= *(_DWORD *)(a1 + 1464) )
      {
        v2 = mach_task_self_;
        v1 = *(_DWORD *)(a1 + 1236);
LABEL_7:
        if ( !mach_port_deallocate(v2, v1) )
        {
          *(_DWORD *)(a1 + 1236) = 0;
          return;
        }
LABEL_13:
        if ( under_debugger != 1 )
        {
          interr(0x7593u);
          sub_1000064E0((_QWORD *)0x7593);
          return;
        }
        goto LABEL_11;
      }
    }
    if ( under_debugger != 1 )
    {
      interr(0x7592u);
      goto LABEL_13;
    }
LABEL_11:
    BUG();
  }
}
// 1000AE23D: using guessed type char under_debugger;
