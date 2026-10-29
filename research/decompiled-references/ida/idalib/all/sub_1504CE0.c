__int64 __fastcall sub_1504CE0(__int64 a1, unsigned int a2)
{
  int *v2; // rbp
  unsigned int v4; // r14d
  _BYTE *v5; // rax
  signed __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int16 v8; // cx
  __int64 *v9; // rdi
  unsigned __int16 v10; // cx
  unsigned int v11; // eax
  unsigned __int16 v12; // si
  __int64 v13; // rdx
  unsigned __int16 v14; // cx
  unsigned int v15; // eax
  unsigned __int16 v16; // si
  __int64 v17; // rdx
  unsigned int v18; // eax
  _WORD *v19; // rdx
  int v20; // eax
  __int64 *v21; // rdi
  unsigned __int8 *v22[15]; // [rsp+0h] [rbp-78h] BYREF

  v2 = (int *)(a1 + 16);
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 232LL) + 64LL);
  sub_1564840(v22, a1, a1 + 16, 2172);
  v5 = (_BYTE *)sub_20EAB70(a2, v4);
  sub_AEC220(v22, v5, v6);
  sub_AEA040((__int64)v22);
  for ( result = *(unsigned __int16 *)(a1 + 32); (_WORD)result != 449; result = *(unsigned __int16 *)(a1 + 32) )
  {
    if ( (unsigned __int16)(result - 22) <= 1u )
    {
      v8 = *(_WORD *)(a1 + 88);
      if ( (_WORD)result == 22 )
      {
        *(_WORD *)(a1 + 88) = v8 + 1;
      }
      else if ( v8 )
      {
        v18 = *(_DWORD *)(a1 + 2792);
        if ( !v18 )
        {
LABEL_42:
          *(_WORD *)(a1 + 88) = v8 - 1;
          goto LABEL_5;
        }
        v19 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v18 - 24);
        while ( 2 )
        {
          if ( v19[7] == v8 )
          {
            if ( *((_DWORD *)v19 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_40:
              if ( *(_WORD *)(a1 + 90) <= v19[8] && *(_WORD *)(a1 + 92) <= v19[9] )
                goto LABEL_42;
            }
          }
          else if ( v19[7] >= v8 )
          {
            goto LABEL_40;
          }
          --v18;
          v19 -= 12;
          *(_DWORD *)(a1 + 2792) = v18;
          if ( !v18 )
            goto LABEL_42;
          continue;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)(result - 20) <= 1u )
      {
        v10 = *(_WORD *)(a1 + 90);
        if ( (_WORD)result == 20 )
        {
          *(_WORD *)(a1 + 90) = v10 + 1;
        }
        else if ( v10 )
        {
          v11 = *(_DWORD *)(a1 + 2792);
          if ( v11 )
          {
            v12 = *(_WORD *)(a1 + 88);
            v13 = *(_QWORD *)(a1 + 2784) + 24LL * v11 - 24;
            do
            {
              if ( v12 == *(_WORD *)(v13 + 14) )
              {
                if ( *(_DWORD *)(v13 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_14;
              }
              else if ( v12 > *(_WORD *)(v13 + 14) )
              {
                goto LABEL_14;
              }
              if ( *(_WORD *)(v13 + 16) >= v10 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v13 + 18) )
                break;
LABEL_14:
              --v11;
              v13 -= 24;
              *(_DWORD *)(a1 + 2792) = v11;
            }
            while ( v11 );
          }
          *(_WORD *)(a1 + 90) = v10 - 1;
        }
        goto LABEL_5;
      }
      if ( (unsigned __int16)(result - 24) > 1u )
      {
        if ( (unsigned __int16)(result - 14) > 1u && (unsigned __int16)(result - 17) > 2u )
        {
          if ( (_WORD)result == 3 )
          {
            sub_1566D30(a1);
            continue;
          }
          if ( sub_10CCDE0(result) )
          {
            v20 = *(_DWORD *)(a1 + 20);
            v21 = *(__int64 **)(a1 + 8);
            if ( !v20 )
              v20 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 40) = v20;
            sub_14634E0(v21, v2);
            continue;
          }
        }
      }
      else
      {
        v14 = *(_WORD *)(a1 + 92);
        if ( (_WORD)result == 24 )
        {
          *(_WORD *)(a1 + 92) = v14 + 1;
        }
        else if ( v14 )
        {
          v15 = *(_DWORD *)(a1 + 2792);
          if ( v15 )
          {
            v16 = *(_WORD *)(a1 + 88);
            v17 = *(_QWORD *)(a1 + 2784) + 24LL * v15 - 24;
            do
            {
              if ( v16 == *(_WORD *)(v17 + 14) )
              {
                if ( *(_DWORD *)(v17 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_27;
              }
              else if ( v16 > *(_WORD *)(v17 + 14) )
              {
                goto LABEL_27;
              }
              if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v17 + 16) && *(_WORD *)(v17 + 18) >= v14 )
                break;
LABEL_27:
              --v15;
              v17 -= 24;
              *(_DWORD *)(a1 + 2792) = v15;
            }
            while ( v15 );
          }
          *(_WORD *)(a1 + 92) = v14 - 1;
        }
      }
    }
LABEL_5:
    v9 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v9, v2);
  }
  return result;
}
