_QWORD *__fastcall sub_9BD3E0(__int64 a1, unsigned __int64 a2, _QWORD **a3, __int64 a4)
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
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ebp

  if ( !a2 )
    return nullptr;
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = (unsigned int)(v5 - 1);
  while ( 2 )
  {
    if ( v5 )
    {
      v8 = v7 & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
      v9 = (__int64 *)(v6 + 16LL * v8);
      v10 = *v9;
      if ( *v9 == v4 )
        goto LABEL_5;
      v21 = 1;
      if ( v10 != -4096 )
      {
        while ( 1 )
        {
          v22 = v21 + 1;
          v8 = v7 & (v21 + v8);
          v9 = (__int64 *)(v6 + 16LL * v8);
          if ( *v9 == v4 )
            break;
          if ( *v9 == -4096 )
            goto LABEL_6;
          v21 = v22;
        }
LABEL_5:
        result = (_QWORD *)v9[1];
        if ( result )
          return result;
      }
    }
LABEL_6:
    v12 = *(_WORD *)v4 & 0x1FF;
    v13 = (unsigned int)(v12 + 508);
    LOWORD(v13) = (v12 + 508) & 0x1FF;
    switch ( v13 )
    {
      case 0LL:
        return sub_9BC090((__int64 **)a1, v4, a3, a4, v7, v6);
      case 5LL:
      case 25LL:
      case 48LL:
      case 51LL:
      case 54LL:
      case 58LL:
      case 74LL:
      case 100LL:
      case 111LL:
        v14 = *(__int64 **)a1;
        v15 = *v14;
        v14[10] += 32;
        result = (_QWORD *)((v15 + 15) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v14[1] >= (unsigned __int64)(result + 4) && v15 )
          *v14 = (__int64)(result + 4);
        else
          result = (_QWORD *)sub_962430((__int64)v14, 32, 32, 4, v7, v6);
        *result = 3;
        result[1] = 0;
        *((_DWORD *)result + 4) = 0;
        result[3] = v4;
        return result;
      case 16LL:
      case 112LL:
        v4 = *(_QWORD *)(v4 + 24);
        goto LABEL_13;
      case 30LL:
        return (_QWORD *)sub_9BC3D0((__int64 **)a1, v4, a3, a4);
      case 42LL:
        return (_QWORD *)sub_9BC520((__int64 **)a1, v4, a3, a4);
      case 44LL:
        v18 = *(_QWORD *)(v4 + 16);
        if ( (v18 & 4) != 0 )
          v4 = *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF8LL) + 40);
        else
          v4 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_13;
      case 56LL:
      case 57LL:
        v4 = *(_QWORD *)(v4 + 16);
LABEL_13:
        if ( v4 )
          continue;
        result = nullptr;
        break;
      case 67LL:
        return sub_9BC670((__int64 **)a1, v4, (__int64)a3);
      case 85LL:
        return sub_9BCE00((__int64 **)a1, v4, a3, 0);
      case 87LL:
        return sub_9BD230((__int64 **)a1, v4, a3, a4);
      case 88LL:
        return sub_9BD2D0((__int64 **)a1, v4, a3);
      case 94LL:
        if ( !a3 )
          return *(_QWORD **)(a1 + 8);
        v16 = (unsigned __int64)a3[2];
        if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          return *(_QWORD **)(a1 + 8);
        v17 = v16 & 2;
        result = (_QWORD *)((unsigned __int64)a3[2] & 0xFFFFFFFFFFFFFFFCLL);
        if ( !(_DWORD)v17 )
          return sub_9BB7E0(a1, (unsigned __int64)a3[2] & 0xFFFFFFFFFFFFFFFCLL, *a3, v17);
        return result;
      case 114LL:
      case 115LL:
        return sub_9BB480((__int64 **)a1, v4, (__int64)a3, a4, v7, v6);
      case 119LL:
        return sub_9BBCF0((__int64 **)a1, v4, a3, a4, v7);
      case 124LL:
      case 125LL:
        return sub_9BBBE0((__int64 **)a1, v4, a3, a4);
      case 241LL:
        return (_QWORD *)sub_9BBAE0(a1, v4, a3);
      default:
        if ( (((_WORD)v12 + 433) & 0x1FFu) <= 9 )
          return sub_9BBED0(a1, v4, a3);
        v19 = *(__int64 **)a1;
        v20 = *v19;
        v19[10] += 24;
        result = (_QWORD *)((v20 + 15) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v19[1] >= (unsigned __int64)(result + 3) && v20 )
          *v19 = (__int64)(result + 3);
        else
          result = (_QWORD *)sub_962430((__int64)v19, 24, 24, 4, v7, v6);
        *result = 1;
        result[1] = 0;
        result[2] = v4;
        return result;
    }
    return result;
  }
}

