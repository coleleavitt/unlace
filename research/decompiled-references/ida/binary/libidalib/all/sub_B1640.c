unsigned __int64 sub_B1640()
{
  _BYTE *v1; // [rsp+70h] [rbp-98h]
  unsigned __int64 v2; // [rsp+C8h] [rbp-40h]

  v2 = __readfsqword(0x28u);
  if ( (dword_251B1C & 1) != 0 )
  {
    if ( get_func() )
    {
      get_item_end();
      v1 = (_BYTE *)qvector_reserve();
      *v1 = 0;
      create_qflow_chart();
      if ( v1 )
        qfree();
    }
  }
  return v2 - __readfsqword(0x28u);
}

