void __fastcall sub_203A620(__int64 a1, const void *a2, size_t a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx

  if ( a4 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      v4 = *(_QWORD *)(a4 + 128);
      v5 = *(_QWORD **)(v4 + 24);
      if ( *(_DWORD *)(v4 + 32) > 0x40u )
        v5 = (_QWORD *)*v5;
      sub_2031390(a1, a2, a3, (__int64)v5, 1);
    }
    else
    {
      sub_203A140(a1, a2, a3, a4);
    }
  }
}
