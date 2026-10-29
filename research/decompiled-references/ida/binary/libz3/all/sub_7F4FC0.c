void __fastcall sub_7F4FC0(_QWORD *a1)
{
  _QWORD **v1; // rbx
  _QWORD **i; // r12
  _QWORD *v3; // rbp

  v1 = (_QWORD **)a1[221];
  if ( v1 )
  {
    for ( i = &v1[*((unsigned int *)v1 - 1)]; i != v1; ++v1 )
    {
      v3 = *v1;
      if ( (unsigned __int8)sub_15D2CB0(a1[18], **v1) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * (unsigned int)(2 * *(_DWORD *)(v3[8] + 28LL))) != *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * (unsigned int)(2 * *((_DWORD *)v3 + 7))) )
        {
          sub_1872CE0("");
          sub_1873130(114, 29);
        }
      }
    }
  }
}

