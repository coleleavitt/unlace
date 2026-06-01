__int16 __fastcall sub_1C33870(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int16 result; // ax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int16 v8; // ax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  __int16 v11; // ax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  _QWORD *v14; // r14
  __int16 v15; // dx

  v3 = *(_QWORD *)(a2 + 16);
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) != 4 )
    return sub_1C33A70(a1, v3);
  while ( 1 )
  {
    v5 = sub_BFBAE0(v3);
    result = *(_WORD *)v5 & 0x1FF;
    switch ( result )
    {
      case 71:
        return result;
      case 128:
        sub_1C33A70(a1, *(_QWORD *)(v5 + 24));
        sub_1C34DB0(a1, *(_QWORD *)(v5 + 32));
        v3 = *(_QWORD *)(v5 + 40);
        break;
      case 129:
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 16LL);
        while ( 1 )
        {
          v7 = sub_BFBAE0(v6);
          v8 = *(_WORD *)v7 & 0x1FF;
          if ( v8 == 71 )
            break;
          if ( v8 == 128 )
          {
            sub_1C33A70(a1, *(_QWORD *)(v7 + 24));
            sub_1C34DB0(a1, *(_QWORD *)(v7 + 32));
            v6 = *(_QWORD *)(v7 + 40);
          }
          else
          {
            if ( v8 != 129 )
            {
              sub_1C33A70(a1, v7);
              break;
            }
            v9 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL);
            while ( 1 )
            {
              v10 = sub_BFBAE0(v9);
              v11 = *(_WORD *)v10 & 0x1FF;
              if ( v11 == 71 )
                break;
              if ( v11 == 128 )
              {
                sub_1C33A70(a1, *(_QWORD *)(v10 + 24));
                sub_1C34DB0(a1, *(_QWORD *)(v10 + 32));
                v9 = *(_QWORD *)(v10 + 40);
              }
              else
              {
                if ( v11 != 129 )
                {
                  sub_1C33A70(a1, v10);
                  break;
                }
                v12 = *(_QWORD *)(*(_QWORD *)(v10 + 56) + 16LL);
                while ( 1 )
                {
                  v13 = sub_BFBAE0(v12);
                  v14 = (_QWORD *)v13;
                  v15 = *(_WORD *)v13 & 0x1FF;
                  if ( v15 == 71 )
                    break;
                  if ( v15 == 128 )
                  {
                    sub_1C33A70(a1, *(_QWORD *)(v13 + 24));
                    sub_1C34DB0(a1, v14[4]);
                    v12 = v14[5];
                  }
                  else
                  {
                    if ( v15 != 129 )
                    {
                      sub_1C33A70(a1, v13);
                      break;
                    }
                    sub_1C34DB0(a1, *(_QWORD *)(*(_QWORD *)(v13 + 56) + 16LL));
                    v12 = v14[6];
                  }
                }
                v9 = *(_QWORD *)(v10 + 48);
              }
            }
            v6 = *(_QWORD *)(v7 + 48);
          }
        }
        v3 = *(_QWORD *)(v5 + 48);
        break;
      default:
        return sub_1C33A70(a1, v5);
    }
  }
}
