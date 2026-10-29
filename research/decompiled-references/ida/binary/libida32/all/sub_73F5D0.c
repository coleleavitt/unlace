__int64 __fastcall sub_73F5D0(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rdx
  char *v11; // rdx
  char v12; // al
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  char *v18; // rdx
  unsigned int v19; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int v20; // [rsp+10h] [rbp-28h] BYREF
  __int16 v21; // [rsp+14h] [rbp-24h] BYREF
  char v22; // [rsp+16h] [rbp-22h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  v19 = 0;
  v5 = qword_2CAA5C0;
  qword_2CAA5C0 += 2;
  v6 = (unsigned __int8)v5[1];
  switch ( (char)v6 )
  {
    case '_':
      v11 = v5 + 3;
      qword_2CAA5C0 = v5 + 3;
      if ( v5[2] != 90 )
        goto LABEL_28;
      if ( (unsigned __int8)++byte_2CA2E70 > 3u )
        goto LABEL_28;
      v14 = sub_73E820(nullptr, 0, (__int64)v11, a4, a5);
      --byte_2CA2E70;
      return v14;
    case 'b':
      v11 = v5 + 3;
      qword_2CAA5C0 = v5 + 3;
      v12 = v5[2];
      if ( !v12 )
        goto LABEL_28;
      if ( v12 == 48 )
        sub_74F560(&v20, "false", 5);
      else
        sub_74F810(&v20, 1702195828, 4);
      return v20;
    case 'i':
    case 'j':
    case 'l':
    case 'm':
    case 'x':
    case 'y':
      sub_73BC30((__int64)&v19, a2, (unsigned __int8)(v6 - 95), a4);
      if ( (_BYTE)v6 == 105 )
        return v19;
      if ( (_BYTE)v6 == 106 || (_BYTE)v6 == 109 )
      {
        v9 = 117;
      }
      else
      {
        v9 = 108;
        if ( (_BYTE)v6 == 121 )
        {
          v18 = &v22;
          v21 = 27765;
          goto LABEL_26;
        }
      }
      LOBYTE(v21) = v9;
      v10 = 1;
      if ( (char)v6 <= 108 )
        goto LABEL_9;
      v18 = (char *)&v21 + 1;
LABEL_26:
      *v18 = 108;
      v10 = (unsigned __int16)(v18 + 1 - (char *)&v21);
LABEL_9:
      sub_74F4C0(&v20, &v21, v10);
      sub_7506B0(&v19, &v20);
      return v19;
    default:
      qword_2CAA5C0 = v5 + 1;
      a1 = &v20;
      v20 = sub_73D7A0((unsigned int *)((_BYTE)xmmword_2CA2E80 == 0), 0, (unsigned int)(v6 - 95), a4, a5);
      v19 = sub_752830(&v20);
      if ( (unsigned __int8)(v6 - 100) <= 3u )
      {
        v15 = (char)v6;
        v16 = 0;
        v11 = qword_2CAA5C0;
        a2 = 2 * (unsigned int)byte_2393A0A[v15 - 100];
        do
        {
          v17 = (unsigned __int8)*v11;
          a4 = (unsigned int)(v17 - 48);
          if ( (unsigned __int8)(v17 - 48) > 0x36u || (unsigned __int8)(v17 - 58) <= 0x26u )
LABEL_28:
            sub_74E200(a1, a2, v11, a4);
          ++v16;
          ++v11;
        }
        while ( v16 < (unsigned int)a2 );
        sub_74F400(&v20, 91);
        sub_74EA60(&v20);
        sub_74F860(&v20, 93);
        sub_7506B0(&v19, &v20);
      }
      else
      {
        sub_73BC30((__int64)&v19, 0, v7, v8);
      }
      return v19;
  }
}

