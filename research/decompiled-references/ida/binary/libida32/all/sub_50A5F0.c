unsigned __int64 __fastcall sub_50A5F0(__int64 *a1, int a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 *v7; // rbp
  __int64 *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbp
  char *v12; // rdi
  char *v13; // rdx
  __int64 v14; // rbp
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  _QWORD *v18; // rdi
  int v19; // ebp
  __int64 v20; // rsi
  int v21; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]

  v3 = *a1;
  v22 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_78EE60(v3) )
  {
    switch ( a2 )
    {
      case 0:
        v10 = *a1;
        if ( *((_DWORD *)a1 + 16) == 3 )
          goto LABEL_33;
        v11 = a1[9];
        if ( (unsigned __int8)sub_78EE60(v10) )
        {
          sub_5096E0(a1[2] + (v11 << 6), *a1);
          v12 = (char *)a1[5];
          v13 = &v12[8 * a1[6]];
          if ( v12 != v13 )
          {
            while ( v11 != *(_QWORD *)v12 )
            {
              v12 += 8;
              if ( v13 == v12 )
                return v22 - __readfsqword(0x28u);
            }
            if ( v13 != v12 )
              goto LABEL_29;
          }
        }
        break;
      case 1:
        v10 = *a1;
        if ( *((_DWORD *)a1 + 16) == 3 )
        {
LABEL_33:
          v17 = sub_5096E0(a1[2], v10);
          v18 = a1 + 1;
          v19 = v17;
          if ( *((_DWORD *)a1 + 2) == -1 )
          {
            sub_79BC40(v18, *a1, "$ scriptsnippets", 0);
            v18 = a1 + 1;
          }
          v20 = *a1;
          v21 = v19 + 1;
          sub_79B440(v18, v20, 0, &v21, 4, 65);
          *((_DWORD *)a1 + 16) = 1;
        }
        else
        {
          v14 = a1[9];
          if ( (unsigned __int8)sub_78EE60(v10) )
          {
            sub_509680(a1[2] + (v14 << 6), *a1);
            v12 = (char *)a1[5];
            v13 = &v12[8 * a1[6]];
            if ( v12 != v13 )
            {
              while ( v14 != *(_QWORD *)v12 )
              {
                v12 += 8;
                if ( v13 == v12 )
                  return v22 - __readfsqword(0x28u);
              }
              if ( v12 != v13 )
              {
LABEL_29:
                memmove(v12, v12 + 8, v13 - v12 - 8);
                --a1[6];
              }
            }
          }
        }
        break;
      case 2:
        v15 = a1 + 1;
        if ( *((_DWORD *)a1 + 2) == -1 )
        {
          sub_79BC40(v15, *a1, "$ scriptsnippets", 0);
          v15 = a1 + 1;
        }
        v16 = *a1;
        v21 = a1[9];
        sub_79B440(v15, v16, 1, &v21, 4, 89);
        break;
      case 3:
        v4 = a1 + 1;
        if ( *((_DWORD *)a1 + 2) == -1 )
        {
          sub_79BC40(v4, *a1, "$ scriptsnippets", 0);
          v4 = a1 + 1;
        }
        v5 = *a1;
        v21 = *((_DWORD *)a1 + 20);
        sub_79B440(v4, v5, 0, &v21, 4, 89);
        break;
      case 4:
        if ( *((_DWORD *)a1 + 16) != 3 && (unsigned __int8)sub_78EE60(*a1) )
        {
          v7 = (__int64 *)a1[5];
          v8 = &v7[a1[6]];
          if ( v7 != v8 )
          {
            do
            {
              v9 = *v7++;
              sub_509680(a1[2] + (v9 << 6), *a1);
            }
            while ( v8 != v7 );
            v8 = (__int64 *)a1[5];
          }
          if ( v8 )
          {
            a1[6] = 0;
            qfree(v8);
            a1[5] = 0;
            a1[7] = 0;
          }
        }
        break;
      default:
        return v22 - __readfsqword(0x28u);
    }
  }
  return v22 - __readfsqword(0x28u);
}

