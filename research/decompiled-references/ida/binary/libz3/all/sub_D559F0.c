__int64 __fastcall sub_D559F0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // [rsp-10h] [rbp-38h]
  int v17[2]; // [rsp+8h] [rbp-20h] BYREF

  v5 = a1 + 232;
  switch ( a2 )
  {
    case 0LL:
      v6 = sub_D50430(v5, 3u);
      if ( !v6 )
        goto LABEL_4;
      goto LABEL_3;
    case 1LL:
      v6 = sub_D50390(v5, 3u);
      if ( !v6 )
        goto LABEL_4;
      goto LABEL_3;
    case 2LL:
      v6 = sub_D81BF0(v5, 2, 3);
      if ( !v6 )
        goto LABEL_4;
      goto LABEL_3;
    case 3LL:
      v6 = sub_D81BF0(v5, 3, 3);
      if ( v6 )
        goto LABEL_3;
      goto LABEL_4;
    case 4LL:
      v6 = sub_D81BF0(v5, 4, 3);
      if ( !v6 )
        goto LABEL_4;
LABEL_3:
      ++*(_DWORD *)(v6 + 8);
LABEL_4:
      v7 = *a3;
      if ( *a3 )
      {
        v8 = a3[1];
        v9 = (*(_DWORD *)(v7 + 8))-- == 1;
        if ( v9 )
          sub_15D7BC0(v8, v7);
      }
      *a3 = v6;
      *(_QWORD *)v17 = v6;
      v10 = *(_QWORD *)(a1 + 432);
      v11 = sub_15D2CD0(v10, *(unsigned int *)(a1 + 448), 1, 0, 0);
      v12 = sub_15DCAD0(v10, (int)v17, v11);
      result = v16;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v14 = *a3;
      if ( *a3 && (v15 = a3[1], v9 = *(_DWORD *)(v14 + 8) == 1, --*(_DWORD *)(v14 + 8), v9) )
      {
        result = sub_15D7BC0(v15, v14);
        *a3 = v12;
      }
      else
      {
        *a3 = v12;
      }
      return result;
    default:
      sub_1872CE0("");
      sub_1873130(114, 3924);
  }
}

