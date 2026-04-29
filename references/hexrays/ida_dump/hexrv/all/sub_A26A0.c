unsigned __int64 __fastcall sub_A26A0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int *v2; // rbx
  unsigned int *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // r13
  _DWORD *v9; // rsi
  _DWORD *v10; // rsi
  __int64 v11[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v1 = a1[1];
  if ( v1 )
  {
    v2 = (unsigned int *)a1[7];
    if ( v2 )
    {
      if ( *(_QWORD *)(v1 + 32) == *((_QWORD *)v2 + 3) )
      {
        v11[0] = 0;
        v11[1] = 0;
        do
        {
          if ( (unsigned __int8)sub_11A3E0(*v2) && *((_BYTE *)v2 + 64) == 1 )
            sub_5FE10(v11, v2[18]);
          v2 = *((unsigned int **)v2 + 2);
        }
        while ( v2 && *((_QWORD *)v2 + 3) == *(_QWORD *)(a1[7] + 24LL) );
        if ( (unsigned __int8)sub_60500(v11) || (v4 = *(unsigned int **)(a1[1] + 48LL)) == nullptr )
        {
LABEL_33:
          qfree(v11[0]);
          return v12 - __readfsqword(0x28u);
        }
        while ( 1 )
        {
          if ( *((_QWORD *)v4 + 3) != *(_QWORD *)(a1[7] + 24LL) )
            goto LABEL_33;
          if ( (unsigned __int8)sub_11A3E0(*v4) && *((_BYTE *)v4 + 64) == 1 && sub_605B0(v11, v4[18]) )
          {
            v5 = a1[1];
            v6 = *(_QWORD *)(v5 + 16);
            if ( !v6 || (v7 = *(_DWORD **)(v6 + 56)) == nullptr )
            {
              if ( !under_debugger )
                sub_37DDE0(52447);
              BUG();
            }
            v8 = v7 + 8;
            if ( *v7 != 55 )
            {
              v8 = v7 + 16;
              if ( (unsigned int)(*v7 - 42) > 0xA )
                goto LABEL_32;
            }
            if ( !(unsigned __int8)sub_329A80(**(unsigned int **)(v5 + 56), 1) )
              goto LABEL_29;
            v9 = *(_DWORD **)(v5 + 56);
            if ( *v9 == 55 )
            {
              v10 = v9 + 8;
            }
            else
            {
              if ( (unsigned int)(*v9 - 42) > 0xA )
                goto LABEL_32;
              v10 = v9 + 16;
            }
            if ( !(unsigned __int8)sub_1216A0(v8, v10, 0) )
              break;
          }
LABEL_14:
          v4 = *((unsigned int **)v4 + 1);
          if ( !v4 )
            goto LABEL_33;
        }
        if ( (unsigned int)(**(_DWORD **)(v5 + 56) - 42) <= 0xA )
        {
LABEL_29:
          if ( *(_BYTE *)v8 == 7 )
          {
            if ( v8[2] == *(_DWORD *)(*(_QWORD *)(v5 + 8) + 72LL) )
              goto LABEL_14;
          }
          else if ( *(_BYTE *)v8 == 6 && *((_QWORD *)v8 + 1) == *(_QWORD *)(*(_QWORD *)(v5 + 8) + 32LL) )
          {
            goto LABEL_14;
          }
        }
LABEL_32:
        *((_QWORD *)v4 + 3) = sub_32D6F0(a1[8], *((_QWORD *)v4 + 3));
        goto LABEL_14;
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}
