void __fastcall sub_1364AC0(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v2; // rdx
  unsigned int *v3; // rax
  unsigned int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned int *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  unsigned int v13; // ebx
  __int64 v14; // r11
  unsigned int *v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rcx

  if ( a1 != a2 )
  {
    v2 = a1 + 4;
    if ( a2 != a1 + 4 )
    {
      do
      {
        v3 = v2;
        v4 = *v2;
        if ( *v2 < *a1 )
          goto LABEL_4;
        v10 = v2[1];
        if ( v4 == *a1 )
        {
          v11 = a1[1];
          if ( v11 > v10 )
            goto LABEL_4;
          v12 = v2[2];
        }
        else
        {
          v12 = v2[2];
          if ( v4 > *a1 )
          {
LABEL_18:
            v13 = v2[3];
LABEL_19:
            v14 = *(_QWORD *)v2;
            v15 = v2;
            while ( 2 )
            {
              if ( v4 >= *(v15 - 4) )
              {
                if ( v4 != *(v15 - 4) )
                {
                  if ( v4 > *(v15 - 4) )
                    goto LABEL_29;
                  v16 = *(v15 - 3);
                  goto LABEL_23;
                }
                v16 = *(v15 - 3);
                if ( v10 >= v16 )
                {
LABEL_23:
                  if ( v10 > v16 || *(v15 - 2) <= v12 && (*(v15 - 2) != v12 || *(v15 - 1) <= v13) )
                  {
LABEL_29:
                    *(_QWORD *)v15 = v14;
                    v7 = v2 + 4;
                    v15[2] = v12;
                    v15[3] = v13;
                    goto LABEL_7;
                  }
                }
              }
              v17 = *((_QWORD *)v15 - 2);
              v15 -= 4;
              *((_QWORD *)v15 + 2) = v17;
              *((_QWORD *)v15 + 3) = *((_QWORD *)v15 + 1);
              continue;
            }
          }
          v11 = a1[1];
        }
        if ( v10 > v11 )
          goto LABEL_18;
        if ( a1[2] <= v12 )
        {
          v13 = v2[3];
          if ( a1[2] != v12 || a1[3] <= v13 )
            goto LABEL_19;
        }
LABEL_4:
        v5 = *(_QWORD *)v2;
        v6 = *((_QWORD *)v2 + 1);
        v7 = v2 + 4;
        v8 = (char *)v2 - (char *)a1;
        v9 = ((char *)v2 - (char *)a1) >> 4;
        if ( v8 > 0 )
        {
          do
          {
            v3 -= 4;
            *((_QWORD *)v3 + 2) = *(_QWORD *)v3;
            *((_QWORD *)v3 + 3) = *((_QWORD *)v3 + 1);
            --v9;
          }
          while ( v9 );
        }
        *(_QWORD *)a1 = v5;
        *((_QWORD *)a1 + 1) = v6;
LABEL_7:
        v2 = v7;
      }
      while ( a2 != v7 );
    }
  }
}
