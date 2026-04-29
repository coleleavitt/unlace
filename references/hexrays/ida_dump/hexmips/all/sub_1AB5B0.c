unsigned __int64 __fastcall sub_1AB5B0(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __int64 v4; // r12
  char *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  char *v11; // rbx
  char *v12; // r13
  unsigned int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rax

  switch ( a2 )
  {
    case 0u:
      v4 = 5;
      v5 = "empty";
      goto LABEL_8;
    case 0x41u:
      v4 = 1;
      v5 = "(";
      goto LABEL_8;
    case 0x42u:
      v4 = 3;
      v5 = "asm";
      goto LABEL_8;
    case 0x43u:
      v4 = 4;
      v5 = "else";
      goto LABEL_8;
    case 0x44u:
      v4 = 2;
      v5 = "do";
      goto LABEL_8;
    case 0x45u:
      v4 = 1;
      v5 = ";";
      goto LABEL_8;
    case 0x46u:
      v4 = 1;
      v5 = "{";
      goto LABEL_8;
    case 0x47u:
      v4 = 1;
      v5 = "}";
      goto LABEL_8;
    case 0x48u:
      v4 = 1;
      v5 = (char *)&unk_3FD042;
      goto LABEL_8;
    case 0x49u:
      v4 = 1;
      v5 = ":";
      goto LABEL_8;
    case 0x4Au:
      v4 = 7;
      v5 = "/*pre*/";
      goto LABEL_8;
    case 0x4Bu:
      v4 = 8;
      v5 = "/*post*/";
      goto LABEL_8;
    case 0x4Cu:
      v4 = 3;
      v5 = (char *)"try";
LABEL_8:
      v6 = a1[1];
      v7 = v4;
      if ( v6 )
        v7 = --v6 + v4;
      v8 = *a1;
      if ( a1[2] < (unsigned __int64)(v7 + 1) )
      {
        v15 = qvector_reserve(a1, v8, v7 + 1, 1);
        *a1 = v15;
        v8 = v15;
      }
      a1[1] = v7 + 1;
      result = (unsigned int)v4;
      *(_BYTE *)(v8 + v7) = 0;
      v9 = (_QWORD *)(*a1 + v6);
      if ( (unsigned int)v4 >= 8 )
      {
        v10 = (unsigned __int64)(v9 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v9 = *(_QWORD *)v5;
        *(_QWORD *)((char *)v9 + v4 - 8) = *(_QWORD *)&v5[v4 - 8];
        v11 = (char *)v9 - v10;
        v12 = (char *)(v5 - v11);
        result = ((_DWORD)v4 + (_DWORD)v11) & 0xFFFFFFF8;
        if ( (unsigned int)result >= 8 )
        {
          result = ((_DWORD)v4 + (_DWORD)v11) & 0xFFFFFFF8;
          v13 = 0;
          do
          {
            v14 = v13;
            v13 += 8;
            *(_QWORD *)(v10 + v14) = *(_QWORD *)&v12[v14];
          }
          while ( v13 < (unsigned int)result );
        }
      }
      else if ( (v4 & 4) != 0 )
      {
        *(_DWORD *)v9 = *(_DWORD *)v5;
        *(_DWORD *)((char *)v9 + (unsigned int)v4 - 4) = *(_DWORD *)&v5[(unsigned int)v4 - 4];
      }
      else
      {
        result = (unsigned __int8)*v5;
        *(_BYTE *)v9 = result;
        if ( (v4 & 2) != 0 )
        {
          result = *(unsigned __int16 *)&v5[v4 - 2];
          *(_WORD *)((char *)v9 + v4 - 2) = result;
        }
      }
      break;
    default:
      if ( a2 - 1 <= 0x3F )
      {
        result = (unsigned __int64)sub_F68D0(a1, (__int64)"ARG%d", a2);
      }
      else if ( (a2 & 0x40000000) != 0 )
      {
        v2 = (unsigned int)((int)(2 * a2) >> 1);
        if ( (a2 & 0x20000000) == 0 )
          v2 = a2 & 0xBFFFFFFF;
        result = (unsigned __int64)sub_F68D0(a1, (__int64)"case_%X", v2);
      }
      else
      {
        result = (unsigned __int64)sub_F68D0(a1, (__int64)"%X", a2);
      }
      break;
  }
  return result;
}
