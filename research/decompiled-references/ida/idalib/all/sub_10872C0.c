__int64 __fastcall sub_10872C0(_BYTE *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13

  v2 = *a2;
  v3 = a2[1];
  if ( *a2 != v3 )
  {
    while ( sub_9B4AA0(v2, "+d") && sub_9B4AA0(v2, "+f") )
    {
      if ( sub_9B4AA0(v2, "+lsx") )
      {
        if ( sub_9B4AA0(v2, "+lasx") )
        {
          if ( sub_9B4AA0(v2, "-ual") )
          {
            if ( sub_9B4AA0(v2, "+frecipe") )
            {
              if ( sub_9B4AA0(v2, "+lam-bh") )
              {
                if ( sub_9B4AA0(v2, "+lamcas") )
                {
                  if ( sub_9B4AA0(v2, "+ld-seq-sa") )
                  {
                    if ( sub_9B4AA0(v2, "+div32") )
                    {
                      if ( !sub_9B4AA0(v2, "+scq") )
                        a1[585] = 1;
                    }
                    else
                    {
                      a1[584] = 1;
                    }
                  }
                  else
                  {
                    a1[583] = 1;
                  }
                }
                else
                {
                  a1[582] = 1;
                }
              }
              else
              {
                a1[581] = 1;
              }
            }
            else
            {
              a1[580] = 1;
            }
          }
          else
          {
            a1[393] &= ~0x10u;
          }
        }
        else
        {
          a1[579] = 1;
        }
LABEL_5:
        v2 += 32;
        if ( v3 == v2 )
          return 1;
      }
      else
      {
        a1[578] = 1;
        v2 += 32;
        if ( v3 == v2 )
          return 1;
      }
    }
    a1[577] = 1;
    if ( !sub_9B4AA0(v2, "+d") )
      a1[576] = 1;
    goto LABEL_5;
  }
  return 1;
}
