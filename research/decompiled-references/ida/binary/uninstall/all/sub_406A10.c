void __fastcall sub_406A10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 i; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  _BYTE v8[40]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 448);
  if ( v3 )
  {
    for ( i = sub_457E20(v3, v8); ; i = sub_457DE0(v8) )
    {
      v6 = i;
      if ( !i )
        break;
      v7 = *(_QWORD **)(i + 24);
      if ( *v7 == a2 && v7[1] == a3 )
      {
        Tcl_Free(v7);
        sub_457BC0(v6);
        return;
      }
    }
  }
}

