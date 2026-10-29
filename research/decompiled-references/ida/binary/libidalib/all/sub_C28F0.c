__int64 __fastcall sub_C28F0(_QWORD *a1)
{
  __int64 v2; // rax

  if ( !dword_254298 || !get_module_data() )
    return sub_BDF70(&qword_252790, a1);
  v2 = sub_B8210();
  return sub_BDF70((__int64 *)(v2 + 8), a1);
}

