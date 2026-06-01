void __fastcall sub_14100B0(__int64 a1)
{
  void *v1; // rdi
  unsigned __int8 *v3; // r12
  unsigned __int8 *v4; // rbx
  __int64 v5; // rax
  unsigned __int8 *v6; // rdi

  if ( *(_BYTE *)(a1 + 144) )
  {
    switch ( *(_BYTE *)(a1 + 136) )
    {
      case 0:
        v1 = *(void **)(a1 + 8);
        if ( v1 )
          goto LABEL_5;
        nullsub_1548();
        break;
      case 3:
        v3 = *(unsigned __int8 **)(a1 + 112);
        v4 = *(unsigned __int8 **)(a1 + 104);
        if ( v3 != v4 )
        {
          do
          {
            while ( 1 )
            {
              v5 = v4[136];
              if ( (_BYTE)v5 == 0xFF )
                break;
              v6 = v4;
              v4 += 144;
              ((void (__fastcall *)(unsigned __int8 *))jpt_14100CB[v5])(v6);
              if ( v4 == v3 )
                goto LABEL_11;
            }
            v4 += 144;
          }
          while ( v3 != v4 );
LABEL_11:
          v4 = *(unsigned __int8 **)(a1 + 104);
        }
        if ( v4 )
          operator delete(v4);
        sub_13F4560(a1);
        break;
      case 5:
        sub_13F4560(a1);
        break;
      case 6:
      case 7:
      case 8:
      case 0xB:
        sub_13F4560(a1 + 8);
        break;
      case 0xA:
        v1 = *(void **)a1;
        if ( v1 )
LABEL_5:
          operator delete(v1);
        else
          nullsub_1549();
        break;
      default:
        return;
    }
  }
}
