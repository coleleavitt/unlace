unsigned __int64 __fastcall sub_1AF8F0(__int64 *a1, int a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r12
  char *v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rdx
  char *v10; // rbx
  char *v11; // r13
  unsigned int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rax

  switch ( a2 )
  {
    case 0:
      v3 = 5;
      v4 = "empty";
      goto LABEL_4;
    case 65:
      v3 = 1;
      v4 = "(";
      goto LABEL_4;
    case 66:
      v3 = 3;
      v4 = "asm";
      goto LABEL_4;
    case 67:
      v3 = 4;
      v4 = "else";
      goto LABEL_4;
    case 68:
      v3 = 2;
      v4 = "do";
      goto LABEL_4;
    case 69:
      v3 = 1;
      v4 = ";";
      goto LABEL_4;
    case 70:
      v3 = 1;
      v4 = "{";
      goto LABEL_4;
    case 71:
      v3 = 1;
      v4 = "}";
      goto LABEL_4;
    case 72:
      v3 = 1;
      v4 = (char *)&unk_41902D;
      goto LABEL_4;
    case 73:
      v3 = 1;
      v4 = ":";
      goto LABEL_4;
    case 74:
      v3 = 7;
      v4 = "/*pre*/";
      goto LABEL_4;
    case 75:
      v3 = 8;
      v4 = "/*post*/";
      goto LABEL_4;
    case 76:
      v3 = 3;
      v4 = (char *)"try";
LABEL_4:
      v5 = a1[1];
      v6 = v3;
      if ( v5 )
        v6 = --v5 + v3;
      v7 = *a1;
      if ( a1[2] < (unsigned __int64)(v6 + 1) )
      {
        v14 = qvector_reserve((__int64)a1, v7, v6 + 1, 1);
        *a1 = v14;
        v7 = v14;
      }
      a1[1] = v6 + 1;
      result = (unsigned int)v3;
      *(_BYTE *)(v7 + v6) = 0;
      v8 = (_QWORD *)(*a1 + v5);
      if ( (unsigned int)v3 >= 8 )
      {
        v9 = (unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v8 = *(_QWORD *)v4;
        *(_QWORD *)((char *)v8 + v3 - 8) = *(_QWORD *)&v4[v3 - 8];
        v10 = (char *)v8 - v9;
        v11 = (char *)(v4 - v10);
        result = ((_DWORD)v3 + (_DWORD)v10) & 0xFFFFFFF8;
        if ( (unsigned int)result >= 8 )
        {
          result = ((_DWORD)v3 + (_DWORD)v10) & 0xFFFFFFF8;
          v12 = 0;
          do
          {
            v13 = v12;
            v12 += 8;
            *(_QWORD *)(v9 + v13) = *(_QWORD *)&v11[v13];
          }
          while ( v12 < (unsigned int)result );
        }
      }
      else if ( (v3 & 4) != 0 )
      {
        *(_DWORD *)v8 = *(_DWORD *)v4;
        *(_DWORD *)((char *)v8 + (unsigned int)v3 - 4) = *(_DWORD *)&v4[(unsigned int)v3 - 4];
      }
      else
      {
        result = (unsigned __int8)*v4;
        *(_BYTE *)v8 = result;
        if ( (v3 & 2) != 0 )
        {
          result = *(unsigned __int16 *)&v4[v3 - 2];
          *(_WORD *)((char *)v8 + v3 - 2) = result;
        }
      }
      break;
    default:
      result = (unsigned __int64)sub_FAAD0(a1);
      break;
  }
  return result;
}
