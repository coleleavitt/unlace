__int64 __fastcall sub_4DFE60(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // rdx
  __int64 *v5; // rsi
  __int64 result; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  __int64 *v11; // rax
  _QWORD *v12; // rdi
  __int64 *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx

  if ( *(_QWORD *)(a1 + 672) )
  {
    v7 = *(_QWORD *)(a1 + 656);
    v8 = a2 % v7;
    v5 = *(__int64 **)(*(_QWORD *)(a1 + 648) + 8 * (a2 % v7));
    v9 = v8;
    v10 = 8 * v8;
    if ( v5 )
    {
      v11 = (__int64 *)*v5;
      if ( *(_QWORD *)(*v5 + 8) == a2 )
      {
LABEL_15:
        if ( v5 )
        {
          v13 = (__int64 *)*v5;
LABEL_17:
          v14 = *(_QWORD *)(a1 + 648);
          v15 = *v13;
          if ( v5 == *(__int64 **)(v14 + v10) )
          {
            if ( v15 )
            {
              v17 = *(_QWORD *)(v15 + 8) % *(_QWORD *)(a1 + 656);
              if ( v9 != v17 )
              {
                *(_QWORD *)(v14 + 8 * v17) = v5;
                *(_QWORD *)(*(_QWORD *)(a1 + 648) + v10) = 0;
                v15 = *v13;
              }
            }
            else
            {
              *(_QWORD *)(v14 + v10) = 0;
              v15 = *v13;
            }
          }
          else if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 8) % *(_QWORD *)(a1 + 656);
            if ( v9 != v16 )
            {
              *(_QWORD *)(v14 + 8 * v16) = v5;
              v15 = *v13;
            }
          }
          *v5 = v15;
          operator delete(v13, 0x10u);
          --*(_QWORD *)(a1 + 672);
          sub_4DFB80(a1, a2);
          goto LABEL_22;
        }
      }
      else
      {
        while ( 1 )
        {
          v12 = (_QWORD *)*v11;
          if ( !*v11 )
            break;
          v5 = v11;
          if ( v8 != v12[1] % v7 )
            break;
          v11 = (__int64 *)*v11;
          if ( v12[1] == a2 )
            goto LABEL_15;
        }
      }
    }
  }
  else
  {
    v4 = *(__int64 **)(a1 + 664);
    v5 = (__int64 *)(a1 + 664);
    if ( v4 )
    {
      while ( 1 )
      {
        if ( v4[1] == a2 )
        {
          v13 = (__int64 *)*v5;
          v9 = *(_QWORD *)(*v5 + 8) % *(_QWORD *)(a1 + 656);
          v10 = 8 * v9;
          goto LABEL_17;
        }
        v5 = v4;
        if ( !*v4 )
          break;
        v4 = (__int64 *)*v4;
      }
      result = sub_4DFB80(a1, a2);
      if ( !(_BYTE)result )
        return result;
      goto LABEL_22;
    }
  }
  result = sub_4DFB80(a1, a2);
  if ( (_BYTE)result )
  {
LABEL_22:
    *(_BYTE *)(a1 + 704) = 1;
    *(_BYTE *)(a1 + 640) = 0;
    return sub_4E1410(214, a2, 0xFFFFFFFFLL);
  }
  return result;
}
