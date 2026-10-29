_QWORD *__fastcall sub_9DF520(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned int v8; // r10d
  __int64 *v9; // rax
  __int64 v10; // r11
  _QWORD *result; // rax
  int v12; // r10d
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rbx
  __int64 *v18; // rdi
  __int64 v19; // rdx
  int v20; // eax
  int v21; // ebp

  if ( a2 )
  {
    v4 = a2;
    v5 = *(_DWORD *)(a1 + 40);
    v6 = *(_QWORD *)(a1 + 24);
    v7 = (unsigned int)(v5 - 1);
    while ( 1 )
    {
      if ( v5 )
      {
        v8 = v7 & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
        v9 = (__int64 *)(v6 + 16LL * v8);
        v10 = *v9;
        if ( *v9 == v4 )
          goto LABEL_5;
        v20 = 1;
        if ( v10 != -4096 )
          break;
      }
LABEL_6:
      v12 = *(_WORD *)v4 & 0x1FF;
      v13 = (unsigned int)(v12 + 508);
      LOWORD(v13) = (v12 + 508) & 0x1FF;
      switch ( v13 )
      {
        case 0LL:
          return (_QWORD *)sub_9DFDD0(a1, v4, a3, a4, v7, v6);
        case 5LL:
        case 25LL:
        case 48LL:
        case 51LL:
        case 54LL:
        case 58LL:
        case 74LL:
        case 100LL:
        case 111LL:
          v18 = *(__int64 **)a1;
          v19 = *v18;
          v18[10] += 32;
          result = (_QWORD *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v18[1] >= (unsigned __int64)(result + 4) && v19 )
            *v18 = (__int64)(result + 4);
          else
            result = (_QWORD *)sub_986170((__int64)v18, 32, 32, 4, v7, v6);
          *result = 3;
          result[1] = 0;
          *((_DWORD *)result + 4) = 0;
          result[3] = v4;
          return result;
        case 16LL:
        case 112LL:
          v4 = *(_QWORD *)(v4 + 24);
          goto LABEL_14;
        case 30LL:
          return (_QWORD *)sub_9E0110(a1, v4, a3, a4, v7, v6);
        case 42LL:
          return (_QWORD *)sub_9E0260(a1, v4, a3, a4, v7, v6);
        case 44LL:
          v17 = *(_QWORD *)(v4 + 16);
          if ( (v17 & 4) != 0 )
            v4 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 40);
          else
            v4 = v17 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_14;
        case 56LL:
        case 57LL:
          v4 = *(_QWORD *)(v4 + 16);
LABEL_14:
          if ( v4 )
            continue;
          return nullptr;
        case 67LL:
          return (_QWORD *)sub_9E03B0(a1, v4, a3, a4, v7, v6);
        case 85LL:
          return (_QWORD *)sub_9E0B40(a1, v4, a3, 0, v7, v6);
        case 87LL:
          return (_QWORD *)sub_9E0F70(a1, v4, a3, a4, v7, v6);
        case 88LL:
          return (_QWORD *)sub_9E1010(a1, v4, a3, a4, v7, v6);
        case 94LL:
          if ( !a3 )
            return *(_QWORD **)(a1 + 8);
          v16 = a3[2];
          result = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
            return *(_QWORD **)(a1 + 8);
          v4 = a3[2] & 0xFFFFFFFFFFFFFFFCLL;
          if ( (v16 & 2) != 0 )
            return result;
          a3 = (_QWORD *)*a3;
          break;
        case 114LL:
        case 115LL:
          return sub_9DF1C0((__int64 **)a1, v4, (__int64)a3, a4, v7, v6);
        case 119LL:
          return (_QWORD *)sub_9DFA30(a1, v4, a3, a4, v7, v6);
        case 124LL:
        case 125LL:
          return (_QWORD *)sub_9DF920(a1, v4, a3, a4, v7, v6);
        case 241LL:
          return (_QWORD *)sub_9DF820(a1, v4, a3, a4, v7, v6);
        default:
          if ( (((_WORD)v12 + 433) & 0x1FFu) <= 9 )
            return (_QWORD *)sub_9DFC10(a1, v4);
          v14 = *(__int64 **)a1;
          v15 = *v14;
          v14[10] += 24;
          result = (_QWORD *)((v15 + 15) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v14[1] >= (unsigned __int64)(result + 3) && v15 )
            *v14 = (__int64)(result + 3);
          else
            result = (_QWORD *)sub_986170((__int64)v14, 24, 24, 4, v7, v6);
          *result = 1;
          result[1] = 0;
          result[2] = v4;
          return result;
      }
    }
    while ( 1 )
    {
      v21 = v20 + 1;
      v8 = v7 & (v20 + v8);
      v9 = (__int64 *)(v6 + 16LL * v8);
      if ( *v9 == v4 )
        break;
      if ( *v9 == -4096 )
        goto LABEL_6;
      v20 = v21;
    }
LABEL_5:
    result = (_QWORD *)v9[1];
    if ( result )
      return result;
    goto LABEL_6;
  }
  return nullptr;
}
