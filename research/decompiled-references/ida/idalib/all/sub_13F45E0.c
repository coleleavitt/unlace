void __fastcall sub_13F45E0(__int64 a1)
{
  unsigned __int8 *v2; // r12
  unsigned __int8 *v3; // rbx
  __int64 v4; // rax
  unsigned __int8 *v5; // rdi

  v2 = *(unsigned __int8 **)(a1 + 112);
  v3 = *(unsigned __int8 **)(a1 + 104);
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = v3[136];
        if ( (_BYTE)v4 == 0xFF )
          break;
        v5 = v3;
        v3 += 144;
        ((void (__fastcall *)(unsigned __int8 *))jpt_14100CB[v4])(v5);
        if ( v3 == v2 )
          goto LABEL_4;
      }
      v3 += 144;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(unsigned __int8 **)(a1 + 104);
  }
  if ( v3 )
    operator delete(v3);
  sub_13F4560(a1);
}
