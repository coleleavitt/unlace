__int64 __fastcall apply_custom_data_format_ah_t__::vfunc_0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    a2 = (unsigned int)(1 << *(_DWORD *)(a2 + 224));
    v2 = qword_8CC390;
    v3 = qword_8CC390 + 56 * xmmword_8CC398;
    if ( qword_8CC390 != v3 )
    {
      v4 = dbg;
      do
      {
        if ( *(_DWORD *)(v2 + 40) != -1
          && (_DWORD)a2 == *(unsigned __int8 *)(*(_QWORD *)(v4 + 56) + 32LL * *(int *)(v2 + 44) + 12) )
        {
          *(_DWORD *)(v2 + 40) = *(_DWORD *)(a1 + 12);
        }
        v2 += 56;
      }
      while ( v3 != v2 );
    }
    goto LABEL_8;
  }
  v6 = *(int *)(a2 + 220);
  if ( (v6 & 0x80000000) != 0LL || v6 >= (unsigned __int64)xmmword_8CC398 || (v7 = qword_8CC390 + 56 * v6) == 0 )
  {
LABEL_8:
    sub_23F570(a1, a2);
    return 0;
  }
  *(_DWORD *)(v7 + 40) = *(_DWORD *)(a1 + 12);
  ((void (*)(void))sub_23F570)();
  return 0;
}
