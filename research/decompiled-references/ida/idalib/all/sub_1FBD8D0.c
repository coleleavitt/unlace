unsigned __int64 __fastcall sub_1FBD8D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 result; // rax
  unsigned int *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 *v17; // r13
  __int64 *v18; // rbx
  __int64 v19; // rsi
  _DWORD *v20; // rdx

  sub_1FBD1D0(a1, a2, a3, a4, a5, a6);
  if ( a2 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v15 = sub_B984E0(a2);
    sub_9B9C90(*(_QWORD *)(a1 + 24), v15);
    v16 = sub_B98510(a2);
    v17 = (__int64 *)v7;
    if ( v16 != v7 )
    {
      v18 = (__int64 *)v16;
      do
      {
        v19 = *v18++;
        sub_1F92A90(*(_QWORD *)(a1 + 16), v19, *(_QWORD *)(a1 + 24));
      }
      while ( v17 != v18 );
    }
  }
  else
  {
    sub_1FB1190(*(_QWORD *)(a1 + 24));
  }
  v11 = *(_QWORD *)(a2 + 16);
  if ( (v11 & 4) == 0
    || (result = v11 & 0xFFFFFFFFFFFFFFF8LL, v8 = *(_QWORD *)result, *(_QWORD *)(result + 8) == *(_QWORD *)result) )
  {
    v12 = *(_QWORD *)(a2 + 112);
    result = (unsigned __int64)sub_7053D0((__int64 *)(v12 + 104), v12, v7, v8, v9, v10);
    if ( v12 == result
      && *(char *)(a2 + 28) >= 0
      && (*(_BYTE *)(a2 + 29) & 0x11) == 0
      && (*(_BYTE *)(a2 + 40) & 7) == 0
      && (*(_BYTE *)(a2 + 56) & 4) == 0
      && (*(_BYTE *)(a2 + 83) & 4) == 0 )
    {
      if ( !(unsigned int)sub_B778D0(a2)
        || (unsigned int)sub_B778D0(a2) == 1
        || (unsigned int)sub_B778D0(a2) == 2
        || (unsigned int)sub_B778D0(a2) == 5 )
      {
        v14 = *(unsigned int **)a1;
        switch ( (unsigned int)sub_B778D0(a2) )
        {
          case 0u:
LABEL_30:
            result = v14[877];
            break;
          case 1u:
LABEL_29:
            result = v14[881];
            break;
          case 2u:
LABEL_28:
            result = v14[882];
            break;
          case 3u:
LABEL_27:
            result = v14[883];
            break;
          case 4u:
LABEL_25:
            result = v14[884];
            break;
          case 5u:
LABEL_31:
            result = v14[880];
            break;
        }
        *(_DWORD *)(a1 + 228) = result;
      }
      else if ( (unsigned int)sub_B778D0(a2) == 3 )
      {
        result = sub_B77B20(a2);
        v20 = *(_DWORD **)(result + 24);
        if ( *v20 == 1
          && (v20[2] & 0x7FFFFFFF) == 1
          && !*(_QWORD *)(result + 32)
          && ((*(_BYTE *)(result + 8) & 4) == 0 || !*(_QWORD *)(result + 48)) )
        {
          v14 = *(unsigned int **)a1;
          switch ( sub_B778D0(a2) )
          {
            case 0LL:
              goto LABEL_30;
            case 1LL:
              goto LABEL_29;
            case 2LL:
              goto LABEL_28;
            case 3LL:
              goto LABEL_27;
            case 4LL:
              goto LABEL_25;
            case 5LL:
              goto LABEL_31;
            default:
LABEL_38:
              BUG();
          }
        }
      }
      else
      {
        result = sub_B778D0(a2);
        if ( (_DWORD)result == 4 )
        {
          result = sub_B77C50(a2);
          if ( !*(_QWORD *)(result + 8) )
          {
            v14 = *(unsigned int **)a1;
            switch ( sub_B778D0(a2) )
            {
              case 0LL:
                goto LABEL_30;
              case 1LL:
                goto LABEL_29;
              case 2LL:
                goto LABEL_28;
              case 3LL:
                goto LABEL_27;
              case 4LL:
                goto LABEL_25;
              case 5LL:
                goto LABEL_31;
              default:
                goto LABEL_38;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a1 + 224) = 101;
  return result;
}
