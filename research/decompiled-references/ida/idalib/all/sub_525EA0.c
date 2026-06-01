__int64 __fastcall sub_525EA0(__int64 *a1)
{
  __int64 *v3; // rbx
  int v4; // eax
  unsigned __int64 v5; // r14
  _QWORD *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rsi
  char *v12; // rdi
  char *v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  int v16[2]; // [rsp+18h] [rbp-40h]

  *(_QWORD *)v16 = __readfsqword(0x28u);
  netnode_check(&v14, "$ scriptsnippets", 0, 0);
  if ( v14 != -1 )
  {
    v3 = *(__int64 **)(*a1 + 1784);
    v4 = sub_524CE0(v3);
    *((_DWORD *)v3 + 16) = v4;
    if ( v4 == 3 )
    {
      v6 = v3 + 1;
    }
    else
    {
      v5 = 0;
      v6 = v3 + 1;
      while ( v5 < v3[3] )
      {
        while ( 1 )
        {
          v7 = *a1;
          v15 = *(_QWORD *)(v3[2] + 72 * v5 + 56) + 1LL;
          sub_7BE7C0(v3 + 1, v7, v5, &v15, 8, 65);
          if ( *((_DWORD *)v3 + 16) == 3 )
            break;
          if ( (unsigned __int8)sub_7AF760(*v3) )
          {
            sub_5216C0(72 * v5 + v3[2], *v3);
            v12 = (char *)v3[5];
            v13 = &v12[8 * v3[6]];
            if ( v12 != v13 )
            {
              while ( *(_QWORD *)v12 != v5 )
              {
                v12 += 8;
                if ( v13 == v12 )
                  goto LABEL_8;
              }
              if ( v13 != v12 )
              {
                memmove(v12, v12 + 8, v13 - v12 - 8);
                --v3[6];
              }
            }
          }
LABEL_8:
          if ( *((_DWORD *)v3 + 16) != 3 && ++v5 < v3[3] )
            continue;
          goto LABEL_10;
        }
        v10 = sub_5216C0(v3[2], *v3);
        if ( v3[1] == -1 )
          sub_7BF040(v3 + 1, *v3, "$ scriptsnippets", 0);
        v11 = *v3;
        v15 = v10 + 1;
        sub_7BE7C0(v3 + 1, v11, 0, &v15, 8, 65);
        ++v5;
        *((_DWORD *)v3 + 16) = 1;
      }
    }
LABEL_10:
    v8 = *v3;
    v15 = v3[9];
    sub_7BE7C0(v6, v8, 1, &v15, 8, 89);
    v9 = *v3;
    v15 = v3[10];
    sub_7BE7C0(v6, v9, 0, &v15, 8, 89);
  }
  return 1;
}
