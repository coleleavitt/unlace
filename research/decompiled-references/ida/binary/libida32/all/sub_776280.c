__int64 __fastcall sub_776280(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // rbp
  void *v7; // rax
  char v8; // al
  char *v9; // rax
  char v10; // dl
  char v11[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v12; // [rsp+408h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        v2 = *(_BYTE *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        v11[0] = v2;
        if ( !v2 )
          goto LABEL_4;
        v9 = (char *)qvector_reserve(a1 + 8, 0, 2, 1);
        goto LABEL_9;
      case 3:
        realtoasc(v11, 1024, a1 + 8, 50);
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        v4 = strlen(v11);
        v5 = v4 + 1;
        v6 = v4;
        v7 = (void *)qvector_reserve(a1 + 8, 0, v4 + 1, 1);
        *(_QWORD *)(a1 + 8) = v7;
        *(_QWORD *)(a1 + 16) = v5;
        memmove(v7, v11, v6);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) = 0;
        goto LABEL_4;
      case 7:
        goto LABEL_5;
      case 9:
        v8 = *(_BYTE *)(a1 + 8);
        *(_OWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 8) = 0;
        v11[0] = v8;
        v9 = (char *)qvector_reserve(a1 + 8, 0, 2, 1);
LABEL_9:
        v10 = v11[0];
        *(_QWORD *)(a1 + 8) = v9;
        *(_QWORD *)(a1 + 16) = 2;
        *v9 = v10;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 0;
LABEL_4:
        *(_BYTE *)a1 = 7;
LABEL_5:
        result = 0;
        break;
      case 0xA:
        a2 = 2;
        if ( deref_idcv(a1, 2) )
          continue;
        result = get_qerrno(a1);
        break;
      default:
        result = set_qerrno(1531, a2);
        break;
    }
    return result;
  }
}

