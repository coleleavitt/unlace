__int64 __fastcall sub_B1A00(signed int *a1, unsigned __int64 a2)
{
  _BYTE *v3; // [rsp+90h] [rbp-208h]

  if ( (dword_251B1C & 1) != 0 )
  {
    if ( !get_func() )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    get_item_end();
    v3 = (_BYTE *)qvector_reserve();
    *v3 = 0;
    create_qflow_chart();
    if ( v3 )
      qfree();
  }
  return sub_B11C0(xmmword_251F20, a1, a2, 0);
}

