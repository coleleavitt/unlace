__int64 __fastcall sub_279560(unsigned __int64 **a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // rbx
  int v5; // ebp
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rcx

  v2 = *a1;
  LODWORD(v3) = 0;
  if ( !*a1 )
    return 0;
  if ( a1[1] )
  {
    v4 = (unsigned __int64 *)v2[1];
    if ( v2 != v4 )
    {
      v5 = 0;
      while ( 1 )
      {
LABEL_5:
        while ( 1 )
        {
          v5 += (unsigned __int8)sub_277FA0(a2, (char *)v4[3], (__int64)(v4 + 4));
          if ( (*v4 & 2) == 0 )
            break;
LABEL_8:
          if ( *a1 == v4 )
            goto LABEL_9;
        }
        v3 = v4[2];
        if ( (*(_BYTE *)v3 & 2) == 0 )
        {
          do
          {
            v4 = (unsigned __int64 *)v3;
            v3 = *(_QWORD *)(v3 + 8);
          }
          while ( (*(_BYTE *)v3 & 2) == 0 );
          goto LABEL_8;
        }
        v7 = (unsigned __int64 *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
        v3 = *v7;
        if ( (*v7 & 2) == 0 )
        {
          while ( (unsigned __int64 *)v7[2] == v4 )
          {
            v4 = v7;
            v8 = v3 & 0xFFFFFFFFFFFFFFFCLL;
            v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v3 & 2) != 0 )
            {
              v4 = (unsigned __int64 *)v8;
              if ( *a1 != (unsigned __int64 *)v8 )
                goto LABEL_5;
              goto LABEL_9;
            }
            v7 = (unsigned __int64 *)v8;
          }
        }
        v4 = v7;
        if ( *a1 == v7 )
        {
LABEL_9:
          LOBYTE(v3) = v5 != 0;
          return (unsigned int)v3;
        }
      }
    }
  }
  return (unsigned int)v3;
}
