__int64 __fastcall sub_339030(__int64 a1, __int64 a2)
{
  __int64 module_data; // r12
  _QWORD *v3; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx

  module_data = get_module_data((unsigned int)dword_4CF8F8);
  v3 = *(_QWORD **)(module_data + 120);
  if ( v3 )
  {
    while ( a1 != v3[1] || a2 != v3[2] )
    {
      v3 = (_QWORD *)*v3;
      if ( !v3 )
        goto LABEL_7;
    }
    return 0;
  }
  else
  {
LABEL_7:
    v5 = (_QWORD *)operator new(0x18u);
    v6 = *(_QWORD *)(module_data + 120);
    v5[1] = a1;
    *v5 = v6;
    v5[2] = a2;
    *(_QWORD *)(module_data + 120) = v5;
    return 1;
  }
}
