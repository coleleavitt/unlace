__int64 __fastcall sub_78B250(__int64 a1, const char *a2)
{
  unsigned __int16 v2; // ax
  int v3; // eax
  unsigned int v4; // ebx
  double v6; // xmm0_8
  __int64 v7; // rax
  size_t v8; // r12
  _QWORD *v9; // rbp
  double v10; // rax
  void *v11; // rax
  const void *v12; // rsi
  double v13; // [rsp+18h] [rbp-40h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  double v15; // [rsp+28h] [rbp-30h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v2 = *(_WORD *)(a1 + 64);
  v16 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0.0;
  if ( v2 == 8 )
  {
    v10 = *(double *)(a1 + 80);
    LODWORD(v14) = 1;
    if ( (_BYTE)a2 )
      *(_QWORD *)&v10 = -*(_QWORD *)&v10;
    v15 = v10;
    goto LABEL_9;
  }
  if ( v2 <= 8u )
  {
    switch ( v2 )
    {
      case 4u:
        v7 = operator new(0x18u);
        v8 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)v7 = 0;
        v9 = (_QWORD *)v7;
        *(_OWORD *)(v7 + 8) = 0;
        if ( v8 )
        {
          v11 = (void *)qalloc_or_throw(v8, a2);
          *v9 = v11;
          v12 = *(const void **)(a1 + 40);
          v9[2] = v8;
          memcpy(v11, v12, v8);
          v9[1] = v8;
        }
        if ( (_DWORD)v14 )
          jvalue_t_clear(&v14);
        LODWORD(v14) = 2;
        v15 = *(double *)&v9;
        goto LABEL_9;
      case 7u:
        if ( (unsigned int)sub_80CBF0(&v13, a1 + 80, 11) == 1 )
        {
          v6 = v13;
          if ( (_BYTE)a2 )
          {
            v6 = -v13;
            v13 = -v13;
          }
          if ( (_DWORD)v14 )
            jvalue_t_clear(&v14);
          LODWORD(v14) = 7;
          v15 = v6;
          goto LABEL_9;
        }
        break;
      case 3u:
        v3 = *(_DWORD *)(a1 + 68);
        LODWORD(v14) = 1;
        if ( (_BYTE)a2 )
          v3 = -v3;
        *(_QWORD *)&v15 = v3;
        goto LABEL_9;
    }
LABEL_31:
    v4 = 47;
    goto LABEL_10;
  }
  switch ( v2 )
  {
    case 0x81u:
      LODWORD(v14) = 5;
      break;
    case 0x82u:
      LODWORD(v14) = 6;
      break;
    case 0x80u:
      LODWORD(v14) = 5;
      LOBYTE(v15) = 1;
      break;
    default:
      goto LABEL_31;
  }
LABEL_9:
  sub_78AFA0(a1, &v14, 0);
  v4 = 0;
LABEL_10:
  jvalue_t_clear(&v14);
  return v4;
}

