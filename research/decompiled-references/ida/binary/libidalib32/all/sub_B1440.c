__int64 __fastcall sub_B1440(signed int *a1, unsigned int a2)
{
  _BYTE *v3; // [rsp+A0h] [rbp-168h]

  if ( (dword_250A9C & 1) != 0 )
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
  return sub_B0AC0(xmmword_250E60, a1, a2, 0);
}

