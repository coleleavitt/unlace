__int64 __fastcall sub_B7CE0(
        unsigned __int64 **a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        __int64 a23)
{
  unsigned __int64 *v23; // rax
  unsigned __int64 *v24; // rbx
  unsigned __int64 *v26; // rax

  v23 = *a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v24 = (unsigned __int64 *)v23[1];
      if ( v23 != v24 )
      {
        do
        {
LABEL_4:
          while ( 1 )
          {
            sub_124DE0(v24[3], v24 + 4);
            if ( (*v24 & 2) == 0 )
              break;
LABEL_7:
            if ( *a1 == v24 )
              return sub_322290(
                       a2,
                       0,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       a8,
                       a9,
                       a10,
                       a11,
                       a12,
                       a13,
                       a14,
                       a15,
                       a16,
                       a17,
                       a18,
                       a19,
                       a20,
                       a21,
                       a22,
                       a23);
          }
          a3 = v24[2];
          if ( (*(_BYTE *)a3 & 2) == 0 )
          {
            do
            {
              v24 = (unsigned __int64 *)a3;
              a3 = *(_QWORD *)(a3 + 8);
            }
            while ( (*(_BYTE *)a3 & 2) == 0 );
            goto LABEL_7;
          }
          v26 = (unsigned __int64 *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
          a3 = *v26;
          if ( (*v26 & 2) == 0 )
          {
            while ( (unsigned __int64 *)v26[2] == v24 )
            {
              v24 = v26;
              a4 = a3 & 0xFFFFFFFFFFFFFFFCLL;
              a3 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (a3 & 2) != 0 )
              {
                v24 = (unsigned __int64 *)a4;
                if ( *a1 != (unsigned __int64 *)a4 )
                  goto LABEL_4;
                return sub_322290(
                         a2,
                         0,
                         a3,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         a10,
                         a11,
                         a12,
                         a13,
                         a14,
                         a15,
                         a16,
                         a17,
                         a18,
                         a19,
                         a20,
                         a21,
                         a22,
                         a23);
              }
              v26 = (unsigned __int64 *)a4;
            }
          }
          v24 = v26;
        }
        while ( *a1 != v26 );
      }
    }
  }
  return sub_322290(
           a2,
           0,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23);
}
